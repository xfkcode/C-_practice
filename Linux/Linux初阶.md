

### 1. Linux文件系统🗃️

#### 1.1 目录结构 

- `/` : 根目录
- `/bin` : 可执行二进制文件
- `/dev` : 设备文件
- `/etc` : 配置文件
- `/home` : 用户家目录
- `/lib` : 系统库函数
- `/root` : 系统管理员root的家目录
- `/tmp` : 临时文件
- `/usr` : 用户应用程序（`/usr/lib`库，`/usr/include`头文件）

#### 1.2 路径

- 绝对路径：根目录开始直到到达目标文件所经过的所有节点目录
                     1️⃣ `/.../...` 
- 相对路径：目标目录相对于当前目录的位置
                     1️⃣ `./` 当前目录
                     2️⃣ `../` 上级目录

```
cd   //回家目录
cd ~ //回家目录（等价 cd）
cd - //回上一次工作目录
```

#### 1.3 文件分类

**Unix/Linux** 系统中常用的文件类型有 ***7*** 种：

- [x] **普通文件 -、目录文件 d、设备文件（字符设备文件 c、块设备文件 b）** 
  **管道文件 p、软链接文件 l、套接字文件 s** 

```
ls -l
>>> drwxr-xr-x. 2 xfk  xfk    6 11月 17 16:39 Music
//1.文件属性—>文件类型、文件访问权限
//2.硬链接计数
//3.文件所有者
//4.文件所属组
//5.文件占用空间大小（Byte）
//6.文件最后修改时间
//7.文件名
```

```
文件访问权限：
>>> rwxr-xr-x
//r读 w写 x执行 -无权限
//三组：文件所有者 文件所属组 其他用户
```

### 2. Linux命令🥽

Linux命令格式：
`command [-options] [parameter1] ...` 

- command：命令名
- [-options]：选项
- parameter1 ... ：参数可多个

Linux帮助文档：
`command --help` 

Linux man手册：man 是系统的手册分页程序
`man [选项] 命令名`

1. 可执行程序或shell命令
2. 系统调用（内核提供的函数）
3. 库调用（程序库中的函数）

Linux 热键：

| 热键   | 含义       |
| ------ | ---------- |
| Ctrl+p | 上一条命令 |
| Ctrl+n | 下一条命令 |
| Ctrl+u | 清空       |
| Ctrl+a | 光标置前   |
| Ctrl+e | 光标置后   |

#### 2.1 常用命令

##### 2.1.1 文件管理

###### 1）ls 查看文件信息

Linux 通配符：

`*` 表示0-n个字符

`?` 表示1个字符

| 通配符   | 含义                                        |
| -------- | ------------------------------------------- |
| ls te*   | 查找以te开头的文件                          |
| ls *html | 查找结尾为html的文件                        |
| ls ?.c   | 查找第一个字符任意，后面字符为.c 的文件     |
| ls a.?   | 查找前两个字符为a. ，最后一个字符任意的文件 |

###### 2）> / >> 输出重定向

```
ls > outfile		//outfile不存在创建，存在覆盖
cat outfile
>>> 
        Desktop
        Documents
        Downloads
        Music
        ...
ls -l >> outflie	//outfile追加内容
cat outfile
>>>
		Desktop
        Documents
        Downloads
        Music
        ...
        drwxr-xr-x. 2 xfk  xfk    6 11月 17 16:39 Desktop
        drwxr-xr-x. 2 xfk  xfk    6 11月 17 16:39 Documents
        drwxr-xr-x. 2 xfk  xfk    6 11月 17 16:39 Downloads
        drwxr-xr-x. 2 xfk  xfk    6 11月 17 16:39 Music
		...
```

###### 3）clear 清屏

​		快捷键 **Ctrl+l**

###### 4）cd 切换目录

​		[参见1.2 路径](####1.2 路径) 

###### 5）pwd 显示当前路径

```
[xfk@centos ~]$ pwd
/home/xfk
```

###### 6）mkdir 创建目录

```
[xfk@centos ~]$ mkdir testfiles
[xfk@centos ~]$ ls
Desktop  Documents  Downloads  Music  ...  testfiles  Videos  work.txt  yum.conf
```

###### 7）rm 删除文件

| 参数 | 含义                                 |
| ---- | ------------------------------------ |
| -i   | 以进行交互式方式执行                 |
| -f   | 强制删除，忽略不存在的文件，无需提示 |
| -r   | 递归的删除目录下的内容               |

```
[xfk@centos ~]$ rm testfiles
rm: 无法删除"testfiles": 是一个目录
[xfk@centos ~]$ rm -ri testfiles
rm：是否删除目录 "testfiles"？y
[xfk@centos ~]$ ls
Desktop  Documents  Downloads  Music  ...  Videos  work.txt  yum.conf
```

###### 8）cat 查看或合并文件内容

```
[xfk@centos ~]$ cat 1.txt
xfk
[xfk@centos ~]$ cat 2.txt
tq
[xfk@centos ~]$ cat 1.txt 2.txt > 3.txt
[xfk@centos ~]$ cat 3.txt
xfk
tq
```

###### 9）cp 拷贝文件

| 参数 | 含义                                   |
| ---- | -------------------------------------- |
| -i   | 交互式复制，在覆盖目标文件之前给出提示 |
| -f   | 覆盖已存在的目标文件不提示             |
| -r   | 递归复制目录下所有文件                 |

```
>>>文件拷贝
[xfk@centos ~]$ cp outfile ./outfile1				//不存在创建
[xfk@centos ~]$ ls -l outfile1
-rw-rw-r--. 1 xfk xfk 978 1月   5 18:49 outfile1
>>>目录拷贝
[xfk@centos ~]$ ls Testdir
abc.c  outfile  test.txt
[xfk@centos ~]$ cp -r  Testdir ./Testdir_cp
[xfk@centos ~]$ ls Testdir_cp
abc.c  outfile  test.txt
```

