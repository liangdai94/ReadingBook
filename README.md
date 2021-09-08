# 简介
本文是参考极客时间上，陈皓大佬的专栏《左耳听风》部分的阅读笔记。以及将对内容结合自身做一些调整。
# 程序员的修养

程序员的修养可以从Quora上的帖子开始"[What are some of the most basic things every programmer should know?](https://www.quora.com/What-are-some-of-the-most-basic-things-every-programmer-should-know)", 以及《[97 Things Every Programmer Should Know](https://97-things-every-x-should-know.gitbooks.io/97-things-every-programmer-should-know/content/en/index.html)》。可以快速浏览，不时的复读，定有不同的收获。

## 英文能力

大体上，现有的计算机技术大部分都起源于西方国家。因此，英文的世界是有价值的信息的集散地。你可以在那里，到官网上直接阅读手册，到 StackOverflow 上问问题，到 YouTube 上看很多演讲和教学，到 GitHub 上参与社区，用 Google 查询相关的知识，到国际名校上参加公开课……。

## 问问题的能力

提问的智慧([How To Ask Questions The Smart Way](http://www.catb.org/~esr/faqs/smart-questions.html)), 一文最早是由 Eric Steven Raymond 所撰写的，详细描述了发问者事前应该做好什么，而什么又是不该做的。作者认为这样能让问题容易令人理解，而且发问者自己也能学到较多东西。

此文一经发出，就广受好评，被广泛转载并奉为经典。该文也有 [简体中文翻译版](http://doc.zengrong.net/smart-questions/cn.html) 被流传着，所以在华人界也是篇很有名的文章。有两个著名的缩写 STFW（Search the fxxking web）以及 RTFM（Read the fxxking manual）就是出自本文。

另外，还有一个经典的问题叫 [X-Y Problem](http://xyproblem.info/)。对我来说，这是一个很容易犯的错误，所以，你也要小心避免（陈皓大神的 Coolshell 上写过这个事《[X-Y 问题](https://coolshell.cn/articles/10804.html)》）。

## 写代码的修养

- 《[代码大全](https://m.douban.com/book/subject/1477390/)》，这是一本完整的软件构建手册，涵盖了软件构件过程中的所有细节。它从软件质量和编程思想等方面论述了软件构件的各个问题，并详细论述了紧跟潮流的新技术等。
- 《[重构：改善既有代码的设计](https://book.douban.com/subject/4262627/)》，这本书是 Martin Fowler 的经典之作。这本书的意义不仅仅在于 " 改善既有代码的设计 "，也指导了我们如何从零开始构建代码的时候避免不良的代码风格。这是一本程序员必读的书。

- 《[修改代码的艺术](https://book.douban.com/subject/2248759/)》，这本书是继《重构》之后探讨修改代码技术的又一里程碑式的著作，而且从涵盖面和深度上都超过了前两部经典（《代码大全》和《重构》）。作者将理解、测试和修改代码的原理、技术和最新工具（自动化重构工具、单元测试框架、仿对象、集成测试框架等），与解依赖技术和大量开发和设计优秀代码的原则、最佳实践相结合，许多内容非常深入。这本书不仅可以帮你掌握最顶尖的修改代码技术，还可以大大提高你对代码和软件开发的领悟力。
- 《[代码整洁之道](https://book.douban.com/subject/4199741/)》，这本书提出一种观念：代码质量与其整洁度成正比。干净的代码，既在质量上较为可靠，也为后期维护和升级奠定了良好基础。本书作者给出了一系列行之有效的整洁代码操作实践。这些实践在本书中体现为一条条规则，并辅以来自现实项目正反两面的范例。
- 《[程序员的职业素养](https://book.douban.com/subject/11614538/)》，这本书是编程大师 Bob 大叔 40 余年编程生涯的心得体会，讲解成为真正专业的程序员需要什么样的态度、原则，需要采取什么样的行动。作者以自己以及身边的同事走过的弯路、犯过的错误为例，意在为后来人引路，助其职业生涯迈上更高台阶。

另外，作为一个程序员，Code Review 是非常重要的程序员修养。 Code Review 对我的成长非常有帮助，我认为没有 Code Review 的公司都没有必要呆（因为不做 Code Review 的公司一定是不尊重技术的）。下面有几篇我觉得还不错的 Code Review 的文章，供你参考。

- [Code Review Best Practices](https://medium.com/@palantir/code-review-best-practices-19e02780015f)
- [How Google Does Code Review](https://dzone.com/articles/how-google-does-code-review)
- [LinkedIn’s Tips for Highly Effective Code Review](https://thenewstack.io/linkedin-code-review/)

除了 Code Review 之外，Unit Test 也是程序员的一个很重要的修养。写 Unit Test 的框架一般来说都是从 JUnit 衍生出来的，比如 CppUnit 之类的。学习 JUnit 使用的最好方式就是到其官网上看 [JUnit User Guide](https://junit.org/junit5/docs/current/user-guide/)（[中文版](http://sjyuan.cc/junit5/user-guide-cn/)）。然后，有几篇文章你可以看看（也可以自行 Google）：

- [You Still Don’t Know How to Do Unit Testing](https://stackify.com/unit-testing-basics-best-practices/)
- [Unit Testing Best Practices: JUnit Reference Guide](https://dzone.com/articles/unit-testing-best-practices)
- [JUnit Best Practices](http://www.kyleblaney.com/junit-best-practices/)

在软件开发的过程中，单元测试(Unittesting)是一个重要的coding步骤，可以让你的程序代码质量大幅提升、协助你进行良好的程序架构设计，单元测试是针对程序单元(软件设计的最小单位)来进行正确性检验的测试工作，在程序化编程中，一个单元就是单个程序、函式、过程等；对于对象导向编程，最小单元就是方法，包括基础类别（超类）、抽象类、或者衍生类别（子类别）中的方法。想要在C++项目中，进行单元测试的Framework有很多选择，例如: CPPUnit、GoogleGTest...等。

## 软件工程和上线

系统上线是一件比较严肃的事，这表明你写的软件不是跑在自己的机器上的玩具，或是实验室里的实验品，而是交付给用户使用的，甚至是用户付费的软件。对于这样的软件或系统，我们需要遵守一些上线规范，比如，需要认真测试，并做上线前检查，以及上线后监控。下面是几个简单的规范，供你参考。

- 关于测试，推荐两本书。
  - 《[完美软件：对软件测试的各种幻想](https://book.douban.com/subject/4187479/)》，这本书重点讨论了与软件测试有关的各种心理问题及其表现与应对方法。作者首先阐述软件测试之所以如此困难的原因–人的思维不是完美的，而软件测试的最终目的就是发现对改善软件产品和软件开发过程有益的信息，故软件测试是一个信息获取的过程。
  - 《[Google 软件测试之道](https://book.douban.com/subject/25742200/)》，描述了测试解决方案，揭示了测试架构是如何设计、实现和运行的，介绍了软件测试工程师的角色；讲解了技术测试人员应该具有的技术技能；阐述了测试工程师在产品生命周期中的职责；讲述了测试管理，并对在 Google 的测试历史上或者主要产品上发挥了重要作用的工程师的访谈，这令那些试图建立类似 Google 的测试流程或团队的人受益很大。
- 当你的系统要上线时，你是不是已经做好上线的准备了？这里有两个 Checklist 供你做上线前的一些检查。
  - [Server Side checklist](https://github.com/mtdvio/going-to-production/blob/master/serverside-checklist.md)
  - [Single Page App Checklist](https://github.com/mtdvio/going-to-production/blob/master/spa-checklist.md)
- 《[Monitoring 101](https://www.datadoghq.com/blog/monitoring-101-collecting-data/)》这是一篇运维方面的入门文章，告诉你最基本的监控线上运行软件的方法和实践。

# 编程语言

## 语言的选择

需要学习 C、C++ 和 Java 这三个工业级的编程语言。为什么说它们是工业级的呢？主要是，C 和 C++ 语言规范都由 ISO 标准化过，而且都有工业界厂商组成的标准化委员会来制定工业标准。次要原因是，它们已经在业界应用于许多重要的生产环境中。

此外，我推荐学习 Go 语言。一方面，Go 语言现在很受关注，它是取代 C 和 C++ 的另一门有潜力的语言。C 语言太原始了，C++ 太复杂了，Java 太高级了，所以 Go 语言就在这个夹缝中出现了。这门语言已经 10 多年了，其已成为云计算领域事实上的标准语言，尤其是在 Docker/Kubernetes 等项目中。Go 语言社区正在不断地从 Java 社区移植各种 Java 的轮子过来，Go 社区现在也很不错。

如果你要写一些 PaaS 层的应用，Go 语言会比 C 和 C++ 更好，目前和 Java 有一拼。而且，Go 语言在国内外一些知名公司中有了一定的应用和实践，所以，是可以学习的（参看：《[Go 语言、Docker 和新技术](https://coolshell.cn/articles/18190.html)》一文）。此外，Go 语言语法特别简单，你有了 C 和 C++ 的基础，学习 Go 的学习成本基本为零。

## 理论学科

你需要学习像算法、数据结构、网络模型、计算机原理等计算机科学专业需要学习的知识。为什么要学好这些理论上的知识呢？

- 其一，这些理论知识可以说是计算机科学这门学科最精华的知识了。说得大一点，这些是人类智慧的精华。你只要想成为高手，这些东西是你必需要掌握和学习的。
- 其二，当你在解决一些很复杂或是很难的问题时，这些基础理论知识可以帮到你很多。我过去这 20 年从这些基础理论知识中受益匪浅。
- 其三，这些理论知识的思维方式可以让你有触类旁通，一通百通的感觉。虽然知识比较难啃，但啃过以后，你将获益终生。

另外，你千万不要觉得在你的日常工作或是生活当中根本用不上，学了也白学，这样的思维方式千万不要有，因为这是平庸的思维方式。如果你想等我用到了再学也不晚，那么你有必要看一下这篇文章《[程序员的荒谬之言还是至理名言？](https://coolshell.cn/articles/4235.html)》。

## 系统知识

系统知识是理论知识的工程实践，这里面有很多很多的细节。比如像 Unix/Linux、TCP/IP、C10K 挑战等这样专业的系统知识。这些知识是你能不能把理论应用到实际项目当中，能不能搞定实际问题的重要知识。

当你在编程的时候，如何和系统进行交互或是获取操作系统的资源，如何进行通讯，当系统出了性能问题，当系统出了故障等，你有大量需要落地的事需要处理和解决。这个时候，这些系统知识就会变得尤为关键和重要了。

## C/C++

**这里，我想放个比较武断话——如果你不学 C 语言，你根本没有资格说你是一个合格的程序员！**

​																																						**陈皓**

### C语言

- 这里尤其推荐，已故的 C 语言之父 Dennis M. Ritchie 和著名科学家 Brian W. Kernighan 合作的圣经级的教科书《[C 程序设计语言](https://book.douban.com/subject/1139336/)》。注意，这本书是 C 语言原作者写的，其 C 语言的标准不是我们平时常说的 ANSI 标准，而是原作者的标准，又被叫作 K&R C。但是这本书很轻薄，也简洁，不枯燥，是一本你可以拿着躺在床上看还不会看着看着睡着的书。
- 然后，还有一本非常经典的 C 语言的书《[C 语言程序设计现代方法](https://book.douban.com/subject/2280547/)》。有人说，这本书配合之前的 [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) 那本书简真是无敌。我想说，这本书更实用，也够厚，完整覆盖了 C99 标准，习题的质量和水准也比较高。更好的是，探讨了现代编译器的实现，以及和 C++ 的兼容，还揭穿了各种古老的 C 语言的神话和信条……是相当相当干的一本学习 C 语言的书。
- 在学习 C 语言的过程中，你一定会感到，C 语言这么底层，而且代码经常性地崩溃，经过一段时间的挣扎，你才开始觉得你从这个烂泥坑里快要爬出来了。但你还需要看看《[C 陷阱与缺陷](https://book.douban.com/subject/2778632/)》这本书，你会发现，这里面的坑不是一般大。

### C++

**C++ 是目前世界上范式最多的语言了，其做得最好的范式就是 " 泛型编程 "，这在静态语言中，是绝对地划时代的一个事**。

所以，你有必要学习一下 C++，看看 C++ 是如何解决 C 语言中的各种问题的。你可以先看看我的这篇文章 “[C++ 的坑真的多吗？](https://coolshell.cn/articles/7992.html)” ，有个基本认识。下面推荐几本 C++ 的书。

- 《[C++ Primer 中文版](https://book.douban.com/subject/25708312/)》，这本书是久负盛名的 C++ 经典教程。书是有点厚，前面 1/3 讲 C 语言，后面讲 C++。C++ 的知识点实在是太多了，而且又有点晦涩。但是你主要就看几个点，一个是面向对象的多态，一个是模板和重载操作符，以及一些 STL 的东西。看看 C++ 是怎么玩泛型和函数式编程的。
- 如果你想继续研究，你需要看另外两本更为经典的书《[Effective C++](https://book.douban.com/subject/5387403/)》，《[More Effective C++](https://book.douban.com/subject/5908727/)》和《[Effective Modern C++](https://m.douban.com/book/subject/30178902/)》。 这三本本书不厚，但是我读了 10 多年，每过一段时间再读一下，就会发现有更多的收获。这三本书的内容会随着你经历的丰富而变得丰富，这也是对我影响最大的两本书，其中影响最大的不是书中的那些 C++ 的东西，而是作者的思维方式和不断求真的精神，这真是太赞了。
- 学习 C/C++ 都是需要好好了解一下编译器到底干了什么事的。就像 Java 需要了解 JVM 一样，所以，这里还有一本非常非常难啃的书你可以挑战一下《[深度探索 C++ 对象模型](https://book.douban.com/subject/10427315/)》。这本书是非常之经典的，看完后，C++ 对你来说就再也没有什么秘密可言。我以前写过的《[C++ 虚函数表解析](https://coolshell.cn/articles/12165.html)》，还有《[C++ 对象内存布局](https://coolshell.cn/articles/12176.html)》属于这个范畴。
- 还有 C++ 的作者 Bjarne Stroustrup 写的 [C++ FAQ](http://www.stroustrup.com/bs_faq.html) （[中文版](http://www.stroustrup.com/bsfaqcn.html)），也是非常值得一读的。

## golang

C 语言太原始了，C++ 太复杂了，Go 语言是不二之选。有了 C/C++ 的功底，学习 Go 语言非常简单。

首推 [Go by Example](https://gobyexample.com/) 作为你的入门教程。然后，[Go 101](https://go101.org/article/101.html) 也是一个很不错的在线电子书。如果你想看纸书的话，[The Go Programming Language](https://book.douban.com/subject/26337545/) 一书在豆瓣上有 9.2 分，但是国内没有卖的。（当然，我以前也写过两篇入门的供你参考 “[GO 语言简介（上）- 语法](https://coolshell.cn/articles/8460.html)” 和 “[GO 语言简介（下）- 特性](https://coolshell.cn/articles/8489.html)”）。

另外，Go 语言官方的 [Effective Go](https://golang.org/doc/effective_go.html) 是必读的，这篇文章告诉你如何更好地使用 Go 语言，以及 Go 语言中的一些原理。

Go 语言最突出之处是并发编程，Unix 老牌黑客罗勃·派克（Rob Pike）在 Google I/O 上的两个分享，可以让你学习到一些并发编程的模式。

- Go Concurrency Patterns（ [幻灯片](https://talks.golang.org/2012/concurrency.slide)和[演讲视频](https://www.youtube.com/watch?v=f6kdp27TYZs)）。
- Advanced Go Concurrency Patterns（[幻灯片](https://talks.golang.org/2013/advconc.slide)、[演讲视频](https://youtu.be/QDDwwePbDtw)）。

然后，Go 在 GitHub 的 wiki 上有好多不错的学习资源，你可以从中学习到多。比如：

- [Go 精华文章列表](https://github.com/golang/go/wiki/Articles)。
- [Go 相关博客列表](https://github.com/golang/go/wiki/Blogs)。
- [Go Talks](https://github.com/golang/go/wiki/GoTalks)。
- [Go 综合](https://github.com/0voice/Introduction-to-Golang?utm_source=wechat_session&utm_medium=social&utm_oi=55243102486528)

此外，还有个内容丰富的 Go 资源列表 [Awesome Go](https://github.com/avelino/awesome-go)，推荐看看。

# 理论学科

## 数据结构与算法

- **基础知识**。《[算法](https://book.douban.com/subject/10432347/)》，是算法领域经典的参考书，不但全面介绍了关于算法和数据结构的必备知识，还给出了每位程序员应知应会的 50 个算法，并提供了实际代码。最不错的是，其深入浅出的算法介绍，让一些比较难的算法也变得容易理解，尤其是书中对红黑树的讲解非常精彩。其中，还有大量的图解，详尽的代码和讲解，也许是最好的数据结构入门图书。不好的是不深，缺乏进一步的算法设计内容，甚至连动态规划都未提及。另外，如果你觉得算法书比较枯燥的话，你可以看看这本有趣的《[算法图解](https://book.douban.com/subject/26979890/)》。
- **理论加持**。如果说上面这本书偏于实践和工程，而你看完后，对算法和数据结构的兴趣更浓了，那么你可以再看看另一本也是很经典的偏于理论方面的书——《[算法导论](https://book.douban.com/subject/20432061/)》。虽然其中的一些理论知识在《算法》那本书中也有提过，但《算法导论》这本书更为专业一些，是美国计算机科学本科生的教科书。
- **思维改善**。还有一本叫《[编程珠玑](https://book.douban.com/subject/3227098/)》的书，写这本书的人是世界著名计算机科学家乔恩·本特利（Jon Bentley），被誉为影响算法发展的十位大师之一。你可能不认识这个人，但是你知道他的学生有多厉害吗？我例举几个，一个是 Tcl 语言设计者约翰·奥斯德奥特（John Ousterhout），另一个是 Java 语言设计者詹姆斯·高斯林（James Gosling），还有一个是《算法导论》作者之一查尔斯·雷斯尔森（Charles Leiserson），还有好多好多。这本书也是很经典的算法书，其中都是一些非常实际的问题，并以其独有的洞察力和创造力，来引导读者理解并学会解决这些问题的方法，也是一本可以改善你思维方式的书。

然后，你需要去做一些题来训练一下自己的算法能力，这里就要推荐 [LeetCode](https://leetcode.com/) 这个网站了。它是一个很不错的做算法训练的地方。现在也越做越好了。基本上来说，这里会有两类题。

- **基础算法题**。其中有大量的算法题，解这些题都是有套路的，不是用递归（深度优先 DFS、广度优先 BFS），就是要用动态规划（Dynamic Programming），或是折半查找（Binary Search），或是回溯（Back tracing），或是分治法（Divide and Conquer），还有大量的对树、数组、链表、字符串和 hash 表的操作。通过做这些题能让你对这些最基础的算法的思路有非常扎实的了解和训练。对我而言，Dynamic Programming 是我的短板，尤其是一些比较复杂的问题，在推导递推公式上总是有思维的缺陷（数学是我的硬伤）。做了这些题后，我能感到我在动态编程的思路上受到了很大的启发。
- **编程题**。比如：atoi、strstr、add two nums、括号匹配、字符串乘法、通配符匹配、文件路径简化、Text Justification、反转单词等，这些题的 Edge Case 和 Corner Case 有很多。这些题需要你想清楚了再干，只要你稍有疏忽，就会有几个 case 让你痛不欲生，而且一不小心就会让你的代码写得又臭又长，无法阅读。通过做这些题，可以非常好地训练你对各种情况的考虑，以及你对程序代码组织的掌控（其实就是其中的状态变量）。

我觉得每个程序员都应该花时间和精力做这些题，因为你会从这些题中得到很大的收益。我在 Leetcode 上做的一些题的代码在这——我的 [GitHub](https://github.com/haoel/leetcode) 上，可以给你一些参考。

如果能够把这些算法能力都掌握了，那么你就有很大的概率可以很容易地通过这世界上最优的公司的面试，比如：Google、Amazon、Facebook 之类的公司。对你来说，如果能够进入到这些公司里工作，那么你未来的想像空间也会大很多。

最后，我们要知道这个世界上的数据结构和算法有很多，下面给出了两个网站。

- **[List of Algorithms](https://www.wikiwand.com/en/List_of_algorithms)** ，这个网站罗列了非常多的算法，完全可以当成一个算法字典，或是用来开阔眼界。
- 还有一个数据结构动画图的网站 [Data Structure Visualizations](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)。

## 其它理论基础知识

下面这些书，基本上是计算机科学系的大学教材。如果你想有科班出身的理论基础，那么这些书是必读的。当然，这些理论基础知识比较枯燥，但我觉得如果你想成为专业的程序员，那么应该要找时间读一下。

- 《[数据结构与算法分析](https://book.douban.com/subject/1139426/)》，这本书曾被评为 20 世纪顶尖的 30 部计算机著作之一，作者 Mark Allen Weiss 在数据结构和算法分析方面卓有建树，他在数据结构和算法分析等方面的著作尤其畅销，并广受好评，已被世界 500 余所大学用作教材。
- 《[数据库系统概念](https://book.douban.com/subject/1929984/)》，它是数据库系统方面的经典教材之一。国际上许多著名大学包括斯坦福大学、耶鲁大学、德克萨斯大学、康奈尔大学、伊利诺伊大学、印度理工学院等都采用本书作为教科书。这本书全面介绍了数据库系统的各种知识，透彻阐释数据库管理的基本概念。不仅讨论了数据库查询语言、模式设计、数据仓库、数据库应用开发、基于对象的数据库和 XML、数据存储和查询、事务管理、数据挖掘与信息检索以及数据库系统体系结构等方面的内容，而且对性能评测标准、性能调整、标准化以及空间与地理数据、事务处理监控等高级应用主题进行了广泛讨论。
- 《[现代操作系统](https://book.douban.com/subject/3852290/)》，这本书是操作系统领域的经典之作，书中集中讨论了操作系统的基本原理，包括进程、线程、存储管理、文件系统、输入 / 输出、死锁等，同时还包含了有关计算机安全、多媒体操作系统、掌上计算机操作系统、微内核、多核处理机上的虚拟机以及操作系统设计等方面的内容。
- 《[计算机网络](https://book.douban.com/subject/1391207/)》，这本书采用了独创的自顶向下方法，即从应用层开始沿协议栈向下讲解计算机网络的基本原理，强调应用层范例和应用编程接口，内容深入浅出，注重教学方法，理论与实践相结合。新版中还增加了无线和移动网络一章，并扩充了对等网络、BGP、MPLS、网络安全、广播选路和因特网编址及转发方面的材料。是一本不可多得的教科书。
- 《[计算机程序的构造和解释](https://book.douban.com/subject/1148282/)》，这本书也很经典，是 MIT 的计算机科学系的教材。这本书中主要证实了很多程序是怎么构造出来的，以及程序的本质是什么。整本书主要是使用 Scheme/Lisp 语言，从数据抽象、过程抽象、迭代、高阶函数等编程和控制系统复杂性的思想，到数据结构和算法，到编译器 / 解释器、编程语言设计。
- 《[编译原理](https://book.douban.com/subject/3296317/)》，这本书又叫 " 龙书 "，其全面、深入地探讨了编译器设计方面的重要主题，包括词法分析、语法分析、语法制导定义和语法制导翻译、运行时刻环境、目标代码生成、代码优化技术、并行性检测以及过程间分析技术，并在相关章节中给出大量的实例。与上一版相比，本书进行了全面的修订，涵盖了编译器开发方面的最新进展。每章中都提供了大量的系统及参考文献。

## 系统知识

首先推荐的是翻译版图书《[深入理解计算机系统](https://book.douban.com/subject/5333562/)》，原书名为《Computer Systems A Programmer’s Perspective》。不过，这本书叫做《程序员所需要了解的计算机知识》更为合适。

本书的最大优点是为程序员描述计算机系统的实现细节，帮助其在大脑中构造一个层次型的计算机系统。从最底层的数据在内存中的表示到流水线指令的构成，到虚拟存储器，到编译系统，到动态加载库，到最后的用户态应用。通过掌握程序是如何映射到系统上，以及程序是如何执行的，你能够更好地理解程序的行为为什么是这样的，以及效率低下是如何造成的。

然后就是美国计算机科学家 [理查德·史蒂文斯（Richard Stevens）](https://zh.wikipedia.org/wiki/理查德·史蒂文斯) 的三套巨经典无比的书。（理查德·史蒂文斯于 1999 年 9 月 1 日离世，终年 48 岁。死因不详，有人说是滑雪意外，有人说是攀岩意外，有人说是滑翔机意外。总之，家人没有透露。大师的 [个人主页](http://www.kohala.com/start/) 今天还可以访问。）

- 《[Unix 高级环境编程](https://book.douban.com/subject/1788421/)》。
- 《Unix 网络编程》 [第 1 卷 套接口 API](https://book.douban.com/subject/1500149/) 、[第 2 卷 进程间通信](https://book.douban.com/subject/4118577/) 。
- 《[TCP/IP 详解 卷 I 协议](https://book.douban.com/subject/1088054/)》。

这几本书的地位我就不多说了，你可以自己看相关的书评。但是，这三本书可能都不容易读，一方面是比较厚，另一方面是知识的密度太大了，所以，读起来有点枯燥和乏味。但是，这没办法，你得忍住。

这里要重点说一下《TCP/IP 详解》这本书，是一本很奇怪的书。这本书迄今至少被 [近五百篇学术论文引用过](http://portal.acm.org/citation.cfm?id=161724) 。这本写给工程师看的书居然被各种学院派的论文来引用，也是很神奇的一件事了。而且，虽然理查德·史蒂文斯不是 TCP 的发明人，但是这本书中把这个协议深入浅出地讲出来，还画了几百张时序图，也是令人叹为观止了。

如果你觉得上面这几本经典书比较难啃，你可以试试下面这些通俗易懂的（当然，如果读得懂上面那三本的，下面的这些也就不需要读了）。

- 《[Linux C 编程一站式学习](https://book.douban.com/subject/4141733/)》。
- 《[TCP/IP 网络编程](https://book.douban.com/subject/25911735/)》。
- 《[图解 TCP/IP](https://book.douban.com/subject/24737674/)》，这本书其实并不是只讲了 TCP/IP，应该是叫《计算机网络》才对，主要是给想快速入门的人看的。
- 《[The TCP/IP Guide](http://www.tcpipguide.com/free/index.htm)》，这本书在豆瓣上的评分 9.2，这里给的链接是这本书的 HTML 英文免费版的，里面的图画得很精彩。

另外，学习网络协议不单只是看书，你最好用个抓包工具看看这些网络包是什么样的。所以，这里推荐一本书《[Wireshark 数据包分析实战](https://book.douban.com/subject/21691692/)》。在这本书中，作者结合一些简单易懂的实际网络案例，图文并茂地演示使用 Wireshark 进行数据包分析的技术方法，可以让我们更好地了解和学习网络协议。当然，也拥有了一定的黑客的技能。

看完《Unix 高级环境编程》后，你可以趁热打铁看看《[Linux/Unix 系统编程手册](https://book.douban.com/subject/25809330/)》或是罗伯特·拉姆（Robert Love）的 [Linux System Programming 英文电子版](http://igm.univ-mlv.fr/~yahya/progsys/linux.pdf) 。其中文翻译版[Linux 系统编程](https://book.douban.com/subject/25828773/) 也值得一读，虽然和《Unix 高级环境编程》很像，不过其主要突出的是 Linux 的一些关键技术和相关的系统调用。

关于 TCP 的东西，你还可以看看下面这一系列的文章。

- [Let’s code a TCP/IP stack, 1: Ethernet & ARP](http://www.saminiir.com/lets-code-tcp-ip-stack-1-ethernet-arp/)
- [Let’s code a TCP/IP stack, 2: IPv4 & ICMPv4](http://www.saminiir.com/lets-code-tcp-ip-stack-2-ipv4-icmpv4/)
- [Let’s code a TCP/IP stack, 3: TCP Basics & Handshake](http://www.saminiir.com/lets-code-tcp-ip-stack-3-tcp-handshake/)
- [Let’s code a TCP/IP stack, 4: TCP Data Flow & Socket API](http://www.saminiir.com/lets-code-tcp-ip-stack-4-tcp-data-flow-socket-api/)
- [Let’s code a TCP/IP stack, 5: TCP Retransmission](http://www.saminiir.com/lets-code-tcp-ip-stack-5-tcp-retransmission/)

**对于系统知识，我认为主要有以下一些学习要点。**

- 用这些系统知识操作一下文件系统，实现一个可以拷贝目录树的小程序。
- 用 fork / wait / waitpid 写一个多进程的程序，用 pthread 写一个多线程带同步或互斥的程序。比如，多进程购票的程序。
- 用 signal / kill / raise / alarm / pause / sigprocmask 实现一个多进程间的信号量通信的程序。
- 学会使用 gcc 和 gdb 来编程和调试程序（参看我的《**用 gdb 调试程序**》[一](https://blog.csdn.net/haoel/article/details/2879)、[二](https://blog.csdn.net/haoel/article/details/2880)、[三](https://blog.csdn.net/haoel/article/details/2881)、[四](https://blog.csdn.net/haoel/article/details/2882)、[五](https://blog.csdn.net/haoel/article/details/2883)、[六](https://blog.csdn.net/haoel/article/details/2884)、[七](https://blog.csdn.net/haoel/article/details/2885)）。
- 学会使用 makefile 来编译程序（参看我的《**跟我一起写 makefile**》[一](https://blog.csdn.net/haoel/article/details/2886)、[二](https://blog.csdn.net/haoel/article/details/2887)、[三](https://blog.csdn.net/haoel/article/details/2888)、[四](https://blog.csdn.net/haoel/article/details/2889)、[五](https://blog.csdn.net/haoel/article/details/2890)、[六](https://blog.csdn.net/haoel/article/details/2891)、[七](https://blog.csdn.net/haoel/article/details/2892)、[八](https://blog.csdn.net/haoel/article/details/2893)、[九](https://blog.csdn.net/haoel/article/details/2894)、[十](https://blog.csdn.net/haoel/article/details/2895)、[十一](https://blog.csdn.net/haoel/article/details/2896)、[十二](https://blog.csdn.net/haoel/article/details/2897)、[十三](https://blog.csdn.net/haoel/article/details/2898)、[十四](https://blog.csdn.net/haoel/article/details/2899)）。
- Socket 的进程间通信。用 C 语言写一个 1 对 1 的聊天小程序，或是一个简单的 HTTP 服务器。

## C10K 问题

然后，当你读完《Unix 网络编程》后，千万要去读一下 “[C10K Problem](http://www.kegel.com/c10k.html) （[中文翻译版](https://www.oschina.net/translate/c10k)）”。提出这个问题的人叫丹·凯格尔（Dan Kegel），目前在 Google 任职。

他从 1978 年起开始接触计算机编程，是 Winetricks 的作者，也是 Wine 1.0 的管理员，同时也是 Crosstool（ 一个让 gcc/glibc 编译器更易用的工具套件）的作者。还是 Java JSR 51 规范的提交者并参与编写了 Java 平台的 NIO 和文件锁，同时参与了 RFC 5128 标准中有关 NAT 穿越（P2P 打洞）技术的描述和定义。

C10K 问题本质上是**操作系统处理大并发请求的问题**。对于 Web 时代的操作系统而言，对于客户端过来的大量的并发请求，需要创建相应的服务进程或线程。这些进程或线程多了，导致数据拷贝频繁（缓存 I/O、内核将数据拷贝到用户进程空间、阻塞）， 进程 / 线程上下文切换消耗大，从而导致资源被耗尽而崩溃。这就是 C10K 问题的本质。

了解这个问题，并了解操作系统是如何通过多路复用的技术来解决这个问题的，有助于你了解各种 I/O 和异步模型，这对于你未来的编程和架构能力是相当重要的。

另外，现在，整个世界都在解决 C10M 问题，推荐看看 [The Secret To 10 Million Concurrent Connections -The Kernel Is The Problem, Not The Solution](http://highscalability.com/blog/2013/5/13/the-secret-to-10-million-concurrent-connections-the-kernel-i.html) 一文。

## 实践项目

我们已经学习完了编程语言、理论学科和系统知识三部分内容，下面就来做几个实践项目，小试牛刀一下。实现语言可以用 C、C++ 或 Java。

实现一个 telnet 版本的聊天服务器，主要有以下需求。

- 每个客户端可以用使用`telnet ip:port`的方式连接到服务器上。
- 新连接需要用用户名和密码登录，如果没有，则需要注册一个。
- 然后可以选择一个聊天室加入聊天。
- 管理员有权创建或删除聊天室，普通人员只有加入、退出、查询聊天室的权力。
- 聊天室需要有人数限制，每个人发出来的话，其它所有的人都要能看得到。

实现一个简单的 HTTP 服务器，主要有以下需求。

- 解释浏览器传来的 HTTP 协议，只需要处理 URL path。
- 然后把所代理的目录列出来。
- 在浏览器上可以浏览目录里的文件和下级目录。
- 如果点击文件，则把文件打开传给浏览器（浏览器能够自动显示图片、PDF，或 HTML、CSS、JavaScript 以及文本文件）。
- 如果点击子目录，则进入到子目录中，并把子目录中的文件列出来。

实现一个生产者 / 消费者消息队列服务，主要有以下需求。

- 消息队列采用一个 Ring-buffer 的数据结构。
- 可以有多个 topic 供生产者写入消息及消费者取出消息。
- 需要支持多个生产者并发写。
- 需要支持多个消费者消费消息（只要有一个消费者成功处理消息就可以删除消息）。
- 消息队列要做到不丢数据（要把消息持久化下来）。
- 能做到性能很高。
