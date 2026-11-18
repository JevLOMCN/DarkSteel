// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 53

// test_info_'' @ 14139ae90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'JSONOutputArchiveTest_OutputBlob_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputBlob_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x3c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x3c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0x3c;
  JSONOutputArchiveTest_OutputBlob_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputBlob",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139b0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_OutputCharArray_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputCharArray_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x4d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x4d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0x4d;
  JSONOutputArchiveTest_OutputCharArray_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputCharArray",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139b350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_OutputEmptyVector_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputEmptyVector_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0xaa);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0xaa);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0xaa;
  JSONOutputArchiveTest_OutputEmptyVector_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputEmptyVector",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139b5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_OutputNestedStructs_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputNestedStructs_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x84);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x84);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0x84;
  JSONOutputArchiveTest_OutputNestedStructs_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputNestedStructs",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139b810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_OutputPrimitiveStruct_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputPrimitiveStruct_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x16);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x16);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0x16;
  JSONOutputArchiveTest_OutputPrimitiveStruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputPrimitiveStruct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_OutputVectorOfPrimitives_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputVectorOfPrimitives_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x2d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x2d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0x2d;
  JSONOutputArchiveTest_OutputVectorOfPrimitives_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputVectorOfPrimitives",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139bcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_OutputVectorOfStructs_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_OutputVectorOfStructs_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x5c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0x5c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0x5c;
  JSONOutputArchiveTest_OutputVectorOfStructs_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","OutputVectorOfStructs",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONOutputArchiveTest_TransparentStruct_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONOutputArchiveTest_TransparentStruct_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0xb9);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                      ,0xb9);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8d;
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
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined4 *)(pcVar6 + 0x88) = ::s_C__Workspace_UnrealEngine_Engin._136_4_;
  pcVar6[0x8c] = ::s_C__Workspace_UnrealEngine_Engin[0x8c];
  pcVar6[0x8d] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008d;
  uStack_40 = _UNK_15289d778;
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
  *(undefined4 *)(local_58._Ptr + 0x88) = *(undefined4 *)(pcVar6 + 0x88);
  *(undefined2 *)(local_58._Ptr + 0x8c) = *(undefined2 *)(pcVar6 + 0x8c);
  local_38 = 0xb9;
  JSONOutputArchiveTest_TransparentStruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONOutputArchiveTest","TransparentStruct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c6084f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputPrimitiveStruct_Test::TestBody
          (JSONOutputArchiveTest_OutputPrimitiveStruct_Test *this)

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
  undefined1 auStackY_1208 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11d8;
  JSONStruct local_11d0;
  AssertionResult local_11c0;
  FakeStream local_11b0;
  _Bxty local_1190;
  undefined8 local_1180;
  ulonglong uStack_1178;
  _Bxty local_1170;
  ulonglong local_1158;
  undefined1 local_1148 [16];
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1138;
  basic_ostream<char,std::char_traits<char>_> local_c8;
  SerializationState local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  uVar15 = 0;
  local_11d0.e = 0x7fffffff;
  local_11d0.a = '\x7f';
  local_11d0.b = 0xff;
  local_11d0.c = 0x7fff;
  local_11d0.d = 0xffff;
  local_1148._0_8_ = local_1148;
  local_11d0.f = 0xffffffff;
  local_11b0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11b0.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_11b0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_11b0.position = 0;
  local_1148._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1148 + 0x10));
  local_1138._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1138.stream = &local_11b0;
  memset(local_1148 + 0x80,0,0x1000);
  *(undefined1 **)local_1138._padding_ = local_1148 + 0x80;
  *(undefined1 **)local_1138._padding_ = local_1148 + 0x80;
  *(undefined4 *)local_1138._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080),
             (basic_streambuf<char,std::char_traits<char>_> *)(local_1148 + 0x10),false);
  local_58.indentWidth = 4;
  local_58.indentLevel = 0;
  local_58.firstMember = false;
  local_58.transparent = false;
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<JSONStruct>
            ((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)local_1148._0_8_,&local_11d0);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080),
             std::flush<char,std::char_traits<char>_>);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_11d0._0_8_ =
       local_11b0.data._Mypair._Myval2._Mylast + -(longlong)local_11b0.data._Mypair._Myval2._Myfirst
  ;
  local_11d8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000068;
  if ((undefined1 *)local_11d0._0_8_ == &DAT_00000068) {
    testing::AssertionSuccess(&local_11c0);
    uVar16._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000068;
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1170,(ulong64 *)&local_11d8,(ulong64 *)&local_11d0);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1190,(ulong64 *)&local_11d0,(ulong64 *)&local_11d8);
    testing::internal::EqFailure(&local_11c0,"stream.size()","expectedSize",pbVar6,pbVar5,false);
    if (0xf < uStack_1178) {
      pvVar1 = (void *)CONCAT71(local_1190._1_7_,local_1190._Buf[0]);
      uVar13 = uStack_1178 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_1178 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c608700;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_1190._Buf[0] = '\0';
    local_1180 = uVar2;
    uStack_1178 = uVar3;
    uVar16._Mypair._Myval2 = local_11d8._Mypair._Myval2;
    if (0xf < local_1158) {
      uVar13 = local_1158 + 1;
      uVar10 = local_1170._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_1170._Ptr + -8);
        uVar13 = local_1158 + 0x28;
        if ((char *)0x1f < local_1170._Ptr + (-8 - uVar10)) {
LAB_14c608700:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
      uVar16._Mypair._Myval2 = local_11d8._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_11c0.message_._Mypair._Myval2;
  if (local_11c0.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_11d8);
    if (local_11c0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_11c0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11c0.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_11c0.message_._Mypair._Myval2;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_11d0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                        ,0x29,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_11d0);
    if (local_11d8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_11d8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11d8._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_11c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11c0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_11c0.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1148 + 0x10));
    if (local_11b0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar13 = (longlong)local_11b0.data._Mypair._Myval2._Myend -
               (longlong)local_11b0.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_11b0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_11b0.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_11b0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar11,uVar13);
    }
  }
  else {
    if (local_11c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11c0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar16._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar11 = &s________a___127_______b___255___ + uVar15;
        pcVar14 = local_11b0.data._Mypair._Myval2._Myfirst + uVar15;
        if (*pcVar14 == *pcVar11) {
          testing::AssertionSuccess(&local_11c0);
        }
        else {
          pbVar5 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1170,pcVar11,pcVar14);
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1190,pcVar14,pcVar11);
          testing::internal::EqFailure
                    (&local_11c0,"stream.data.data()[i]","expected[i]",pbVar6,pbVar5,false);
          if (0xf < uStack_1178) {
            pvVar1 = (void *)CONCAT71(local_1190._1_7_,local_1190._Buf[0]);
            uVar13 = uStack_1178 + 1;
            pvVar9 = pvVar1;
            if (0xfff < uVar13) {
              pvVar9 = *(void **)((longlong)pvVar1 + -8);
              uVar13 = uStack_1178 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9)))
              goto LAB_14c60889a;
            }
            ::operator_delete(pvVar9,uVar13);
          }
          local_1190._Buf[0] = '\0';
          local_1180 = uVar2;
          uStack_1178 = uVar3;
          if (0xf < local_1158) {
            uVar13 = local_1158 + 1;
            uVar10 = local_1170._Ptr;
            if (0xfff < uVar13) {
              uVar10 = *(undefined8 *)(local_1170._Ptr + -8);
              uVar13 = local_1158 + 0x28;
              if ((char *)0x1f < local_1170._Ptr + (-8 - uVar10)) {
LAB_14c60889a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar10,uVar13);
          }
        }
        uVar4._Mypair._Myval2 = local_11c0.message_._Mypair._Myval2;
        if (local_11c0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_11d8);
          if (local_11c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar11 = "";
          }
          else {
            pcVar11 = (char *)local_11c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar11 = *(char **)local_11c0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_11d0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                              ,0x2a,pcVar11);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_11d0);
          if (local_11d8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar12 = (undefined8 *)
                      ((longlong)local_11d8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11d8._Mypair._Myval2 + 4));
            (**(code **)*puVar12)(puVar12,1);
          }
          if (local_11c0.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11c0.message_._Mypair._Myval2);
            ::operator_delete((void *)local_11c0.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulonglong)uVar16._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1148 + 0x10));
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11b0.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c608ad0

void * __thiscall
JSONOutputArchiveTest_OutputPrimitiveStruct_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputPrimitiveStruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c608b10

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputPrimitiveStruct_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputPrimitiveStruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputPrimitiveStruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c608b50

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputPrimitiveStruct_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputPrimitiveStruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputPrimitiveStruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c608b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputVectorOfPrimitives_Test::TestBody
          (JSONOutputArchiveTest_OutputVectorOfPrimitives_Test *this)

{
  void *pvVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  longlong ****pppplVar6;
  int *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  undefined1 auStackY_1208 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11d8;
  AssertHelper local_11d0;
  FakeStream local_11c8;
  AssertionResult local_11a8;
  undefined4 local_1198;
  _Bxty local_1190;
  undefined8 local_1180;
  ulonglong uStack_1178;
  _Bxty local_1170;
  ulonglong local_1158;
  longlong ****local_1148;
  undefined8 local_1140;
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1138;
  basic_ostream<char,std::char_traits<char>_> local_c8;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  local_11a8._0_8_ = ___xmm_0000000a0000000100000000fffffff6;
  local_11a8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289d3a8;
  local_1198 = 10000;
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x14);
  memmove(_Dst,&local_11a8,0x14);
  uVar16 = 0;
  local_1148 = (longlong ****)&local_1148;
  local_11c8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_11c8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11c8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_11c8.position = 0;
  local_1140 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_1138);
  local_1138._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1138.stream = &local_11c8;
  memset(&local_1138.buffer,0,0x1000);
  *(array<char,4096> **)local_1138._padding_ = &local_1138.buffer;
  *(array<char,4096> **)local_1138._padding_ = &local_1138.buffer;
  *(undefined4 *)local_1138._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_c8,(basic_streambuf<char,std::char_traits<char>_> *)&local_1138,false);
  pppplVar6 = local_1148;
  local_58 = 4;
  local_50 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x210),"[");
  if (_Dst != _Dst + 5) {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)(*pppplVar6 + 0x210),*_Dst);
    piVar2 = _Dst;
    while (piVar2 = piVar2 + 1, piVar2 != _Dst + 5) {
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)(pppplVar6 + 0x210),", ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)(*pppplVar6 + 0x210),*piVar2);
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(pppplVar6 + 0x210),"]");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_c8,std::flush<char,std::char_traits<char>_>);
  uVar4 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  local_11d0.data_ =
       (AssertHelperData *)
       (local_11c8.data._Mypair._Myval2._Mylast +
       -(longlong)local_11c8.data._Mypair._Myval2._Myfirst);
  local_11d8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000016;
  if (local_11d0.data_ == (AssertHelperData *)&DAT_00000016) {
    testing::AssertionSuccess(&local_11a8);
    uVar17._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000016;
  }
  else {
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1170,(ulong64 *)&local_11d8,(ulong64 *)&local_11d0);
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1190,(ulong64 *)&local_11d0,(ulong64 *)&local_11d8);
    testing::internal::EqFailure(&local_11a8,"stream.size()","expectedSize",pbVar8,pbVar7,false);
    if (0xf < uStack_1178) {
      pvVar1 = (void *)CONCAT71(local_1190._1_7_,local_1190._Buf[0]);
      uVar14 = uStack_1178 + 1;
      pvVar11 = pvVar1;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_1178 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar11))) goto LAB_14c608e3e;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_1190._Buf[0] = '\0';
    local_1180 = uVar3;
    uStack_1178 = uVar4;
    uVar17._Mypair._Myval2 = local_11d8._Mypair._Myval2;
    if (0xf < local_1158) {
      uVar14 = local_1158 + 1;
      uVar12 = local_1170._Ptr;
      if (0xfff < uVar14) {
        uVar12 = *(undefined8 *)(local_1170._Ptr + -8);
        uVar14 = local_1158 + 0x28;
        if ((char *)0x1f < local_1170._Ptr + (-8 - uVar12)) {
LAB_14c608e3e:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar12,uVar14);
      uVar17._Mypair._Myval2 = local_11d8._Mypair._Myval2;
    }
  }
  uVar5._Mypair._Myval2 = local_11a8.message_._Mypair._Myval2;
  if (local_11a8.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_11d8);
    if (local_11a8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_11a8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11a8.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_11a8.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_11d0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                         ,0x38,pcVar15);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper(&local_11d0);
    if (local_11d8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_11d8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11d8._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    uVar5._Mypair._Myval2 = local_11a8.message_._Mypair._Myval2;
    if (local_11a8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_c8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1138);
    if (local_11c8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar14 = (longlong)local_11c8.data._Mypair._Myval2._Myend -
               (longlong)local_11c8.data._Mypair._Myval2._Myfirst;
      pcVar15 = local_11c8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pcVar15 = *(char **)(local_11c8.data._Mypair._Myval2._Myfirst + -8);
        uVar14 = uVar14 + 0x27;
        if ((char *)0x1f < local_11c8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar15)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar15,uVar14);
      local_11c8.data._Mypair._Myval2._Myend = (char *)0x0;
      local_11c8.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_11c8.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
  }
  else {
    if (local_11a8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    if (uVar17._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar15 = local_11c8.data._Mypair._Myval2._Myfirst + uVar16;
        if (*pcVar15 == "[-10, 0, 1, 10, 10000]"[uVar16]) {
          testing::AssertionSuccess(&local_11a8);
        }
        else {
          pbVar7 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1170,"[-10, 0, 1, 10, 10000]" + uVar16,pcVar15);
          pbVar8 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1190,pcVar15,"[-10, 0, 1, 10, 10000]" + uVar16);
          testing::internal::EqFailure
                    (&local_11a8,"stream.data.data()[i]","expected[i]",pbVar8,pbVar7,false);
          if (0xf < uStack_1178) {
            pvVar1 = (void *)CONCAT71(local_1190._1_7_,local_1190._Buf[0]);
            uVar14 = uStack_1178 + 1;
            pvVar11 = pvVar1;
            if (0xfff < uVar14) {
              pvVar11 = *(void **)((longlong)pvVar1 + -8);
              uVar14 = uStack_1178 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar11)))
              goto LAB_14c608fb5;
            }
            ::operator_delete(pvVar11,uVar14);
          }
          local_1190._Buf[0] = '\0';
          local_1180 = uVar3;
          uStack_1178 = uVar4;
          if (0xf < local_1158) {
            uVar14 = local_1158 + 1;
            uVar12 = local_1170._Ptr;
            if (0xfff < uVar14) {
              uVar12 = *(undefined8 *)(local_1170._Ptr + -8);
              uVar14 = local_1158 + 0x28;
              if ((char *)0x1f < local_1170._Ptr + (-8 - uVar12)) {
LAB_14c608fb5:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar12,uVar14);
          }
        }
        uVar5._Mypair._Myval2 = local_11a8.message_._Mypair._Myval2;
        if (local_11a8.success_ == false) {
          pMVar9 = (Message *)testing::Message::Message((Message *)&local_11d8);
          if (local_11a8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar15 = "";
          }
          else {
            pcVar15 = (char *)local_11a8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11a8.message_._Mypair._Myval2 + 0x18)) {
              pcVar15 = *(char **)local_11a8.message_._Mypair._Myval2;
            }
          }
          pAVar10 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_11d0,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                               ,0x39,pcVar15);
          testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
          testing::internal::AssertHelper::~AssertHelper(&local_11d0);
          if (local_11d8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_11d8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11d8._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
          }
          uVar5._Mypair._Myval2 = local_11a8.message_._Mypair._Myval2;
          if (local_11a8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11a8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11a8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11a8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)uVar17._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_c8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1138);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11c8.data);
  }
  if (_Dst != (int *)0x0) {
    ::operator_delete(_Dst,0x14);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c6091f0

void * __thiscall
JSONOutputArchiveTest_OutputVectorOfPrimitives_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputVectorOfPrimitives_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c609230

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfPrimitives_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfPrimitives_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputVectorOfPrimitives_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c609270

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfPrimitives_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfPrimitives_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfPrimitives_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6092b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputBlob_Test::TestBody(JSONOutputArchiveTest_OutputBlob_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined1 auStackY_1258 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1228;
  AssertHelper local_1220;
  undefined2 local_1218;
  undefined1 local_1216;
  AssertHelper local_1210;
  AssertionResult local_1208;
  FakeStream local_11f8;
  _Bxty local_11d8;
  undefined8 local_11c8;
  ulonglong uStack_11c0;
  undefined1 local_11b8 [72];
  longlong *local_1170;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_1168;
  _Bxty local_1158;
  ulonglong local_1140;
  undefined1 local_1138 [16];
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1128;
  basic_ostream<char,std::char_traits<char>_> local_b8;
  SerializationState local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1258;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::
           PolyAllocator<char,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar15 = 0;
  local_11b8._8_8_ = 0;
  local_11b8._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1170 = (longlong *)0x0;
  local_1168._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  terse::DynArray<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>::resize_uninitialized
            ((DynArray<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> *)local_11b8,5);
  memcpy(local_1168._Myval2,&::s______,local_11b8._8_8_);
  local_11f8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1138._0_8_ = local_1138;
  local_11f8.position = 0;
  local_11f8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11f8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1138._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1138 + 0x10));
  local_1128._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1128.stream = &local_11f8;
  memset(local_1138 + 0x80,0,0x1000);
  *(undefined1 **)local_1128._padding_ = local_1138 + 0x80;
  *(undefined1 **)local_1128._padding_ = local_1138 + 0x80;
  *(undefined4 *)local_1128._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1138 + 0x1080),
             (basic_streambuf<char,std::char_traits<char>_> *)(local_1138 + 0x10),false);
  local_48.indentWidth = 4;
  local_48.indentLevel = 0;
  local_48.firstMember = false;
  local_48.transparent = false;
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
            ((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)local_1138._0_8_,
             (Blob<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> *)local_11b8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1138 + 0x1080),
             std::flush<char,std::char_traits<char>_>);
  local_1218 = DAT_15289cff0;
  local_1216 = DAT_15289cff2;
  local_1220.data_ = _s__AQIDBP8__;
  uVar5._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )strlen((char *)&local_1220);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_1210.data_ =
       (AssertHelperData *)
       (local_11f8.data._Mypair._Myval2._Mylast +
       -(longlong)local_11f8.data._Mypair._Myval2._Myfirst);
  local_1228._Mypair._Myval2 = uVar5._Mypair._Myval2;
  if ((_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
       )local_1210.data_ == uVar5._Mypair._Myval2) {
    testing::AssertionSuccess(&local_1208);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1158,(ulong64 *)&local_1228,(ulong64 *)&local_1210);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_11d8,(ulong64 *)&local_1210,(ulong64 *)&local_1228);
    testing::internal::EqFailure(&local_1208,"stream.size()","expectedSize",pbVar7,pbVar6,false);
    if (0xf < uStack_11c0) {
      pvVar1 = (void *)CONCAT71(local_11d8._1_7_,local_11d8._Buf[0]);
      uVar13 = uStack_11c0 + 1;
      pvVar10 = pvVar1;
      if (0xfff < uVar13) {
        pvVar10 = *(void **)((longlong)pvVar1 + -8);
        uVar13 = uStack_11c0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c60953c;
      }
      ::operator_delete(pvVar10,uVar13);
    }
    local_11d8._Buf[0] = '\0';
    local_11c8 = uVar2;
    uStack_11c0 = uVar3;
    uVar5._Mypair._Myval2 = local_1228._Mypair._Myval2;
    if (0xf < local_1140) {
      uVar13 = local_1140 + 1;
      uVar11 = local_1158._Ptr;
      if (0xfff < uVar13) {
        uVar11 = *(undefined8 *)(local_1158._Ptr + -8);
        uVar13 = local_1140 + 0x28;
        if ((char *)0x1f < local_1158._Ptr + (-8 - uVar11)) {
LAB_14c60953c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar13);
      uVar5._Mypair._Myval2 = local_1228._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_1208.message_._Mypair._Myval2;
  if (local_1208.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_1210);
    if (local_1208.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_1208.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1208.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_1208.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_1220,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                        ,0x49,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper(&local_1220);
    if (local_1210.data_ != (AssertHelperData *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_1210.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1210.data_ + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_1208.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1208.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1208.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1138 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1138 + 0x10));
    if (local_11f8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar13 = (longlong)local_11f8.data._Mypair._Myval2._Myend -
               (longlong)local_11f8.data._Mypair._Myval2._Myfirst;
      pcVar14 = local_11f8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar14 = *(char **)(local_11f8.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_11f8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar14)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar14,uVar13);
      local_11f8.data._Mypair._Myval2._Myend = (char *)0x0;
      local_11f8.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_11f8.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if (local_1168._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1228._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_1168._Myval2;
      if (local_1170 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_1170 + 0x10))(local_1170,&local_1228);
    }
    if (local_1170 != (longlong *)0x0) {
      (**(code **)(*local_1170 + 0x20))(local_1170,local_1170 != (longlong *)(local_11b8 + 0x10));
    }
  }
  else {
    if (local_1208.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1208.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar5._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar16 = (char *)((longlong)&local_1220.data_ + uVar15);
        pcVar14 = local_11f8.data._Mypair._Myval2._Myfirst + uVar15;
        if (*pcVar14 == *pcVar16) {
          testing::AssertionSuccess(&local_1208);
        }
        else {
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1158,pcVar16,pcVar14);
          pbVar7 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_11d8,pcVar14,pcVar16);
          testing::internal::EqFailure
                    (&local_1208,"stream.data.data()[i]","expected[i]",pbVar7,pbVar6,false);
          if (0xf < uStack_11c0) {
            pvVar1 = (void *)CONCAT71(local_11d8._1_7_,local_11d8._Buf[0]);
            uVar13 = uStack_11c0 + 1;
            pvVar10 = pvVar1;
            if (0xfff < uVar13) {
              pvVar10 = *(void **)((longlong)pvVar1 + -8);
              uVar13 = uStack_11c0 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
              goto LAB_14c609712;
            }
            ::operator_delete(pvVar10,uVar13);
          }
          local_11d8._Buf[0] = '\0';
          local_11c8 = uVar2;
          uStack_11c0 = uVar3;
          if (0xf < local_1140) {
            uVar13 = local_1140 + 1;
            uVar11 = local_1158._Ptr;
            if (0xfff < uVar13) {
              uVar11 = *(undefined8 *)(local_1158._Ptr + -8);
              uVar13 = local_1140 + 0x28;
              if ((char *)0x1f < local_1158._Ptr + (-8 - uVar11)) {
LAB_14c609712:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar13);
          }
        }
        uVar4._Mypair._Myval2 = local_1208.message_._Mypair._Myval2;
        if (local_1208.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_1228);
          if (local_1208.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar14 = "";
          }
          else {
            pcVar14 = (char *)local_1208.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_1208.message_._Mypair._Myval2 + 0x18)) {
              pcVar14 = *(char **)local_1208.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_1210,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                              ,0x4a,pcVar14);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_1210);
          if (local_1228._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar12 = (undefined8 *)
                      ((longlong)local_1228._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_1228._Mypair._Myval2 + 4));
            (**(code **)*puVar12)(puVar12,1);
          }
          if (local_1208.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_1208.message_._Mypair._Myval2);
            ::operator_delete((void *)local_1208.message_._Mypair._Myval2,0x20);
          }
          std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
                    ((basic_ostream<char,std::char_traits<char>_> *)(local_1138 + 0x1080));
          terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
          ~CharOutputStreamBuf<tersetests::FakeStream,4096>
                    ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1138 + 0x10));
          std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>
                    (&local_11f8.data);
          if (local_1168._Myval2 ==
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
          goto LAB_14c60980b;
          local_1220.data_ = (AssertHelperData *)local_1168._Myval2;
          if (local_1170 == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          goto LAB_14c609800;
        }
        if (local_1208.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_1208.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulonglong)uVar5._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1138 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1138 + 0x10));
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11f8.data);
    if (local_1168._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1220.data_ = (AssertHelperData *)local_1168._Myval2;
      if (local_1170 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
LAB_14c609800:
      local_1220.data_ = (AssertHelperData *)local_1168;
      (**(code **)(*local_1170 + 0x10))(local_1170,&local_1220);
    }
LAB_14c60980b:
    if (local_1170 != (longlong *)0x0) {
      (**(code **)(*local_1170 + 0x20))(local_1170,local_1170 != (longlong *)(local_11b8 + 0x10));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c609a10

void * __thiscall
JSONOutputArchiveTest_OutputBlob_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputBlob_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c609a50

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputBlob_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputBlob_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputBlob_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c609a90

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputBlob_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputBlob_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputBlob_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c609ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputCharArray_Test::TestBody
          (JSONOutputArchiveTest_OutputCharArray_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  longlong ****pppplVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *pAVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  char *pcVar16;
  ulonglong uVar17;
  char *pcVar18;
  undefined1 auStackY_1208 [32];
  undefined2 local_11d8;
  undefined1 local_11d6;
  char local_11d5 [5];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11d0;
  AssertHelper local_11c8;
  AssertionResult local_11c0;
  FakeStream local_11b0;
  char local_1190 [8];
  char acStack_1188 [8];
  _Bxty local_1180;
  undefined8 local_1170;
  ulonglong uStack_1168;
  _Bxty local_1160;
  ulonglong local_1148;
  longlong ****local_1138;
  undefined8 local_1130;
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1128;
  basic_ostream<char,std::char_traits<char>_> local_b8;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  uVar17 = 0;
  local_11d8 = 0x4241;
  local_11b0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1138 = (longlong ****)&local_1138;
  local_11b0.position = 0;
  local_11b0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11b0.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1130 = 0;
  local_11d6 = 0x43;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_1128);
  local_1128._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1128.stream = &local_11b0;
  memset(&local_1128.buffer,0,0x1000);
  *(array<char,4096> **)local_1128._padding_ = &local_1128.buffer;
  *(array<char,4096> **)local_1128._padding_ = &local_1128.buffer;
  *(undefined4 *)local_1128._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_b8,(basic_streambuf<char,std::char_traits<char>_> *)&local_1128,false);
  pppplVar5 = local_1138;
  local_48 = 4;
  local_40 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1138 + 0x210),"[");
  pbVar6 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)(*pppplVar5 + 0x210),"\"");
  pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,'A');
  std::operator<<<std::char_traits<char>_>(pbVar6,"\"");
  pcVar16 = (char *)((longlong)&local_11d8 + 1);
  do {
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(pppplVar5 + 0x210),", ");
    pbVar6 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)(*pppplVar5 + 0x210),"\"");
    pbVar6 = std::operator<<<std::char_traits<char>_>(pbVar6,*pcVar16);
    std::operator<<<std::char_traits<char>_>(pbVar6,"\"");
    pcVar16 = pcVar16 + 1;
  } while (pcVar16 != local_11d5);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(pppplVar5 + 0x210),"]");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_b8,std::flush<char,std::char_traits<char>_>);
  local_1190[0] = s___A____B____C__[0];
  local_1190[1] = s___A____B____C__[1];
  local_1190[2] = s___A____B____C__[2];
  local_1190[3] = s___A____B____C__[3];
  local_1190[4] = s___A____B____C__[4];
  local_1190[5] = s___A____B____C__[5];
  local_1190[6] = s___A____B____C__[6];
  local_1190[7] = s___A____B____C__[7];
  acStack_1188[0] = s___A____B____C__[8];
  acStack_1188[1] = s___A____B____C__[9];
  acStack_1188[2] = s___A____B____C__[10];
  acStack_1188[3] = s___A____B____C__[0xb];
  acStack_1188[4] = s___A____B____C__[0xc];
  acStack_1188[5] = s___A____B____C__[0xd];
  acStack_1188[6] = s___A____B____C__[0xe];
  acStack_1188[7] = s___A____B____C__[0xf];
  uVar7._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )strlen(local_1190);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_11c8.data_ =
       (AssertHelperData *)
       (local_11b0.data._Mypair._Myval2._Mylast +
       -(longlong)local_11b0.data._Mypair._Myval2._Myfirst);
  local_11d0._Mypair._Myval2 = uVar7._Mypair._Myval2;
  if ((_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
       )local_11c8.data_ == uVar7._Mypair._Myval2) {
    testing::AssertionSuccess(&local_11c0);
  }
  else {
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1160,(ulong64 *)&local_11d0,(ulong64 *)&local_11c8);
    pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1180,(ulong64 *)&local_11c8,(ulong64 *)&local_11d0);
    testing::internal::EqFailure(&local_11c0,"stream.size()","expectedSize",pbVar9,pbVar8,false);
    if (0xf < uStack_1168) {
      pvVar1 = (void *)CONCAT71(local_1180._1_7_,local_1180._Buf[0]);
      uVar15 = uStack_1168 + 1;
      pvVar12 = pvVar1;
      if (0xfff < uVar15) {
        pvVar12 = *(void **)((longlong)pvVar1 + -8);
        uVar15 = uStack_1168 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12))) goto LAB_14c609d90;
      }
      ::operator_delete(pvVar12,uVar15);
    }
    local_1180._Buf[0] = '\0';
    local_1170 = uVar2;
    uStack_1168 = uVar3;
    uVar7._Mypair._Myval2 = local_11d0._Mypair._Myval2;
    if (0xf < local_1148) {
      uVar15 = local_1148 + 1;
      uVar13 = local_1160._Ptr;
      if (0xfff < uVar15) {
        uVar13 = *(undefined8 *)(local_1160._Ptr + -8);
        uVar15 = local_1148 + 0x28;
        if ((char *)0x1f < local_1160._Ptr + (-8 - uVar13)) {
LAB_14c609d90:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar13,uVar15);
      uVar7._Mypair._Myval2 = local_11d0._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_11c0.message_._Mypair._Myval2;
  if (local_11c0.success_ == false) {
    pMVar10 = (Message *)testing::Message::Message((Message *)&local_11d0);
    if (local_11c0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar16 = "";
    }
    else {
      pcVar16 = (char *)local_11c0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11c0.message_._Mypair._Myval2 + 0x18)) {
        pcVar16 = *(char **)local_11c0.message_._Mypair._Myval2;
      }
    }
    pAVar11 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_11c8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                         ,0x58,pcVar16);
    testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
    testing::internal::AssertHelper::~AssertHelper(&local_11c8);
    if (local_11d0._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar14 = (undefined8 *)
                ((longlong)local_11d0._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11d0._Mypair._Myval2 + 4));
      (**(code **)*puVar14)(puVar14,1);
    }
    if (local_11c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11c0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_11c0.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_b8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1128);
    if (local_11b0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar15 = (longlong)local_11b0.data._Mypair._Myval2._Myend -
               (longlong)local_11b0.data._Mypair._Myval2._Myfirst;
      pcVar16 = local_11b0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar15) {
        pcVar16 = *(char **)(local_11b0.data._Mypair._Myval2._Myfirst + -8);
        uVar15 = uVar15 + 0x27;
        if ((char *)0x1f < local_11b0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar16)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar16,uVar15);
    }
  }
  else {
    if (local_11c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11c0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar7._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar18 = local_1190 + uVar17;
        pcVar16 = local_11b0.data._Mypair._Myval2._Myfirst + uVar17;
        if (*pcVar16 == *pcVar18) {
          testing::AssertionSuccess(&local_11c0);
        }
        else {
          pbVar8 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1160,pcVar18,pcVar16);
          pbVar9 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1180,pcVar16,pcVar18);
          testing::internal::EqFailure
                    (&local_11c0,"stream.data.data()[i]","expected[i]",pbVar9,pbVar8,false);
          if (0xf < uStack_1168) {
            pvVar1 = (void *)CONCAT71(local_1180._1_7_,local_1180._Buf[0]);
            uVar15 = uStack_1168 + 1;
            pvVar12 = pvVar1;
            if (0xfff < uVar15) {
              pvVar12 = *(void **)((longlong)pvVar1 + -8);
              uVar15 = uStack_1168 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12)))
              goto LAB_14c609f0b;
            }
            ::operator_delete(pvVar12,uVar15);
          }
          local_1180._Buf[0] = '\0';
          local_1170 = uVar2;
          uStack_1168 = uVar3;
          if (0xf < local_1148) {
            uVar15 = local_1148 + 1;
            uVar13 = local_1160._Ptr;
            if (0xfff < uVar15) {
              uVar13 = *(undefined8 *)(local_1160._Ptr + -8);
              uVar15 = local_1148 + 0x28;
              if ((char *)0x1f < local_1160._Ptr + (-8 - uVar13)) {
LAB_14c609f0b:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar13,uVar15);
          }
        }
        uVar4._Mypair._Myval2 = local_11c0.message_._Mypair._Myval2;
        if (local_11c0.success_ == false) {
          pMVar10 = (Message *)testing::Message::Message((Message *)&local_11d0);
          if (local_11c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar16 = "";
          }
          else {
            pcVar16 = (char *)local_11c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar16 = *(char **)local_11c0.message_._Mypair._Myval2;
            }
          }
          pAVar11 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_11c8,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                               ,0x59,pcVar16);
          testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
          testing::internal::AssertHelper::~AssertHelper(&local_11c8);
          if (local_11d0._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar14 = (undefined8 *)
                      ((longlong)local_11d0._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11d0._Mypair._Myval2 + 4));
            (**(code **)*puVar14)(puVar14,1);
          }
          if (local_11c0.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11c0.message_._Mypair._Myval2);
            ::operator_delete((void *)local_11c0.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulonglong)uVar7._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_b8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1128);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11b0.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60a130

void * __thiscall
JSONOutputArchiveTest_OutputCharArray_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputCharArray_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60a170

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputCharArray_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputCharArray_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputCharArray_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60a1b0

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputCharArray_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputCharArray_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputCharArray_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c60a1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputVectorOfStructs_Test::TestBody
          (JSONOutputArchiveTest_OutputVectorOfStructs_Test *this)

{
  void *pvVar1;
  ulonglong uVar2;
  JSONStruct *pJVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  undefined8 ****ppppuVar7;
  JSONStruct *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *pAVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  undefined1 auStackY_1208 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11d8;
  AssertHelper local_11d0;
  AssertionResult local_11c8;
  FakeStream local_11b8;
  _Bxty local_1198;
  undefined4 local_1188;
  undefined2 local_1184;
  undefined4 local_1180;
  undefined4 uStack_117c;
  undefined4 local_1178;
  undefined2 local_1174;
  undefined4 local_1170;
  undefined4 local_116c;
  _Bxty local_1168;
  undefined8 local_1158;
  ulonglong uStack_1150;
  undefined8 ****local_1148;
  undefined8 local_1140;
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1138;
  basic_ostream<char,std::char_traits<char>_> local_c8;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  local_1198._4_2_ = 0xffff;
  local_1184 = 0xffff;
  local_1174 = 0xffff;
  local_1198._0_4_ = 0x7fffff7f;
  local_1198._6_2_ = local_11c8._6_2_;
  local_1198._8_4_ = 0x7fffffff;
  local_1198._12_4_ = 0xffffffff;
  local_1188 = 0x7fffff7f;
  local_1180 = 0x7fffffff;
  uStack_117c = 0xffffffff;
  local_1178 = 0x7fffff7f;
  local_1170 = 0x7fffffff;
  local_116c = 0xffffffff;
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x30);
  memmove(_Dst,&local_1198,0x30);
  uVar16 = 0;
  local_1148 = &local_1148;
  local_11b8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_11b8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11b8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_11b8.position = 0;
  local_1140 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_1138);
  local_1138._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1138.stream = &local_11b8;
  memset(&local_1138.buffer,0,0x1000);
  *(array<char,4096> **)local_1138._padding_ = &local_1138.buffer;
  *(array<char,4096> **)local_1138._padding_ = &local_1138.buffer;
  *(undefined4 *)local_1138._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_c8,(basic_streambuf<char,std::char_traits<char>_> *)&local_1138,false);
  ppppuVar7 = local_1148;
  local_58 = 4;
  local_50 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x210),"[");
  if (_Dst != _Dst + 3) {
    terse::
    ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::process<JSONStruct>
              ((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                *)*ppppuVar7,_Dst);
    pJVar3 = _Dst;
    while (pJVar3 = pJVar3 + 1, pJVar3 != _Dst + 3) {
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)(ppppuVar7 + 0x210),", ");
      terse::
      ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::process<JSONStruct>
                ((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                  *)*ppppuVar7,pJVar3);
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(ppppuVar7 + 0x210),"]");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_c8,std::flush<char,std::char_traits<char>_>);
  uVar5 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  local_11d0.data_ =
       (AssertHelperData *)
       (local_11b8.data._Mypair._Myval2._Mylast +
       -(longlong)local_11b8.data._Mypair._Myval2._Myfirst);
  local_11d8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_0000013e;
  if (local_11d0.data_ == (AssertHelperData *)&DAT_0000013e) {
    testing::AssertionSuccess(&local_11c8);
    uVar17._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000013e;
  }
  else {
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1198,(ulong64 *)&local_11d8,(ulong64 *)&local_11d0);
    pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1168,(ulong64 *)&local_11d0,(ulong64 *)&local_11d8);
    testing::internal::EqFailure(&local_11c8,"stream.size()","expectedSize",pbVar9,pbVar8,false);
    if (0xf < uStack_1150) {
      pvVar1 = (void *)CONCAT71(local_1168._1_7_,local_1168._Buf[0]);
      uVar14 = uStack_1150 + 1;
      pvVar12 = pvVar1;
      if (0xfff < uVar14) {
        pvVar12 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_1150 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12))) goto LAB_14c60a4d6;
      }
      ::operator_delete(pvVar12,uVar14);
    }
    uVar2 = CONCAT44(uStack_117c,local_1180);
    local_1168._Buf[0] = '\0';
    local_1158 = uVar4;
    uStack_1150 = uVar5;
    uVar17._Mypair._Myval2 = local_11d8._Mypair._Myval2;
    if (0xf < uVar2) {
      pvVar1 = (void *)CONCAT26(local_1198._6_2_,CONCAT24(local_1198._4_2_,local_1198._0_4_));
      uVar14 = uVar2 + 1;
      pvVar12 = pvVar1;
      if (0xfff < uVar14) {
        pvVar12 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uVar2 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12))) {
LAB_14c60a4d6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar12,uVar14);
      uVar17._Mypair._Myval2 = local_11d8._Mypair._Myval2;
    }
  }
  uVar6._Mypair._Myval2 = local_11c8.message_._Mypair._Myval2;
  if (local_11c8.success_ == false) {
    pMVar10 = (Message *)testing::Message::Message((Message *)&local_11d8);
    if (local_11c8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_11c8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11c8.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_11c8.message_._Mypair._Myval2;
      }
    }
    pAVar11 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_11d0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                         ,0x80,pcVar15);
    testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
    testing::internal::AssertHelper::~AssertHelper(&local_11d0);
    if (local_11d8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_11d8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11d8._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_11c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11c8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_11c8.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_c8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1138);
    if (local_11b8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar14 = (longlong)local_11b8.data._Mypair._Myval2._Myend -
               (longlong)local_11b8.data._Mypair._Myval2._Myfirst;
      pcVar15 = local_11b8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pcVar15 = *(char **)(local_11b8.data._Mypair._Myval2._Myfirst + -8);
        uVar14 = uVar14 + 0x27;
        if ((char *)0x1f < local_11b8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar15)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar15,uVar14);
      local_11b8.data._Mypair._Myval2._Myend = (char *)0x0;
      local_11b8.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_11b8.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
  }
  else {
    if (local_11c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    if (uVar17._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar15 = local_11b8.data._Mypair._Myval2._Myfirst + uVar16;
        if (*pcVar15 == (&s_________a___127_______b___255__)[uVar16]) {
          testing::AssertionSuccess(&local_11c8);
        }
        else {
          pbVar8 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1198,&s_________a___127_______b___255__ + uVar16,pcVar15);
          pbVar9 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1168,pcVar15,&s_________a___127_______b___255__ + uVar16);
          testing::internal::EqFailure
                    (&local_11c8,"stream.data.data()[i]","expected[i]",pbVar9,pbVar8,false);
          if (0xf < uStack_1150) {
            pvVar1 = (void *)CONCAT71(local_1168._1_7_,local_1168._Buf[0]);
            uVar14 = uStack_1150 + 1;
            pvVar12 = pvVar1;
            if (0xfff < uVar14) {
              pvVar12 = *(void **)((longlong)pvVar1 + -8);
              uVar14 = uStack_1150 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12)))
              goto LAB_14c60a64c;
            }
            ::operator_delete(pvVar12,uVar14);
          }
          uVar2 = CONCAT44(uStack_117c,local_1180);
          local_1168._Buf[0] = '\0';
          local_1158 = uVar4;
          uStack_1150 = uVar5;
          if (0xf < uVar2) {
            pvVar1 = (void *)CONCAT26(local_1198._6_2_,CONCAT24(local_1198._4_2_,local_1198._0_4_));
            uVar14 = uVar2 + 1;
            pvVar12 = pvVar1;
            if (0xfff < uVar14) {
              pvVar12 = *(void **)((longlong)pvVar1 + -8);
              uVar14 = uVar2 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12))) {
LAB_14c60a64c:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete(pvVar12,uVar14);
          }
        }
        uVar6._Mypair._Myval2 = local_11c8.message_._Mypair._Myval2;
        if (local_11c8.success_ == false) {
          pMVar10 = (Message *)testing::Message::Message((Message *)&local_11d8);
          if (local_11c8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar15 = "";
          }
          else {
            pcVar15 = (char *)local_11c8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11c8.message_._Mypair._Myval2 + 0x18)) {
              pcVar15 = *(char **)local_11c8.message_._Mypair._Myval2;
            }
          }
          pAVar11 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_11d0,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                               ,0x81,pcVar15);
          testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
          testing::internal::AssertHelper::~AssertHelper(&local_11d0);
          if (local_11d8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_11d8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11d8._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_11c8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11c8.message_._Mypair._Myval2);
            ::operator_delete((void *)local_11c8.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11c8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11c8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)uVar17._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_c8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1138);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11b8.data);
  }
  if (_Dst != (JSONStruct *)0x0) {
    ::operator_delete(_Dst,0x30);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60a880

void * __thiscall
JSONOutputArchiveTest_OutputVectorOfStructs_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputVectorOfStructs_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60a8c0

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfStructs_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfStructs_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputVectorOfStructs_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60a900

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfStructs_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfStructs_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputVectorOfStructs_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c60a940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputNestedStructs_Test::TestBody
          (JSONOutputArchiveTest_OutputNestedStructs_Test *this)

{
  uint *puVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  int *piVar15;
  ushort *puVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  char *pcVar19;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar20;
  undefined1 auStackY_1258 [32];
  AssertHelper local_1228;
  FakeStream local_1220;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1200;
  AssertionResult local_11f8;
  undefined4 local_11e8;
  NestedJSONStruct local_11d8;
  _Bxty local_1188;
  undefined8 local_1178;
  ulonglong uStack_1170;
  _Bxty local_1168;
  ulonglong local_1150;
  undefined1 local_1148 [16];
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1138;
  basic_ostream<char,std::char_traits<char>_> local_c8;
  SerializationState local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1258;
  local_11d8.a._6_2_ = local_11f8._6_2_;
  local_11d8.b._6_2_ = local_11f8._6_2_;
  local_11d8.a.d = 0xffff;
  local_11d8.b.d = 0xffff;
  local_1200._Mypair._Myval2._0_6_ = 0x1e00000000;
  local_11d8.a.a = '\x7f';
  local_11d8.a.b = 0xff;
  local_11d8.a.c = 0x7fff;
  local_11d8.a.e = 0x7fffffff;
  local_11d8.a.f = 0xffffffff;
  local_11d8.b.a = '\x7f';
  local_11d8.b.b = 0xff;
  local_11d8.b.c = 0x7fff;
  local_11d8.b.e = 0x7fffffff;
  local_11d8.b.f = 0xffffffff;
  local_1200._Mypair._Myval2._0_4_ = 0x14000a;
  local_11d8.c._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(6);
  puVar16 = local_11d8.c._Mypair._Myval2._Myfirst + 3;
  local_11d8.c._Mypair._Myval2._Myend = puVar16;
  memmove(local_11d8.c._Mypair._Myval2._Myfirst,&local_1200,6);
  local_11f8.success_ = __xmm_0000000100000000ffffffffffffffec;
  local_11f8._1_7_ = _UNK_15289d391;
  local_11f8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289d398;
  local_11e8 = 0x14;
  local_11d8.c._Mypair._Myval2._Mylast = puVar16;
  local_11d8.d.cc._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x14);
  piVar15 = local_11d8.d.cc._Mypair._Myval2._Myfirst + 5;
  local_11d8.d.cc._Mypair._Myval2._Myend = piVar15;
  memmove(local_11d8.d.cc._Mypair._Myval2._Myfirst,&local_11f8,0x14);
  uVar18 = 0;
  local_1220.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1148._0_8_ = local_1148;
  local_1220.position = 0;
  local_1220.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1220.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1148._8_8_ = 0;
  local_11d8.d.cc._Mypair._Myval2._Mylast = piVar15;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1148 + 0x10));
  local_1138._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1138.stream = &local_1220;
  memset(local_1148 + 0x80,0,0x1000);
  *(undefined1 **)local_1138._padding_ = local_1148 + 0x80;
  *(undefined1 **)local_1138._padding_ = local_1148 + 0x80;
  *(undefined4 *)local_1138._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080),
             (basic_streambuf<char,std::char_traits<char>_> *)(local_1148 + 0x10),false);
  uVar4 = local_1148._0_8_;
  local_58.indentWidth = 4;
  local_58.indentLevel = 0;
  local_58.firstMember = false;
  local_58.transparent = false;
  bVar2 = ((SerializationState *)(local_1148._0_8_ + 0x10f0))->transparent;
  ((SerializationState *)(local_1148._0_8_ + 0x10f0))->transparent = false;
  if (bVar2 == false) {
    ((SerializationState *)(uVar4 + 0x10f0))->firstMember = true;
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(uVar4 + 0x1080),"{");
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(uVar4 + 0x1080),"\n");
    puVar1 = &((SerializationState *)(uVar4 + 0x10f0))->indentLevel;
    *puVar1 = *puVar1 + 1;
    NestedJSONStruct::
    serialize<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
              (&local_11d8,
               (JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)uVar4);
    terse::
    ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::postStructOutput((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)uVar4);
  }
  else {
    NestedJSONStruct::
    serialize<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
              (&local_11d8,
               (JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)uVar4);
  }
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080),
             std::flush<char,std::char_traits<char>_>);
  uVar5 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  local_1228.data_ =
       (AssertHelperData *)
       (local_1220.data._Mypair._Myval2._Mylast +
       -(longlong)local_1220.data._Mypair._Myval2._Myfirst);
  local_1200._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_0000019b;
  if (local_1228.data_ == (AssertHelperData *)&DAT_0000019b) {
    testing::AssertionSuccess(&local_11f8);
    uVar20._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000019b;
  }
  else {
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1168,(ulong64 *)&local_1200,(ulong64 *)&local_1228);
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1188,(ulong64 *)&local_1228,(ulong64 *)&local_1200);
    testing::internal::EqFailure(&local_11f8,"stream.size()","expectedSize",pbVar8,pbVar7,false);
    if (0xf < uStack_1170) {
      pvVar3 = (void *)CONCAT71(local_1188._1_7_,local_1188._Buf[0]);
      uVar17 = uStack_1170 + 1;
      pvVar11 = pvVar3;
      if (0xfff < uVar17) {
        pvVar11 = *(void **)((longlong)pvVar3 + -8);
        uVar17 = uStack_1170 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) goto LAB_14c60ac56;
      }
      ::operator_delete(pvVar11,uVar17);
    }
    local_1188._Buf[0] = '\0';
    local_1178 = uVar4;
    uStack_1170 = uVar5;
    uVar20._Mypair._Myval2 = local_1200._Mypair._Myval2;
    if (0xf < local_1150) {
      uVar17 = local_1150 + 1;
      uVar12 = local_1168._Ptr;
      if (0xfff < uVar17) {
        uVar12 = *(undefined8 *)(local_1168._Ptr + -8);
        uVar17 = local_1150 + 0x28;
        if ((char *)0x1f < local_1168._Ptr + (-8 - uVar12)) {
LAB_14c60ac56:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar12,uVar17);
      uVar20._Mypair._Myval2 = local_1200._Mypair._Myval2;
    }
  }
  uVar6._Mypair._Myval2 = local_11f8.message_._Mypair._Myval2;
  if (local_11f8.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_1200);
    if (local_11f8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_11f8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11f8.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_11f8.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_1228,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                         ,0xa6,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper(&local_1228);
    if (local_1200._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar14 = (undefined8 *)
                ((longlong)local_1200._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_1200._Mypair._Myval2 + 4));
      (**(code **)*puVar14)(puVar14,1);
    }
    uVar6._Mypair._Myval2 = local_11f8.message_._Mypair._Myval2;
    if (local_11f8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11f8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1148 + 0x10));
    if (local_1220.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar17 = (longlong)local_1220.data._Mypair._Myval2._Myend -
               (longlong)local_1220.data._Mypair._Myval2._Myfirst;
      pcVar13 = local_1220.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar17) {
        pcVar13 = *(char **)(local_1220.data._Mypair._Myval2._Myfirst + -8);
        uVar17 = uVar17 + 0x27;
        if ((char *)0x1f < local_1220.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar13))
        goto LAB_14c60b07c;
      }
      ::operator_delete(pcVar13,uVar17);
      local_1220.data._Mypair._Myval2._Myend = (char *)0x0;
      local_1220.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_1220.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if (local_11d8.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
      uVar17 = (longlong)local_11d8.d.cc._Mypair._Myval2._Myend -
               (longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      piVar15 = local_11d8.d.cc._Mypair._Myval2._Myfirst;
      if (0xfff < uVar17) {
        piVar15 = *(int **)(local_11d8.d.cc._Mypair._Myval2._Myfirst + -2);
        uVar17 = uVar17 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar15)))
        goto LAB_14c60b07c;
      }
      ::operator_delete(piVar15,uVar17);
    }
    if (local_11d8.c._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      uVar18 = ((longlong)local_11d8.c._Mypair._Myval2._Myend -
                (longlong)local_11d8.c._Mypair._Myval2._Myfirst >> 1) * 2;
      puVar16 = local_11d8.c._Mypair._Myval2._Myfirst;
      if (0xfff < uVar18) {
        puVar16 = *(ushort **)(local_11d8.c._Mypair._Myval2._Myfirst + -4);
        uVar18 = uVar18 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_11d8.c._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar16))) {
LAB_14c60b07c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(puVar16,uVar18);
    }
  }
  else {
    if (local_11f8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11f8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    if (uVar20._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar13 = "{\n    \"first\": {\n        \"a\": 127,\n        \"b\": 255,\n        \"c\": 32767,\n        \"d\": 65535,\n        \"e\": 2147483647,\n        \"f\": 4294967295\n    },\n    \"another\": {\n        \"a\": 127,\n        \"b\": 255,\n        \"c\": 32767,\n        \"d\": 65535,\n        \"e\": 2147483647,\n        \"f\": 4294967295\n    },\n    \"array\": [10, 20, 30],\n    \"array_in_struct\": {\n        \"nested array in struct\": [-20, -1, 0, 1, 20]\n    }\n}"
                  + uVar18;
        pcVar19 = local_1220.data._Mypair._Myval2._Myfirst + uVar18;
        if (*pcVar19 == *pcVar13) {
          testing::AssertionSuccess(&local_11f8);
        }
        else {
          pbVar7 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1168,pcVar13,pcVar19);
          pbVar8 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1188,pcVar19,pcVar13);
          testing::internal::EqFailure
                    (&local_11f8,"stream.data.data()[i]","expected[i]",pbVar8,pbVar7,false);
          if (0xf < uStack_1170) {
            pvVar3 = (void *)CONCAT71(local_1188._1_7_,local_1188._Buf[0]);
            uVar17 = uStack_1170 + 1;
            pvVar11 = pvVar3;
            if (0xfff < uVar17) {
              pvVar11 = *(void **)((longlong)pvVar3 + -8);
              uVar17 = uStack_1170 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))
              goto LAB_14c60ade7;
            }
            ::operator_delete(pvVar11,uVar17);
          }
          local_1188._Buf[0] = '\0';
          local_1178 = uVar4;
          uStack_1170 = uVar5;
          if (0xf < local_1150) {
            uVar17 = local_1150 + 1;
            uVar12 = local_1168._Ptr;
            if (0xfff < uVar17) {
              uVar12 = *(undefined8 *)(local_1168._Ptr + -8);
              uVar17 = local_1150 + 0x28;
              if ((char *)0x1f < local_1168._Ptr + (-8 - uVar12)) {
LAB_14c60ade7:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar12,uVar17);
          }
        }
        uVar6._Mypair._Myval2 = local_11f8.message_._Mypair._Myval2;
        if (local_11f8.success_ == false) {
          pMVar9 = (Message *)testing::Message::Message((Message *)&local_1200);
          if (local_11f8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar13 = "";
          }
          else {
            pcVar13 = (char *)local_11f8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11f8.message_._Mypair._Myval2 + 0x18)) {
              pcVar13 = *(char **)local_11f8.message_._Mypair._Myval2;
            }
          }
          pAVar10 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_1228,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                               ,0xa7,pcVar13);
          testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
          testing::internal::AssertHelper::~AssertHelper(&local_1228);
          if (local_1200._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar14 = (undefined8 *)
                      ((longlong)local_1200._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_1200._Mypair._Myval2 + 4));
            (**(code **)*puVar14)(puVar14,1);
          }
          uVar6._Mypair._Myval2 = local_11f8.message_._Mypair._Myval2;
          if (local_11f8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11f8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11f8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11f8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < (ulonglong)uVar20._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1148 + 0x10));
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_1220.data);
    std::vector<int,std::allocator<int>_>::_Tidy(&local_11d8.d.cc);
    std::vector<unsigned_short,std::allocator<unsigned_short>_>::_Tidy(&local_11d8.c);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60b0b0

void * __thiscall
JSONOutputArchiveTest_OutputNestedStructs_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputNestedStructs_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60b0f0

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputNestedStructs_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputNestedStructs_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputNestedStructs_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60b130

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputNestedStructs_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputNestedStructs_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputNestedStructs_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c60b170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_OutputEmptyVector_Test::TestBody
          (JSONOutputArchiveTest_OutputEmptyVector_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  undefined8 ****ppppuVar5;
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
  undefined1 auStackY_11f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11c8;
  AssertHelper local_11c0;
  AssertionResult local_11b8;
  FakeStream local_11a8;
  _Bxty local_1188;
  undefined8 local_1178;
  ulonglong uStack_1170;
  _Bxty local_1168;
  ulonglong local_1150;
  undefined8 ****local_1148;
  undefined8 local_1140;
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1138;
  basic_ostream<char,std::char_traits<char>_> local_c8;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_11f8;
  uVar16 = 0;
  local_1148 = &local_1148;
  local_11a8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_11a8.position = 0;
  local_11a8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11a8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1140 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_1138);
  local_1138._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1138.stream = &local_11a8;
  memset(&local_1138.buffer,0,0x1000);
  *(array<char,4096> **)local_1138._padding_ = &local_1138.buffer;
  *(array<char,4096> **)local_1138._padding_ = &local_1138.buffer;
  *(undefined4 *)local_1138._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (&local_c8,(basic_streambuf<char,std::char_traits<char>_> *)&local_1138,false);
  ppppuVar5 = local_1148;
  local_58 = 4;
  local_50 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x210),"[");
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(ppppuVar5 + 0x210),"]");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_c8,std::flush<char,std::char_traits<char>_>);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_11c0.data_ =
       (AssertHelperData *)
       (local_11a8.data._Mypair._Myval2._Mylast +
       -(longlong)local_11a8.data._Mypair._Myval2._Myfirst);
  local_11c8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000002;
  if (local_11c0.data_ == (AssertHelperData *)&DAT_00000002) {
    testing::AssertionSuccess(&local_11b8);
    uVar17._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000002;
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1168,(ulong64 *)&local_11c8,(ulong64 *)&local_11c0);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1188,(ulong64 *)&local_11c0,(ulong64 *)&local_11c8);
    testing::internal::EqFailure(&local_11b8,"stream.size()","expectedSize",pbVar7,pbVar6,false);
    if (0xf < uStack_1170) {
      pvVar1 = (void *)CONCAT71(local_1188._1_7_,local_1188._Buf[0]);
      uVar14 = uStack_1170 + 1;
      pvVar10 = pvVar1;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_1170 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10))) goto LAB_14c60b37a;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_1188._Buf[0] = '\0';
    local_1178 = uVar2;
    uStack_1170 = uVar3;
    uVar17._Mypair._Myval2 = local_11c8._Mypair._Myval2;
    if (0xf < local_1150) {
      uVar14 = local_1150 + 1;
      uVar11 = local_1168._Ptr;
      if (0xfff < uVar14) {
        uVar11 = *(undefined8 *)(local_1168._Ptr + -8);
        uVar14 = local_1150 + 0x28;
        if ((char *)0x1f < local_1168._Ptr + (-8 - uVar11)) {
LAB_14c60b37a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar14);
      uVar17._Mypair._Myval2 = local_11c8._Mypair._Myval2;
    }
  }
  uVar4._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
  if (local_11b8.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_11c8);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_11c0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                        ,0xb5,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper(&local_11c0);
    if (local_11c8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_11c8._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_11c8._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_11b8.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_c8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1138);
    if (local_11a8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar14 = (longlong)local_11a8.data._Mypair._Myval2._Myend -
               (longlong)local_11a8.data._Mypair._Myval2._Myfirst;
      pcVar12 = local_11a8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pcVar12 = *(char **)(local_11a8.data._Mypair._Myval2._Myfirst + -8);
        uVar14 = uVar14 + 0x27;
        if ((char *)0x1f < local_11a8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar12,uVar14);
    }
  }
  else {
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (uVar17._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        pcVar12 = &s___ + uVar16;
        pcVar15 = local_11a8.data._Mypair._Myval2._Myfirst + uVar16;
        if (*pcVar15 == *pcVar12) {
          testing::AssertionSuccess(&local_11b8);
        }
        else {
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1168,pcVar12,pcVar15);
          pbVar7 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1188,pcVar15,pcVar12);
          testing::internal::EqFailure
                    (&local_11b8,"stream.data.data()[i]","expected[i]",pbVar7,pbVar6,false);
          if (0xf < uStack_1170) {
            pvVar1 = (void *)CONCAT71(local_1188._1_7_,local_1188._Buf[0]);
            uVar14 = uStack_1170 + 1;
            pvVar10 = pvVar1;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar1 + -8);
              uVar14 = uStack_1170 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
              goto LAB_14c60b51a;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_1188._Buf[0] = '\0';
          local_1178 = uVar2;
          uStack_1170 = uVar3;
          if (0xf < local_1150) {
            uVar14 = local_1150 + 1;
            uVar11 = local_1168._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_1168._Ptr + -8);
              uVar14 = local_1150 + 0x28;
              if ((char *)0x1f < local_1168._Ptr + (-8 - uVar11)) {
LAB_14c60b51a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
        if (local_11b8.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_11c8);
          if (local_11b8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_11b8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_11b8.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_11c0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                              ,0xb6,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_11c0);
          if (local_11c8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_11c8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_11c8._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_11b8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11b8.message_._Mypair._Myval2);
            ::operator_delete((void *)local_11b8.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11b8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11b8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (ulonglong)uVar17._Mypair._Myval2);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_(&local_c8);
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>(&local_1138);
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11a8.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60b750

void * __thiscall
JSONOutputArchiveTest_OutputEmptyVector_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_OutputEmptyVector_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60b790

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputEmptyVector_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_OutputEmptyVector_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_OutputEmptyVector_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60b7d0

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_OutputEmptyVector_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_OutputEmptyVector_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_OutputEmptyVector_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c60b810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONOutputArchiveTest_TransparentStruct_Test::TestBody
          (JSONOutputArchiveTest_TransparentStruct_Test *this)

{
  uint *puVar1;
  bool bVar2;
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  *pEVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *pAVar11;
  void *pvVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  char *pcVar17;
  InnerOpaque IVar18;
  InnerOpaque IVar19;
  undefined1 auStackY_11f8 [32];
  InnerOpaque local_11c8;
  AssertHelper local_11c0;
  AssertionResult local_11b8;
  FakeStream local_11a8;
  _Bxty local_1188;
  undefined8 local_1178;
  ulonglong uStack_1170;
  _Bxty local_1168;
  ulonglong local_1150;
  undefined1 local_1148 [16];
  CharOutputStreamBuf<tersetests::FakeStream,4096> local_1138;
  basic_ostream<char,std::char_traits<char>_> local_c8;
  SerializationState local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_11f8;
  IVar18.a = 0;
  IVar18.b = 0;
  local_11a8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1148._0_8_ = local_1148;
  local_11a8.position = 0;
  local_11a8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11a8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1148._8_8_ = 0;
  local_11c8.a = 10;
  local_11c8.b = 0x14;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1148 + 0x10));
  local_1138._padding_ =
       (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_1138.stream = &local_11a8;
  memset(local_1148 + 0x80,0,0x1000);
  *(undefined1 **)local_1138._padding_ = local_1148 + 0x80;
  *(undefined1 **)local_1138._padding_ = local_1148 + 0x80;
  *(undefined4 *)local_1138._padding_ = 0xfff;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080),
             (basic_streambuf<char,std::char_traits<char>_> *)(local_1148 + 0x10),false);
  uVar5 = local_1148._0_8_;
  local_58.indentWidth = 4;
  local_58.indentLevel = 0;
  local_58.firstMember = false;
  local_58.transparent = false;
  bVar2 = ((SerializationState *)(local_1148._0_8_ + 0x10f0))->transparent;
  ((SerializationState *)(local_1148._0_8_ + 0x10f0))->transparent = false;
  if (bVar2 == false) {
    ((SerializationState *)(uVar5 + 0x10f0))->firstMember = true;
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(uVar5 + 0x1080),"{");
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(uVar5 + 0x1080),"\n");
    pEVar3 = (ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)*(longlong *)uVar5;
    puVar1 = &((SerializationState *)(uVar5 + 0x10f0))->indentLevel;
    *puVar1 = *puVar1 + 1;
    (pEVar3->state).transparent = true;
    terse::
    ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::process<InnerOpaque>(pEVar3,&local_11c8);
    terse::
    ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::postStructOutput((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)uVar5);
  }
  else {
    pEVar3 = (ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)*(longlong *)uVar5;
    (pEVar3->state).transparent = true;
    terse::
    ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::process<InnerOpaque>(pEVar3,&local_11c8);
  }
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080),
             std::flush<char,std::char_traits<char>_>);
  uVar6 = _UNK_15076add8;
  uVar5 = ___xmm_000000000000000f0000000000000000;
  IVar19.a = 0x1c;
  IVar19.b = 0;
  local_11c0.data_ =
       (AssertHelperData *)
       (local_11a8.data._Mypair._Myval2._Mylast +
       -(longlong)local_11a8.data._Mypair._Myval2._Myfirst);
  local_11c8.a = 0x1c;
  local_11c8.b = 0;
  if (local_11c0.data_ == (AssertHelperData *)&DAT_0000001c) {
    testing::AssertionSuccess(&local_11b8);
  }
  else {
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1168,(ulong64 *)&local_11c8,(ulong64 *)&local_11c0);
    pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1188,(ulong64 *)&local_11c0,(ulong64 *)&local_11c8);
    testing::internal::EqFailure(&local_11b8,"stream.size()","expectedSize",pbVar9,pbVar8,false);
    if (0xf < uStack_1170) {
      pvVar4 = (void *)CONCAT71(local_1188._1_7_,local_1188._Buf[0]);
      uVar16 = uStack_1170 + 1;
      pvVar12 = pvVar4;
      if (0xfff < uVar16) {
        pvVar12 = *(void **)((longlong)pvVar4 + -8);
        uVar16 = uStack_1170 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12))) goto LAB_14c60ba7c;
      }
      ::operator_delete(pvVar12,uVar16);
    }
    local_1188._Buf[0] = '\0';
    local_1178 = uVar5;
    uStack_1170 = uVar6;
    IVar19 = local_11c8;
    if (0xf < local_1150) {
      uVar16 = local_1150 + 1;
      uVar13 = local_1168._Ptr;
      if (0xfff < uVar16) {
        uVar13 = *(undefined8 *)(local_1168._Ptr + -8);
        uVar16 = local_1150 + 0x28;
        if ((char *)0x1f < local_1168._Ptr + (-8 - uVar13)) {
LAB_14c60ba7c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar13,uVar16);
      IVar19 = local_11c8;
    }
  }
  uVar7._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
  if (local_11b8.success_ == false) {
    pMVar10 = (Message *)testing::Message::Message((Message *)&local_11c8);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar11 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_11c0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                         ,200,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
    testing::internal::AssertHelper::~AssertHelper(&local_11c0);
    if (local_11c8 != (InnerOpaque)0x0) {
      puVar15 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_11c8 + 4) + (longlong)local_11c8);
      (**(code **)*puVar15)(puVar15,1);
    }
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_11b8.message_._Mypair._Myval2,0x20);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1148 + 0x10));
    if (local_11a8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar16 = (longlong)local_11a8.data._Mypair._Myval2._Myend -
               (longlong)local_11a8.data._Mypair._Myval2._Myfirst;
      pcVar14 = local_11a8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar16) {
        pcVar14 = *(char **)(local_11a8.data._Mypair._Myval2._Myfirst + -8);
        uVar16 = uVar16 + 0x27;
        if ((char *)0x1f < local_11a8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar14)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pcVar14,uVar16);
    }
  }
  else {
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
    }
    if (IVar19 != (InnerOpaque)0x0) {
      do {
        pcVar14 = &s________a___10_______b___20__ + (longlong)IVar18;
        pcVar17 = local_11a8.data._Mypair._Myval2._Myfirst + (longlong)IVar18;
        if (*pcVar17 == *pcVar14) {
          testing::AssertionSuccess(&local_11b8);
        }
        else {
          pbVar8 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1168,pcVar14,pcVar17);
          pbVar9 = testing::internal::FormatForComparisonFailureMessage<char,char>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1188,pcVar17,pcVar14);
          testing::internal::EqFailure
                    (&local_11b8,"stream.data.data()[i]","expected[i]",pbVar9,pbVar8,false);
          if (0xf < uStack_1170) {
            pvVar4 = (void *)CONCAT71(local_1188._1_7_,local_1188._Buf[0]);
            uVar16 = uStack_1170 + 1;
            pvVar12 = pvVar4;
            if (0xfff < uVar16) {
              pvVar12 = *(void **)((longlong)pvVar4 + -8);
              uVar16 = uStack_1170 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12)))
              goto LAB_14c60bc1a;
            }
            ::operator_delete(pvVar12,uVar16);
          }
          local_1188._Buf[0] = '\0';
          local_1178 = uVar5;
          uStack_1170 = uVar6;
          if (0xf < local_1150) {
            uVar16 = local_1150 + 1;
            uVar13 = local_1168._Ptr;
            if (0xfff < uVar16) {
              uVar13 = *(undefined8 *)(local_1168._Ptr + -8);
              uVar16 = local_1150 + 0x28;
              if ((char *)0x1f < local_1168._Ptr + (-8 - uVar13)) {
LAB_14c60bc1a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar13,uVar16);
          }
        }
        uVar7._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
        if (local_11b8.success_ == false) {
          pMVar10 = (Message *)testing::Message::Message((Message *)&local_11c8);
          if (local_11b8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar14 = "";
          }
          else {
            pcVar14 = (char *)local_11b8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
              pcVar14 = *(char **)local_11b8.message_._Mypair._Myval2;
            }
          }
          pAVar11 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_11c0,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONOutputArchive.cpp"
                               ,0xc9,pcVar14);
          testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
          testing::internal::AssertHelper::~AssertHelper(&local_11c0);
          if (local_11c8 != (InnerOpaque)0x0) {
            puVar15 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_11c8 + 4) + (longlong)local_11c8);
            (**(code **)*puVar15)(puVar15,1);
          }
          if (local_11b8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_11b8.message_._Mypair._Myval2);
            ::operator_delete((void *)local_11b8.message_._Mypair._Myval2,0x20);
          }
          break;
        }
        if (local_11b8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_11b8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
        }
        IVar18 = (InnerOpaque)((longlong)IVar18 + 1);
      } while ((ulonglong)IVar18 < (ulonglong)IVar19);
    }
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(local_1148 + 0x1080));
    terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
    ~CharOutputStreamBuf<tersetests::FakeStream,4096>
              ((CharOutputStreamBuf<tersetests::FakeStream,4096> *)(local_1148 + 0x10));
    std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_11a8.data);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60be40

void * __thiscall
JSONOutputArchiveTest_TransparentStruct_Test::_scalar_deleting_destructor_
          (JSONOutputArchiveTest_TransparentStruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60be80

Test * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_TransparentStruct_Test>::CreateTest
          (TestFactoryImpl<JSONOutputArchiveTest_TransparentStruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONOutputArchiveTest_TransparentStruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60bec0

void * __thiscall
testing::internal::TestFactoryImpl<JSONOutputArchiveTest_TransparentStruct_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONOutputArchiveTest_TransparentStruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONOutputArchiveTest_TransparentStruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DefaultMemoryResource>_> @ 14c60bf00

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
          *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  _String_val<std::_Simple_types<char>_> *p_Var2;
  
  p_Var2 = &(param_2->_Mypair)._Myval2;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    p_Var2 = (_String_val<std::_Simple_types<char>_> *)(p_Var2->_Bx)._Ptr;
  }
  pbVar1 = _Insert_string<char,std::char_traits<char>,unsigned___int64>
                     (param_1,(char *)p_Var2,(param_2->_Mypair)._Myval2._Mysize);
  return pbVar1;
}

// dispatch<std::vector<int,std::allocator<int>_>_&> @ 14c60bf20

void __thiscall
terse::Archive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>::
dispatch<std::vector<int,std::allocator<int>_>_&>
          (Archive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
           *this,vector<int,std::allocator<int>_> *param_1)

{
  JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *pJVar1;
  int *piVar2;
  
  pJVar1 = this->impl;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&pJVar1->field_0x1080,"[");
  piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (piVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)(*(longlong *)pJVar1 + 0x1080),*piVar2
              );
    piVar2 = piVar2 + 1;
    if (piVar2 != (param_1->_Mypair)._Myval2._Mylast) {
      do {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)&pJVar1->field_0x1080,", ");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,std::char_traits<char>_> *)(*(longlong *)pJVar1 + 0x1080),
                   *piVar2);
        piVar2 = piVar2 + 1;
      } while (piVar2 != (param_1->_Mypair)._Myval2._Mylast);
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&pJVar1->field_0x1080,"]");
  return;
}

// process<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> @ 14c60bfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
terse::
ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
          (ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,Blob<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> *param_1)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char ******ppppppcVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char ******ppppppcVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_98 [40];
  PolyAllocator<char,8,pma::DefaultMemoryResource> local_70;
  char *****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_70 = (param_1->bytes).alloc;
  uVar9 = ((param_1->bytes).sz << 2) / 3 + 3 & 0xfffffffc;
  local_68 = (char *****)0x0;
  uStack_60 = 0;
  local_58 = uVar9;
  if (uVar9 < 0x10) {
    local_50 = 0xf;
    memset(&local_68,0,uVar9);
    *(undefined1 *)((longlong)&local_68 + uVar9) = 0;
  }
  else {
    uVar12 = uVar9 | 0xf;
    if (uVar12 < 0x16) {
      uVar12 = 0x16;
    }
    ppppppcVar5 = (char ******)(**(code **)(*(longlong *)local_70 + 8))(local_70,uVar12 + 1,8);
    local_68 = (char *****)ppppppcVar5;
    local_50 = uVar12;
    memset(ppppppcVar5,0,uVar9);
    *(char *)((longlong)ppppppcVar5 + uVar9) = '\0';
  }
  uVar9 = (param_1->bytes).sz;
  iVar7 = -6;
  pcVar1 = (param_1->bytes).ptr._Mypair._Myval2;
  ppppppcVar5 = &local_68;
  if (0xf < local_50) {
    ppppppcVar5 = (char ******)local_68;
  }
  uVar10 = 0;
  ppppppcVar11 = ppppppcVar5;
  uVar12 = uVar10;
  if (uVar9 != 0) {
    do {
      iVar4 = (uint)(byte)pcVar1[uVar10] + (int)uVar12 * 0x100;
      iVar8 = iVar7 + 8;
      iVar2 = iVar8;
      if (-1 < iVar8) {
        lVar13 = (longlong)iVar8;
        uVar12 = (ulonglong)(iVar7 + 0xe) / 6;
        iVar7 = (int)uVar12;
        do {
          bVar3 = (byte)lVar13;
          lVar13 = lVar13 + -6;
          *(char *)ppppppcVar11 = alphabet[(uint)((longlong)iVar4 >> (bVar3 & 0x3f)) & 0x3f];
          ppppppcVar11 = (char ******)((longlong)ppppppcVar11 + 1);
          uVar12 = uVar12 - 1;
          iVar2 = iVar8 + iVar7 * -6;
        } while (uVar12 != 0);
      }
      iVar7 = iVar2;
      uVar10 = uVar10 + 1;
      uVar12 = (longlong)iVar4;
    } while (uVar10 < uVar9);
    if (-6 < iVar7) {
      *(char *)ppppppcVar11 =
           alphabet[(uint)((longlong)(iVar4 * 0x100) >> ((char)iVar7 + 8U & 0x3f)) & 0x3f];
      ppppppcVar11 = (char ******)((longlong)ppppppcVar11 + 1);
    }
  }
  bVar3 = (char)ppppppcVar11 - (char)ppppppcVar5;
  while ((bVar3 & 3) != 0) {
    *(char *)ppppppcVar11 = '=';
    ppppppcVar11 = (char ******)((longlong)ppppppcVar11 + 1);
    bVar3 = (char)ppppppcVar11 - (char)ppppppcVar5;
  }
  pbVar6 = std::operator<<<std::char_traits<char>_>(&this->stream,"\"");
  ppppppcVar5 = &local_68;
  if (0xf < local_50) {
    ppppppcVar5 = (char ******)local_68;
  }
  pbVar6 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     (pbVar6,(char *)ppppppcVar5,local_58);
  std::operator<<<std::char_traits<char>_>(pbVar6,"\"");
  if (0xf < local_50) {
    (**(code **)(*(longlong *)local_70 + 0x10))(local_70,local_68,local_50 + 1,8);
  }
  return;
}

// process<InnerOpaque> @ 14c60c250

void __thiscall
terse::
ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<InnerOpaque>
          (ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,InnerOpaque *param_1)

{
  uint *puVar1;
  bool bVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  int iVar5;
  bool *pbVar6;
  
  bVar2 = (this->state).transparent;
  pbVar4 = &this->stream;
  (this->state).transparent = false;
  pbVar6 = &(this->state).firstMember;
  puVar1 = &(this->state).indentLevel;
  if (bVar2 == false) {
    *pbVar6 = true;
    std::operator<<<std::char_traits<char>_>(pbVar4,"{");
    std::operator<<<std::char_traits<char>_>(pbVar4,"\n");
    *puVar1 = *puVar1 + 1;
  }
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = *puVar1 * (this->state).indentWidth; iVar5 != 0; iVar5 = iVar5 + -1) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar6 = &(this->state).firstMember;
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"a");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar3,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),param_1->a);
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = (this->state).indentWidth * (this->state).indentLevel; iVar5 != 0; iVar5 = iVar5 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"b");
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar4,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),param_1->b);
  if (bVar2 == false) {
    postStructOutput(this);
  }
  return;
}

// process<JSONStruct> @ 14c60c420

void __thiscall
terse::
ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<JSONStruct>
          (ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,JSONStruct *param_1)

{
  uint *puVar1;
  bool bVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  int iVar5;
  bool *pbVar6;
  
  bVar2 = (this->state).transparent;
  pbVar4 = &this->stream;
  (this->state).transparent = false;
  pbVar6 = &(this->state).firstMember;
  puVar1 = &(this->state).indentLevel;
  if (bVar2 == false) {
    *pbVar6 = true;
    std::operator<<<std::char_traits<char>_>(pbVar4,"{");
    std::operator<<<std::char_traits<char>_>(pbVar4,"\n");
    *puVar1 = *puVar1 + 1;
  }
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = *puVar1 * (this->state).indentWidth; iVar5 != 0; iVar5 = iVar5 + -1) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar6 = &(this->state).firstMember;
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"a");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar3,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),
             (int)param_1->a);
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = (this->state).indentWidth * (this->state).indentLevel; iVar5 != 0; iVar5 = iVar5 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar6 = &(this->state).firstMember;
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"b");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar3,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),
             (uint)param_1->b);
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = (this->state).indentLevel * (this->state).indentWidth; iVar5 != 0; iVar5 = iVar5 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar6 = &(this->state).firstMember;
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"c");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar3,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),param_1->c);
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = (this->state).indentWidth * (this->state).indentLevel; iVar5 != 0; iVar5 = iVar5 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar6 = &(this->state).firstMember;
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"d");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar3,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),param_1->d);
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = (this->state).indentWidth * (this->state).indentLevel; iVar5 != 0; iVar5 = iVar5 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar6 = &(this->state).firstMember;
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"e");
  pbVar3 = std::operator<<<std::char_traits<char>_>(pbVar3,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar3,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),param_1->e);
  if (*pbVar6 == false) {
    std::operator<<<std::char_traits<char>_>(pbVar4,",\n");
  }
  else {
    *pbVar6 = false;
  }
  for (iVar5 = (this->state).indentWidth * (this->state).indentLevel; iVar5 != 0; iVar5 = iVar5 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(pbVar4,' ');
  }
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"f");
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar4,": ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),param_1->f);
  if (bVar2 == false) {
    postStructOutput(this);
  }
  return;
}

// serialize<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_> @ 14c60c850

void __thiscall
NestedJSONStruct::
serialize<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
          (NestedJSONStruct *this,
          JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *param_1)

{
  uint *puVar1;
  bool bVar2;
  longlong *plVar3;
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  *this_00;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  int iVar5;
  ushort *puVar6;
  
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::label((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *)param_1,"first");
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<JSONStruct>
            (*(ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
               **)param_1,&this->a);
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::label((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *)param_1,"another");
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<JSONStruct>
            (*(ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
               **)param_1,&this->b);
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::label((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *)param_1,"array");
  plVar3 = *(longlong **)param_1;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(plVar3 + 0x210),"[");
  puVar6 = (this->c)._Mypair._Myval2._Myfirst;
  if (puVar6 != (this->c)._Mypair._Myval2._Mylast) {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)(*plVar3 + 0x1080),*puVar6);
    puVar6 = puVar6 + 1;
    if (puVar6 != (this->c)._Mypair._Myval2._Mylast) {
      do {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)(plVar3 + 0x210),", ");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  ((basic_ostream<char,std::char_traits<char>_> *)(*plVar3 + 0x1080),*puVar6);
        puVar6 = puVar6 + 1;
      } while (puVar6 != (this->c)._Mypair._Myval2._Mylast);
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(plVar3 + 0x210),"]");
  terse::
  ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::label((ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *)param_1,"array_in_struct");
  this_00 = *(ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              **)param_1;
  bVar2 = (this_00->state).transparent;
  (this_00->state).transparent = false;
  if (bVar2 == false) {
    (this_00->state).firstMember = true;
    std::operator<<<std::char_traits<char>_>(&this_00->stream,"{");
    std::operator<<<std::char_traits<char>_>(&this_00->stream,"\n");
    puVar1 = &(this_00->state).indentLevel;
    *puVar1 = *puVar1 + 1;
  }
  if ((this_00->state).firstMember == false) {
    std::operator<<<std::char_traits<char>_>(&this_00->stream,",\n");
  }
  else {
    (this_00->state).firstMember = false;
  }
  for (iVar5 = (this_00->state).indentWidth * (this_00->state).indentLevel; iVar5 != 0;
      iVar5 = iVar5 + -1) {
    std::operator<<<std::char_traits<char>_>(&this_00->stream,' ');
  }
  pbVar4 = std::operator<<<std::char_traits<char>_>(&this_00->stream,"\"");
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"nested array in struct");
  pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar4,": ");
  terse::Archive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>::
  dispatch<std::vector<int,std::allocator<int>_>_&>
            ((Archive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_> *
             )this_00,&(this->d).cc);
  if (bVar2 == false) {
    terse::
    ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::postStructOutput(this_00);
  }
  return;
}

// ~CharOutputStreamBuf<tersetests::FakeStream,4096> @ 14c60ca50

void __thiscall
terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::
~CharOutputStreamBuf<tersetests::FakeStream,4096>
          (CharOutputStreamBuf<tersetests::FakeStream,4096> *this)

{
  ulong64 uVar1;
  
  this->_padding_ = (longlong)&___7__CharOutputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  uVar1 = *(longlong *)this->_padding_ - *(longlong *)this->_padding_;
  if (0 < (longlong)uVar1) {
    tersetests::FakeStream::write(this->stream,(this->buffer)._Elems,uVar1);
    *(int *)this->_padding_ = *(int *)this->_padding_ + (int)uVar1;
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + (longlong)-(int)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c60caa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}

// `scalar_deleting_destructor' @ 14c60cac0

void * __thiscall
terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::_scalar_deleting_destructor_
          (CharOutputStreamBuf<tersetests::FakeStream,4096> *this,uint param_1)

{
  ~CharOutputStreamBuf<tersetests::FakeStream,4096>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1070);
  }
  return this;
}

// label @ 14c60cb00

void __thiscall
terse::
ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::label(ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
        *this,char *param_1)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  int iVar2;
  
  if ((this->state).firstMember == false) {
    std::operator<<<std::char_traits<char>_>(&this->stream,",\n");
  }
  else {
    (this->state).firstMember = false;
  }
  for (iVar2 = (this->state).indentLevel * (this->state).indentWidth; iVar2 != 0; iVar2 = iVar2 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(&this->stream,' ');
  }
  pbVar1 = std::operator<<<std::char_traits<char>_>(&this->stream,"\"");
  pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,param_1);
  pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"\"");
  std::operator<<<std::char_traits<char>_>(pbVar1,": ");
  return;
}

// overflow @ 14c60cbc0

int __thiscall
terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::overflow
          (CharOutputStreamBuf<tersetests::FakeStream,4096> *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == -1) {
    return -1;
  }
  **(undefined1 **)this->_padding_ = (char)param_1;
  *(int *)this->_padding_ = *(int *)this->_padding_ + -1;
  *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + 1;
  iVar1 = (**(code **)(this->_padding_ + 0x68))(this);
  iVar2 = -1;
  if (iVar1 == 0) {
    iVar2 = param_1;
  }
  return iVar2;
}

// postStructOutput @ 14c60cc10

void __thiscall
terse::
ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::postStructOutput(ExtendableJSONOutputArchive<terse::JSONOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                   *this)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = &(this->state).indentLevel;
  *puVar1 = *puVar1 - 1;
  std::operator<<<std::char_traits<char>_>(&this->stream,"\n");
  for (iVar2 = (this->state).indentWidth * (this->state).indentLevel; iVar2 != 0; iVar2 = iVar2 + -1
      ) {
    std::operator<<<std::char_traits<char>_>(&this->stream,' ');
  }
  std::operator<<<std::char_traits<char>_>(&this->stream,"}");
  return;
}

// sync @ 14c60cc90

int __thiscall
terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::sync
          (CharOutputStreamBuf<tersetests::FakeStream,4096> *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar2 = *(longlong *)this->_padding_ - *(longlong *)this->_padding_;
  if (0 < (longlong)uVar2) {
    uVar1 = tersetests::FakeStream::write(this->stream,(this->buffer)._Elems,uVar2);
    *(int *)this->_padding_ = *(int *)this->_padding_ + (int)uVar2;
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + (longlong)-(int)uVar2;
    return -(uint)(uVar2 != uVar1);
  }
  return 0;
}

// xsputn @ 14c60cd00

long64 __thiscall
terse::CharOutputStreamBuf<tersetests::FakeStream,4096>::xsputn
          (CharOutputStreamBuf<tersetests::FakeStream,4096> *this,char *param_1,long64 param_2)

{
  int iVar1;
  ulong64 uVar2;
  
  if (0 < param_2) {
    if (param_2 < *(int *)this->_padding_) {
      memcpy(*(void **)this->_padding_,param_1,param_2);
      *(int *)this->_padding_ = *(int *)this->_padding_ - (int)param_2;
      *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + (longlong)(int)param_2;
      return param_2;
    }
    iVar1 = (**(code **)(this->_padding_ + 0x68))();
    if (iVar1 == 0) {
      uVar2 = tersetests::FakeStream::write(this->stream,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

