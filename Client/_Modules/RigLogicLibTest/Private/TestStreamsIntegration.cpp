// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 30

// `dynamic_initializer_for_'gtest_StreamTest_PersistenceIntegrationTest_registered_'' @ 1413ad550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_StreamTest_PersistenceIntegrationTest_registered___(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types2<trio::FileStream,trio::MemoryMappedFileStream> local_78;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_70;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  testing::internal::
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<trio::FileStream,trio::MemoryMappedFileStream>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7f;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined8 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar2 + 0x78) = s_C__Workspace_UnrealEngine_Engin._120_4_;
  *(undefined2 *)(pcVar2 + 0x7c) = s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar2[0x7e] = s_C__Workspace_UnrealEngine_Engin[0x7e];
  pcVar2[0x7f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007f;
  uStack_40 = _UNK_1528844b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_58._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar2 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar3;
  local_38 = 7;
  gtest_StreamTest_PersistenceIntegrationTest_registered_ =
       testing::internal::
       TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_PersistenceIntegrationTest_Test>,testing::internal::Types2<trio::FileStream,trio::MemoryMappedFileStream>_>
       ::Register("",(CodeLocation *)&local_58,"StreamTest","PersistenceIntegrationTest",0,&local_70
                 );
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_1413ad79d;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar1 = local_70._Mypair._Myval2._Mylast;
  pbVar5 = local_70._Mypair._Myval2._Myfirst;
  if (local_70._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_70._Mypair._Myval2._Myend - (longlong)local_70._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_70._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_70._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413ad79d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_StreamTest_ReopenStreamContinueWork_registered_'' @ 1413ad7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_StreamTest_ReopenStreamContinueWork_registered___(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types2<trio::FileStream,trio::MemoryMappedFileStream> local_78;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_70;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  testing::internal::
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<trio::FileStream,trio::MemoryMappedFileStream>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7f;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined8 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar2 + 0x78) = s_C__Workspace_UnrealEngine_Engin._120_4_;
  *(undefined2 *)(pcVar2 + 0x7c) = s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar2[0x7e] = s_C__Workspace_UnrealEngine_Engin[0x7e];
  pcVar2[0x7f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007f;
  uStack_40 = _UNK_1528844b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_58._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar2 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar3;
  local_38 = 0x37;
  gtest_StreamTest_ReopenStreamContinueWork_registered_ =
       testing::internal::
       TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_ReopenStreamContinueWork_Test>,testing::internal::Types2<trio::FileStream,trio::MemoryMappedFileStream>_>
       ::Register("",(CodeLocation *)&local_58,"StreamTest","ReopenStreamContinueWork",0,&local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_1413ada3d;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar1 = local_70._Mypair._Myval2._Mylast;
  pbVar5 = local_70._Mypair._Myval2._Myfirst;
  if (local_70._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_70._Mypair._Myval2._Myend - (longlong)local_70._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_70._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_70._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413ada3d:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// TestBody @ 14c66bfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody
          (StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream> *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  bool bVar3;
  MemoryMappedFileStream *pMVar4;
  Message *pMVar5;
  StatusCode *pSVar6;
  AssertHelper *pAVar7;
  MemoryMappedFileStream *pMVar8;
  MemoryMappedFileStream *pMVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStackY_d8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_a8;
  bool local_a0 [8];
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_98;
  AssertHelper local_90;
  AssertHelper local_88;
  char local_80 [4];
  char local_7c [4];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pMVar4 = trio::MemoryMappedFileStream::create("TRiO_Test_FileName.3l",Write,(MemoryResource *)0x0)
  ;
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_90,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0xd,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_90);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (pMVar4 == (MemoryMappedFileStream *)0x0) {
      return;
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  (*(code *)**(undefined8 **)pMVar4)(pMVar4);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0xf,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(**(code **)(*(longlong *)&pMVar4->field_0x18 + 8))
                   (&pMVar4->field_0x18,
                    &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
                     ::__l2::data);
  if (local_a8._Mypair._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000002) {
    testing::AssertionSuccess((AssertionResult *)local_a0);
  }
  else {
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
                ::__l2::dataSize);
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
               (ulong64 *)&local_a8);
    testing::internal::EqFailure
              ((AssertionResult *)local_a0,"outStream->write(data, dataSize)","dataSize",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar14 = uStack_60 + 1;
      pvVar10 = pvVar1;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c66c23a;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar14 = local_40 + 1;
      uVar11 = local_58._Ptr;
      if (0xfff < uVar14) {
        uVar11 = *(undefined8 *)(local_58._Ptr + -8);
        uVar14 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66c23a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar14);
    }
  }
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x10,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  if (local_98._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x11,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  (*(code *)**(undefined8 **)&pMVar4->field_0x8)(&pMVar4->field_0x8);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x13,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  uVar17 = 0;
  local_80[0] = '\0';
  local_80[1] = '\0';
  pMVar8 = trio::MemoryMappedFileStream::create
                     ("TRiO_Test_FileName.3l",ReadWrite,(MemoryResource *)0x0);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x19,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (pMVar8 != (MemoryMappedFileStream *)0x0) {
      trio::MemoryMappedFileStream::destroy(pMVar8);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(*(code *)**(undefined8 **)&pMVar8->field_0x28)(&pMVar8->field_0x28);
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
            ((AssertionResult *)local_a0,"inOutStream->size()","dataSize",(ulong64 *)&local_a8,
             &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
              ::__l2::dataSize);
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x1a,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4) +
                (longlong)local_a8._Mypair._Myval2);
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
    if (pMVar8 == (MemoryMappedFileStream *)0x0) goto LAB_14c66d34f;
    goto LAB_14c66d347;
  }
  if (local_98._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  (*(code *)**(undefined8 **)pMVar8)(pMVar8);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    iVar16 = 0x1c;
    goto LAB_14c66c92c;
  }
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(**(code **)(*(longlong *)&pMVar8->field_0x10 + 8))(&pMVar8->field_0x10,local_80,2);
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
            ((AssertionResult *)local_a0,"inOutStream->read(buffer1, dataSize)","dataSize",
             (ulong64 *)&local_a8,
             &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
              ::__l2::dataSize);
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x1d,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4) +
                (longlong)local_a8._Mypair._Myval2);
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
    goto LAB_14c66d347;
  }
  if (local_98._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  bVar3 = sc::Status::isOk();
  uVar15 = uVar17;
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    iVar16 = 0x1e;
    goto LAB_14c66c92c;
  }
  do {
    testing::internal::EqHelper::Compare<char,char,0>
              ((AssertionResult *)local_a0,"buffer1[i]","data[i]",local_80 + uVar15,
               (char *)((longlong)
                        &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
                         ::__l2::data + uVar15));
    uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
    if (local_a0[0] == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
      if (local_98._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_98._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_98._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                          ,0x1f,pcVar13);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper(&local_88);
      if (local_a8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)local_a8._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
      }
      goto LAB_14c66d347;
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 2);
  local_90.data_._0_4_ = 2;
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(*(code *)**(undefined8 **)&pMVar8->field_0x20)(&pMVar8->field_0x20);
  if (local_a8._Mypair._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000002) {
    testing::AssertionSuccess((AssertionResult *)local_a0);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              ((AssertionResult *)local_a0,"inOutStream->tell()","2ul",(ulong64 *)&local_a8,
               (ulong *)&local_90);
  }
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x20,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_a8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(**(code **)(*(longlong *)&pMVar8->field_0x18 + 8))
                     (&pMVar8->field_0x18,
                      &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
                       ::__l2::data,2);
    testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
              ((AssertionResult *)local_a0,"inOutStream->write(data, dataSize)","dataSize",
               (ulong64 *)&local_a8,
               &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::TestBody(void)___ptr64'
                ::__l2::dataSize);
    uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
    if (local_a0[0] == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
      if (local_98._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_98._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_98._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                          ,0x23,pcVar13);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper(&local_88);
      if (local_a8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4) +
                  (longlong)local_a8._Mypair._Myval2);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
        pSVar6 = sc::Status::get((StatusCode *)local_a0);
        pcVar13 = pSVar6->message;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
        iVar16 = 0x24;
        goto LAB_14c66c92c;
      }
      local_a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )&DAT_00000004;
      local_90.data_ =
           (AssertHelperData *)(*(code *)**(undefined8 **)&pMVar8->field_0x28)(&pMVar8->field_0x28);
      if (local_90.data_ == (AssertHelperData *)&DAT_00000004) {
        testing::AssertionSuccess((AssertionResult *)local_a0);
      }
      else {
        testing::PrintToString<unsigned___int64>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                   (ulong64 *)&local_a8);
        testing::PrintToString<unsigned___int64>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   (ulong64 *)&local_90);
        testing::internal::EqFailure
                  ((AssertionResult *)local_a0,"inOutStream->size()","dataSize * 2ul",
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                   false);
        if (0xf < uStack_60) {
          pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
          uVar14 = uStack_60 + 1;
          pvVar10 = pvVar1;
          if (0xfff < uVar14) {
            pvVar10 = *(void **)((longlong)pvVar1 + -8);
            uVar14 = uStack_60 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c66c859;
          }
          ::operator_delete(pvVar10,uVar14);
        }
        local_78._Buf[0] = '\0';
        local_68 = ___xmm_000000000000000f0000000000000000;
        uStack_60 = _UNK_15076add8;
        if (0xf < local_40) {
          uVar14 = local_40 + 1;
          uVar11 = local_58._Ptr;
          if (0xfff < uVar14) {
            uVar11 = *(undefined8 *)(local_58._Ptr + -8);
            uVar14 = local_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66c859:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar11,uVar14);
        }
      }
      uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
      if (local_a0[0] == false) {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
        if (local_98._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar13 = "";
        }
        else {
          pcVar13 = (char *)local_98._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
            pcVar13 = *(char **)local_98._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_88,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x25,pcVar13);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_88);
        if (local_a8._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar12 = (undefined8 *)
                    ((longlong)local_a8._Mypair._Myval2 +
                    (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
          (**(code **)*puVar12)(puVar12,1);
        }
        if (local_98._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_98._Mypair._Myval2);
          ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
        }
        goto LAB_14c66d347;
      }
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      bVar3 = sc::Status::isOk();
      if (bVar3) {
        (*(code *)**(undefined8 **)&pMVar8->field_0x8)(&pMVar8->field_0x8);
        bVar3 = sc::Status::isOk();
        if (bVar3) {
          local_7c[0] = '\0';
          local_7c[1] = '\0';
          local_7c[2] = '\0';
          local_7c[3] = '\0';
          local_90.data_._0_4_ = 0x1000100;
          pMVar9 = trio::MemoryMappedFileStream::create
                             ("TRiO_Test_FileName.3l",Read,(MemoryResource *)0x0);
          bVar3 = sc::Status::isOk();
          if (bVar3) {
            local_a8._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )&DAT_00000004;
            local_88.data_ =
                 (AssertHelperData *)
                 (*(code *)**(undefined8 **)&pMVar9->field_0x28)(&pMVar9->field_0x28);
            if (local_88.data_ == (AssertHelperData *)&DAT_00000004) {
              testing::AssertionSuccess((AssertionResult *)local_a0);
            }
            else {
              testing::PrintToString<unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_58,(ulong64 *)&local_a8);
              testing::PrintToString<unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_78,(ulong64 *)&local_88);
              testing::internal::EqFailure
                        ((AssertionResult *)local_a0,"inStream->size()","dataSize * 2ul",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_78,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_58,false);
              if (0xf < uStack_60) {
                pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
                uVar14 = uStack_60 + 1;
                pvVar10 = pvVar1;
                if (0xfff < uVar14) {
                  pvVar10 = *(void **)((longlong)pvVar1 + -8);
                  uVar14 = uStack_60 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
                  goto LAB_14c66cb2f;
                }
                ::operator_delete(pvVar10,uVar14);
              }
              local_78._Buf[0] = '\0';
              local_68 = ___xmm_000000000000000f0000000000000000;
              uStack_60 = _UNK_15076add8;
              if (0xf < local_40) {
                uVar14 = local_40 + 1;
                uVar11 = local_58._Ptr;
                if (0xfff < uVar14) {
                  uVar11 = *(undefined8 *)(local_58._Ptr + -8);
                  uVar14 = local_40 + 0x28;
                  if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66cb2f:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar11,uVar14);
              }
            }
            uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
            if (local_a0[0] != false) {
              if (local_98._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_98._Mypair._Myval2);
                ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
              }
              (*(code *)**(undefined8 **)pMVar9)(pMVar9);
              bVar3 = sc::Status::isOk();
              if (bVar3) {
                local_88.data_ = (AssertHelperData *)&DAT_00000004;
                local_a8._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(**(code **)(*(longlong *)&pMVar9->field_0x10 + 8))
                                 (&pMVar9->field_0x10,local_7c,4);
                if (local_a8._Mypair._Myval2 ==
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                    &DAT_00000004) {
                  testing::AssertionSuccess((AssertionResult *)local_a0);
                }
                else {
                  testing::PrintToString<unsigned___int64>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_58,(ulong64 *)&local_88);
                  testing::PrintToString<unsigned___int64>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78,(ulong64 *)&local_a8);
                  testing::internal::EqFailure
                            ((AssertionResult *)local_a0,"inStream->read(buffer2, dataSize * 2ul)",
                             "dataSize * 2ul",
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_58,false);
                  if (0xf < uStack_60) {
                    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
                    uVar14 = uStack_60 + 1;
                    pvVar10 = pvVar1;
                    if (0xfff < uVar14) {
                      pvVar10 = *(void **)((longlong)pvVar1 + -8);
                      uVar14 = uStack_60 + 0x28;
                      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
                      goto LAB_14c66ccb1;
                    }
                    ::operator_delete(pvVar10,uVar14);
                  }
                  local_78._Buf[0] = '\0';
                  local_68 = ___xmm_000000000000000f0000000000000000;
                  uStack_60 = _UNK_15076add8;
                  if (0xf < local_40) {
                    uVar14 = local_40 + 1;
                    uVar11 = local_58._Ptr;
                    if (0xfff < uVar14) {
                      uVar11 = *(undefined8 *)(local_58._Ptr + -8);
                      uVar14 = local_40 + 0x28;
                      if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66ccb1:
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                    ::operator_delete((void *)uVar11,uVar14);
                  }
                }
                uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
                if (local_a0[0] != false) {
                  if (local_98._Mypair._Myval2 !=
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)local_98._Mypair._Myval2);
                    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
                  }
                  bVar3 = sc::Status::isOk();
                  if (bVar3) {
                    do {
                      testing::internal::EqHelper::Compare<char,char,0>
                                ((AssertionResult *)local_a0,"buffer2[i]","expected[i]",
                                 local_7c + uVar17,(char *)((longlong)&local_90.data_ + uVar17));
                      uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
                      if (local_a0[0] == false) {
                        pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                        if (local_98._Mypair._Myval2 ==
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
                        {
                          pcVar13 = "";
                        }
                        else {
                          pcVar13 = (char *)local_98._Mypair._Myval2;
                          if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
                            pcVar13 = *(char **)local_98._Mypair._Myval2;
                            iVar16 = 0x34;
                            goto LAB_14c66ce68;
                          }
                        }
                        iVar16 = 0x34;
                        goto LAB_14c66ce68;
                      }
                      if (local_98._Mypair._Myval2 !=
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                        _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)local_98._Mypair._Myval2);
                        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < 4);
                    trio::MemoryMappedFileStream::destroy(pMVar9);
                    goto LAB_14c66d347;
                  }
                  pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                  pSVar6 = sc::Status::get((StatusCode *)local_a0);
                  pcVar13 = pSVar6->message;
                  if (pcVar13 == (char *)0x0) {
                    pcVar13 = "(null)";
                  }
                  std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)
                             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
                  iVar16 = 0x33;
                  goto LAB_14c66cd38;
                }
                pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                if (local_98._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar13 = "";
                }
                else {
                  pcVar13 = (char *)local_98._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
                    pcVar13 = *(char **)local_98._Mypair._Myval2;
                  }
                }
                iVar16 = 0x32;
LAB_14c66ce68:
                pAVar7 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_88,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                    ,iVar16,pcVar13);
                testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
                testing::internal::AssertHelper::~AssertHelper(&local_88);
                if (local_a8._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar12 = (undefined8 *)
                            ((longlong)local_a8._Mypair._Myval2 +
                            (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
                  (**(code **)*puVar12)(puVar12,1);
                }
                if (local_98._Mypair._Myval2 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_98._Mypair._Myval2);
                  ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
                }
              }
              else {
                pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                pSVar6 = sc::Status::get((StatusCode *)local_a0);
                pcVar13 = pSVar6->message;
                if (pcVar13 == (char *)0x0) {
                  pcVar13 = "(null)";
                }
                std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)
                           &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
                iVar16 = 0x31;
LAB_14c66cd38:
                pAVar7 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_88,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                    ,iVar16,"Failed");
                testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
                testing::internal::AssertHelper::~AssertHelper(&local_88);
                if (local_a8._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar12 = (undefined8 *)
                            ((longlong)local_a8._Mypair._Myval2 +
                            (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
                  (**(code **)*puVar12)(puVar12,1);
                  trio::MemoryMappedFileStream::destroy(pMVar9);
                  goto LAB_14c66d347;
                }
              }
              trio::MemoryMappedFileStream::destroy(pMVar9);
              goto LAB_14c66d347;
            }
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
            if (local_98._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar13 = "";
            }
            else {
              pcVar13 = (char *)local_98._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
                pcVar13 = *(char **)local_98._Mypair._Myval2;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_88,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                ,0x2f,pcVar13);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_88);
            if (local_a8._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar12 = (undefined8 *)
                        ((longlong)local_a8._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
              (**(code **)*puVar12)(puVar12,1);
            }
            if (local_98._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_98._Mypair._Myval2);
              ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
            }
          }
          else {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
            pSVar6 = sc::Status::get((StatusCode *)local_a0);
            pcVar13 = pSVar6->message;
            if (pcVar13 == (char *)0x0) {
              pcVar13 = "(null)";
            }
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_a8,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                ,0x2e,"Failed");
            testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
            if (local_90.data_ != (AssertHelperData *)0x0) {
              puVar12 = (undefined8 *)
                        ((longlong)&(local_90.data_)->type +
                        (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
              (**(code **)*puVar12)(puVar12,1);
            }
          }
          if (pMVar9 != (MemoryMappedFileStream *)0x0) {
            trio::MemoryMappedFileStream::destroy(pMVar9);
          }
          goto LAB_14c66d347;
        }
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
        pSVar6 = sc::Status::get((StatusCode *)local_a0);
        pcVar13 = pSVar6->message;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
        iVar16 = 0x28;
      }
      else {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
        pSVar6 = sc::Status::get((StatusCode *)local_a0);
        pcVar13 = pSVar6->message;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
        iVar16 = 0x26;
      }
LAB_14c66c92c:
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                          ,iVar16,"Failed");
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
      if (local_90.data_ != (AssertHelperData *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)&(local_90.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
    }
  }
LAB_14c66d347:
  trio::MemoryMappedFileStream::destroy(pMVar8);
LAB_14c66d34f:
  trio::MemoryMappedFileStream::destroy(pMVar4);
  return;
}

// `scalar_deleting_destructor' @ 14c66d440

void * __thiscall
StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>::
_scalar_deleting_destructor_
          (StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c66d480

Test * __thiscall
testing::internal::
TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>::
CreateTest(TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__StreamTest_PersistenceIntegrationTest_Test_VMemoryMappedFileStream_trio____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c66d4c0

void * __thiscall
testing::internal::
TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c66d500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>::TestBody
          (StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream> *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  bool bVar3;
  MemoryMappedFileStream *pMVar4;
  Message *pMVar5;
  StatusCode *pSVar6;
  AssertHelper *pAVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStackY_188 [32];
  AssertHelper local_158;
  Message local_150;
  bool local_148 [8];
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_140;
  AssertHelper local_138;
  int iStack_12c;
  undefined1 local_128 [168];
  basic_ios<char,std::char_traits<char>_> local_80;
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_188;
  std::basic_ofstream<char,std::char_traits<char>_>::basic_ofstream<char,std::char_traits<char>_>
            ((basic_ofstream<char,std::char_traits<char>_> *)local_128,"TRiO_Test_FileName.3l",2,
             0x40);
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)local_128,"test",4);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0xa8;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)(local_128 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_128 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_80);
  pMVar4 = trio::MemoryMappedFileStream::create
                     ("TRiO_Test_FileName.3l",ReadWrite,(MemoryResource *)0x0);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message(&local_150);
    pSVar6 = sc::Status::get((StatusCode *)local_148);
    pcVar9 = pSVar6->message;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_158,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x3c,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_158);
    plVar1 = (longlong *)
             CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    if (pMVar4 == (MemoryMappedFileStream *)0x0) {
      return;
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  (*(code *)**(undefined8 **)pMVar4)(pMVar4);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message(&local_150);
    pSVar6 = sc::Status::get((StatusCode *)local_148);
    pcVar9 = pSVar6->message;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_158,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x3f,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_158);
    plVar1 = (longlong *)
             CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  (**(code **)(*(longlong *)&pMVar4->field_0x20 + 8))(&pMVar4->field_0x20,2);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message(&local_150);
    pSVar6 = sc::Status::get((StatusCode *)local_148);
    pcVar9 = pSVar6->message;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_158,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x42,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_158);
    plVar1 = (longlong *)
             CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    trio::MemoryMappedFileStream::destroy(pMVar4);
    return;
  }
  local_150.ss_._Mypair._Myval2._0_4_ = 2;
  local_158.data_ =
       (AssertHelperData *)(*(code *)**(undefined8 **)&pMVar4->field_0x20)(&pMVar4->field_0x20);
  if (local_158.data_ == (AssertHelperData *)&DAT_00000002) {
    testing::AssertionSuccess((AssertionResult *)local_148);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              ((AssertionResult *)local_148,"stream->tell()","2ul",(ulong64 *)&local_158,
               (ulong *)&local_150);
  }
  uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
  if (local_148[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
    if (local_140._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_140._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_140._Mypair._Myval2;
        iVar11 = 0x43;
        goto LAB_14c66ddca;
      }
    }
    iVar11 = 0x43;
  }
  else {
    if (local_140._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_140._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_150.ss_._Mypair._Myval2._0_4_ = 5;
    local_158.data_ =
         (AssertHelperData *)
         (**(code **)(*(longlong *)&pMVar4->field_0x18 + 8))(&pMVar4->field_0x18,"hello",5);
    if (local_158.data_ == (AssertHelperData *)&DAT_00000005) {
      testing::AssertionSuccess((AssertionResult *)local_148);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                ((AssertionResult *)local_148,"stream->write(\"hello\", 5ul)","5ul",
                 (ulong64 *)&local_158,(ulong *)&local_150);
    }
    uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
    if (local_148[0] == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_140._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_140._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_140._Mypair._Myval2;
        }
      }
      iVar11 = 0x45;
    }
    else {
      if (local_140._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_140._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message(&local_150);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_158,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x46,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_158);
        plVar1 = (longlong *)
                 CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
        if (plVar1 != (longlong *)0x0) {
          puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
          (**(code **)*puVar8)(puVar8,1);
        }
        trio::MemoryMappedFileStream::destroy(pMVar4);
        return;
      }
      (*(code *)**(undefined8 **)&pMVar4->field_0x8)(&pMVar4->field_0x8);
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message(&local_150);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_158,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x49,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_158);
        plVar1 = (longlong *)
                 CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
        if (plVar1 != (longlong *)0x0) {
          puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
          (**(code **)*puVar8)(puVar8,1);
        }
        trio::MemoryMappedFileStream::destroy(pMVar4);
        return;
      }
      (*(code *)**(undefined8 **)pMVar4)(pMVar4);
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message(&local_150);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_158,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x4c,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_158);
        plVar1 = (longlong *)
                 CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
        if (plVar1 != (longlong *)0x0) {
          puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
          (**(code **)*puVar8)(puVar8,1);
        }
        trio::MemoryMappedFileStream::destroy(pMVar4);
        return;
      }
      local_18[0] = '\0';
      local_18[1] = '\0';
      local_18[2] = '\0';
      local_18[3] = '\0';
      local_18[4] = '\0';
      local_18[5] = '\0';
      local_18[6] = 0;
      local_158.data_._0_7_ = 0x6f6c6c65686574;
      local_150.ss_._Mypair._Myval2._0_4_ = 7;
      local_138.data_ =
           (AssertHelperData *)
           (**(code **)(*(longlong *)&pMVar4->field_0x10 + 8))(&pMVar4->field_0x10,local_18,7);
      if (local_138.data_ == (AssertHelperData *)&DAT_00000007) {
        testing::AssertionSuccess((AssertionResult *)local_148);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  ((AssertionResult *)local_148,"stream->read(buffer, 7ul)","7ul",
                   (ulong64 *)&local_138,(ulong *)&local_150);
      }
      uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
      if (local_148[0] != false) {
        if (local_140._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_140._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        bVar3 = sc::Status::isOk();
        if (bVar3) {
          uVar10 = 0;
          do {
            testing::internal::EqHelper::Compare<char,char,0>
                      ((AssertionResult *)local_148,"buffer[i]","expected[i]",local_18 + uVar10,
                       (char *)((longlong)&local_158.data_ + uVar10));
            uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
            if (local_148[0] == false) {
              pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_140._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar9 = "";
              }
              else {
                pcVar9 = (char *)local_140._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
                  pcVar9 = *(char **)local_140._Mypair._Myval2;
                }
              }
              pAVar7 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 (&local_138,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                  ,0x52,pcVar9);
              testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
              testing::internal::AssertHelper::~AssertHelper(&local_138);
              if (local_158.data_ != (AssertHelperData *)0x0) {
                puVar8 = (undefined8 *)
                         ((longlong)&(local_158.data_)->type +
                         (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
                (**(code **)*puVar8)(puVar8,1);
              }
              if (local_140._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_140._Mypair._Myval2);
                ::operator_delete((void *)local_140._Mypair._Myval2,0x20);
              }
              break;
            }
            if (local_140._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_140._Mypair._Myval2);
              ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 7);
          trio::MemoryMappedFileStream::destroy(pMVar4);
          return;
        }
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_138,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x51,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_138);
        if (local_158.data_ != (AssertHelperData *)0x0) {
          puVar8 = (undefined8 *)
                   ((longlong)&(local_158.data_)->type +
                   (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
          (**(code **)*puVar8)(puVar8,1);
          trio::MemoryMappedFileStream::destroy(pMVar4);
          return;
        }
        goto LAB_14c66de37;
      }
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_140._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_140._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_140._Mypair._Myval2;
          iVar11 = 0x50;
          goto LAB_14c66ddca;
        }
      }
      iVar11 = 0x50;
    }
  }
LAB_14c66ddca:
  pAVar7 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_138,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                      ,iVar11,pcVar9);
  testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_138);
  if (local_158.data_ != (AssertHelperData *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)&(local_158.data_)->type +
             (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
    (**(code **)*puVar8)(puVar8,1);
  }
  if (local_140._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_140._Mypair._Myval2);
    ::operator_delete((void *)local_140._Mypair._Myval2,0x20);
  }
LAB_14c66de37:
  trio::MemoryMappedFileStream::destroy(pMVar4);
  return;
}

// `scalar_deleting_destructor' @ 14c66de90

void * __thiscall
StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>::_scalar_deleting_destructor_
          (StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream> *this,uint param_1
          )

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c66ded0

Test * __thiscall
testing::internal::
TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>::CreateTest
          (TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__StreamTest_ReopenStreamContinueWork_Test_VMemoryMappedFileStream_trio____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c66df10

void * __thiscall
testing::internal::
TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c66df50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>::TestBody
          (StreamTest_ReopenStreamContinueWork_Test<trio::FileStream> *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  bool bVar3;
  FileStream *pFVar4;
  Message *pMVar5;
  StatusCode *pSVar6;
  AssertHelper *pAVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStackY_188 [32];
  AssertHelper local_158;
  Message local_150;
  bool local_148 [8];
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_140;
  AssertHelper local_138;
  int iStack_12c;
  undefined1 local_128 [168];
  basic_ios<char,std::char_traits<char>_> local_80;
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_188;
  std::basic_ofstream<char,std::char_traits<char>_>::basic_ofstream<char,std::char_traits<char>_>
            ((basic_ofstream<char,std::char_traits<char>_> *)local_128,"TRiO_Test_FileName.3l",2,
             0x40);
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)local_128,"test",4);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0xa8;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)(local_128 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_128 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_80);
  pFVar4 = trio::FileStream::create("TRiO_Test_FileName.3l",ReadWrite,Binary,(MemoryResource *)0x0);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message(&local_150);
    pSVar6 = sc::Status::get((StatusCode *)local_148);
    pcVar9 = pSVar6->message;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_158,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x3c,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_158);
    plVar1 = (longlong *)
             CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    if (pFVar4 == (FileStream *)0x0) {
      return;
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  (*(code *)**(undefined8 **)pFVar4)(pFVar4);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message(&local_150);
    pSVar6 = sc::Status::get((StatusCode *)local_148);
    pcVar9 = pSVar6->message;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_158,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x3f,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_158);
    plVar1 = (longlong *)
             CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  (**(code **)(*(longlong *)&pFVar4->field_0x20 + 8))(&pFVar4->field_0x20,2);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message(&local_150);
    pSVar6 = sc::Status::get((StatusCode *)local_148);
    pcVar9 = pSVar6->message;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_158,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x42,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_158);
    plVar1 = (longlong *)
             CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  local_150.ss_._Mypair._Myval2._0_4_ = 2;
  local_158.data_ =
       (AssertHelperData *)(*(code *)**(undefined8 **)&pFVar4->field_0x20)(&pFVar4->field_0x20);
  if (local_158.data_ == (AssertHelperData *)&DAT_00000002) {
    testing::AssertionSuccess((AssertionResult *)local_148);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              ((AssertionResult *)local_148,"stream->tell()","2ul",(ulong64 *)&local_158,
               (ulong *)&local_150);
  }
  uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
  if (local_148[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
    if (local_140._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_140._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_140._Mypair._Myval2;
        iVar11 = 0x43;
        goto LAB_14c66e82a;
      }
    }
    iVar11 = 0x43;
  }
  else {
    if (local_140._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_140._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_150.ss_._Mypair._Myval2._0_4_ = 5;
    local_158.data_ =
         (AssertHelperData *)
         (**(code **)(*(longlong *)&pFVar4->field_0x18 + 8))(&pFVar4->field_0x18,"hello",5);
    if (local_158.data_ == (AssertHelperData *)&DAT_00000005) {
      testing::AssertionSuccess((AssertionResult *)local_148);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                ((AssertionResult *)local_148,"stream->write(\"hello\", 5ul)","5ul",
                 (ulong64 *)&local_158,(ulong *)&local_150);
    }
    uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
    if (local_148[0] == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_140._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_140._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_140._Mypair._Myval2;
        }
      }
      iVar11 = 0x45;
    }
    else {
      if (local_140._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_140._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message(&local_150);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_158,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x46,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_158);
        plVar1 = (longlong *)
                 CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
        if (plVar1 != (longlong *)0x0) {
          puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
          (**(code **)*puVar8)(puVar8,1);
        }
        trio::FileStream::destroy(pFVar4);
        return;
      }
      (*(code *)**(undefined8 **)&pFVar4->field_0x8)(&pFVar4->field_0x8);
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message(&local_150);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_158,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x49,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_158);
        plVar1 = (longlong *)
                 CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
        if (plVar1 != (longlong *)0x0) {
          puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
          (**(code **)*puVar8)(puVar8,1);
        }
        trio::FileStream::destroy(pFVar4);
        return;
      }
      (*(code *)**(undefined8 **)pFVar4)(pFVar4);
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message(&local_150);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_158,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x4c,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_158);
        plVar1 = (longlong *)
                 CONCAT44(local_150.ss_._Mypair._Myval2._4_4_,local_150.ss_._Mypair._Myval2._0_4_);
        if (plVar1 != (longlong *)0x0) {
          puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
          (**(code **)*puVar8)(puVar8,1);
        }
        trio::FileStream::destroy(pFVar4);
        return;
      }
      local_18[0] = '\0';
      local_18[1] = '\0';
      local_18[2] = '\0';
      local_18[3] = '\0';
      local_18[4] = '\0';
      local_18[5] = '\0';
      local_18[6] = 0;
      local_158.data_._0_7_ = 0x6f6c6c65686574;
      local_150.ss_._Mypair._Myval2._0_4_ = 7;
      local_138.data_ =
           (AssertHelperData *)
           (**(code **)(*(longlong *)&pFVar4->field_0x10 + 8))(&pFVar4->field_0x10,local_18,7);
      if (local_138.data_ == (AssertHelperData *)&DAT_00000007) {
        testing::AssertionSuccess((AssertionResult *)local_148);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  ((AssertionResult *)local_148,"stream->read(buffer, 7ul)","7ul",
                   (ulong64 *)&local_138,(ulong *)&local_150);
      }
      uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
      if (local_148[0] != false) {
        if (local_140._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_140._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        bVar3 = sc::Status::isOk();
        if (bVar3) {
          uVar10 = 0;
          do {
            testing::internal::EqHelper::Compare<char,char,0>
                      ((AssertionResult *)local_148,"buffer[i]","expected[i]",local_18 + uVar10,
                       (char *)((longlong)&local_158.data_ + uVar10));
            uVar2._Mypair._Myval2 = local_140._Mypair._Myval2;
            if (local_148[0] == false) {
              pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_140._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar9 = "";
              }
              else {
                pcVar9 = (char *)local_140._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
                  pcVar9 = *(char **)local_140._Mypair._Myval2;
                }
              }
              pAVar7 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 (&local_138,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                  ,0x52,pcVar9);
              testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
              testing::internal::AssertHelper::~AssertHelper(&local_138);
              if (local_158.data_ != (AssertHelperData *)0x0) {
                puVar8 = (undefined8 *)
                         ((longlong)&(local_158.data_)->type +
                         (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
                (**(code **)*puVar8)(puVar8,1);
              }
              if (local_140._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_140._Mypair._Myval2);
                ::operator_delete((void *)local_140._Mypair._Myval2,0x20);
              }
              break;
            }
            if (local_140._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_140._Mypair._Myval2);
              ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 7);
          trio::FileStream::destroy(pFVar4);
          return;
        }
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
        pSVar6 = sc::Status::get((StatusCode *)local_148);
        pcVar9 = pSVar6->message;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar9);
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_138,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x51,"Failed");
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_138);
        if (local_158.data_ != (AssertHelperData *)0x0) {
          puVar8 = (undefined8 *)
                   ((longlong)&(local_158.data_)->type +
                   (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
          (**(code **)*puVar8)(puVar8,1);
          trio::FileStream::destroy(pFVar4);
          return;
        }
        goto LAB_14c66e897;
      }
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_140._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_140._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_140._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_140._Mypair._Myval2;
          iVar11 = 0x50;
          goto LAB_14c66e82a;
        }
      }
      iVar11 = 0x50;
    }
  }
LAB_14c66e82a:
  pAVar7 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_138,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                      ,iVar11,pcVar9);
  testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_138);
  if (local_158.data_ != (AssertHelperData *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)&(local_158.data_)->type +
             (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
    (**(code **)*puVar8)(puVar8,1);
  }
  if (local_140._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_140._Mypair._Myval2);
    ::operator_delete((void *)local_140._Mypair._Myval2,0x20);
  }
LAB_14c66e897:
  trio::FileStream::destroy(pFVar4);
  return;
}

// `scalar_deleting_destructor' @ 14c66e8f0

void * __thiscall
StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>::_scalar_deleting_destructor_
          (StreamTest_ReopenStreamContinueWork_Test<trio::FileStream> *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c66e930

Test * __thiscall
testing::internal::TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>::
CreateTest(TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7__StreamTest_ReopenStreamContinueWork_Test_VFileStream_trio____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c66e970

void * __thiscall
testing::internal::TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c66e9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody
          (StreamTest_PersistenceIntegrationTest_Test<trio::FileStream> *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  bool bVar3;
  FileStream *pFVar4;
  Message *pMVar5;
  StatusCode *pSVar6;
  AssertHelper *pAVar7;
  FileStream *pFVar8;
  FileStream *pFVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStackY_d8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_a8;
  bool local_a0 [8];
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_98;
  AssertHelper local_90;
  AssertHelper local_88;
  char local_80 [4];
  char local_7c [4];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar4 = trio::FileStream::create("TRiO_Test_FileName.3l",Write,Binary,(MemoryResource *)0x0);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_90,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0xd,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_90);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (pFVar4 == (FileStream *)0x0) {
      return;
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  (*(code *)**(undefined8 **)pFVar4)(pFVar4);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0xf,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(**(code **)(*(longlong *)&pFVar4->field_0x18 + 8))
                   (&pFVar4->field_0x18,
                    &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
                     ::__l2::data,2);
  if (local_a8._Mypair._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000002) {
    testing::AssertionSuccess((AssertionResult *)local_a0);
  }
  else {
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (ulong64 *)
               ((longlong)
                &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
                 ::__l2::data + 4));
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
               (ulong64 *)&local_a8);
    testing::internal::EqFailure
              ((AssertionResult *)local_a0,"outStream->write(data, dataSize)","dataSize",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar14 = uStack_60 + 1;
      pvVar10 = pvVar1;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c66ec50;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar14 = local_40 + 1;
      uVar11 = local_58._Ptr;
      if (0xfff < uVar14) {
        uVar11 = *(undefined8 *)(local_58._Ptr + -8);
        uVar14 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66ec50:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar14);
    }
  }
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x10,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  if (local_98._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x11,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  (*(code *)**(undefined8 **)&pFVar4->field_0x8)(&pFVar4->field_0x8);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x13,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  uVar17 = 0;
  local_80[0] = '\0';
  local_80[1] = '\0';
  pFVar8 = trio::FileStream::create("TRiO_Test_FileName.3l",ReadWrite,Binary,(MemoryResource *)0x0);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x19,"Failed");
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (local_90.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_90.data_)->type +
                (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (pFVar8 != (FileStream *)0x0) {
      trio::FileStream::destroy(pFVar8);
    }
    trio::FileStream::destroy(pFVar4);
    return;
  }
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(*(code *)**(undefined8 **)&pFVar8->field_0x28)(&pFVar8->field_0x28);
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
            ((AssertionResult *)local_a0,"inOutStream->size()","dataSize",(ulong64 *)&local_a8,
             (ulong64 *)
             ((longlong)
              &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
               ::__l2::data + 4));
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x1a,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4) +
                (longlong)local_a8._Mypair._Myval2);
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
    if (pFVar8 == (FileStream *)0x0) goto LAB_14c66fd70;
    goto LAB_14c66fd68;
  }
  if (local_98._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  (*(code *)**(undefined8 **)pFVar8)(pFVar8);
  bVar3 = sc::Status::isOk();
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    iVar16 = 0x1c;
    goto LAB_14c66f34c;
  }
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(**(code **)(*(longlong *)&pFVar8->field_0x10 + 8))(&pFVar8->field_0x10,local_80,2);
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
            ((AssertionResult *)local_a0,"inOutStream->read(buffer1, dataSize)","dataSize",
             (ulong64 *)&local_a8,
             (ulong64 *)
             ((longlong)
              &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
               ::__l2::data + 4));
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x1d,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4) +
                (longlong)local_a8._Mypair._Myval2);
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
    goto LAB_14c66fd68;
  }
  if (local_98._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  bVar3 = sc::Status::isOk();
  uVar15 = uVar17;
  if (!bVar3) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
    pSVar6 = sc::Status::get((StatusCode *)local_a0);
    pcVar13 = pSVar6->message;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = "(null)";
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
    iVar16 = 0x1e;
    goto LAB_14c66f34c;
  }
  do {
    testing::internal::EqHelper::Compare<char,char,0>
              ((AssertionResult *)local_a0,"buffer1[i]","data[i]",local_80 + uVar15,
               (char *)((longlong)
                        &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
                         ::__l2::data + uVar15));
    uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
    if (local_a0[0] == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
      if (local_98._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_98._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_98._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                          ,0x1f,pcVar13);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper(&local_88);
      if (local_a8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)local_a8._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
      }
      goto LAB_14c66fd68;
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 2);
  local_90.data_._0_4_ = 2;
  local_a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(*(code *)**(undefined8 **)&pFVar8->field_0x20)(&pFVar8->field_0x20);
  if (local_a8._Mypair._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000002) {
    testing::AssertionSuccess((AssertionResult *)local_a0);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              ((AssertionResult *)local_a0,"inOutStream->tell()","2ul",(ulong64 *)&local_a8,
               (ulong *)&local_90);
  }
  uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
  if (local_a0[0] == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_98._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_98._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_98._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                        ,0x20,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
    if (local_a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_98._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_a8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(**(code **)(*(longlong *)&pFVar8->field_0x18 + 8))
                     (&pFVar8->field_0x18,
                      &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
                       ::__l2::data,2);
    testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
              ((AssertionResult *)local_a0,"inOutStream->write(data, dataSize)","dataSize",
               (ulong64 *)&local_a8,
               (ulong64 *)
               ((longlong)
                &`private:_virtual_void___cdecl_StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::TestBody(void)___ptr64'
                 ::__l2::data + 4));
    uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
    if (local_a0[0] == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
      if (local_98._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_98._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_98._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                          ,0x23,pcVar13);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper(&local_88);
      if (local_a8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4) +
                  (longlong)local_a8._Mypair._Myval2);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      bVar3 = sc::Status::isOk();
      if (!bVar3) {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
        pSVar6 = sc::Status::get((StatusCode *)local_a0);
        pcVar13 = pSVar6->message;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
        iVar16 = 0x24;
        goto LAB_14c66f34c;
      }
      local_a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )&DAT_00000004;
      local_90.data_ =
           (AssertHelperData *)(*(code *)**(undefined8 **)&pFVar8->field_0x28)(&pFVar8->field_0x28);
      if (local_90.data_ == (AssertHelperData *)&DAT_00000004) {
        testing::AssertionSuccess((AssertionResult *)local_a0);
      }
      else {
        testing::PrintToString<unsigned___int64>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                   (ulong64 *)&local_a8);
        testing::PrintToString<unsigned___int64>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   (ulong64 *)&local_90);
        testing::internal::EqFailure
                  ((AssertionResult *)local_a0,"inOutStream->size()","dataSize * 2ul",
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                   false);
        if (0xf < uStack_60) {
          pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
          uVar14 = uStack_60 + 1;
          pvVar10 = pvVar1;
          if (0xfff < uVar14) {
            pvVar10 = *(void **)((longlong)pvVar1 + -8);
            uVar14 = uStack_60 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c66f279;
          }
          ::operator_delete(pvVar10,uVar14);
        }
        local_78._Buf[0] = '\0';
        local_68 = ___xmm_000000000000000f0000000000000000;
        uStack_60 = _UNK_15076add8;
        if (0xf < local_40) {
          uVar14 = local_40 + 1;
          uVar11 = local_58._Ptr;
          if (0xfff < uVar14) {
            uVar11 = *(undefined8 *)(local_58._Ptr + -8);
            uVar14 = local_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66f279:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar11,uVar14);
        }
      }
      uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
      if (local_a0[0] == false) {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
        if (local_98._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar13 = "";
        }
        else {
          pcVar13 = (char *)local_98._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
            pcVar13 = *(char **)local_98._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_88,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                            ,0x25,pcVar13);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper(&local_88);
        if (local_a8._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar12 = (undefined8 *)
                    ((longlong)local_a8._Mypair._Myval2 +
                    (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
          (**(code **)*puVar12)(puVar12,1);
        }
        if (local_98._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_98._Mypair._Myval2);
          ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
        }
        goto LAB_14c66fd68;
      }
      if (local_98._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      bVar3 = sc::Status::isOk();
      if (bVar3) {
        (*(code *)**(undefined8 **)&pFVar8->field_0x8)(&pFVar8->field_0x8);
        bVar3 = sc::Status::isOk();
        if (bVar3) {
          local_7c[0] = '\0';
          local_7c[1] = '\0';
          local_7c[2] = '\0';
          local_7c[3] = '\0';
          local_90.data_._0_4_ = 0x1000100;
          pFVar9 = trio::FileStream::create
                             ("TRiO_Test_FileName.3l",Read,Binary,(MemoryResource *)0x0);
          bVar3 = sc::Status::isOk();
          if (bVar3) {
            local_a8._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )&DAT_00000004;
            local_88.data_ =
                 (AssertHelperData *)
                 (*(code *)**(undefined8 **)&pFVar9->field_0x28)(&pFVar9->field_0x28);
            if (local_88.data_ == (AssertHelperData *)&DAT_00000004) {
              testing::AssertionSuccess((AssertionResult *)local_a0);
            }
            else {
              testing::PrintToString<unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_58,(ulong64 *)&local_a8);
              testing::PrintToString<unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_78,(ulong64 *)&local_88);
              testing::internal::EqFailure
                        ((AssertionResult *)local_a0,"inStream->size()","dataSize * 2ul",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_78,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_58,false);
              if (0xf < uStack_60) {
                pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
                uVar14 = uStack_60 + 1;
                pvVar10 = pvVar1;
                if (0xfff < uVar14) {
                  pvVar10 = *(void **)((longlong)pvVar1 + -8);
                  uVar14 = uStack_60 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
                  goto LAB_14c66f555;
                }
                ::operator_delete(pvVar10,uVar14);
              }
              local_78._Buf[0] = '\0';
              local_68 = ___xmm_000000000000000f0000000000000000;
              uStack_60 = _UNK_15076add8;
              if (0xf < local_40) {
                uVar14 = local_40 + 1;
                uVar11 = local_58._Ptr;
                if (0xfff < uVar14) {
                  uVar11 = *(undefined8 *)(local_58._Ptr + -8);
                  uVar14 = local_40 + 0x28;
                  if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66f555:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar11,uVar14);
              }
            }
            uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
            if (local_a0[0] != false) {
              if (local_98._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_98._Mypair._Myval2);
                ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
              }
              (*(code *)**(undefined8 **)pFVar9)(pFVar9);
              bVar3 = sc::Status::isOk();
              if (bVar3) {
                local_88.data_ = (AssertHelperData *)&DAT_00000004;
                local_a8._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(**(code **)(*(longlong *)&pFVar9->field_0x10 + 8))
                                 (&pFVar9->field_0x10,local_7c,4);
                if (local_a8._Mypair._Myval2 ==
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                    &DAT_00000004) {
                  testing::AssertionSuccess((AssertionResult *)local_a0);
                }
                else {
                  testing::PrintToString<unsigned___int64>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_58,(ulong64 *)&local_88);
                  testing::PrintToString<unsigned___int64>
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78,(ulong64 *)&local_a8);
                  testing::internal::EqFailure
                            ((AssertionResult *)local_a0,"inStream->read(buffer2, dataSize * 2ul)",
                             "dataSize * 2ul",
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_78,
                             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_58,false);
                  if (0xf < uStack_60) {
                    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
                    uVar14 = uStack_60 + 1;
                    pvVar10 = pvVar1;
                    if (0xfff < uVar14) {
                      pvVar10 = *(void **)((longlong)pvVar1 + -8);
                      uVar14 = uStack_60 + 0x28;
                      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
                      goto LAB_14c66f6d7;
                    }
                    ::operator_delete(pvVar10,uVar14);
                  }
                  local_78._Buf[0] = '\0';
                  local_68 = ___xmm_000000000000000f0000000000000000;
                  uStack_60 = _UNK_15076add8;
                  if (0xf < local_40) {
                    uVar14 = local_40 + 1;
                    uVar11 = local_58._Ptr;
                    if (0xfff < uVar14) {
                      uVar11 = *(undefined8 *)(local_58._Ptr + -8);
                      uVar14 = local_40 + 0x28;
                      if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c66f6d7:
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                    ::operator_delete((void *)uVar11,uVar14);
                  }
                }
                uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
                if (local_a0[0] != false) {
                  if (local_98._Mypair._Myval2 !=
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)local_98._Mypair._Myval2);
                    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
                  }
                  bVar3 = sc::Status::isOk();
                  if (bVar3) {
                    do {
                      testing::internal::EqHelper::Compare<char,char,0>
                                ((AssertionResult *)local_a0,"buffer2[i]","expected[i]",
                                 local_7c + uVar17,(char *)((longlong)&local_90.data_ + uVar17));
                      uVar2._Mypair._Myval2 = local_98._Mypair._Myval2;
                      if (local_a0[0] == false) {
                        pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                        if (local_98._Mypair._Myval2 ==
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
                        {
                          pcVar13 = "";
                        }
                        else {
                          pcVar13 = (char *)local_98._Mypair._Myval2;
                          if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
                            pcVar13 = *(char **)local_98._Mypair._Myval2;
                            iVar16 = 0x34;
                            goto LAB_14c66f889;
                          }
                        }
                        iVar16 = 0x34;
                        goto LAB_14c66f889;
                      }
                      if (local_98._Mypair._Myval2 !=
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                        _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)local_98._Mypair._Myval2);
                        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < 4);
                    trio::FileStream::destroy(pFVar9);
                    goto LAB_14c66fd68;
                  }
                  pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                  pSVar6 = sc::Status::get((StatusCode *)local_a0);
                  pcVar13 = pSVar6->message;
                  if (pcVar13 == (char *)0x0) {
                    pcVar13 = "(null)";
                  }
                  std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)
                             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
                  iVar16 = 0x33;
                  goto LAB_14c66f75e;
                }
                pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                if (local_98._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar13 = "";
                }
                else {
                  pcVar13 = (char *)local_98._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
                    pcVar13 = *(char **)local_98._Mypair._Myval2;
                  }
                }
                iVar16 = 0x32;
LAB_14c66f889:
                pAVar7 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_88,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                    ,iVar16,pcVar13);
                testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
                testing::internal::AssertHelper::~AssertHelper(&local_88);
                if (local_a8._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar12 = (undefined8 *)
                            ((longlong)local_a8._Mypair._Myval2 +
                            (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
                  (**(code **)*puVar12)(puVar12,1);
                }
                if (local_98._Mypair._Myval2 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_98._Mypair._Myval2);
                  ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
                }
              }
              else {
                pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
                pSVar6 = sc::Status::get((StatusCode *)local_a0);
                pcVar13 = pSVar6->message;
                if (pcVar13 == (char *)0x0) {
                  pcVar13 = "(null)";
                }
                std::operator<<<std::char_traits<char>_>
                          ((basic_ostream<char,std::char_traits<char>_> *)
                           &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
                iVar16 = 0x31;
LAB_14c66f75e:
                pAVar7 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_88,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                    ,iVar16,"Failed");
                testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
                testing::internal::AssertHelper::~AssertHelper(&local_88);
                if (local_a8._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar12 = (undefined8 *)
                            ((longlong)local_a8._Mypair._Myval2 +
                            (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
                  (**(code **)*puVar12)(puVar12,1);
                  trio::FileStream::destroy(pFVar9);
                  goto LAB_14c66fd68;
                }
              }
              trio::FileStream::destroy(pFVar9);
              goto LAB_14c66fd68;
            }
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_a8);
            if (local_98._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar13 = "";
            }
            else {
              pcVar13 = (char *)local_98._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_98._Mypair._Myval2 + 0x18)) {
                pcVar13 = *(char **)local_98._Mypair._Myval2;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_88,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                ,0x2f,pcVar13);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_88);
            if (local_a8._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar12 = (undefined8 *)
                        ((longlong)local_a8._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_a8._Mypair._Myval2 + 4));
              (**(code **)*puVar12)(puVar12,1);
            }
            if (local_98._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_98._Mypair._Myval2);
              ::operator_delete((void *)local_98._Mypair._Myval2,0x20);
            }
          }
          else {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
            pSVar6 = sc::Status::get((StatusCode *)local_a0);
            pcVar13 = pSVar6->message;
            if (pcVar13 == (char *)0x0) {
              pcVar13 = "(null)";
            }
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_a8,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                                ,0x2e,"Failed");
            testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
            if (local_90.data_ != (AssertHelperData *)0x0) {
              puVar12 = (undefined8 *)
                        ((longlong)&(local_90.data_)->type +
                        (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
              (**(code **)*puVar12)(puVar12,1);
            }
          }
          if (pFVar9 != (FileStream *)0x0) {
            trio::FileStream::destroy(pFVar9);
          }
          goto LAB_14c66fd68;
        }
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
        pSVar6 = sc::Status::get((StatusCode *)local_a0);
        pcVar13 = pSVar6->message;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
        iVar16 = 0x28;
      }
      else {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_90);
        pSVar6 = sc::Status::get((StatusCode *)local_a0);
        pcVar13 = pSVar6->message;
        if (pcVar13 == (char *)0x0) {
          pcVar13 = "(null)";
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,pcVar13);
        iVar16 = 0x26;
      }
LAB_14c66f34c:
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\triotests\\TestStreamsIntegration.cpp"
                          ,iVar16,"Failed");
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
      if (local_90.data_ != (AssertHelperData *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)&(local_90.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_90.data_ + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
    }
  }
LAB_14c66fd68:
  trio::FileStream::destroy(pFVar8);
LAB_14c66fd70:
  trio::FileStream::destroy(pFVar4);
  return;
}

// `scalar_deleting_destructor' @ 14c66fe70

void * __thiscall
StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>::_scalar_deleting_destructor_
          (StreamTest_PersistenceIntegrationTest_Test<trio::FileStream> *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c66feb0

Test * __thiscall
testing::internal::TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>::
CreateTest(TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7__StreamTest_PersistenceIntegrationTest_Test_VFileStream_trio____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c66fef0

void * __thiscall
testing::internal::TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetSetUpCaseOrSuite @ 14c66ff30

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c66ffd0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c670070

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c670110

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c6701b0

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c670250

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c6702f0

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c670390

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// Register @ 14c670430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_PersistenceIntegrationTest_Test>,testing::internal::Types1<trio::MemoryMappedFileStream>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__StreamTest_PersistenceIntegrationTest_Test_VMemoryMappedFileStream_trio_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::MemoryMappedFileStream>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<StreamTest<trio::MemoryMappedFileStream>_>::dummy_,(_func_void *)p_Var9,
             (_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6708c2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6708c2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6708c2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6708c2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6708c2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6708c2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6708c2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c670910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_PersistenceIntegrationTest_Test>,testing::internal::Types2<trio::FileStream,trio::MemoryMappedFileStream>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__StreamTest_PersistenceIntegrationTest_Test_VFileStream_trio_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>::
           GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<StreamTest_PersistenceIntegrationTest_Test<trio::FileStream>_>::
            GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<StreamTest<trio::FileStream>_>::dummy_,(_func_void *)p_Var10,
             (_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c670daf;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c670daf;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c670daf;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c670daf;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c670daf;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c670daf;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c670daf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_PersistenceIntegrationTest_Test>,testing::internal::Types1<trio::MemoryMappedFileStream>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c670e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_ReopenStreamContinueWork_Test>,testing::internal::Types1<trio::MemoryMappedFileStream>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__StreamTest_ReopenStreamContinueWork_Test_VMemoryMappedFileStream_trio_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::MemoryMappedFileStream>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<StreamTest<trio::MemoryMappedFileStream>_>::dummy_,(_func_void *)p_Var9,
             (_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6712b2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6712b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6712b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6712b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6712b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6712b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6712b2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c671300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_ReopenStreamContinueWork_Test>,testing::internal::Types2<trio::FileStream,trio::MemoryMappedFileStream>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__StreamTest_ReopenStreamContinueWork_Test_VFileStream_trio_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>::
           GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<StreamTest_ReopenStreamContinueWork_Test<trio::FileStream>_>::
            GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<StreamTest<trio::FileStream>_>::dummy_,(_func_void *)p_Var10,
             (_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c67179f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c67179f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c67179f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c67179f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c67179f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c67179f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c67179f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<StreamTest,testing::internal::TemplateSel<StreamTest_ReopenStreamContinueWork_Test>,testing::internal::Types1<trio::MemoryMappedFileStream>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

