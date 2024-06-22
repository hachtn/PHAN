class User:
    def __init__(self, name, age, birth, state):
        self.name = name
        self.age = age
        self.birth = birth
        self.state = state
    
    def __str__(self) -> str:
        return f"User{{\nname: {self.name}\nage: {self.age}\nbirth: {self.birth}\nstate: {self.state}\n}}"

if __name__ == "__main__":
    file_path = 'test.txt'
    
    with open(file_path, 'r') as f:
        data = f.read().strip().split("\n")
    
    N,K = map(int,data[0].split())
    
    classmates = []
    for i in range(1, N + 1):
        info = data[i].split()
        nickname = info[0]
        old = int(info[1])
        birth = info[2]
        state = info[3]
        user = User(nickname, old, birth, state)
        classmates.append(user)

    for i in range(N+1,N + K+1):    
        info  = data[i].split()
        index = int(info[0])-1
        new_name = info[1]
        classmates[index].name = new_name
    
    for classmate in classmates:
        print(classmate.name,classmate.age,classmate.birth,classmate.state)
