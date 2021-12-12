# Multi-C
An in-progress proof-of-concept project made to test basic capabilities of multi-language syntax files.

## How it (will) work
(ADD HOW IT WILL WORK LOL)

## Progress / Goals
Beginning date: 12-11-2021
Percentage progress: 0%
Description progress: very little

### Goals
- [ ] Write first tests
- [ ] Complete testing phase
- [ ] Stitch tests into one process
- [ ] Use OS-specific functions to take input from files
- [ ] Make a functional command prompt command<br>
(Here are some more long-term or unlikely goals, but still an expected end-result of this project.)
- [ ] Expand into advanced syntax recognition
- [ ] Smash errors that will come with ^
- [ ] Complete project

## Sample
THe most basic example:<br>
```
c => if( true ) {
java => return true;
c => }
```
How it works:<br>
```c => if( true ) {```: This line occurs in the C language specified at the beginning, which is then sent and finalized with '=>'. Succeeding the language specification comes the statement. In this case, the statements reads: "if true is equal to true, then...". This will continue on the next line.<br>
```java => return true;```: This line occurs in the Java language. Although this is very basic and virtually identical between all languages, it provides a concept of what this project is. This statement will return true if the condition defined in C is met.<br>
```c => }```: This line occurs in the C language and escape the beginnning if-statement. Currently, for simplicity, scopes must begin and end in the same language (you cannot start an if-statement in C and end in Java, it must begin and and end in one language, though in the scope is not restricted).<br>
