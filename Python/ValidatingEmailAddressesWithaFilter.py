import re
def fun(s):
    emailregex = re.compile(r'^[a-zA-Z0-9-_]+@[a-zA-Z0-9]+\.[a-zA-Z]{1,3}$')
    mo = emailregex.search(s)
    if mo:
        return True
    else:
        return False

def filter_mail(emails):
    return filter(fun, emails)

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

    filtered_emails = filter_mail(emails)
    filtered_emails.sort()
    print(filtered_emails)