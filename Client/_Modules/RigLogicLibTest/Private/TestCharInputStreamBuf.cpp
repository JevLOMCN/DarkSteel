// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 28

// test_info_'' @ 14139ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'CharInputStreamBufTest_InputMixedDataTypes_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  void *pvVar5;
  char *pcVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pTVar2 = ::operator_new(8);
  if (pTVar2 == (TestFactoryBase *)0x0) {
    pTVar2 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar2 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_VCharInputStreamBufTest_InputMixedDataTypes_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                      ,0x2e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                      ,0x2e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x86;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
  *(undefined8 *)(pcVar6 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar6 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar6 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar6 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar6 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar6 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar6 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar6 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar6 + 0x68) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar6 + 0x78) = uVar1;
  *(undefined4 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_4_;
  *(undefined2 *)(pcVar6 + 0x84) = ::s_C__Workspace_UnrealEngine_Engin._132_2_;
  pcVar6[0x86] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000086;
  uStack_40 = _UNK_15287b688;
  uVar1 = *(undefined8 *)(pcVar6 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar6;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar6 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar6 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar6 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar6 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar6 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar6 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar1;
  *(undefined4 *)(local_58._Ptr + 0x80) = *(undefined4 *)(pcVar6 + 0x80);
  *(undefined2 *)(local_58._Ptr + 0x84) = *(undefined2 *)(pcVar6 + 0x84);
  *(local_58._Ptr + 0x86) = pcVar6[0x86];
  local_38 = 0x2e;
  CharInputStreamBufTest_InputMixedDataTypes_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("CharInputStreamBufTest","InputMixedDataTypes",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139d0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'CharInputStreamBufTest_InputString_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  void *pvVar5;
  char *pcVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pTVar2 = ::operator_new(8);
  if (pTVar2 == (TestFactoryBase *)0x0) {
    pTVar2 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar2 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_VCharInputStreamBufTest_InputString_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                      ,0x14);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                      ,0x14);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x86;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
  *(undefined8 *)(pcVar6 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar6 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar6 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar6 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar6 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar6 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar6 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar6 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar6 + 0x68) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar6 + 0x78) = uVar1;
  *(undefined4 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_4_;
  *(undefined2 *)(pcVar6 + 0x84) = ::s_C__Workspace_UnrealEngine_Engin._132_2_;
  pcVar6[0x86] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000086;
  uStack_40 = _UNK_15287b688;
  uVar1 = *(undefined8 *)(pcVar6 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar6;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar6 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar6 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar6 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar6 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar6 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar6 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar1;
  *(undefined4 *)(local_58._Ptr + 0x80) = *(undefined4 *)(pcVar6 + 0x80);
  *(undefined2 *)(local_58._Ptr + 0x84) = *(undefined2 *)(pcVar6 + 0x84);
  *(local_58._Ptr + 0x86) = pcVar6[0x86];
  local_38 = 0x14;
  CharInputStreamBufTest_InputString_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("CharInputStreamBufTest","InputString",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c613720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CharInputStreamBufTest_InputString_Test::TestBody(CharInputStreamBufTest_InputString_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  size_t sVar3;
  allocator<char> *paVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  undefined1 auStackY_11e8 [32];
  AssertionResult local_11b8;
  char local_11a8 [8];
  char local_11a0 [8];
  AssertHelper local_1198;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_1190;
  FakeStream local_1188;
  basic_istream<char,std::char_traits<char>_> local_1168;
  allocator<char> *local_10e8;
  undefined8 uStack_10e0;
  longlong local_10d8;
  ulonglong local_10d0;
  _Bxty local_10c8;
  undefined8 local_10b8;
  ulonglong uStack_10b0;
  _Bxty local_10a8;
  ulonglong local_1090;
  basic_streambuf<char,std::char_traits<char>_> local_1088;
  FakeStream *local_1020;
  undefined1 local_1018 [4096];
  ulonglong local_18 [2];
  
  local_18[1] = 0x14c613738;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_11e8;
  local_11a0._0_2_ = s_a_space_delimited__string._24_2_;
  local_1188.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1188.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1188.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1188.position = 0;
  local_11b8._0_8_ = s_a_space_delimited__string._0_8_;
  local_11b8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )s_a_space_delimited__string._8_8_;
  local_11a8 = (char  [8])s_a_space_delimited__string._16_8_;
  sVar3 = strlen(&local_11b8.success_);
  tersetests::FakeStream::write(&local_1188,&local_11b8.success_,sVar3);
  local_1188.position = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (&local_1088);
  local_1088._padding_ =
       (longlong)&___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1020 = &local_1188;
  memset(local_1018,0,0x1000);
  *local_1088._IGfirst = (char *)local_18;
  *local_1088._IGnext = (char *)local_18;
  *local_1088._IGcount = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_1168,&local_1088,false);
  local_10d8 = 0;
  uStack_10e0 = 0;
  local_10e8 = (allocator<char> *)0x0;
  local_10d0 = 0xf;
  std::operator>><char,std::char_traits<char>,std::allocator<char>_>
            (&local_1168,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
  paVar4 = (allocator<char> *)&local_10e8;
  if (0xf < local_10d0) {
    paVar4 = local_10e8;
  }
  if ((local_10d8 == 1) && (*paVar4 == (allocator<char>)0x61)) {
    testing::AssertionSuccess(&local_11b8);
  }
  else {
    testing::internal::
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,"a");
    testing::PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
    testing::internal::EqFailure
              (&local_11b8,"result","\"a\"",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,false)
    ;
    if (0xf < uStack_10b0) {
      pvVar1 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar13 = uStack_10b0 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c61392a;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar13 = local_1090 + 1;
      uVar10 = local_10a8._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar13 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar10)) {
LAB_14c61392a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
    }
  }
  uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
  if (local_11b8.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1198);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x22,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1190);
    if (local_1198.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_1198.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1198.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar13 = local_10d0 + 1;
      paVar4 = local_10e8;
      if (0xfff < uVar13) {
        paVar4 = *(allocator<char> **)(local_10e8 + -8);
        uVar13 = local_10d0 + 0x28;
        if ((allocator<char> *)0x1f < local_10e8 + (-8 - (longlong)paVar4)) goto LAB_14c614312;
      }
      ::operator_delete(paVar4,uVar13);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8 = (allocator<char> *)((ulonglong)local_10e8 & 0xffffffffffffff00);
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar13 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      pcVar11 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      uVar13 = uVar13 + 0x27;
      if ((char *)0x1f < local_1188.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
LAB_14c614312:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14c614328;
  }
  if (local_11b8.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_11b8.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  std::operator>><char,std::char_traits<char>,std::allocator<char>_>
            (&local_1168,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
  paVar4 = (allocator<char> *)&local_10e8;
  if (0xf < local_10d0) {
    paVar4 = local_10e8;
  }
  if (local_10d8 == 5) {
    iVar7 = *(int *)paVar4 + -0x63617073;
    if (iVar7 == 0) {
      iVar7 = (byte)paVar4[4] - 0x65;
    }
    if (iVar7 != 0) goto LAB_14c6139bd;
    testing::AssertionSuccess(&local_11b8);
  }
  else {
LAB_14c6139bd:
    testing::internal::
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,"space")
    ;
    testing::PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
    testing::internal::EqFailure
              (&local_11b8,"result","\"space\"",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,false)
    ;
    if (0xf < uStack_10b0) {
      pvVar1 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar13 = uStack_10b0 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c613a7e;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar13 = local_1090 + 1;
      uVar10 = local_10a8._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar13 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar10)) {
LAB_14c613a7e:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
    }
  }
  uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
  if (local_11b8.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1198);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x25,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1190);
    if (local_1198.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_1198.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1198.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar13 = local_10d0 + 1;
      paVar4 = local_10e8;
      if (0xfff < uVar13) {
        paVar4 = *(allocator<char> **)(local_10e8 + -8);
        uVar13 = local_10d0 + 0x28;
        if ((allocator<char> *)0x1f < local_10e8 + (-8 - (longlong)paVar4)) goto LAB_14c6141d1;
      }
      ::operator_delete(paVar4,uVar13);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8 = (allocator<char> *)((ulonglong)local_10e8 & 0xffffffffffffff00);
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar13 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      pcVar11 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c6141d1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14c614328;
  }
  if (local_11b8.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_11b8.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  std::operator>><char,std::char_traits<char>,std::allocator<char>_>
            (&local_1168,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
  paVar4 = (allocator<char> *)&local_10e8;
  if (0xf < local_10d0) {
    paVar4 = local_10e8;
  }
  if (local_10d8 == 9) {
    lVar8 = *(longlong *)paVar4 + -0x6574696d696c6564;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)(byte)paVar4[8] - 100;
    }
    if (lVar8 != 0) goto LAB_14c613b1a;
    testing::AssertionSuccess(&local_11b8);
  }
  else {
LAB_14c613b1a:
    testing::internal::
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,
             "delimited");
    testing::PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
    testing::internal::EqFailure
              (&local_11b8,"result","\"delimited\"",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,false)
    ;
    if (0xf < uStack_10b0) {
      pvVar1 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar13 = uStack_10b0 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c613bdb;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar13 = local_1090 + 1;
      uVar10 = local_10a8._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar13 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar10)) {
LAB_14c613bdb:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
    }
  }
  uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
  if (local_11b8.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1198);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x28,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1190);
    if (local_1198.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_1198.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1198.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar13 = local_10d0 + 1;
      paVar4 = local_10e8;
      if (0xfff < uVar13) {
        paVar4 = *(allocator<char> **)(local_10e8 + -8);
        uVar13 = local_10d0 + 0x28;
        if ((allocator<char> *)0x1f < local_10e8 + (-8 - (longlong)paVar4)) goto LAB_14c614084;
      }
      ::operator_delete(paVar4,uVar13);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8 = (allocator<char> *)((ulonglong)local_10e8 & 0xffffffffffffff00);
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar13 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      pcVar11 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c614084:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14c614328;
  }
  if (local_11b8.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_11b8.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  std::operator>><char,std::char_traits<char>,std::allocator<char>_>
            (&local_1168,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
  paVar4 = (allocator<char> *)&local_10e8;
  if (0xf < local_10d0) {
    paVar4 = local_10e8;
  }
  if (local_10d8 == 6) {
    iVar7 = *(int *)paVar4 + -0x69727473;
    if (iVar7 == 0) {
      iVar7 = *(ushort *)(paVar4 + 4) - 0x676e;
    }
    if (iVar7 != 0) goto LAB_14c613c6a;
    testing::AssertionSuccess(&local_11b8);
  }
  else {
LAB_14c613c6a:
    testing::internal::
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,"string"
            );
    testing::PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
    testing::internal::EqFailure
              (&local_11b8,"result","\"string\"",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,false)
    ;
    if (0xf < uStack_10b0) {
      pvVar1 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar13 = uStack_10b0 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c613d2b;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar13 = local_1090 + 1;
      uVar10 = local_10a8._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar13 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar10)) {
LAB_14c613d2b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
    }
  }
  uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
  if (local_11b8.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1190);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_1198,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x2b,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_1198);
    if (local_1190._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_1190._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_1190._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar13 = local_10d0 + 1;
      paVar4 = local_10e8;
      if (0xfff < uVar13) {
        paVar4 = *(allocator<char> **)(local_10e8 + -8);
        uVar13 = local_10d0 + 0x28;
        if ((allocator<char> *)0x1f < local_10e8 + (-8 - (longlong)paVar4)) goto LAB_14c613f37;
      }
      ::operator_delete(paVar4,uVar13);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8 = (allocator<char> *)((ulonglong)local_10e8 & 0xffffffffffffff00);
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar13 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      pcVar11 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c613f37:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Deallocate_for_capacity
                ((allocator<char> *)&local_10e8,(char *)local_10e8,local_10d0);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8 = (allocator<char> *)((ulonglong)local_10e8 & 0xffffffffffffff00);
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar13 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      pcVar11 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_14c614328:
  ::operator_delete(pcVar11,uVar13);
  return;
}

// `scalar_deleting_destructor' @ 14c614360

void * __thiscall
CharInputStreamBufTest_InputString_Test::_scalar_deleting_destructor_
          (CharInputStreamBufTest_InputString_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6143a0

Test * __thiscall
testing::internal::TestFactoryImpl<CharInputStreamBufTest_InputString_Test>::CreateTest
          (TestFactoryImpl<CharInputStreamBufTest_InputString_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7CharInputStreamBufTest_InputString_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6143e0

void * __thiscall
testing::internal::TestFactoryImpl<CharInputStreamBufTest_InputString_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<CharInputStreamBufTest_InputString_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<CharInputStreamBufTest_InputString_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c614420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CharInputStreamBufTest_InputMixedDataTypes_Test::TestBody
          (CharInputStreamBufTest_InputMixedDataTypes_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  size_t sVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  undefined8 uVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  int iVar10;
  void *pvVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined1 auStackY_11e8 [32];
  AssertHelper local_11b8;
  AssertionResult local_11b0;
  char local_11a0 [4];
  char local_119c;
  int local_1198;
  float local_1194;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_1190;
  FakeStream local_1188;
  basic_istream<char,std::char_traits<char>_> local_1168;
  _Bxty local_10e8;
  longlong local_10d8;
  ulonglong local_10d0;
  _Bxty local_10c8;
  undefined8 local_10b8;
  ulonglong uStack_10b0;
  _Bxty local_10a8;
  ulonglong local_1090;
  basic_streambuf<char,std::char_traits<char>_> local_1088;
  FakeStream *local_1020;
  undefined1 local_1018 [4096];
  ulonglong local_18 [2];
  
  local_18[1] = 0x14c61443d;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_11e8;
  local_11a0 = (char  [4])s_42_word_3_14___last_._16_4_;
  local_119c = s_42_word_3_14___last_[0x14];
  local_1188.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1188.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1188.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1188.position = 0;
  local_11b0._0_8_ = s_42_word_3_14___last_._0_8_;
  local_11b0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )s_42_word_3_14___last_._8_8_;
  sVar4 = strlen(&local_11b0.success_);
  tersetests::FakeStream::write(&local_1188,&local_11b0.success_,sVar4);
  local_1188.position = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (&local_1088);
  local_1088._padding_ =
       (longlong)&___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1020 = &local_1188;
  memset(local_1018,0,0x1000);
  *local_1088._IGfirst = (char *)local_18;
  *local_1088._IGnext = (char *)local_18;
  *local_1088._IGcount = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_1168,&local_1088,false);
  local_10d8 = 0;
  local_10e8._8_8_ = 0;
  local_10e8._Ptr = (char *)0x0;
  local_10d0 = 0xf;
  local_1198 = 0;
  local_1194 = 0.0;
  std::basic_istream<char,std::char_traits<char>_>::operator>>(&local_1168,&local_1198);
  local_11b8.data_._0_4_ = 0x2a;
  if (local_1198 == 0x2a) {
    testing::AssertionSuccess(&local_11b0);
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10a8,(int *)&local_11b8,&local_1198);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10c8,&local_1198,(int *)&local_11b8);
    testing::internal::EqFailure(&local_11b0,"intResult","42",pbVar6,pbVar5,false);
    if (0xf < uStack_10b0) {
      pvVar2 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar14 = uStack_10b0 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c614630;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar14 = local_1090 + 1;
      uVar7 = local_10a8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar14 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar7)) {
LAB_14c614630:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
  }
  uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
  if (local_11b0.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_11b8);
    if (local_11b0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_11b0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b0.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_11b0.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x3c,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1190);
    plVar1 = (longlong *)CONCAT44(local_11b8.data_._4_4_,local_11b8.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar13)(puVar13,1);
    }
    uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
    if (local_11b0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar14 = local_10d0 + 1;
      uVar7 = local_10e8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10e8._Ptr + -8);
        uVar14 = local_10d0 + 0x28;
        if ((char *)0x1f < local_10e8._Ptr + (-8 - uVar7)) goto LAB_14c614ff4;
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      uVar14 = uVar14 + 0x27;
      if ((char *)0x1f < local_1188.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar12)) {
LAB_14c614ff4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14c61500a;
  }
  if (local_11b0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_11b0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  std::operator>><char,std::char_traits<char>,std::allocator<char>_>
            (&local_1168,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
  uVar7 = &local_10e8;
  if (0xf < local_10d0) {
    uVar7 = local_10e8._Ptr;
  }
  if ((local_10d8 == 4) && (*(int *)uVar7 == 0x64726f77)) {
    testing::AssertionSuccess(&local_11b0);
  }
  else {
    testing::internal::
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,"word");
    testing::PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
    testing::internal::EqFailure
              (&local_11b0,"strResult","\"word\"",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,false)
    ;
    if (0xf < uStack_10b0) {
      pvVar2 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar14 = uStack_10b0 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c61476f;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar14 = local_1090 + 1;
      uVar7 = local_10a8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar14 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar7)) {
LAB_14c61476f:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
  }
  uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
  if (local_11b0.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_11b8);
    if (local_11b0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_11b0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b0.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_11b0.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x3f,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1190);
    plVar1 = (longlong *)CONCAT44(local_11b8.data_._4_4_,local_11b8.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar13)(puVar13,1);
    }
    uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
    if (local_11b0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar14 = local_10d0 + 1;
      uVar7 = local_10e8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10e8._Ptr + -8);
        uVar14 = local_10d0 + 0x28;
        if ((char *)0x1f < local_10e8._Ptr + (-8 - uVar7)) goto LAB_14c614ec3;
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8._Ptr = local_10e8._Ptr & 0xffffffffffffff00;
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c614ec3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14c61500a;
  }
  if (local_11b0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_11b0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  std::basic_istream<char,std::char_traits<char>_>::operator>>(&local_1168,&local_1194);
  local_11b8.data_._0_4_ = 0x4048f5c3;
  if (local_1194 == __real_4048f5c3) {
    testing::AssertionSuccess(&local_11b0);
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10a8,(float *)&local_11b8,&local_1194);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10c8,&local_1194,(float *)&local_11b8);
    testing::internal::EqFailure(&local_11b0,"floatResult","3.14f",pbVar6,pbVar5,false);
    if (0xf < uStack_10b0) {
      pvVar2 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar14 = uStack_10b0 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c6148b1;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar14 = local_1090 + 1;
      uVar7 = local_10a8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar14 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar7)) {
LAB_14c6148b1:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
  }
  uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
  if (local_11b0.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_11b8);
    if (local_11b0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_11b0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b0.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_11b0.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x42,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1190);
    plVar1 = (longlong *)CONCAT44(local_11b8.data_._4_4_,local_11b8.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar13)(puVar13,1);
    }
    uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
    if (local_11b0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar14 = local_10d0 + 1;
      uVar7 = local_10e8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10e8._Ptr + -8);
        uVar14 = local_10d0 + 0x28;
        if ((char *)0x1f < local_10e8._Ptr + (-8 - uVar7)) goto LAB_14c614d76;
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8._Ptr = local_10e8._Ptr & 0xffffffffffffff00;
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c614d76:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    goto LAB_14c61500a;
  }
  if (local_11b0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_11b0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  std::operator>><char,std::char_traits<char>,std::allocator<char>_>
            (&local_1168,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
  uVar7 = &local_10e8;
  if (0xf < local_10d0) {
    uVar7 = local_10e8._Ptr;
  }
  if (local_10d8 == 5) {
    iVar10 = *(int *)uVar7 + -0x7473616c;
    if (iVar10 == 0) {
      iVar10 = (byte)*(undefined1 *)(uVar7 + 4) - 0x2e;
    }
    if (iVar10 != 0) goto LAB_14c61493c;
    testing::AssertionSuccess(&local_11b0);
  }
  else {
LAB_14c61493c:
    testing::internal::
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,"last.")
    ;
    testing::PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10e8);
    testing::internal::EqFailure
              (&local_11b0,"strResult","\"last.\"",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10c8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_10a8,false)
    ;
    if (0xf < uStack_10b0) {
      pvVar2 = (void *)CONCAT71(local_10c8._1_7_,local_10c8._Buf[0]);
      uVar14 = uStack_10b0 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_10b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c6149fd;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_10c8._Buf[0] = '\0';
    local_10b8 = ___xmm_000000000000000f0000000000000000;
    uStack_10b0 = _UNK_15076add8;
    if (0xf < local_1090) {
      uVar14 = local_1090 + 1;
      uVar7 = local_10a8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10a8._Ptr + -8);
        uVar14 = local_1090 + 0x28;
        if ((char *)0x1f < local_10a8._Ptr + (-8 - uVar7)) {
LAB_14c6149fd:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
  }
  uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
  if (local_11b0.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_1190);
    if (local_11b0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_11b0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b0.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_11b0.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_11b8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharInputStreamBuf.cpp"
                        ,0x45,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper(&local_11b8);
    if (local_1190._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1190._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_1190._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    uVar3._Mypair._Myval2 = local_11b0.message_._Mypair._Myval2;
    if (local_11b0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar14 = local_10d0 + 1;
      uVar7 = local_10e8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10e8._Ptr + -8);
        uVar14 = local_10d0 + 0x28;
        if ((char *)0x1f < local_10e8._Ptr + (-8 - uVar7)) goto LAB_14c614c29;
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8._Ptr = local_10e8._Ptr & 0xffffffffffffff00;
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c614c29:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_11b0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    if (0xf < local_10d0) {
      uVar14 = local_10d0 + 1;
      uVar7 = local_10e8._Ptr;
      if (0xfff < uVar14) {
        uVar7 = *(undefined8 *)(local_10e8._Ptr + -8);
        uVar14 = local_10d0 + 0x28;
        if ((char *)0x1f < local_10e8._Ptr + (-8 - uVar7)) goto LAB_14c614adc;
      }
      ::operator_delete((void *)uVar7,uVar14);
    }
    local_10d8 = 0;
    local_10d0 = 0xf;
    local_10e8._Ptr = local_10e8._Ptr & 0xffffffffffffff00;
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_1088);
    if (local_1188.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
             (longlong)local_1188.data._Mypair._Myval2._Myfirst;
    pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1188.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c614adc:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_14c61500a:
  ::operator_delete(pcVar12,uVar14);
  return;
}

// `scalar_deleting_destructor' @ 14c615040

void * __thiscall
CharInputStreamBufTest_InputMixedDataTypes_Test::_scalar_deleting_destructor_
          (CharInputStreamBufTest_InputMixedDataTypes_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c615080

Test * __thiscall
testing::internal::TestFactoryImpl<CharInputStreamBufTest_InputMixedDataTypes_Test>::CreateTest
          (TestFactoryImpl<CharInputStreamBufTest_InputMixedDataTypes_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7CharInputStreamBufTest_InputMixedDataTypes_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6150c0

void * __thiscall
testing::internal::TestFactoryImpl<CharInputStreamBufTest_InputMixedDataTypes_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<CharInputStreamBufTest_InputMixedDataTypes_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<CharInputStreamBufTest_InputMixedDataTypes_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// allocator<char>_> @ 14c615100

basic_istream<char,std::char_traits<char>_> * __cdecl
std::operator>><char,std::char_traits<char>,std::allocator<char>_>
          (basic_istream<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  locale *plVar5;
  ctype<char> *pcVar6;
  undefined8 *puVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  locale local_28;
  
  bVar2 = false;
  uVar4 = 0;
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 8))();
  }
  bVar3 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,false);
  uVar10 = 0;
  if (bVar3) {
    plVar5 = std::ios_base::getloc
                       ((ios_base *)(&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),
                        &local_28);
    pcVar6 = use_facet<std::ctype<char>_>(plVar5);
    if ((local_28._Ptr != (_Locimp *)0x0) &&
       (puVar7 = (undefined8 *)(**(code **)((local_28._Ptr)->_padding_ + 0x10))(),
       puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
    (param_2->_Mypair)._Myval2._Mysize = 0;
    pbVar8 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (pbVar8->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    iVar1 = *(int *)(*(longlong *)param_1 + 4);
    uVar9 = *(ulonglong *)(&param_1->field_0x28 + iVar1);
    uVar10 = uVar4;
    bVar3 = bVar2;
    if (((longlong)uVar9 < 1) || (0x7ffffffffffffffe < uVar9)) {
      uVar9 = 0x7fffffffffffffff;
      uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&param_1->field_0x48 + iVar1));
    }
    else {
      uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&param_1->field_0x48 + iVar1));
      if (uVar9 == 0) goto LAB_14c615237;
    }
    do {
      bVar2 = bVar3;
      if (uVar4 == 0xffffffff) {
        uVar10 = 1;
        break;
      }
      if ((*(byte *)((pcVar6->_Ctype)._Table + (uVar4 & 0xff)) & 0x48) != 0) break;
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back
                (param_2,(char)uVar4);
      bVar2 = true;
      uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
      uVar9 = uVar9 - 1;
      bVar3 = true;
    } while (uVar9 != 0);
  }
LAB_14c615237:
  uVar4 = uVar10 | 2;
  if (bVar2) {
    uVar4 = uVar10;
  }
  *(undefined8 *)(&param_1->field_0x28 + *(int *)(*(longlong *)param_1 + 4)) = 0;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),uVar4,false);
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 0x10))
              ();
  }
  return param_1;
}

// CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[2]> @ 14c6152a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[2]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [2])

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  sVar3 = strlen(*param_4);
  _Size = (param_3->_Mypair)._Myval2._Mysize;
  _Buf1 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  if (_Size == sVar3) {
    if (_Size != 0) {
      iVar2 = memcmp(_Buf1,param_4,_Size);
      if (iVar2 != 0) goto LAB_14c61530d;
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c61530d:
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
    PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar6 = uStack_60 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c6153c9;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar6 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar6 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c6153c9:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[6]> @ 14c615410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[6]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [6])

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  sVar3 = strlen(*param_4);
  _Size = (param_3->_Mypair)._Myval2._Mysize;
  _Buf1 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  if (_Size == sVar3) {
    if (_Size != 0) {
      iVar2 = memcmp(_Buf1,param_4,_Size);
      if (iVar2 != 0) goto LAB_14c61547d;
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c61547d:
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
    PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar6 = uStack_60 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c615539;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar6 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar6 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c615539:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[7]> @ 14c615580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[7]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [7])

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  sVar3 = strlen(*param_4);
  _Size = (param_3->_Mypair)._Myval2._Mysize;
  _Buf1 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  if (_Size == sVar3) {
    if (_Size != 0) {
      iVar2 = memcmp(_Buf1,param_4,_Size);
      if (iVar2 != 0) goto LAB_14c6155ed;
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c6155ed:
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
    PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar6 = uStack_60 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c6156a9;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar6 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar6 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c6156a9:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[10]> @ 14c6156f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[10]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [10])

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf1;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  sVar3 = strlen(*param_4);
  _Size = (param_3->_Mypair)._Myval2._Mysize;
  _Buf1 = param_3;
  if (0xf < (param_3->_Mypair)._Myval2._Myres) {
    _Buf1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (param_3->_Mypair)._Myval2._Bx._Ptr;
  }
  if (_Size == sVar3) {
    if (_Size != 0) {
      iVar2 = memcmp(_Buf1,param_4,_Size);
      if (iVar2 != 0) goto LAB_14c61575d;
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c61575d:
    FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
    ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
    PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar6 = uStack_60 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c615819;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar6 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar6 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c615819:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[2]> @ 14c615860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[2]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [2])

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar4 = uStack_60 + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar4) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar4 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c615948;
    }
    ::operator_delete(pvVar2,uVar4);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar4 = local_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) {
LAB_14c615948:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[6]> @ 14c615990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[6]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [6])

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar4 = uStack_60 + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar4) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar4 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c615a78;
    }
    ::operator_delete(pvVar2,uVar4);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar4 = local_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) {
LAB_14c615a78:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[7]> @ 14c615ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[7]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [7])

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar4 = uStack_60 + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar4) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar4 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c615ba8;
    }
    ::operator_delete(pvVar2,uVar4);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar4 = local_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) {
LAB_14c615ba8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[10]> @ 14c615bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[10]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          char (*param_4) [10])

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,*param_4);
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar4 = uStack_60 + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar4) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar4 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c615cd8;
    }
    ::operator_delete(pvVar2,uVar4);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar4 = local_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) {
LAB_14c615cd8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<char_[2],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c615d20

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<char_[2],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          char (*param_1) [2],
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format(__return_storage_ptr__,*param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<char_[6],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c615d40

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<char_[6],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          char (*param_1) [6],
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format(__return_storage_ptr__,*param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<char_[7],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c615d60

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<char_[7],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          char (*param_1) [7],
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format(__return_storage_ptr__,*param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<char_[10],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c615d80

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<char_[10],std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          char (*param_1) [10],
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FormatForComparison<char_const_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  ::Format(__return_storage_ptr__,*param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[2]> @ 14c615da0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[2]>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          char (*param_2) [2])

{
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[6]> @ 14c615dc0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[6]>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          char (*param_2) [6])

{
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[7]> @ 14c615de0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[7]>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          char (*param_2) [7])

{
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[10]> @ 14c615e00

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,char_[10]>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          char (*param_2) [10])

{
  PrintToString<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// push_back @ 14c615e20

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char param_1)

{
  ulonglong uVar1;
  ulonglong _Size;
  ulonglong uVar2;
  char *_Src;
  char *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  _Size = (this->_Mypair)._Myval2._Mysize;
  uVar2 = (this->_Mypair)._Myval2._Myres;
  if (_Size < uVar2) {
    (this->_Mypair)._Myval2._Mysize = _Size + 1;
    if (0xf < uVar2) {
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
    }
    (this->_Mypair)._Myval2._Bx._Buf[_Size] = param_1;
    (this->_Mypair)._Myval2._Bx._Buf[_Size + 1] = '\0';
    return;
  }
  if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = _Size + 1 | 0xf;
  uVar4 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
     (uVar1 = uVar2 + (uVar2 >> 1), uVar4 = uVar3, uVar3 < uVar1)) {
    uVar4 = uVar1;
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 + 1);
  (this->_Mypair)._Myval2._Mysize = _Size + 1;
  (this->_Mypair)._Myval2._Myres = uVar4;
  if (uVar2 < 0x10) {
    memcpy(_Dst,this,_Size);
    _Dst[_Size] = param_1;
    _Dst[_Size + 1] = '\0';
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,_Size);
    uVar4 = uVar2 + 1;
    _Dst[_Size] = param_1;
    _Dst[_Size + 1] = '\0';
    pcVar5 = _Src;
    if (0xfff < uVar4) {
      pcVar5 = *(char **)(_Src + -8);
      uVar4 = uVar2 + 0x28;
      if ((char *)0x1f < _Src + (-8 - (longlong)pcVar5)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar5,uVar4);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return;
}

