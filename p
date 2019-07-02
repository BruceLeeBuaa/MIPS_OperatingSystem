#########################################################################
# File Name: push.sh
# Author: Luting Wang
# mail: 2457348692@qq.com
# Created Time: 2019��04��21�� ������ 12ʱ48��44��
#########################################################################
#!/bin/bash

if [[ $# < 2 ]]; then
        echo error
        exit
fi
git add --all
git commit -a -m "\"$1\""
git push origin $2:$2

