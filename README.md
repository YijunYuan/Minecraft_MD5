# Minecraft MD5

## Implementation of MD5 hash algorithm in Minecraft!

#### **Author**: [YijunYuan](https://github.com/YijunYuan/) @ [Command Block Logic](https://github.com/CommandBlockLogic)

------

#### Requirements: 

1. Minecraft version >=1.13.2 .
2. A good computer to run the game. I use 12GB memory and i7-8750H CPU for the world loading this datapack.

------

#### Limitations:

1. We do **NOT** support empty string.
2. The length of the inputted string should **less** then 567.
3. We only support ASCII characters.

If you ignore these limitations, this datapack will give wrong result **without any warning**, althouth making a warning is not difficult at all.

------

#### Usage:

1. Load the datapack.

2. Read the instructions carefully.

3. Run 

   ```
   /function md5:reset
   ```

   Notice that this step is required before **every** calculation!

4. Input the string. Currently, this datapack supports two input methods:

   - Input with [my another datapack 'keyboard'](http://www.mcbbs.net/thread-844160-1-1.html) (I will write a tutorial for that in English in the future): This method is only suitable for short strings, for it's not very easy to use (just a toy). After finishing input, run 

     ```
     /function md5:import_string
     ```

   - Input with [the test function I wrote](https://github.com/YijunYuan/Minecraft_MD5/blob/master/Minecraft_md5/test_string.h): Call the function like: 

     ```c++
     test_string("Put the string you want to test here!");
     ```

     After compiling and runing, put the generated 'test.mcfunction' into 

     ```
     .minecraft/<Your World Name>/datapacks/md5/data/md5/functions/
     ```

     Then run 

     ```
     /function md5:test_string
     ```

5. Run 

   ```
   /function md5:display_result
   ```

   to show the result.

6. For uninstallation, run 

   ```
   /funtion md5:uninstall
   ```

-----

#### Tips: 

- This is a big datapack, which may  cause the loading process of the world being a little laggy. If you only need to deal with the short strings (length **less than 56**), you can delete 

```
core120.mcfunction
core184.mcfunction
core248.mcfunction
core312.mcfunction
core376.mcfunction
core440.mcfunction
core504.mcfunction
core568.mcfunction
```

then **reload** the datapack. The speed will be much better then.

- If you try to understand the implementation, I recommand you to read the c++ code than the generated `.mcfunction` files. Actually the generated `.mcfunction` files have no comment in there and are only readable to the God. By the way, [the Wiki page of MD5](https://en.wikipedia.org/wiki/MD5) may be helpful.

-----

#### Acknowledgement:

- @[ruhuasiyu](https://github.com/ruhuasiyu)
- @[xuan_su](http://www.mcbbs.net/?720449)
- @[zzzz_ustc](https://github.com/ustc-zzzz)