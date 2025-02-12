# skillsusa
EZ-Temp for SkillsUSA

## PID explanation
```
For those not in the know, PID stands for proportional, integral, derivative control. I’ll break it down:
P: if you’re not where you want to be, get there.
I: if you haven’t been where you want to be for a long time, get there faster
D: if you’re getting close to where you want to be, slow down.

Motors, in general, don’t start or stop on a dime. So it’s easy to overshoot, undershoot, whatever. PID allows you to dial in those three concepts with numbers

```

## Log into the github with browser 
To login to the github for the first time type this command

> git-credential-manager github login

## troubleshoot

### failed to push the code

If you see this error below:
```
error: RPC failed; HTTP 400 curl 22 The requested URL returned error: 400
send-pack: unexpected disconnect while reading sideband packet
```

increase the git post buffer size to larger value
> git config --global http.postBuffer 524288000

### failed to pull
if you see this error
```
fatal: unable to access 'https://github.com/Olive2026/skillsusa.git/': Could not resolve host: github.com
```
execute this command
>git config --global --unset https.proxy

