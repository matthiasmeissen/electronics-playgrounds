# State Change Detection

Using a button an detect changes.

## Detecting State Changes
The approach is simple. You have two variables: `currentRead` and `lastRead`. At the beginning of each loop you set `cR` to some Input Signal and at the end you set `lR` to `cR`. 
Then in the middle of the loop you check if `cR` is not `lR` and if `cR` is high. When that is the case you can execute some function.

```
currentRead = analogRead(inputPin)

if (currentRead != lastRead && currentRead == HIGH) {
    someFunction()
}

lastRead = currentRead
```

[View in Tinkercad](https://www.tinkercad.com/things/hVJyWi0yzrN-10-state-change-detection-241016)

## Some Video Guides
A collection of video guides I have seen so far.
- [Great Scott - Arduino Basics](https://www.youtube.com/watch?v=BtLwoNJ6klE&t=0s)
- [Paul McWorther - Arduino Tutorial Series](https://www.youtube.com/watch?v=fJWR7dBuc18&t=8s)
- [Leos Bag of Tricks - Electronics](https://www.youtube.com/watch?v=SGvOmwZvhVk)
- [Learn Electronics - Arduino Basics](https://www.youtube.com/watch?v=fwEfmsUvQR4)
- [Science Buddies - Learn Arduino](https://youtu.be/cd04o5yqSAU?si=iNSBQHQJyRtTa6JO)

## Things I have learned
- Prebuilding circuits in Tinkercad is a great way to iterate
- Using color cables to indicate stuff helps a lot