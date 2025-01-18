#include<bits/stdc++.h>
using namespace std;

int precedence(char op) {
	if (op=='^') return 3;
	else if (op=='/' || op=='*') return 2;
	else if (op== '+' || op== '-') return 1;
	else return -1;
}

string InfixToPostfix(string s) {

	stack<char>st;
	string ans="";

	for (int i=0;i<s.size();i++){
		char ch=s[i];

		if((ch>='a' && ch<= 'z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
			ans += ch;

		else if(ch=='(') st.push('(');

		else if(ch==')'){
			while (st.top()!='('){
				ans += st.top();
				st.pop();
			}
			st.pop();
		}

		else{
			while(!st.empty() && precedence(s[i])<=precedence(st.top())){
				ans+= st.top();
				st.pop();
			}
			st.push(ch);
		}
	}
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}

	return ans;
}
int main()
{
    cout<<"Infix Expression: ";
	string s;
	cin >> s;
    cout<<"Postfix Expression: "<<InfixToPostfix(s)<<endl;
	return 0;
}
