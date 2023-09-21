from scapy.all import srp, Ether, ARP
import argparse
import re
import sys

IP_REG_EXP = '^(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$'


def parse_arguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(prog='ARP host detecting',
                                     description='Program for detecting port service version')

    parser.add_argument('-i', '--ip', type=str, dest="ip", required=True, help="Host IP-address.")

    parser.add_argument('-t', '--timeout', type=float, dest="timeout", default=1, help="Timeout.")

    return parser.parse_args()


def check_arguments(args: argparse.Namespace) -> None:
    if re.match(IP_REG_EXP, args.ip) is None:
        print(f"Wrong IPv4 address {args.ip}.")
        exit(2)
    if args.timeout < 0:
        print(f"Wrong timeout value {args.ip}.")
        exit(2)


def arp_connector(ip_address: str, timeout: float = 2) -> None:
    print("[*] Scanning...")

    arp = ARP(pdst=ip_address)
    ether = Ether(dst="ff:ff:ff:ff:ff:ff")

    packet = ether / arp

    result = srp(packet, timeout=timeout, verbose=0)[0]

    if len(result) == 0:
        print(f'Host {ip_address} is unavailable')

    ip = result[0][1].psrc
    mac = result[0][1].hwsrc

    print(f'Host {ip} with MAC {mac} is active')


def start() -> None:
    args = parse_arguments()
    check_arguments(args=args)
    arp_connector(ip_address=args.ip, timeout=args.timeout)


if __name__ == '__main__':
    start()
    sys.exit(0)
