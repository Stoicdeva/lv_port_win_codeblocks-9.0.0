# LVGL Windows CodeBlocks ģ����

����һ������ **LVGL 9.0.0** �ȶ��汾�� Windows CodeBlocks ģ������Ŀ��ר��Ϊѧϰ LVGL Ƕ��ʽ GUI �������ԭ�ӽ̶̳���ơ�

## ? ��Ŀ��Դ

����Ŀ�������¹ٷ��ֿ��¡������

- **LVGL Windows CodeBlocks �˿�**��[https://github.com/lvgl/lv_port_win_codeblocks](https://github.com/lvgl/lv_port_win_codeblocks)
- **LVGL ���Ŀ�**��[https://github.com/lvgl/lvgl/tree/c903c1dc0fdfae20bce69d0a48894bdebae278ff](https://github.com/lvgl/lvgl/tree/c903c1dc0fdfae20bce69d0a48894bdebae278ff)

**�汾��Ϣ��**
- LVGL ���Ŀ�汾��9.0.0 (�ȶ��汾)
- �˿���Ŀ��lv_port_win_codeblocks-9.0.0
- ����ƽ̨��Windows + CodeBlocks

## ? ��Ŀ���

����Ŀ�� LVGL �ٷ� Windows CodeBlocks �˿ڵĿ�¡�汾��ʹ�� LVGL 9.0.0 �ȶ��汾�����������ص㣺

- ? **�ȶ��ɿ�**������ LVGL 9.0.0 �ȶ��汾�������Ժ�
- ? **����ѧϰ**���ʺϳ�ѧ��ѧϰ LVGL ��������� API
- ? **����ʾ��**�������ḻ����ʾ�����ʾ������
- ? **�����Ѻ�**���ṩ����˵���ĵ���ѧϰָ��
- ? **����ԭ�ӽ̳̼���**��������ԭ�� LVGL �̳��������

## ?? ϵͳҪ��

- **����ϵͳ**��Windows 10/11
- **IDE**��CodeBlocks 20.03 ����°汾���Ƽ�ʹ�ð��� MinGW �İ汾��
- **������**��MinGW-w64
- **Git**�����ڿ�¡��Ŀ

## ? ��װ����

### 1. ��װ��Ҫ���

1. **��װ Git**
   - ���ص�ַ��[Git for Windows](https://git-scm.com/downloads)
   - ��װʱѡ��Ĭ��ѡ���

2. **��װ CodeBlocks**
   - ���ص�ַ��[CodeBlocks Downloads](https://www.codeblocks.org/downloads/)
   - **ǿ���Ƽ�**���ذ��� MinGW �İ汾�����ⵥ�����ñ��������鷳
   - �Ƽ��汾��`codeblocks-20.03-mingw-setup.exe`

### 2. ��¡��Ŀ

��������ʾ����Win + R �� cmd���� PowerShell��Win + R �� powershell����ִ���������

```bash
# ��¡����Ŀ�ֿ�
git clone https://github.com/lai-nick/lv_port_win_codeblocks-9.0.0.git

# ������ĿĿ¼
cd lv_port_win_codeblocks-9.0.0
```

**����ֱ�����أ�**
- �����ҳ�����Ͻǵ���ɫ "Code" ��ť
- ѡ�� "Download ZIP" ����ѹ����
- ��ѹ������Ŀ¼

### 3. ����Ŀ

1. ���� **CodeBlocks**
2. ѡ�� **File �� Open an existing project**
3. ��������Ŀ�ļ��У�ѡ�� `lvgl.cbp` �ļ�
4. ��� **Open**

**ע�⣺** ��� CodeBlocks �汾 �� 20.03��������Ҫ���� MinGW ��������

### 4. ��������

1. ����������� **Build and Run** ��ť����ɫ�����Σ�
2. �򰴿�ݼ� **F9**
3. �������ɹ���������һ�� 800x480 �Ĵ�����ʾ LVGL ����

## ? ��Ŀ�ṹ˵��

```
lv_port_win_codeblocks-9.0.0/
������ main.c              # ��������ڣ����� LVGL ��ʼ������ѭ��
������ my_gui.c            # �Զ��� GUI ���루����ѧϰ��㣩
������ my_gui.h            # GUI ͷ�ļ�
������ lv_conf.h           # LVGL �����ļ�����Ҫ����
������ lvgl/               # LVGL 9.0.0 ���Ŀ��ļ�
��   ������ src/            # Դ����
��   ������ demos/          # �ٷ���ʾ����
��   ������ examples/       # ʾ������
������ bin/                # �������Ŀ¼
������ obj/                # �����м��ļ�
```

## ? ��ʼѧϰ

### 1. ����Ĭ�ϳ���

�������к����ῴ��һ���򵥵� GUI ���ڣ���ʾһ�����еľ��ζ������� `my_gui.c` �ж����ʾ�����롣

### 2. �޸� GUI ����

�� `my_gui.c` �ļ������ῴ����

```c
void my_gui(void){
    lv_obj_t* obj1 = lv_obj_create(lv_screen_active());
    lv_obj_set_size(obj1, 100, 200);
    lv_obj_set_align(obj1, LV_ALIGN_CENTER);
}
```

��������ѧϰ��㣡�����޸���Щ������������ͬ�Ľ��档

### 3. ���йٷ���ʾ

�� `main.c` �У�������ȡ��ע�������������йٷ���ʾ��

```c
// ȡ��ע���������������йٷ���ʾ
// lv_demo_widgets();
// ע�͵�����
my_gui();
```

���õ���ʾ���������
- `lv_demo_widgets()` - �ؼ���ʾ
- `lv_demo_music()` - ���ֲ�������ʾ
- `lv_demo_benchmark()` - ���ܲ�����ʾ
- `lv_demo_stress()` - ѹ��������ʾ

## ? ѧϰ��Դ

### LVGL �ٷ���Դ
- [LVGL �ٷ��ĵ�](https://docs.lvgl.io/)
- [LVGL ����ʾ��](https://docs.lvgl.io/latest/en/html/examples.html)
- [LVGL GitHub �ֿ�](https://github.com/lvgl/lvgl)
- [LVGL Windows CodeBlocks �˿�](https://github.com/lvgl/lv_port_win_codeblocks)

### ����ԭ�ӽ̳�
- ����ԭ�� LVGL �̳���Ƶ
- ����ԭ�� LVGL ����ָ��
- ����ԭ�� STM32 + LVGL ʵս��Ŀ

### ���� LVGL ����
- **����Object��**��LVGL �Ļ���������
- **��Ļ��Screen��**����ʾ����
- **�ؼ���Widget��**����ť����ǩ������� UI Ԫ��
- **��ʽ��Style��**�������������
- **�¼���Event��**�������û�����

## ? ��������

### Q: ����ʱ���ִ���
**A:** ȷ��ʹ�ð��� MinGW �� CodeBlocks �汾������ȱ��ͷ�ļ������⡣

### Q: �������к󴰿������ر�
**A:** ��� `main.c` �е���ѭ���Ƿ���ȷ��ȷ�� `lv_task_handler()` �����ڵ��á�

### Q: �������µĿؼ�
**A:** �� `my_gui.c` ��ʹ����Ӧ�� LVGL API �����ؼ������磺
```c
lv_obj_t* btn = lv_btn_create(lv_screen_active());
lv_obj_t* label = lv_label_create(btn);
lv_label_set_text(label, "Hello LVGL!");
```

### Q: ����޸Ĵ��ڴ�С
**A:** �� `main.c` ���޸� `lv_windows_create_display` �Ĳ�����
```c
lv_display_t * display = lv_windows_create_display(title, 1024, 768, 100, FALSE, FALSE);
```

## ? ����ָ��

�������ʹ�ù����з���������иĽ����飬��ӭ��

1. �ύ Issue ��������
2. �ύ Pull Request ���״���
3. ����ѧϰ�ĵú;���

## ? ���֤

����Ŀ���� LVGL �� MIT ���֤����� [LICENSE](LICENSE) �ļ���

## ? ��л

��л LVGL �����Ŷ��ṩ�����㿪Դ GUI �⣬�Լ�����ԭ���Ŷ��ṩ�����ʽ̳���Դ��

---

**ף��ѧϰ��죡** ?

�������⣬��鿴 [LVGL �ٷ���̳](https://forum.lvgl.io/) ����ؽ̳���Դ��

