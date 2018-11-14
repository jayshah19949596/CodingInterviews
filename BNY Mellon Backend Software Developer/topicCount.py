# Complete the function below.
import urllib


def getTopicCount(topic):
    url = "https://en.wikipedia.org/w/api.php?action=parse&section=0&prop=text&format=json&page="
    contents = urllib.request.urlopen(url+topic).read().decode('utf-8')
    count = 0
    pos = contents.find(topic)
    while pos != -1:
        count += 1
        pos = contents.find(topic, pos+1)
    return count
