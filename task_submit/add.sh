#!/bin/bash
# git 不能添加空文件夹，所以为每个文件夹添加一个空的.gitignore
for files in `ls example_your_name`
do
	touch example_your_name/${files}/.gitignore
done
