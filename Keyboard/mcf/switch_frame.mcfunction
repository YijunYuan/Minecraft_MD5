execute as @a[nbt={SelectedItemSlot:0},scores={Keyboard.Enabled=1..}] run execute if score @s LastTickSlot matches 8 run function keyboard:next_frame
execute as @a[nbt={SelectedItemSlot:8},scores={Keyboard.Enabled=1..}] run execute if score @s LastTickSlot matches 0 run function keyboard:previous_frame

execute as @a[nbt={SelectedItemSlot:0},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 0
execute as @a[nbt={SelectedItemSlot:1},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 1
execute as @a[nbt={SelectedItemSlot:2},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 2
execute as @a[nbt={SelectedItemSlot:3},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 3
execute as @a[nbt={SelectedItemSlot:4},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 4
execute as @a[nbt={SelectedItemSlot:5},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 5
execute as @a[nbt={SelectedItemSlot:6},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 6
execute as @a[nbt={SelectedItemSlot:7},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 7
execute as @a[nbt={SelectedItemSlot:8},scores={Keyboard.Enabled=1..}] run scoreboard players set @s LastTickSlot 8