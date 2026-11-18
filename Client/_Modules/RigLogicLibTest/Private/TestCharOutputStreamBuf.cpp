// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 15

// test_info_'' @ 14139d2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'CharOutputStreamBufTest_OutputMixedDataTypes_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VCharOutputStreamBufTest_OutputMixedDataTypes_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                      ,0x30);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                      ,0x30);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x87;
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
  pcVar6[0x86] = ::s_C__Workspace_UnrealEngine_Engin[0x86];
  pcVar6[0x87] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000087;
  uStack_40 = _UNK_15289e298;
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
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  local_38 = 0x30;
  CharOutputStreamBufTest_OutputMixedDataTypes_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("CharOutputStreamBufTest","OutputMixedDataTypes",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139d530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'CharOutputStreamBufTest_OutputMultipleStrings_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VCharOutputStreamBufTest_OutputMultipleStrings_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                      ,0x22);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                      ,0x22);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x87;
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
  pcVar6[0x86] = ::s_C__Workspace_UnrealEngine_Engin[0x86];
  pcVar6[0x87] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000087;
  uStack_40 = _UNK_15289e298;
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
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  local_38 = 0x22;
  CharOutputStreamBufTest_OutputMultipleStrings_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("CharOutputStreamBufTest","OutputMultipleStrings",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139d770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'CharOutputStreamBufTest_OutputSingleString_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VCharOutputStreamBufTest_OutputSingleString_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                      ,0x14);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                      ,0x14);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x87;
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
  pcVar6[0x86] = ::s_C__Workspace_UnrealEngine_Engin[0x86];
  pcVar6[0x87] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000087;
  uStack_40 = _UNK_15289e298;
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
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  local_38 = 0x14;
  CharOutputStreamBufTest_OutputSingleString_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("CharOutputStreamBufTest","OutputSingleString",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c615f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CharOutputStreamBufTest_OutputSingleString_Test::TestBody
          (CharOutputStreamBufTest_OutputSingleString_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar16;
  undefined1 auStackY_11d8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11a8;
  AssertHelper local_11a0;
  AssertionResult local_1198;
  FakeStream local_1188;
  basic_ostream<char,std::char_traits<char>_> local_1168;
  _Bxty local_10f8;
  undefined8 local_10e8;
  ulonglong uStack_10e0;
  _Bxty local_10d8;
  ulonglong local_10c0;
  basic_streambuf<char,std::char_traits<char>_> local_10b8;
  FakeStream *local_1050;
  char local_1048 [4096];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  uVar15 = 0;
  local_1188.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1188.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1188.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1188.position = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (&local_10b8);
  local_1050 = &local_1188;
  local_10b8._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  memset(local_1048,0,0x1000);
  *local_10b8._IPfirst = local_1048;
  *local_10b8._IPnext = local_1048;
  *local_10b8._IPcount = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_1168,&local_10b8,false);
  local_11a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_0000000f;
  std::operator<<<std::char_traits<char>_>(&local_1168,"a single string");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_1168,std::flush<char,std::char_traits<char>_>);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_11a0.data_ =
       (AssertHelperData *)
       (local_1188.data._Mypair._Myval2._Mylast +
       -(longlong)local_1188.data._Mypair._Myval2._Myfirst);
  if (local_11a0.data_ == (AssertHelperData *)&DAT_0000000f) {
    testing::AssertionSuccess(&local_1198);
    uVar16._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000f;
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10d8,(ulong64 *)&local_11a8,(ulong64 *)&local_11a0);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10f8,(ulong64 *)&local_11a0,(ulong64 *)&local_11a8);
    testing::internal::EqFailure(&local_1198,"stream.size()","expectedSize",pbVar6,pbVar5,false);
    if (0xf < uStack_10e0) {
      pvVar1 = (void *)CONCAT71(local_10f8._1_7_,local_10f8._Buf[0]);
      uVar13 = uStack_10e0 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_10e0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c61615e;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_10f8._Buf[0] = '\0';
    local_10e8 = uVar2;
    uStack_10e0 = uVar3;
    uVar16._Mypair._Myval2 = local_11a8._Mypair._Myval2;
    if (0xf < local_10c0) {
      uVar13 = local_10c0 + 1;
      uVar10 = local_10d8._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_10d8._Ptr + -8);
        uVar13 = local_10c0 + 0x28;
        if ((char *)0x1f < local_10d8._Ptr + (-8 - uVar10)) {
LAB_14c61615e:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
      uVar16._Mypair._Myval2 = local_11a8._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_1198.message_._Mypair._Myval2;
  if (local_1198.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_11a8);
    if (local_1198.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_1198.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1198.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_1198.message_._Mypair._Myval2;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_11a0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                        ,0x1e,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_11a0);
    if (local_11a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_11a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_1198.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1198.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1198.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    local_10b8._padding_ =
         (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
    uVar13 = (longlong)*local_10b8._IPnext - (longlong)*local_10b8._IPfirst;
    if (0 < (longlong)uVar13) {
      tersetests::FakeStream::write(local_1050,local_1048,uVar13);
      *local_10b8._IPcount = *local_10b8._IPcount + (int)uVar13;
      *local_10b8._IPnext = *local_10b8._IPnext + -(int)uVar13;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_10b8);
    if (local_1188.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar13 = (longlong)local_1188.data._Mypair._Myval2._Myend -
               (longlong)local_1188.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_1188.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_1188.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar11,uVar13);
    }
  }
  else {
    if (local_1198.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1198.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar16._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar11 = "a single string" + uVar15;
        pcVar14 = local_1188.data._Mypair._Myval2._Myfirst + uVar15;
        if (*pcVar14 == *pcVar11) {
          testing::AssertionSuccess(&local_1198);
        }
        else {
          pbVar5 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_10d8,pcVar11,pcVar14);
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_10f8,pcVar14,pcVar11);
          testing::internal::EqFailure
                    (&local_1198,"stream.data.data()[i]","expected[i]",pbVar6,pbVar5,false);
          if (0xf < uStack_10e0) {
            pvVar1 = (void *)CONCAT71(local_10f8._1_7_,local_10f8._Buf[0]);
            uVar13 = uStack_10e0 + 1;
            pvVar9 = pvVar1;
            if (0xfff < uVar13) {
              pvVar9 = *(void **)((longlong)pvVar1 + -8);
              uVar13 = uStack_10e0 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9)))
              goto LAB_14c6162e7;
            }
            ::operator_delete(pvVar9,uVar13);
          }
          local_10f8._Buf[0] = '\0';
          local_10e8 = uVar2;
          uStack_10e0 = uVar3;
          if (0xf < local_10c0) {
            uVar13 = local_10c0 + 1;
            uVar10 = local_10d8._Ptr;
            if (0xfff < uVar13) {
              uVar10 = *(undefined8 *)(local_10d8._Ptr + -8);
              uVar13 = local_10c0 + 0x28;
              if ((char *)0x1f < local_10d8._Ptr + (-8 - uVar10)) {
LAB_14c6162e7:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar10,uVar13);
          }
        }
        uVar4._Mypair._Myval2 = local_1198.message_._Mypair._Myval2;
        if (local_1198.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_11a8);
          if (local_1198.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar11 = "";
          }
          else {
            pcVar11 = (char *)local_1198.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_1198.message_._Mypair._Myval2 + 0x18)) {
              pcVar11 = *(char **)local_1198.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_11a0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                              ,0x1f,pcVar11);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_11a0);
          if (local_11a8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar12 = (undefined8 *)
                      ((longlong)local_11a8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4));
            (**(code **)*puVar12)(puVar12,1);
          }
          if (local_1198.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_1198.message_._Mypair._Myval2);
            ::operator_delete((void *)local_1198.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_1198.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_1198.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulonglong)uVar16._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    local_10b8._padding_ =
         (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
    uVar13 = (longlong)*local_10b8._IPnext - (longlong)*local_10b8._IPfirst;
    if (0 < (longlong)uVar13) {
      tersetests::FakeStream::write(local_1050,local_1048,uVar13);
      *local_10b8._IPcount = *local_10b8._IPcount + (int)uVar13;
      *local_10b8._IPnext = *local_10b8._IPnext + -(int)uVar13;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_10b8);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_1188.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c6165a0

void * __thiscall
CharOutputStreamBufTest_OutputSingleString_Test::_scalar_deleting_destructor_
          (CharOutputStreamBufTest_OutputSingleString_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6165e0

Test * __thiscall
testing::internal::TestFactoryImpl<CharOutputStreamBufTest_OutputSingleString_Test>::CreateTest
          (TestFactoryImpl<CharOutputStreamBufTest_OutputSingleString_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7CharOutputStreamBufTest_OutputSingleString_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c616620

void * __thiscall
testing::internal::TestFactoryImpl<CharOutputStreamBufTest_OutputSingleString_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<CharOutputStreamBufTest_OutputSingleString_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<CharOutputStreamBufTest_OutputSingleString_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c616660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CharOutputStreamBufTest_OutputMultipleStrings_Test::TestBody
          (CharOutputStreamBufTest_OutputMultipleStrings_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  undefined1 auStackY_11d8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11a8;
  AssertHelper local_11a0;
  AssertionResult local_1198;
  FakeStream local_1188;
  basic_ostream<char,std::char_traits<char>_> local_1168;
  _Bxty local_10f8;
  undefined8 local_10e8;
  ulonglong uStack_10e0;
  _Bxty local_10d8;
  ulonglong local_10c0;
  basic_streambuf<char,std::char_traits<char>_> local_10b8;
  FakeStream *local_1050;
  char local_1048 [4096];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  uVar16 = 0;
  local_1188.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1188.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1188.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1188.position = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (&local_10b8);
  local_1050 = &local_1188;
  local_10b8._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  memset(local_1048,0,0x1000);
  *local_10b8._IPfirst = local_1048;
  *local_10b8._IPnext = local_1048;
  *local_10b8._IPcount = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_1168,&local_10b8,false);
  local_11a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_0000000f;
  pbVar5 = std::operator<<<std::char_traits<char>_>(&local_1168,"a");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," ");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5,"single");
  std::operator<<<std::char_traits<char>_>(pbVar5," string");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_1168,std::flush<char,std::char_traits<char>_>);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_11a0.data_ =
       (AssertHelperData *)
       (local_1188.data._Mypair._Myval2._Mylast +
       -(longlong)local_1188.data._Mypair._Myval2._Myfirst);
  if (local_11a0.data_ == (AssertHelperData *)&DAT_0000000f) {
    testing::AssertionSuccess(&local_1198);
    uVar17._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000f;
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10d8,(ulong64 *)&local_11a8,(ulong64 *)&local_11a0);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10f8,(ulong64 *)&local_11a0,(ulong64 *)&local_11a8);
    testing::internal::EqFailure(&local_1198,"stream.size()","expectedSize",pbVar7,pbVar6,false);
    if (0xf < uStack_10e0) {
      pvVar1 = (void *)CONCAT71(local_10f8._1_7_,local_10f8._Buf[0]);
      uVar14 = uStack_10e0 + 1;
      pvVar10 = pvVar1;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_10e0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c616863;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_10f8._Buf[0] = '\0';
    local_10e8 = uVar2;
    uStack_10e0 = uVar3;
    uVar17._Mypair._Myval2 = local_11a8._Mypair._Myval2;
    if (0xf < local_10c0) {
      uVar14 = local_10c0 + 1;
      uVar11 = local_10d8._Ptr;
      if (0xfff < uVar14) {
        uVar11 = *(undefined8 *)(local_10d8._Ptr + -8);
        uVar14 = local_10c0 + 0x28;
        if ((char *)0x1f < local_10d8._Ptr + (-8 - uVar11)) {
LAB_14c616863:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar14);
      uVar17._Mypair._Myval2 = local_11a8._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_1198.message_._Mypair._Myval2;
  if (local_1198.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_11a8);
    if (local_1198.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_1198.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1198.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_1198.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_11a0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                        ,0x2c,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper(&local_11a0);
    if (local_11a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_11a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_1198.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1198.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1198.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    local_10b8._padding_ =
         (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
    uVar14 = (longlong)*local_10b8._IPnext - (longlong)*local_10b8._IPfirst;
    if (0 < (longlong)uVar14) {
      tersetests::FakeStream::write(local_1050,local_1048,uVar14);
      *local_10b8._IPcount = *local_10b8._IPcount + (int)uVar14;
      *local_10b8._IPnext = *local_10b8._IPnext + -(int)uVar14;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_10b8);
    if (local_1188.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
               (longlong)local_1188.data._Mypair._Myval2._Myfirst;
      pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
        uVar14 = uVar14 + 0x27;
        if ((char *)0x1f < local_1188.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar12,uVar14);
    }
  }
  else {
    if (local_1198.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1198.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar17._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar12 = "a single string" + uVar16;
        pcVar15 = local_1188.data._Mypair._Myval2._Myfirst + uVar16;
        if (*pcVar15 == *pcVar12) {
          testing::AssertionSuccess(&local_1198);
        }
        else {
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_10d8,pcVar12,pcVar15);
          pbVar7 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_10f8,pcVar15,pcVar12);
          testing::internal::EqFailure
                    (&local_1198,"stream.data.data()[i]","expected[i]",pbVar7,pbVar6,false);
          if (0xf < uStack_10e0) {
            pvVar1 = (void *)CONCAT71(local_10f8._1_7_,local_10f8._Buf[0]);
            uVar14 = uStack_10e0 + 1;
            pvVar10 = pvVar1;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar1 + -8);
              uVar14 = uStack_10e0 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
              goto LAB_14c6169f7;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_10f8._Buf[0] = '\0';
          local_10e8 = uVar2;
          uStack_10e0 = uVar3;
          if (0xf < local_10c0) {
            uVar14 = local_10c0 + 1;
            uVar11 = local_10d8._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_10d8._Ptr + -8);
              uVar14 = local_10c0 + 0x28;
              if ((char *)0x1f < local_10d8._Ptr + (-8 - uVar11)) {
LAB_14c6169f7:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_1198.message_._Mypair._Myval2;
        if (local_1198.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_11a8);
          if (local_1198.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_1198.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_1198.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_1198.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_11a0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                              ,0x2d,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_11a0);
          if (local_11a8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_11a8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_1198.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_1198.message_._Mypair._Myval2);
            ::operator_delete((void *)local_1198.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_1198.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_1198.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)uVar17._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    local_10b8._padding_ =
         (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
    uVar14 = (longlong)*local_10b8._IPnext - (longlong)*local_10b8._IPfirst;
    if (0 < (longlong)uVar14) {
      tersetests::FakeStream::write(local_1050,local_1048,uVar14);
      *local_10b8._IPcount = *local_10b8._IPcount + (int)uVar14;
      *local_10b8._IPnext = *local_10b8._IPnext + -(int)uVar14;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_10b8);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_1188.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c616cb0

void * __thiscall
CharOutputStreamBufTest_OutputMultipleStrings_Test::_scalar_deleting_destructor_
          (CharOutputStreamBufTest_OutputMultipleStrings_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c616cf0

Test * __thiscall
testing::internal::TestFactoryImpl<CharOutputStreamBufTest_OutputMultipleStrings_Test>::CreateTest
          (TestFactoryImpl<CharOutputStreamBufTest_OutputMultipleStrings_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7CharOutputStreamBufTest_OutputMultipleStrings_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c616d30

void * __thiscall
testing::internal::TestFactoryImpl<CharOutputStreamBufTest_OutputMultipleStrings_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<CharOutputStreamBufTest_OutputMultipleStrings_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<CharOutputStreamBufTest_OutputMultipleStrings_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c616d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CharOutputStreamBufTest_OutputMixedDataTypes_Test::TestBody
          (CharOutputStreamBufTest_OutputMixedDataTypes_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  undefined1 auStackY_11d8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11a8;
  AssertHelper local_11a0;
  AssertionResult local_1198;
  FakeStream local_1188;
  basic_ostream<char,std::char_traits<char>_> local_1168;
  _Bxty local_10f8;
  undefined8 local_10e8;
  ulonglong uStack_10e0;
  _Bxty local_10d8;
  ulonglong local_10c0;
  basic_streambuf<char,std::char_traits<char>_> local_10b8;
  FakeStream *local_1050;
  char local_1048 [4096];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  uVar16 = 0;
  local_1188.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1188.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1188.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1188.position = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (&local_10b8);
  local_1050 = &local_1188;
  local_10b8._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  memset(local_1048,0,0x1000);
  *local_10b8._IPfirst = local_1048;
  *local_10b8._IPnext = local_1048;
  *local_10b8._IPcount = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_1168,&local_10b8,false);
  local_11a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000031;
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_1168,0x2a);
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," ");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5,"is");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," ");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5,"less");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," ");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5,"than");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," ");
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,100);
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," \n");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," but ");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5,"greater");
  pbVar5 = std::operator<<<std::char_traits<char>_>(pbVar5," than life. ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,__real_4048f5c3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_1168,std::flush<char,std::char_traits<char>_>);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_11a0.data_ =
       (AssertHelperData *)
       (local_1188.data._Mypair._Myval2._Mylast +
       -(longlong)local_1188.data._Mypair._Myval2._Myfirst);
  if (local_11a0.data_ == (AssertHelperData *)&DAT_00000031) {
    testing::AssertionSuccess(&local_1198);
    uVar17._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000031;
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10d8,(ulong64 *)&local_11a8,(ulong64 *)&local_11a0);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_10f8,(ulong64 *)&local_11a0,(ulong64 *)&local_11a8);
    testing::internal::EqFailure(&local_1198,"stream.size()","expectedSize",pbVar7,pbVar6,false);
    if (0xf < uStack_10e0) {
      pvVar1 = (void *)CONCAT71(local_10f8._1_7_,local_10f8._Buf[0]);
      uVar14 = uStack_10e0 + 1;
      pvVar10 = pvVar1;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_10e0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c61700b;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_10f8._Buf[0] = '\0';
    local_10e8 = uVar2;
    uStack_10e0 = uVar3;
    uVar17._Mypair._Myval2 = local_11a8._Mypair._Myval2;
    if (0xf < local_10c0) {
      uVar14 = local_10c0 + 1;
      uVar11 = local_10d8._Ptr;
      if (0xfff < uVar14) {
        uVar11 = *(undefined8 *)(local_10d8._Ptr + -8);
        uVar14 = local_10c0 + 0x28;
        if ((char *)0x1f < local_10d8._Ptr + (-8 - uVar11)) {
LAB_14c61700b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar14);
      uVar17._Mypair._Myval2 = local_11a8._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_1198.message_._Mypair._Myval2;
  if (local_1198.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_11a8);
    if (local_1198.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_1198.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1198.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_1198.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_11a0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                        ,0x3c,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper(&local_11a0);
    if (local_11a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_11a8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_1198.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1198.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1198.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    local_10b8._padding_ =
         (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
    uVar14 = (longlong)*local_10b8._IPnext - (longlong)*local_10b8._IPfirst;
    if (0 < (longlong)uVar14) {
      tersetests::FakeStream::write(local_1050,local_1048,uVar14);
      *local_10b8._IPcount = *local_10b8._IPcount + (int)uVar14;
      *local_10b8._IPnext = *local_10b8._IPnext + -(int)uVar14;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_10b8);
    if (local_1188.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar14 = (longlong)local_1188.data._Mypair._Myval2._Myend -
               (longlong)local_1188.data._Mypair._Myval2._Myfirst;
      pcVar12 = local_1188.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pcVar12 = *(char **)(local_1188.data._Mypair._Myval2._Myfirst + -8);
        uVar14 = uVar14 + 0x27;
        if ((char *)0x1f < local_1188.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar12,uVar14);
    }
  }
  else {
    if (local_1198.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1198.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar17._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar12 = "42 is less than 100 \n but greater than life. 3.14" + uVar16;
        pcVar15 = local_1188.data._Mypair._Myval2._Myfirst + uVar16;
        if (*pcVar15 == *pcVar12) {
          testing::AssertionSuccess(&local_1198);
        }
        else {
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_10d8,pcVar12,pcVar15);
          pbVar7 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_10f8,pcVar15,pcVar12);
          testing::internal::EqFailure
                    (&local_1198,"stream.data.data()[i]","expected[i]",pbVar7,pbVar6,false);
          if (0xf < uStack_10e0) {
            pvVar1 = (void *)CONCAT71(local_10f8._1_7_,local_10f8._Buf[0]);
            uVar14 = uStack_10e0 + 1;
            pvVar10 = pvVar1;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar1 + -8);
              uVar14 = uStack_10e0 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
              goto LAB_14c61719b;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_10f8._Buf[0] = '\0';
          local_10e8 = uVar2;
          uStack_10e0 = uVar3;
          if (0xf < local_10c0) {
            uVar14 = local_10c0 + 1;
            uVar11 = local_10d8._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_10d8._Ptr + -8);
              uVar14 = local_10c0 + 0x28;
              if ((char *)0x1f < local_10d8._Ptr + (-8 - uVar11)) {
LAB_14c61719b:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_1198.message_._Mypair._Myval2;
        if (local_1198.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_11a8);
          if (local_1198.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_1198.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_1198.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_1198.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_11a0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestCharOutputStreamBuf.cpp"
                              ,0x3d,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_11a0);
          if (local_11a8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_11a8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_1198.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_1198.message_._Mypair._Myval2);
            ::operator_delete((void *)local_1198.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_1198.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_1198.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)uVar17._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_1168);
    local_10b8._padding_ =
         (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
    uVar14 = (longlong)*local_10b8._IPnext - (longlong)*local_10b8._IPfirst;
    if (0 < (longlong)uVar14) {
      tersetests::FakeStream::write(local_1050,local_1048,uVar14);
      *local_10b8._IPcount = *local_10b8._IPcount + (int)uVar14;
      *local_10b8._IPnext = *local_10b8._IPnext + -(int)uVar14;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&local_10b8);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_1188.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c617450

void * __thiscall
CharOutputStreamBufTest_OutputMixedDataTypes_Test::_scalar_deleting_destructor_
          (CharOutputStreamBufTest_OutputMixedDataTypes_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c617490

Test * __thiscall
testing::internal::TestFactoryImpl<CharOutputStreamBufTest_OutputMixedDataTypes_Test>::CreateTest
          (TestFactoryImpl<CharOutputStreamBufTest_OutputMixedDataTypes_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7CharOutputStreamBufTest_OutputMixedDataTypes_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6174d0

void * __thiscall
testing::internal::TestFactoryImpl<CharOutputStreamBufTest_OutputMixedDataTypes_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<CharOutputStreamBufTest_OutputMixedDataTypes_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<CharOutputStreamBufTest_OutputMixedDataTypes_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

