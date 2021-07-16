## 介绍
### 1.  初始界面
![初始界面](https://images.gitee.com/uploads/images/2020/0722/151811_098c0a0f_7615585.png "初始界面.PNG")
### 2.  播放本地文件
![播放本地文件](https://images.gitee.com/uploads/images/2020/0722/151852_6ffe47f8_7615585.png "播放本地文件.PNG")
### 3.  播放任意时间点
![播放任意时间点](https://images.gitee.com/uploads/images/2020/0722/151930_97cbd721_7615585.png "播放任意时间点.PNG")
### 4.  任意调整音量
![任意调整音量](https://images.gitee.com/uploads/images/2020/0722/151957_ab27788f_7615585.png "任意调整音量.PNG")
### 5.  本地全屏播放
![本地全屏播放](https://images.gitee.com/uploads/images/2020/0722/152015_82bb9c0b_7615585.png "本地全屏播放.PNG")
### 6.  直播
![直播](https://images.gitee.com/uploads/images/2020/0722/152030_dca00088_7615585.png "直播.PNG")
### 7.  直播全屏
![直播全屏](https://images.gitee.com/uploads/images/2020/0722/152041_52ceee9d_7615585.png "直播全屏.PNG")
### 8.  允许文件扩展名
![允许文件扩展名](https://images.gitee.com/uploads/images/2020/0918/114728_b39f5184_7615585.png "允许文件扩展名.PNG")

## vlclib
附上东软镜像站当前最新vlc开源库：http://mirrors.neusoft.edu.cn/videolan/testing/vlc-3.0.0-rc7-win64-release.7z

## 快捷键说明
界面全屏后，可用Enter键或Esc键退出全屏，Enter键可用于默认大小与全屏的循环切换。

## 说明
1. vlc开源库压缩包下载解压后的位置须和工程文件的.pro文件指定的包含文件和库文件位置保持一致，如将压缩包解压至D盘；
2. 将vlclib库中的四个dll文件（axvlc.dll，libvlc.dll，libvlccore.dll和npvlc.dll）和plugins文件夹复制到工程相应的编译生成目录（如：E:\YourProjectDir\build-vlcplayer-Desktop_Qt_5_12_xxxxx-Release）中，程序的运行需要使用其中的部分运行库；
3. 直播链文件channels.conf需要放在build-vlcplayer-xxx目录中，当然也可以更改源代码更换channels.conf的读取位置。（功能已优化，增加可选择打开本地视频文件，打开包含节目信息的conf文件或txt文件）
4. 直播链中的频道会失效，可先用本地视频查看效果，直播链频道请自行查找。
