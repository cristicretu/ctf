import requests

url = "http://165.227.106.113/post.php"

r = requests.post(url, {
    'username': 'admin',
    'password': '71urlkufpsdnlkadsf'
})

print(r.text)
