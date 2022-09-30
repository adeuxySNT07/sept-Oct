//StudybarCommentBegin
#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d", &a);

//StudybarCommentEnd

    b = ++a;
    a = b;

//StudybarCommentBegin
printf("%d", a);
return 0;
}

//StudybarCommentEnd