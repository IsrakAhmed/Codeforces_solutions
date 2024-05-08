
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Github      :   github.com/IsrakAhmed
    LinkedIn    :   linkedin.com/in/israkahmed
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define asort(v) sort((v).begin(),(v).end())        //  Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())     //   Descending Order Sort
#define pb push_back
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define gcd __gcd
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)       //  toLower(s);
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)       //  toUpper(s);
#define rmvChar(s,c) (s).erase(remove((s).begin(), (s).end(), c), (s).end())    //  remove specific character from string
#define rmvDuplicates(x) (x).erase(unique((x).begin(), (x).end()), (x).end());  //  works only for sorted string or vector
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define merge(v1,v2,m) merge(v1.begin(), v1.end(), v2.begin(), v2.end(),m.begin());     //  merge two vectors
#define reverseS(s) reverse(s.begin(), s.end())     //  reverse the string
#define nSum(n) (n * (n + 1)) / 2                   //  sum of first N positive integers
#define nmSum(n,m) ((n + m) * (m - n + 1)) / 2      //  sum of positive integers from N to M (N <= M)


void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string a,b;
        cin >> a >> b;

        if(a[a.size() - 1] == 'S' && b[b.size() - 1] != 'S'){
            printf("<\n");
        }

        else if(a[a.size() - 1] != 'S' && b[b.size() - 1] == 'S'){
            printf(">\n");
        }

        else if(a[a.size() - 1] == 'S' && b[b.size() - 1] == 'S'){
            rmvChar(a,'S');
            rmvChar(b,'S');

            if(a.size() > b.size()){
                printf("<\n");
            }

            else if(a.size() < b.size()){
                printf(">\n");
            }

            else{
                printf("=\n");
            }
        }

        else if(a[a.size() - 1] == 'L' && b[b.size() - 1] != 'L'){
            printf(">\n");
        }

        else if(a[a.size() - 1] != 'L' && b[b.size() - 1] == 'L'){
            printf("<\n");
        }

        else if(a[a.size() - 1] == 'L' && b[b.size() - 1] == 'L'){
            rmvChar(a,'L');
            rmvChar(b,'L');

            if(a.size() > b.size()){
                printf(">\n");
            }

            else if(a.size() < b.size()){
                printf("<\n");
            }

            else{
                printf("=\n");
            }
        }

        else{
            printf("=\n");
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}




/*
    Submitted in Kotlin



import java.util.*

fun main() {
    val input = Scanner(System.`in`)
    val t = input.nextLong()

    repeat(t.toInt()) {
        val a = input.next()
        val b = input.next()

        when {
            a.last() == 'S' && b.last() != 'S' -> println("<")
            a.last() != 'S' && b.last() == 'S' -> println(">")
            a.last() == 'S' && b.last() == 'S' -> {
                val modifiedA = a.dropLast(1)
                val modifiedB = b.dropLast(1)
                when {
                    modifiedA.length > modifiedB.length -> println("<")
                    modifiedA.length < modifiedB.length -> println(">")
                    else -> println("=")
                }
            }
            a.last() == 'L' && b.last() != 'L' -> println(">")
            a.last() != 'L' && b.last() == 'L' -> println("<")
            a.last() == 'L' && b.last() == 'L' -> {
                val modifiedA = a.dropLast(1)
                val modifiedB = b.dropLast(1)
                when {
                    modifiedA.length > modifiedB.length -> println(">")
                    modifiedA.length < modifiedB.length -> println("<")
                    else -> println("=")
                }
            }
            else -> println("=")
        }
    }
}

*/
