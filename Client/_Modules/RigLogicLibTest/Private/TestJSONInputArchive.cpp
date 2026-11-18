// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 104

// test_info_'' @ 141399c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'JSONInputArchiveTest_InputBlob_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VJSONInputArchiveTest_InputBlob_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x4e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x4e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x4e;
  JSONInputArchiveTest_InputBlob_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputBlob",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 141399e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'JSONInputArchiveTest_InputCharArray_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_InputCharArray_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x61);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x61);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x61;
  JSONInputArchiveTest_InputCharArray_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputCharArray",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139a0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONInputArchiveTest_InputEmptyVector_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_InputEmptyVector_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x2e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x2e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x2e;
  JSONInputArchiveTest_InputEmptyVector_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputEmptyVector",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139a300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONInputArchiveTest_InputNestedStructs_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_InputNestedStructs_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x9a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x9a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x9a;
  JSONInputArchiveTest_InputNestedStructs_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputNestedStructs",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139a550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONInputArchiveTest_InputPrimitiveStruct_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_InputPrimitiveStruct_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x16);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x16);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x16;
  JSONInputArchiveTest_InputPrimitiveStruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputPrimitiveStruct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139a7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONInputArchiveTest_InputVectorOfPrimitives_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_InputVectorOfPrimitives_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x3e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x3e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x3e;
  JSONInputArchiveTest_InputVectorOfPrimitives_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputVectorOfPrimitives",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONInputArchiveTest_InputVectorOfStructs_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_InputVectorOfStructs_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x71);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0x71);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0x71;
  JSONInputArchiveTest_InputVectorOfStructs_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","InputVectorOfStructs",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139ac40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'JSONInputArchiveTest_TransparentStruct_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VJSONInputArchiveTest_TransparentStruct_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0xc1);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                      ,0xc1);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x8c;
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
  pcVar6[0x8c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f000000000000008c;
  uStack_40 = _UNK_1528823f8;
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
  *(local_58._Ptr + 0x8c) = pcVar6[0x8c];
  local_38 = 0xc1;
  JSONInputArchiveTest_TransparentStruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("JSONInputArchiveTest","TransparentStruct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c5ff200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputPrimitiveStruct_Test::TestBody
          (JSONInputArchiveTest_InputPrimitiveStruct_Test *this)

{
  bool bVar1;
  void *pvVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  AssertHelper *pAVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong64 uVar12;
  undefined1 auStackY_1258 [32];
  AssertionResult local_1228;
  AssertHelper local_1218;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1210;
  FakeStream local_1208;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined1 local_1180;
  JSONStruct local_1178;
  JSONStruct local_1168;
  _Bxty local_1158;
  undefined8 local_1148;
  ulonglong uStack_1140;
  _Bxty local_1138;
  ulonglong local_1120;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14c5ff21d;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1258;
  local_1180 = DAT_15289cfb8;
  local_11e8 = _s________a___127_______b___255___;
  uStack_11e0 = _UNK_15289cf58;
  local_11c8 = _DAT_15289cf70;
  uStack_11c0 = _UNK_15289cf78;
  local_11a8 = _DAT_15289cf90;
  uStack_11a0 = _UNK_15289cf98;
  local_11d8 = _DAT_15289cf60;
  uStack_11d0 = _UNK_15289cf68;
  local_1188 = DAT_15289cfb0;
  local_11b8 = _DAT_15289cf80;
  uStack_11b0 = _UNK_15289cf88;
  local_1208.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1208.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1178.a = '\x7f';
  local_1178.b = 0xff;
  local_1178.c = 0x7fff;
  local_1198 = _DAT_15289cfa0;
  uStack_1190 = _UNK_15289cfa8;
  local_1178.d = 0xffff;
  local_1178.e = 0x7fffffff;
  local_1178.f = 0xffffffff;
  local_1208.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1208.position = 0;
  tersetests::FakeStream::write(&local_1208,(char *)&local_11e8,0x69);
  local_1118._0_8_ = local_1118;
  local_1208.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_1208;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,(basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10),false);
  uVar8 = local_1118._0_8_;
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_20[0].transparent = false;
  if (((SerializationState *)(local_1118._0_8_ + 0x10f8))->malformed == false) {
    bVar1 = ((SerializationState *)(local_1118._0_8_ + 0x10f8))->transparent;
    ((SerializationState *)(local_1118._0_8_ + 0x10f8))->transparent = false;
    if (bVar1 == false) {
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::preStructInput((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)uVar8);
      JSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&local_1168,
                 (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)uVar8);
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::postStructInput((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                         *)uVar8);
    }
    else {
      JSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&local_1168,
                 (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)uVar8);
    }
  }
  if ((((local_1168.a == local_1178.a) && (local_1168.b == local_1178.b)) &&
      (local_1168.c == local_1178.c)) &&
     (((local_1168.d == local_1178.d && (local_1168.e == local_1178.e)) &&
      (local_1168.f == local_1178.f)))) {
    testing::AssertionSuccess(&local_1228);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1138,&local_1178,&local_1168);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1158,&local_1168,&local_1178);
    testing::internal::EqFailure(&local_1228,"result","expected",pbVar4,pbVar6,false);
    if (0xf < uStack_1140) {
      pvVar2 = (void *)CONCAT71(local_1158._1_7_,local_1158._Buf[0]);
      uVar12 = uStack_1140 + 1;
      pvVar9 = pvVar2;
      if (0xfff < uVar12) {
        pvVar9 = *(void **)((longlong)pvVar2 + -8);
        uVar12 = uStack_1140 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5ff4bb;
      }
      ::operator_delete(pvVar9,uVar12);
    }
    local_1158._Buf[0] = '\0';
    local_1148 = ___xmm_000000000000000f0000000000000000;
    uStack_1140 = _UNK_15076add8;
    if (0xf < local_1120) {
      uVar12 = local_1120 + 1;
      uVar8 = local_1138._Ptr;
      if (0xfff < uVar12) {
        uVar8 = *(undefined8 *)(local_1138._Ptr + -8);
        uVar12 = local_1120 + 0x28;
        if ((char *)0x1f < local_1138._Ptr + (-8 - uVar8)) {
LAB_14c5ff4bb:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar8,uVar12);
    }
  }
  if (local_1228.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1218);
    if (local_1228.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_1228.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1228.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_1228.message_._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1210,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x2a,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1210);
    if (local_1218.data_ != (AssertHelperData *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)&(local_1218.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1218.data_ + 4));
      (**(code **)*puVar10)(puVar10,1);
    }
    uVar3._Mypair._Myval2 = local_1228.message_._Mypair._Myval2;
    if (local_1228.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1228.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_1208.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar12 = (longlong)local_1208.data._Mypair._Myval2._Myend -
             (longlong)local_1208.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1208.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_1208.data._Mypair._Myval2._Myfirst + -8);
      uVar12 = uVar12 + 0x27;
      if ((char *)0x1f < local_1208.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_1228.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1228.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1228.message_._Mypair._Myval2,0x20);
    }
    local_1228.success_ = local_20[0].malformed == false;
    local_1228.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (local_20[0].malformed == false) {
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_1208.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar12 = (longlong)local_1208.data._Mypair._Myval2._Myend -
               (longlong)local_1208.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_1208.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar12) {
        uVar12 = uVar12 + 0x27;
        pcVar11 = *(char **)(local_1208.data._Mypair._Myval2._Myfirst + -8);
        if ((char *)0x1f <
            local_1208.data._Mypair._Myval2._Myfirst +
            (-8 - (longlong)*(char **)(local_1208.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5ff7ea;
    }
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1210);
    pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1158,&local_1228,"archive.isOk()","false","true");
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_1218,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x2b,(char *)pbVar6);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_1218);
    if (0xf < uStack_1140) {
      pvVar2 = (void *)CONCAT71(local_1158._1_7_,local_1158._Buf[0]);
      uVar12 = uStack_1140 + 1;
      pvVar9 = pvVar2;
      if (0xfff < uVar12) {
        pvVar9 = *(void **)((longlong)pvVar2 + -8);
        uVar12 = uStack_1140 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5ff6d7;
      }
      ::operator_delete(pvVar9,uVar12);
    }
    local_1158._Buf[0] = '\0';
    local_1148 = ___xmm_000000000000000f0000000000000000;
    uStack_1140 = _UNK_15076add8;
    if (local_1210._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_1210._Mypair._Myval2 + 4) +
                (longlong)local_1210._Mypair._Myval2);
      (**(code **)*puVar10)(puVar10,1);
    }
    uVar3._Mypair._Myval2 = local_1228.message_._Mypair._Myval2;
    if (local_1228.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1228.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_1208.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar12 = (longlong)local_1208.data._Mypair._Myval2._Myend -
             (longlong)local_1208.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1208.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      pcVar11 = *(char **)(local_1208.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1208.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1208.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c5ff6d7:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_14c5ff7ea:
  ::operator_delete(pcVar11,uVar12);
  return;
}

// `scalar_deleting_destructor' @ 14c5ff820

void * __thiscall
JSONInputArchiveTest_InputPrimitiveStruct_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputPrimitiveStruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ff860

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputPrimitiveStruct_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputPrimitiveStruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputPrimitiveStruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ff8a0

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputPrimitiveStruct_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputPrimitiveStruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputPrimitiveStruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ff8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputEmptyVector_Test::TestBody
          (JSONInputArchiveTest_InputEmptyVector_Test *this)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  int iVar3;
  Message *pMVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  AssertHelper *pAVar6;
  undefined8 uVar7;
  void *pvVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  ulong64 uVar12;
  undefined1 auStackY_1208 [32];
  undefined2 local_11d8;
  undefined1 local_11d6;
  vector<int,std::allocator<int>_> local_11d0;
  AssertionResult local_11b8;
  FakeStream local_11a8;
  AssertHelper local_1188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1180;
  vector<int,std::allocator<int>_> local_1178;
  _Bxty local_1160;
  undefined8 local_1150;
  ulonglong uStack_1148;
  _Bxty local_1140;
  ulonglong local_1128;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 local_10;
  
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10);
  local_10 = 0x14c5ff8fd;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  local_11d8 = _s___;
  local_11d6 = DAT_1508995a2;
  local_11a8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1178._Mypair._Myval2._Myend = (int *)0x0;
  local_1178._Mypair._Myval2._Myfirst = (int *)0x0;
  local_1178._Mypair._Myval2._Mylast = (int *)0x0;
  local_11a8.position = 0;
  local_11a8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11a8.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_11a8,(char *)&local_11d8,3);
  local_1118._0_8_ = local_1118;
  local_11a8.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_11a8;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,this_00,false);
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_11d0._Mypair._Myval2._Myfirst = (int *)0x0;
  local_11d0._Mypair._Myval2._Mylast = (int *)0x0;
  local_20[0].transparent = false;
  local_11d0._Mypair._Myval2._Myend = (int *)0x0;
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<int,std::allocator<int>_>
            ((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)local_1118._0_8_,&local_11d0);
  if (((ulonglong)
       ((longlong)local_11d0._Mypair._Myval2._Mylast - (longlong)local_11d0._Mypair._Myval2._Myfirst
       ) < 4) &&
     (iVar3 = memcmp(local_11d0._Mypair._Myval2._Myfirst,(void *)0x0,
                     (longlong)local_11d0._Mypair._Myval2._Mylast -
                     (longlong)local_11d0._Mypair._Myval2._Myfirst), iVar3 == 0)) {
    testing::AssertionSuccess(&local_11b8);
    piVar11 = (int *)0x0;
  }
  else {
    testing::PrintToString<std::vector<int,std::allocator<int>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1140,
               &local_1178);
    testing::PrintToString<std::vector<int,std::allocator<int>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1160,
               &local_11d0);
    testing::internal::EqFailure
              (&local_11b8,"result","expected",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1160,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1140,false)
    ;
    if (0xf < uStack_1148) {
      pvVar1 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
      uVar12 = uStack_1148 + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar12) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar12 = uStack_1148 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c5ffaec;
      }
      ::operator_delete(pvVar8,uVar12);
    }
    local_1160._Buf[0] = '\0';
    local_1150 = ___xmm_000000000000000f0000000000000000;
    uStack_1148 = _UNK_15076add8;
    piVar11 = local_1178._Mypair._Myval2._Myend;
    if (0xf < local_1128) {
      uVar12 = local_1128 + 1;
      uVar7 = local_1140._Ptr;
      if (0xfff < uVar12) {
        uVar7 = *(undefined8 *)(local_1140._Ptr + -8);
        uVar12 = local_1128 + 0x28;
        if ((char *)0x1f < local_1140._Ptr + (-8 - uVar7)) {
LAB_14c5ffaec:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar12);
      piVar11 = local_1178._Mypair._Myval2._Myend;
    }
  }
  if (local_11b8.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_1188);
    if (local_11b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)local_11b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar10 = *(char **)local_11b8.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1180,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x3a,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar4);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1180);
    if (local_1188.data_ != (AssertHelperData *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)&(local_1188.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_1188.data_ + 4)))();
    }
    uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
    if (local_11b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_11d0._Mypair._Myval2._Myfirst != (int *)0x0) {
      uVar12 = (longlong)local_11d0._Mypair._Myval2._Myend -
               (longlong)local_11d0._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      piVar9 = local_11d0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar12) {
        piVar9 = *(int **)(local_11d0._Mypair._Myval2._Myfirst + -2);
        uVar12 = uVar12 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_11d0._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar9)))
        goto LAB_14c5fffc3;
      }
      ::operator_delete(piVar9,uVar12);
      local_11d0._Mypair._Myval2._Myend = (int *)0x0;
      local_11d0._Mypair._Myval2._Myfirst = (int *)0x0;
      local_11d0._Mypair._Myval2._Mylast = (int *)0x0;
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(this_00);
    if (local_11a8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar12 = (longlong)local_11a8.data._Mypair._Myval2._Myend -
               (longlong)local_11a8.data._Mypair._Myval2._Myfirst;
      pcVar10 = local_11a8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar12) {
        pcVar10 = *(char **)(local_11a8.data._Mypair._Myval2._Myfirst + -8);
        uVar12 = uVar12 + 0x27;
        if ((char *)0x1f < local_11a8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar10))
        goto LAB_14c5fffc3;
      }
      ::operator_delete(pcVar10,uVar12);
      local_11a8.data._Mypair._Myval2._Myend = (char *)0x0;
      local_11a8.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_11a8.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if (local_1178._Mypair._Myval2._Myfirst == (int *)0x0) {
      return;
    }
    uVar12 = (longlong)piVar11 - (longlong)local_1178._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
    piVar11 = local_1178._Mypair._Myval2._Myfirst;
    if (0xfff < uVar12) {
      piVar11 = *(int **)(local_1178._Mypair._Myval2._Myfirst + -2);
      uVar12 = uVar12 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_1178._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar11))) {
LAB_14c5fffc3:
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
      ::operator_delete((void *)local_11b8.message_._Mypair._Myval2,0x20);
    }
    local_11b8.success_ = local_20[0].malformed == false;
    local_11b8.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (local_20[0].malformed == false) {
      if (local_11d0._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar12 = (longlong)local_11d0._Mypair._Myval2._Myend -
                 (longlong)local_11d0._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar9 = local_11d0._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          piVar9 = *(int **)(local_11d0._Mypair._Myval2._Myfirst + -2);
          uVar12 = uVar12 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_11d0._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar9)))
          goto LAB_14c5ffc40;
        }
        ::operator_delete(piVar9,uVar12);
        local_11d0._Mypair._Myval2._Myend = (int *)0x0;
        local_11d0._Mypair._Myval2._Myfirst = (int *)0x0;
        local_11d0._Mypair._Myval2._Mylast = (int *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(this_00);
      if (local_11a8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar12 = (longlong)local_11a8.data._Mypair._Myval2._Myend -
                 (longlong)local_11a8.data._Mypair._Myval2._Myfirst;
        pcVar10 = local_11a8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          pcVar10 = *(char **)(local_11a8.data._Mypair._Myval2._Myfirst + -8);
          uVar12 = uVar12 + 0x27;
          if ((char *)0x1f < local_11a8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar10))
          goto LAB_14c5ffc40;
        }
        ::operator_delete(pcVar10,uVar12);
        local_11a8.data._Mypair._Myval2._Myend = (char *)0x0;
        local_11a8.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_11a8.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_1178._Mypair._Myval2._Myfirst == (int *)0x0) {
        return;
      }
      uVar12 = (longlong)piVar11 - (longlong)local_1178._Mypair._Myval2._Myfirst &
               0xfffffffffffffffc;
      piVar11 = local_1178._Mypair._Myval2._Myfirst;
      if (0xfff < uVar12) {
        uVar12 = uVar12 + 0x27;
        piVar11 = *(int **)(local_1178._Mypair._Myval2._Myfirst + -2);
        if (0x1f < (ulonglong)
                   ((longlong)local_1178._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)*(int **)(local_1178._Mypair._Myval2._Myfirst + -2)))) {
LAB_14c5ffc40:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_1180);
      pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_1160,&local_11b8,"archive.isOk()","false","true");
      if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
        pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar5->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_1188,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                          ,0x3b,(char *)pbVar5);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_1188);
      if (0xf < uStack_1148) {
        pvVar1 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
        uVar12 = uStack_1148 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_1148 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c5ffe38;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_1160._Buf[0] = '\0';
      local_1150 = ___xmm_000000000000000f0000000000000000;
      uStack_1148 = _UNK_15076add8;
      if (local_1180._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (*(code *)**(undefined8 **)
                    ((longlong)*(int *)(*(longlong *)local_1180._Mypair._Myval2 + 4) +
                    (longlong)local_1180._Mypair._Myval2))();
      }
      uVar2._Mypair._Myval2 = local_11b8.message_._Mypair._Myval2;
      if (local_11b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_11b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_11d0._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar12 = (longlong)local_11d0._Mypair._Myval2._Myend -
                 (longlong)local_11d0._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar9 = local_11d0._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          piVar9 = *(int **)(local_11d0._Mypair._Myval2._Myfirst + -2);
          uVar12 = uVar12 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_11d0._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar9)))
          goto LAB_14c5ffe38;
        }
        ::operator_delete(piVar9,uVar12);
        local_11d0._Mypair._Myval2._Myend = (int *)0x0;
        local_11d0._Mypair._Myval2._Myfirst = (int *)0x0;
        local_11d0._Mypair._Myval2._Mylast = (int *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(this_00);
      if (local_11a8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar12 = (longlong)local_11a8.data._Mypair._Myval2._Myend -
                 (longlong)local_11a8.data._Mypair._Myval2._Myfirst;
        pcVar10 = local_11a8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          pcVar10 = *(char **)(local_11a8.data._Mypair._Myval2._Myfirst + -8);
          uVar12 = uVar12 + 0x27;
          if ((char *)0x1f < local_11a8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar10))
          goto LAB_14c5ffe38;
        }
        ::operator_delete(pcVar10,uVar12);
        local_11a8.data._Mypair._Myval2._Myend = (char *)0x0;
        local_11a8.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_11a8.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_1178._Mypair._Myval2._Myfirst == (int *)0x0) {
        return;
      }
      uVar12 = (longlong)piVar11 - (longlong)local_1178._Mypair._Myval2._Myfirst &
               0xfffffffffffffffc;
      piVar11 = local_1178._Mypair._Myval2._Myfirst;
      if (0xfff < uVar12) {
        uVar12 = uVar12 + 0x27;
        piVar11 = *(int **)(local_1178._Mypair._Myval2._Myfirst + -2);
        if (0x1f < (ulonglong)
                   ((longlong)local_1178._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)*(int **)(local_1178._Mypair._Myval2._Myfirst + -2)))) {
LAB_14c5ffe38:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  ::operator_delete(piVar11,uVar12);
  return;
}

// `scalar_deleting_destructor' @ 14c600020

void * __thiscall
JSONInputArchiveTest_InputEmptyVector_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputEmptyVector_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c600060

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputEmptyVector_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputEmptyVector_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputEmptyVector_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6000a0

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputEmptyVector_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputEmptyVector_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputEmptyVector_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6000e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputVectorOfPrimitives_Test::TestBody
          (JSONInputArchiveTest_InputVectorOfPrimitives_Test *this)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  int iVar2;
  undefined8 uVar3;
  Message *pMVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  AssertHelper *pAVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  ulong64 uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStackY_1208 [32];
  vector<int,std::allocator<int>_> local_11d8;
  FakeStream local_11c0;
  AssertHelper local_11a0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1198;
  AssertionResult local_1190;
  undefined4 local_1180;
  _Bxty local_1178;
  char *local_1168;
  ulonglong uStack_1160;
  _Bxty local_1158;
  undefined8 local_1148;
  ulonglong uStack_1140;
  _Bxty local_1138;
  ulonglong local_1120;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 local_10;
  
  uVar3 = local_1148;
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10);
  local_10 = 0x14c600102;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1208;
  local_1158._Ptr = (char *)s___10__0__1__10__10000_._0_8_;
  local_1158._8_8_ = s___10__0__1__10__10000_._8_8_;
  local_1148._7_1_ = SUB81(uVar3,7);
  local_1148._0_7_ =
       CONCAT16(s___10__0__1__10__10000_[0x16],
                CONCAT24(s___10__0__1__10__10000_._20_2_,s___10__0__1__10__10000_._16_4_));
  local_1190._0_8_ = ___xmm_0000000a0000000100000000fffffff6;
  local_1190.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289d3a8;
  local_1180 = 10000;
  uVar3 = std::_Allocate<16,std::_Default_allocate_traits>(0x14);
  pcVar11 = (char *)(uVar3 + 0x14);
  local_1178._Ptr = (char *)uVar3;
  local_1168 = pcVar11;
  memmove((void *)uVar3,&local_1190,0x14);
  local_11c0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_11c0.position = 0;
  local_11c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_11c0.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1178._8_8_ = pcVar11;
  tersetests::FakeStream::write(&local_11c0,local_1158._Buf,0x17);
  local_1118._0_8_ = local_1118;
  local_11c0.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_11c0;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,this_00,false);
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_11d8._Mypair._Myval2._Myfirst = (int *)0x0;
  local_11d8._Mypair._Myval2._Mylast = (int *)0x0;
  local_20[0].transparent = false;
  local_11d8._Mypair._Myval2._Myend = (int *)0x0;
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<int,std::allocator<int>_>
            ((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)local_1118._0_8_,&local_11d8);
  if ((((longlong)local_11d8._Mypair._Myval2._Mylast - (longlong)local_11d8._Mypair._Myval2._Myfirst
       & 0xfffffffffffffffcU) == 0x14) &&
     (iVar2 = memcmp(local_11d8._Mypair._Myval2._Myfirst,(void *)uVar3,
                     (longlong)local_11d8._Mypair._Myval2._Mylast -
                     (longlong)local_11d8._Mypair._Myval2._Myfirst), iVar2 == 0)) {
    testing::AssertionSuccess(&local_1190);
  }
  else {
    testing::PrintToString<std::vector<int,std::allocator<int>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1138,
               (vector<int,std::allocator<int>_> *)&local_1178);
    testing::PrintToString<std::vector<int,std::allocator<int>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1158,
               &local_11d8);
    testing::internal::EqFailure
              (&local_1190,"result","expected",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1158,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1138,false)
    ;
    if (0xf < uStack_1140) {
      uVar10 = uStack_1140 + 1;
      uVar3 = local_1158._Ptr;
      if (0xfff < uVar10) {
        uVar3 = *(undefined8 *)(local_1158._Ptr + -8);
        uVar10 = uStack_1140 + 0x28;
        if ((char *)0x1f < local_1158._Ptr + (-8 - uVar3)) goto LAB_14c60034a;
      }
      ::operator_delete((void *)uVar3,uVar10);
    }
    local_1158._Ptr = local_1158._Ptr & 0xffffffffffffff00;
    local_1148 = ___xmm_000000000000000f0000000000000000;
    uStack_1140 = _UNK_15076add8;
    pcVar11 = local_1168;
    uVar3 = local_1178._Ptr;
    if (0xf < local_1120) {
      uVar10 = local_1120 + 1;
      uVar3 = local_1138._Ptr;
      if (0xfff < uVar10) {
        uVar3 = *(undefined8 *)(local_1138._Ptr + -8);
        uVar10 = local_1120 + 0x28;
        if ((char *)0x1f < local_1138._Ptr + (-8 - uVar3)) {
LAB_14c60034a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar10);
      pcVar11 = local_1168;
      uVar3 = local_1178._Ptr;
    }
  }
  uVar1._Mypair._Myval2 = local_1190.message_._Mypair._Myval2;
  pcVar12 = (char *)uVar3;
  if (local_1190.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_11a0);
    if (local_1190.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_1190.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1190.message_._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_1190.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1198,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x4a,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar4);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1198);
    if (local_11a0.data_ != (AssertHelperData *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)&(local_11a0.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_11a0.data_ + 4)))();
    }
    uVar1._Mypair._Myval2 = local_1190.message_._Mypair._Myval2;
    if (local_1190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1190.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    if (local_11d8._Mypair._Myval2._Myfirst != (int *)0x0) {
      uVar10 = (longlong)local_11d8._Mypair._Myval2._Myend -
               (longlong)local_11d8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      piVar8 = local_11d8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar10) {
        piVar8 = *(int **)(local_11d8._Mypair._Myval2._Myfirst + -2);
        uVar10 = uVar10 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_11d8._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar8)))
        goto LAB_14c60081c;
      }
      ::operator_delete(piVar8,uVar10);
      local_11d8._Mypair._Myval2._Myend = (int *)0x0;
      local_11d8._Mypair._Myval2._Myfirst = (int *)0x0;
      local_11d8._Mypair._Myval2._Mylast = (int *)0x0;
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(this_00);
    if (local_11c0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar10 = (longlong)local_11c0.data._Mypair._Myval2._Myend -
               (longlong)local_11c0.data._Mypair._Myval2._Myfirst;
      pcVar9 = local_11c0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar10) {
        pcVar9 = *(char **)(local_11c0.data._Mypair._Myval2._Myfirst + -8);
        uVar10 = uVar10 + 0x27;
        if ((char *)0x1f < local_11c0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar9))
        goto LAB_14c60081c;
      }
      ::operator_delete(pcVar9,uVar10);
      local_11c0.data._Mypair._Myval2._Myend = (char *)0x0;
      local_11c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_11c0.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if ((char *)uVar3 == (char *)0x0) {
      return;
    }
    uVar10 = (longlong)pcVar11 - uVar3 & 0xfffffffffffffffc;
    if (0xfff < uVar10) {
      pcVar12 = *(char **)(uVar3 + -8);
      uVar10 = uVar10 + 0x27;
      if ((char *)0x1f < (char *)(uVar3 + (-8 - (longlong)pcVar12))) {
LAB_14c60081c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_1190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1190.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_1190.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_1190.success_ = local_20[0].malformed == false;
    if (local_20[0].malformed == false) {
      if (local_11d8._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar10 = (longlong)local_11d8._Mypair._Myval2._Myend -
                 (longlong)local_11d8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar8 = local_11d8._Mypair._Myval2._Myfirst;
        if (0xfff < uVar10) {
          piVar8 = *(int **)(local_11d8._Mypair._Myval2._Myfirst + -2);
          uVar10 = uVar10 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_11d8._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar8)))
          goto LAB_14c60049c;
        }
        ::operator_delete(piVar8,uVar10);
        local_11d8._Mypair._Myval2._Myend = (int *)0x0;
        local_11d8._Mypair._Myval2._Myfirst = (int *)0x0;
        local_11d8._Mypair._Myval2._Mylast = (int *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(this_00);
      if (local_11c0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar10 = (longlong)local_11c0.data._Mypair._Myval2._Myend -
                 (longlong)local_11c0.data._Mypair._Myval2._Myfirst;
        pcVar9 = local_11c0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar10) {
          pcVar9 = *(char **)(local_11c0.data._Mypair._Myval2._Myfirst + -8);
          uVar10 = uVar10 + 0x27;
          if ((char *)0x1f < local_11c0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar9))
          goto LAB_14c60049c;
        }
        ::operator_delete(pcVar9,uVar10);
        local_11c0.data._Mypair._Myval2._Myend = (char *)0x0;
        local_11c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_11c0.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if ((char *)uVar3 == (char *)0x0) {
        return;
      }
      uVar10 = (longlong)pcVar11 - uVar3 & 0xfffffffffffffffc;
      if (0xfff < uVar10) {
        uVar10 = uVar10 + 0x27;
        pcVar12 = *(char **)(uVar3 + -8);
        if ((char *)0x1f < (char *)(uVar3 + (-8 - (longlong)*(char **)(uVar3 + -8)))) {
LAB_14c60049c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_1198);
      pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_1178,&local_1190,"archive.isOk()","false","true");
      if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
        pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar5->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_11a0,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                          ,0x4b,(char *)pbVar5);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_11a0);
      if (0xf < uStack_1160) {
        uVar10 = uStack_1160 + 1;
        uVar7 = local_1178._Ptr;
        if (0xfff < uVar10) {
          uVar7 = *(undefined8 *)(local_1178._Ptr + -8);
          uVar10 = uStack_1160 + 0x28;
          if ((char *)0x1f < local_1178._Ptr + (-8 - uVar7)) goto LAB_14c600693;
        }
        ::operator_delete((void *)uVar7,uVar10);
      }
      local_1178._Ptr = local_1178._Ptr & 0xffffffffffffff00;
      local_1168 = ___xmm_000000000000000f0000000000000000;
      uStack_1160 = _UNK_15076add8;
      if (local_1198._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (*(code *)**(undefined8 **)
                    ((longlong)*(int *)(*(longlong *)local_1198._Mypair._Myval2 + 4) +
                    (longlong)local_1198._Mypair._Myval2))();
      }
      uVar1._Mypair._Myval2 = local_1190.message_._Mypair._Myval2;
      if (local_1190.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_1190.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      if (local_11d8._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar10 = (longlong)local_11d8._Mypair._Myval2._Myend -
                 (longlong)local_11d8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar8 = local_11d8._Mypair._Myval2._Myfirst;
        if (0xfff < uVar10) {
          piVar8 = *(int **)(local_11d8._Mypair._Myval2._Myfirst + -2);
          uVar10 = uVar10 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_11d8._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar8)))
          goto LAB_14c600693;
        }
        ::operator_delete(piVar8,uVar10);
        local_11d8._Mypair._Myval2._Myend = (int *)0x0;
        local_11d8._Mypair._Myval2._Myfirst = (int *)0x0;
        local_11d8._Mypair._Myval2._Mylast = (int *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(this_00);
      if (local_11c0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar10 = (longlong)local_11c0.data._Mypair._Myval2._Myend -
                 (longlong)local_11c0.data._Mypair._Myval2._Myfirst;
        pcVar9 = local_11c0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar10) {
          pcVar9 = *(char **)(local_11c0.data._Mypair._Myval2._Myfirst + -8);
          uVar10 = uVar10 + 0x27;
          if ((char *)0x1f < local_11c0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar9))
          goto LAB_14c600693;
        }
        ::operator_delete(pcVar9,uVar10);
        local_11c0.data._Mypair._Myval2._Myend = (char *)0x0;
        local_11c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_11c0.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if ((char *)uVar3 == (char *)0x0) {
        return;
      }
      uVar10 = (longlong)pcVar11 - uVar3 & 0xfffffffffffffffc;
      if (0xfff < uVar10) {
        uVar10 = uVar10 + 0x27;
        pcVar12 = *(char **)(uVar3 + -8);
        if ((char *)0x1f < (char *)(uVar3 + (-8 - (longlong)*(char **)(uVar3 + -8)))) {
LAB_14c600693:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  ::operator_delete(pcVar12,uVar10);
  return;
}

// `scalar_deleting_destructor' @ 14c600880

void * __thiscall
JSONInputArchiveTest_InputVectorOfPrimitives_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputVectorOfPrimitives_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6008c0

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputVectorOfPrimitives_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputVectorOfPrimitives_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputVectorOfPrimitives_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c600900

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputVectorOfPrimitives_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputVectorOfPrimitives_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputVectorOfPrimitives_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c600940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputBlob_Test::TestBody(JSONInputArchiveTest_InputBlob_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  AssertHelper *pAVar7;
  DefaultMemoryResource DVar8;
  void *pvVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 auStackY_1268 [32];
  AssertHelper local_1238;
  undefined2 local_1230;
  undefined1 local_122e;
  AssertHelper local_1228;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1220;
  AssertionResult local_1218;
  FakeStream local_1208;
  undefined1 local_11e8 [24];
  ulong64 local_11d0;
  ulonglong local_11c8;
  _Bxty local_11c0;
  undefined8 local_11b0;
  ulonglong uStack_11a8;
  undefined1 local_1198 [72];
  longlong *local_1150;
  AssertHelperData *local_1148;
  undefined1 local_1138 [40];
  longlong *local_1110;
  longlong *local_10f0;
  undefined4 *local_10d8;
  FakeStream *local_10c0;
  undefined1 local_10b8 [4096];
  basic_istream<char,std::char_traits<char>_> local_b8;
  SerializationState local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1268;
  local_1230 = DAT_15289cff0;
  uVar14 = 0;
  local_122e = DAT_15289cff2;
  local_1238.data_ = _s__AQIDBP8__;
  local_1228.data_._4_2_ = DAT_15289cff8;
  local_1228.data_._0_4_ = _s______;
  local_1208.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1208.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1208.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1208.position = 0;
  tersetests::FakeStream::write(&local_1208,(char *)&local_1238,0xb);
  local_1138._0_8_ = local_1138;
  local_1208.position = 0;
  local_1138._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1138 + 0x10));
  local_1138._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10c0 = &local_1208;
  memset(local_10b8,0,0x1000);
  *local_1110 = (longlong)&local_b8;
  *local_10f0 = (longlong)&local_b8;
  *local_10d8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_b8,(basic_streambuf<char,std::char_traits<char>_> *)(local_1138 + 0x10),false);
  local_40[0].malformed = false;
  local_40[0].firstMember = false;
  local_40[0].transparent = false;
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
  local_1198._8_8_ = (AssertHelperData *)0x0;
  local_1198._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1150 = (longlong *)0x0;
  local_1148 = (AssertHelperData *)0x0;
  terse::DynArray<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>::resize_uninitialized
            ((DynArray<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> *)local_1198,5);
  uVar2 = local_1138._0_8_;
  local_11e8._16_8_ = 0;
  local_11e8._0_8_ = local_1198._0_8_;
  local_11d0 = 0;
  local_11c8 = 0xf;
  local_11e8._8_8_ = (char *)0x0;
  uVar13 = (ulonglong)(local_1198._8_8_ * 4) / 3 + 3 & 0xfffffffc;
  if (0xf < uVar13) {
    uVar13 = uVar13 | 0xf;
    if (uVar13 < 0x16) {
      uVar13 = 0x16;
    }
    local_11e8._8_8_ =
         (**(code **)(*(longlong *)local_1198._0_8_ + 8))(local_1198._0_8_,uVar13 + 1,8);
    *(char *)local_11e8._8_8_ = '\0';
    local_11c8 = uVar13;
  }
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
            ((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)uVar2,(basic_string<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
                       *)local_11e8);
  uVar13 = local_11c8;
  uVar2 = local_11e8._8_8_;
  pcVar11 = local_11e8 + 8;
  if (0xf < local_11c8) {
    pcVar11 = (char *)local_11e8._8_8_;
  }
  terse::base64decode((char *)local_1148,pcVar11,local_11d0);
  if (0xf < uVar13) {
    (**(code **)(*(longlong *)local_11e8._0_8_ + 0x10))(local_11e8._0_8_,uVar2,uVar13 + 1,8);
  }
  uVar13 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_1220._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000005;
  local_1238.data_ = (AssertHelperData *)local_1198._8_8_;
  if ((AssertHelperData *)local_1198._8_8_ == (AssertHelperData *)&DAT_00000005) {
    testing::AssertionSuccess(&local_1218);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        local_11e8,(ulong64 *)&local_1220,(ulong64 *)&local_1238);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_11c0,(ulong64 *)&local_1238,(ulong64 *)&local_1220);
    testing::internal::EqFailure
              (&local_1218,"dest.size()","sizeof(expected) - 1",pbVar4,pbVar6,false);
    if (0xf < uStack_11a8) {
      pvVar1 = (void *)CONCAT71(local_11c0._1_7_,local_11c0._Buf[0]);
      uVar12 = uStack_11a8 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar12) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar12 = uStack_11a8 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c600c79;
      }
      ::operator_delete(pvVar9,uVar12);
    }
    local_11c0._Buf[0] = '\0';
    local_11b0 = uVar2;
    uStack_11a8 = uVar13;
    if (0xf < local_11d0) {
      uVar12 = local_11d0 + 1;
      DVar8 = (DefaultMemoryResource)local_11e8._0_8_;
      if (0xfff < uVar12) {
        DVar8 = *(DefaultMemoryResource *)(local_11e8._0_8_ + -8);
        uVar12 = local_11d0 + 0x28;
        if ((char *)0x1f < (char *)(local_11e8._0_8_ + (-8 - (longlong)DVar8))) {
LAB_14c600c79:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)DVar8,uVar12);
    }
  }
  uVar3._Mypair._Myval2 = local_1218.message_._Mypair._Myval2;
  if (local_1218.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1220);
    if (local_1218.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_1218.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1218.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_1218.message_._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_1238,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x5c,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_1238);
    if (local_1220._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)local_1220._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_1220._Mypair._Myval2 + 4));
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_1218.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1218.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1218.message_._Mypair._Myval2,0x20);
    }
    if (local_1148 != (AssertHelperData *)0x0) {
      local_1228.data_ = local_1148;
      if (local_1150 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_1150 + 0x10))(local_1150,&local_1228);
    }
    if (local_1150 != (longlong *)0x0) {
      (**(code **)(*local_1150 + 0x20))(local_1150,local_1150 != (longlong *)(local_1198 + 0x10));
      local_1150 = (longlong *)0x0;
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_b8);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1138 + 0x10));
    if (local_1208.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar12 = (longlong)local_1208.data._Mypair._Myval2._Myend -
             (longlong)local_1208.data._Mypair._Myval2._Myfirst;
    pcVar11 = local_1208.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar12) {
      pcVar11 = *(char **)(local_1208.data._Mypair._Myval2._Myfirst + -8);
      uVar12 = uVar12 + 0x27;
      if ((char *)0x1f < local_1208.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar11,uVar12);
    return;
  }
  if (local_1218.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_1218.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  do {
    pcVar15 = (char *)((longlong)&local_1228.data_ + uVar14);
    pcVar11 = (char *)((longlong)&local_1148->type + uVar14);
    if (*pcVar11 == *pcVar15) {
      testing::AssertionSuccess(&local_1218);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<char,char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          local_11e8,pcVar15,pcVar11);
      pbVar4 = testing::internal::FormatForComparisonFailureMessage<char,char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_11c0,pcVar11,pcVar15);
      testing::internal::EqFailure(&local_1218,"dest.data()[i]","expected[i]",pbVar4,pbVar6,false);
      if (0xf < uStack_11a8) {
        pvVar1 = (void *)CONCAT71(local_11c0._1_7_,local_11c0._Buf[0]);
        uVar12 = uStack_11a8 + 1;
        pvVar9 = pvVar1;
        if (0xfff < uVar12) {
          pvVar9 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_11a8 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c600e2f;
        }
        ::operator_delete(pvVar9,uVar12);
      }
      local_11c0._Buf[0] = '\0';
      local_11b0 = uVar2;
      uStack_11a8 = uVar13;
      if (0xf < local_11d0) {
        uVar12 = local_11d0 + 1;
        DVar8 = (DefaultMemoryResource)local_11e8._0_8_;
        if (0xfff < uVar12) {
          DVar8 = *(DefaultMemoryResource *)(local_11e8._0_8_ + -8);
          uVar12 = local_11d0 + 0x28;
          if ((char *)0x1f < (char *)(local_11e8._0_8_ + (-8 - (longlong)DVar8))) {
LAB_14c600e2f:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)DVar8,uVar12);
      }
    }
    uVar3._Mypair._Myval2 = local_1218.message_._Mypair._Myval2;
    if (local_1218.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_1220);
      if (local_1218.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_1218.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_1218.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_1218.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_1238,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                          ,0x5d,pcVar11);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper(&local_1238);
      if (local_1220._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)local_1220._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_1220._Mypair._Myval2 + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar3._Mypair._Myval2 = local_1218.message_._Mypair._Myval2;
      if (local_1218.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_1218.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      if (local_1148 == (AssertHelperData *)0x0) goto LAB_14c601034;
      local_1228.data_ = local_1148;
      if (local_1150 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c601029;
    }
    if (local_1218.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1218.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 5);
  local_1218.success_ = local_40[0].malformed == false;
  local_1218.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_40[0].malformed == false) {
    if (local_1148 == (AssertHelperData *)0x0) goto LAB_14c601034;
    local_1238.data_ = local_1148;
    if (local_1150 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    pAVar7 = &local_1238;
  }
  else {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_1220);
    pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_11c0,&local_1218,"archive.isOk()","false","true");
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_1238,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x5e,(char *)pbVar6);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_1238);
    if (0xf < uStack_11a8) {
      pvVar1 = (void *)CONCAT71(local_11c0._1_7_,local_11c0._Buf[0]);
      uVar12 = uStack_11a8 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar12) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar12 = uStack_11a8 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar9,uVar12);
    }
    local_11c0._Buf[0] = '\0';
    local_11b0 = uVar2;
    uStack_11a8 = uVar13;
    if (local_1220._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_1220._Mypair._Myval2 + 4) +
                (longlong)local_1220._Mypair._Myval2);
      (**(code **)*puVar10)(puVar10,1);
    }
    uVar3._Mypair._Myval2 = local_1218.message_._Mypair._Myval2;
    if (local_1218.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1218.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    if (local_1148 == (AssertHelperData *)0x0) goto LAB_14c601034;
    local_1228.data_ = local_1148;
    if (local_1150 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c601029:
    pAVar7 = &local_1228;
    local_1228.data_ = local_1148;
  }
  (**(code **)(*local_1150 + 0x10))(local_1150,pAVar7);
LAB_14c601034:
  if (local_1150 != (longlong *)0x0) {
    (**(code **)(*local_1150 + 0x20))(local_1150,local_1150 != (longlong *)(local_1198 + 0x10));
    local_1150 = (longlong *)0x0;
  }
  std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_b8);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1138 + 0x10));
  std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_1208.data);
  return;
}

// `scalar_deleting_destructor' @ 14c601250

void * __thiscall
JSONInputArchiveTest_InputBlob_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputBlob_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c601290

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputBlob_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputBlob_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputBlob_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6012d0

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputBlob_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputBlob_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputBlob_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c601310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputCharArray_Test::TestBody(JSONInputArchiveTest_InputCharArray_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  uint uVar3;
  Message *pMVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  AssertHelper *pAVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong64 uVar11;
  bool bVar12;
  undefined1 auStackY_11d8 [32];
  array<char,3> local_11a8;
  array<char,3> local_11a4;
  AssertionResult local_11a0;
  AssertHelper local_1190;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1188;
  FakeStream local_1180;
  _Bxty local_1160;
  undefined8 local_1150;
  ulonglong uStack_1148;
  _Bxty local_1140;
  ulonglong local_1128;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14c601328;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  local_11a4._Elems[0] = 'A';
  local_11a4._Elems[1] = 'B';
  local_11a4._Elems[2] = 'C';
  local_11a0._0_8_ = s___A____B____C__._0_8_;
  local_11a0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )s___A____B____C__._8_8_;
  local_1180.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1180.position = 0;
  local_1180.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1180.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_1180,&local_11a0.success_,0x10);
  local_1118._0_8_ = local_1118;
  local_1180.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_1180;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  uVar3 = 0;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,(basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10),false);
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_20[0].transparent = false;
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<char,3>((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                     *)local_1118._0_8_,&local_11a8);
  bVar12 = (byte)local_11a8._Elems[0] < 0x41;
  if (((local_11a8._Elems[0] != 0x41) ||
      (bVar12 = (byte)local_11a8._Elems[1] < 0x42, local_11a8._Elems[1] != 0x42)) ||
     (bVar12 = (byte)local_11a8._Elems[2] < 0x43, local_11a8._Elems[2] != 0x43)) {
    uVar3 = -(uint)bVar12 | 1;
  }
  if (uVar3 == 0) {
    testing::AssertionSuccess(&local_11a0);
  }
  else {
    testing::PrintToString<std::array<char,3>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1140,
               &local_11a4);
    testing::PrintToString<std::array<char,3>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1160,
               &local_11a8);
    testing::internal::EqFailure
              (&local_11a0,"result","expected",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1160,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1140,false)
    ;
    if (0xf < uStack_1148) {
      pvVar1 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
      uVar11 = uStack_1148 + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar11) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar11 = uStack_1148 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c60150b;
      }
      ::operator_delete(pvVar8,uVar11);
    }
    local_1160._Buf[0] = '\0';
    local_1150 = ___xmm_000000000000000f0000000000000000;
    uStack_1148 = _UNK_15076add8;
    if (0xf < local_1128) {
      uVar11 = local_1128 + 1;
      uVar7 = local_1140._Ptr;
      if (0xfff < uVar11) {
        uVar7 = *(undefined8 *)(local_1140._Ptr + -8);
        uVar11 = local_1128 + 0x28;
        if ((char *)0x1f < local_1140._Ptr + (-8 - uVar7)) {
LAB_14c60150b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar11);
    }
  }
  uVar2._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
  if (local_11a0.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_1190);
    if (local_11a0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)local_11a0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11a0.message_._Mypair._Myval2 + 0x18)) {
        pcVar10 = *(char **)local_11a0.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1188,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x6d,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar4);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1188);
    if (local_1190.data_ != (AssertHelperData *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)&(local_1190.data_)->type +
               (longlong)*(int *)(*(longlong *)local_1190.data_ + 4));
      (**(code **)*puVar9)(puVar9,1);
    }
    uVar2._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar11 = (longlong)local_1180.data._Mypair._Myval2._Myend -
             (longlong)local_1180.data._Mypair._Myval2._Myfirst;
    pcVar10 = local_1180.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
      uVar11 = uVar11 + 0x27;
      if ((char *)0x1f < local_1180.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar10)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_11a0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_11a0.success_ = local_20[0].malformed == false;
    if (local_20[0].malformed == false) {
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar11 = (longlong)local_1180.data._Mypair._Myval2._Myend -
               (longlong)local_1180.data._Mypair._Myval2._Myfirst;
      pcVar10 = local_1180.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar11) {
        uVar11 = uVar11 + 0x27;
        pcVar10 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
        if ((char *)0x1f <
            local_1180.data._Mypair._Myval2._Myfirst +
            (-8 - (longlong)*(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c601845;
    }
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_1188);
    pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1160,&local_11a0,"archive.isOk()","false","true");
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_1190,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0x6e,(char *)pbVar5);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_1190);
    if (0xf < uStack_1148) {
      pvVar1 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
      uVar11 = uStack_1148 + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar11) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar11 = uStack_1148 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c601732;
      }
      ::operator_delete(pvVar8,uVar11);
    }
    local_1160._Buf[0] = '\0';
    local_1150 = ___xmm_000000000000000f0000000000000000;
    uStack_1148 = _UNK_15076add8;
    if (local_1188._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_1188._Mypair._Myval2 + 4) +
               (longlong)local_1188._Mypair._Myval2);
      (**(code **)*puVar9)(puVar9,1);
    }
    uVar2._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar11 = (longlong)local_1180.data._Mypair._Myval2._Myend -
             (longlong)local_1180.data._Mypair._Myval2._Myfirst;
    pcVar10 = local_1180.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar11) {
      uVar11 = uVar11 + 0x27;
      pcVar10 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1180.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c601732:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_14c601845:
  ::operator_delete(pcVar10,uVar11);
  return;
}

// `scalar_deleting_destructor' @ 14c601880

void * __thiscall
JSONInputArchiveTest_InputCharArray_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputCharArray_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6018c0

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputCharArray_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputCharArray_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputCharArray_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c601900

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputCharArray_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputCharArray_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputCharArray_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c601940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputVectorOfStructs_Test::TestBody
          (JSONInputArchiveTest_InputVectorOfStructs_Test *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar7;
  undefined8 *puVar8;
  Message *pMVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  AssertHelper *pAVar11;
  longlong lVar12;
  void *pvVar13;
  undefined8 *puVar14;
  char *pcVar15;
  JSONStruct *pJVar16;
  char *pcVar17;
  ulong64 uVar18;
  undefined1 auStackY_1328 [32];
  vector<JSONStruct,std::allocator<JSONStruct>_> local_12f8;
  AssertionResult local_12e0;
  FakeStream local_12d0;
  AssertHelper local_12b0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_12a8;
  vector<JSONStruct,std::allocator<JSONStruct>_> local_12a0;
  char local_1288 [320];
  _Bxty local_1148;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined4 local_1128;
  undefined2 local_1124;
  undefined4 local_1120;
  undefined4 local_111c;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14c60195d;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1328;
  lVar12 = 2;
  puVar14 = (undefined8 *)&s_________a___127_______b___255__;
  pcVar15 = local_1288;
  do {
    pcVar17 = pcVar15;
    puVar8 = puVar14;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined8 *)pcVar17 = *puVar8;
    *(undefined8 *)(pcVar17 + 8) = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    *(undefined8 *)(pcVar17 + 0x10) = uVar2;
    *(undefined8 *)(pcVar17 + 0x18) = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    *(undefined8 *)(pcVar17 + 0x20) = uVar1;
    *(undefined8 *)(pcVar17 + 0x28) = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    *(undefined8 *)(pcVar17 + 0x30) = uVar2;
    *(undefined8 *)(pcVar17 + 0x38) = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    *(undefined8 *)(pcVar17 + 0x40) = uVar1;
    *(undefined8 *)(pcVar17 + 0x48) = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    *(undefined8 *)(pcVar17 + 0x50) = uVar2;
    *(undefined8 *)(pcVar17 + 0x58) = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    *(undefined8 *)(pcVar17 + 0x60) = uVar1;
    *(undefined8 *)(pcVar17 + 0x68) = uVar4;
    *(undefined8 *)(pcVar17 + 0x70) = uVar2;
    *(undefined8 *)(pcVar17 + 0x78) = uVar3;
    lVar12 = lVar12 + -1;
    puVar14 = puVar8 + 0x10;
    pcVar15 = pcVar17 + 0x80;
  } while (lVar12 != 0);
  uVar1 = puVar8[0x16];
  uVar2 = puVar8[0x11];
  local_1148._0_4_ = 0x7fffff7f;
  uVar3 = puVar8[0x12];
  uVar4 = puVar8[0x13];
  local_1148._8_4_ = 0x7fffffff;
  *(undefined8 *)(pcVar17 + 0x80) = puVar8[0x10];
  *(undefined8 *)(pcVar17 + 0x88) = uVar2;
  local_1148._12_4_ = 0xffffffff;
  uVar2 = puVar8[0x14];
  uVar5 = puVar8[0x15];
  local_1138._0_4_ = 0x7fffff7f;
  *(undefined8 *)(pcVar17 + 0x90) = uVar3;
  *(undefined8 *)(pcVar17 + 0x98) = uVar4;
  uStack_1130._0_4_ = 0x7fffffff;
  *(undefined8 *)(pcVar17 + 0xa0) = uVar2;
  *(undefined8 *)(pcVar17 + 0xa8) = uVar5;
  *(undefined8 *)(pcVar17 + 0xb0) = uVar1;
  *(undefined4 *)(pcVar17 + 0xb8) = *(undefined4 *)(puVar8 + 0x17);
  *(undefined2 *)(pcVar17 + 0xbc) = *(undefined2 *)((longlong)puVar8 + 0xbc);
  pcVar17[0xbe] = *(char *)((longlong)puVar8 + 0xbe);
  local_1148._4_2_ = 0xffff;
  local_1124 = 0xffff;
  local_1148._6_2_ = local_12e0._6_2_;
  local_1138 = CONCAT26(local_12e0._6_2_,CONCAT24(0xffff,(undefined4)local_1138));
  uStack_1130 = CONCAT44(0xffffffff,(undefined4)uStack_1130);
  local_1128 = 0x7fffff7f;
  local_1120 = 0x7fffffff;
  local_111c = 0xffffffff;
  local_12a0._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x30);
  pJVar16 = local_12a0._Mypair._Myval2._Myfirst + 3;
  local_12a0._Mypair._Myval2._Myend = pJVar16;
  memmove(local_12a0._Mypair._Myval2._Myfirst,&local_1148,0x30);
  local_12d0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_12d0.position = 0;
  local_12d0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_12d0.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_12a0._Mypair._Myval2._Mylast = pJVar16;
  tersetests::FakeStream::write(&local_12d0,local_1288,0x13f);
  local_1118._0_8_ = local_1118;
  local_12d0.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_12d0;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,(basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10),false);
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_12f8._Mypair._Myval2._Myfirst = (JSONStruct *)0x0;
  local_12f8._Mypair._Myval2._Mylast = (JSONStruct *)0x0;
  local_20[0].transparent = false;
  local_12f8._Mypair._Myval2._Myend = (JSONStruct *)0x0;
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<JSONStruct,std::allocator<JSONStruct>_>
            ((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)local_1118._0_8_,&local_12f8);
  testing::internal::
  CmpHelperEQ<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
            (&local_12e0,"result","expected",&local_12f8,&local_12a0);
  if (local_12e0.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_12b0);
    if (local_12e0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_12e0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_12e0.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_12e0.message_._Mypair._Myval2;
      }
    }
    pAVar11 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_12a8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                         ,0x96,pcVar15);
    testing::internal::AssertHelper::operator=(pAVar11,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_12a8);
    if (local_12b0.data_ != (AssertHelperData *)0x0) {
      puVar14 = (undefined8 *)
                ((longlong)&(local_12b0.data_)->type +
                (longlong)*(int *)(*(longlong *)local_12b0.data_ + 4));
      (**(code **)*puVar14)(puVar14,1);
    }
    uVar7._Mypair._Myval2 = local_12e0.message_._Mypair._Myval2;
    if (local_12e0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_12e0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
    }
    if (local_12f8._Mypair._Myval2._Myfirst != (JSONStruct *)0x0) {
      uVar18 = (longlong)local_12f8._Mypair._Myval2._Myend -
               (longlong)local_12f8._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pJVar16 = local_12f8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar18) {
        pJVar16 = *(JSONStruct **)&local_12f8._Mypair._Myval2._Myfirst[-1].e;
        uVar18 = uVar18 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_12f8._Mypair._Myval2._Myfirst + (-8 - (longlong)pJVar16)))
        goto LAB_14c6020b5;
      }
      ::operator_delete(pJVar16,uVar18);
      local_12f8._Mypair._Myval2._Myend = (JSONStruct *)0x0;
      local_12f8._Mypair._Myval2._Myfirst = (JSONStruct *)0x0;
      local_12f8._Mypair._Myval2._Mylast = (JSONStruct *)0x0;
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_12d0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar18 = (longlong)local_12d0.data._Mypair._Myval2._Myend -
               (longlong)local_12d0.data._Mypair._Myval2._Myfirst;
      pcVar15 = local_12d0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar18) {
        pcVar15 = *(char **)(local_12d0.data._Mypair._Myval2._Myfirst + -8);
        uVar18 = uVar18 + 0x27;
        if ((char *)0x1f < local_12d0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar15))
        goto LAB_14c6020b5;
      }
      ::operator_delete(pcVar15,uVar18);
      local_12d0.data._Mypair._Myval2._Myend = (char *)0x0;
      local_12d0.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_12d0.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if (local_12a0._Mypair._Myval2._Myfirst == (JSONStruct *)0x0) {
      return;
    }
    uVar18 = (longlong)local_12a0._Mypair._Myval2._Myend -
             (longlong)local_12a0._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
    pJVar16 = local_12a0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar18) {
      pJVar16 = *(JSONStruct **)&local_12a0._Mypair._Myval2._Myfirst[-1].e;
      uVar18 = uVar18 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_12a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pJVar16))) {
LAB_14c6020b5:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_12e0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_12e0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_12e0.message_._Mypair._Myval2,0x20);
    }
    local_12e0.success_ = local_20[0].malformed == false;
    local_12e0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (local_20[0].malformed == false) {
      if (local_12f8._Mypair._Myval2._Myfirst != (JSONStruct *)0x0) {
        uVar18 = (longlong)local_12f8._Mypair._Myval2._Myend -
                 (longlong)local_12f8._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        pJVar16 = local_12f8._Mypair._Myval2._Myfirst;
        if (0xfff < uVar18) {
          pJVar16 = *(JSONStruct **)&local_12f8._Mypair._Myval2._Myfirst[-1].e;
          uVar18 = uVar18 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_12f8._Mypair._Myval2._Myfirst + (-8 - (longlong)pJVar16)))
          goto LAB_14c601d11;
        }
        ::operator_delete(pJVar16,uVar18);
        local_12f8._Mypair._Myval2._Myend = (JSONStruct *)0x0;
        local_12f8._Mypair._Myval2._Myfirst = (JSONStruct *)0x0;
        local_12f8._Mypair._Myval2._Mylast = (JSONStruct *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_12d0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar18 = (longlong)local_12d0.data._Mypair._Myval2._Myend -
                 (longlong)local_12d0.data._Mypair._Myval2._Myfirst;
        pcVar15 = local_12d0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar18) {
          pcVar15 = *(char **)(local_12d0.data._Mypair._Myval2._Myfirst + -8);
          uVar18 = uVar18 + 0x27;
          if ((char *)0x1f < local_12d0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar15))
          goto LAB_14c601d11;
        }
        ::operator_delete(pcVar15,uVar18);
        local_12d0.data._Mypair._Myval2._Myend = (char *)0x0;
        local_12d0.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_12d0.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_12a0._Mypair._Myval2._Myfirst == (JSONStruct *)0x0) {
        return;
      }
      uVar18 = (longlong)local_12a0._Mypair._Myval2._Myend -
               (longlong)local_12a0._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pJVar16 = local_12a0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar18) {
        uVar18 = uVar18 + 0x27;
        pJVar16 = *(JSONStruct **)&local_12a0._Mypair._Myval2._Myfirst[-1].e;
        if (0x1f < (ulonglong)
                   ((longlong)local_12a0._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)*(JSONStruct **)&local_12a0._Mypair._Myval2._Myfirst[-1].e))) {
LAB_14c601d11:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      pMVar9 = (Message *)testing::Message::Message((Message *)&local_12a8);
      pbVar10 = testing::internal::GetBoolAssertionFailureMessage
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_1148,&local_12e0,"archive.isOk()","false","true");
      if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar10->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar11 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_12b0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                           ,0x97,(char *)pbVar10);
      testing::internal::AssertHelper::operator=(pAVar11,pMVar9);
      testing::internal::AssertHelper::~AssertHelper(&local_12b0);
      if (0xf < uStack_1130) {
        pvVar6 = (void *)CONCAT26(local_1148._6_2_,CONCAT24(local_1148._4_2_,local_1148._0_4_));
        uVar18 = uStack_1130 + 1;
        pvVar13 = pvVar6;
        if (0xfff < uVar18) {
          pvVar13 = *(void **)((longlong)pvVar6 + -8);
          uVar18 = uStack_1130 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar13))) goto LAB_14c601f21;
        }
        ::operator_delete(pvVar13,uVar18);
      }
      local_1148._0_4_ = local_1148._0_4_ & 0xffffff00;
      local_1138 = ___xmm_000000000000000f0000000000000000;
      uStack_1130 = _UNK_15076add8;
      if (local_12a8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar14 = (undefined8 *)
                  ((longlong)&(local_12a8._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_12a8._Myval2 + 4));
        (**(code **)*puVar14)(puVar14,1);
      }
      uVar7._Mypair._Myval2 = local_12e0.message_._Mypair._Myval2;
      if (local_12e0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_12e0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
      }
      if (local_12f8._Mypair._Myval2._Myfirst != (JSONStruct *)0x0) {
        uVar18 = (longlong)local_12f8._Mypair._Myval2._Myend -
                 (longlong)local_12f8._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        pJVar16 = local_12f8._Mypair._Myval2._Myfirst;
        if (0xfff < uVar18) {
          pJVar16 = *(JSONStruct **)&local_12f8._Mypair._Myval2._Myfirst[-1].e;
          uVar18 = uVar18 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_12f8._Mypair._Myval2._Myfirst + (-8 - (longlong)pJVar16)))
          goto LAB_14c601f21;
        }
        ::operator_delete(pJVar16,uVar18);
        local_12f8._Mypair._Myval2._Myend = (JSONStruct *)0x0;
        local_12f8._Mypair._Myval2._Myfirst = (JSONStruct *)0x0;
        local_12f8._Mypair._Myval2._Mylast = (JSONStruct *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_12d0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar18 = (longlong)local_12d0.data._Mypair._Myval2._Myend -
                 (longlong)local_12d0.data._Mypair._Myval2._Myfirst;
        pcVar15 = local_12d0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar18) {
          pcVar15 = *(char **)(local_12d0.data._Mypair._Myval2._Myfirst + -8);
          uVar18 = uVar18 + 0x27;
          if ((char *)0x1f < local_12d0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar15))
          goto LAB_14c601f21;
        }
        ::operator_delete(pcVar15,uVar18);
        local_12d0.data._Mypair._Myval2._Myend = (char *)0x0;
        local_12d0.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_12d0.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_12a0._Mypair._Myval2._Myfirst == (JSONStruct *)0x0) {
        return;
      }
      uVar18 = (longlong)local_12a0._Mypair._Myval2._Myend -
               (longlong)local_12a0._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
      pJVar16 = local_12a0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar18) {
        uVar18 = uVar18 + 0x27;
        pJVar16 = *(JSONStruct **)&local_12a0._Mypair._Myval2._Myfirst[-1].e;
        if (0x1f < (ulonglong)
                   ((longlong)local_12a0._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)*(JSONStruct **)&local_12a0._Mypair._Myval2._Myfirst[-1].e))) {
LAB_14c601f21:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  ::operator_delete(pJVar16,uVar18);
  return;
}

// `scalar_deleting_destructor' @ 14c602100

void * __thiscall
JSONInputArchiveTest_InputVectorOfStructs_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputVectorOfStructs_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c602140

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputVectorOfStructs_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputVectorOfStructs_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputVectorOfStructs_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c602180

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputVectorOfStructs_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputVectorOfStructs_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputVectorOfStructs_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6021c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_InputNestedStructs_Test::TestBody
          (JSONInputArchiveTest_InputNestedStructs_Test *this)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void *pvVar7;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar8;
  char *pcVar9;
  char *pcVar10;
  Message *pMVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  AssertHelper *pAVar13;
  longlong lVar14;
  void *pvVar15;
  undefined8 *puVar16;
  int *piVar17;
  char *pcVar18;
  ushort *puVar19;
  char *pcVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  undefined1 auStackY_13f8 [32];
  FakeStream local_13c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_13a8 [2];
  char local_1398 [416];
  AssertHelper local_11f8;
  AssertionResult local_11f0;
  undefined4 local_11e0;
  NestedJSONStruct local_11d8;
  NestedJSONStruct local_1188;
  _Bxty local_1138;
  undefined8 local_1128;
  ulonglong uStack_1120;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14c6021dd;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_13f8;
  lVar14 = 3;
  pcVar18 = 
  "{\n    \"first\": {\n        \"a\": 127,\n        \"b\": 255,\n        \"c\": 32767,\n        \"d\": 65535,\n        \"e\": 2147483647,\n        \"f\": 4294967295\n    },\n    \"another\": {\n        \"a\": 127,\n        \"b\": 255,\n        \"c\": 32767,\n        \"d\": 65535,\n        \"e\": 2147483647,\n        \"f\": 4294967295\n    },\n    \"array\": [10, 20, 30],\n    \"array_in_struct\": {\n        \"nested array in struct\": [-20, -1, 0, 1, 20]\n    }\n}"
  ;
  pcVar9 = local_1398;
  do {
    pcVar20 = pcVar9;
    pcVar10 = pcVar18;
    uVar2 = *(undefined8 *)(pcVar10 + 8);
    uVar3 = *(undefined8 *)(pcVar10 + 0x10);
    uVar4 = *(undefined8 *)(pcVar10 + 0x18);
    *(undefined8 *)pcVar20 = *(undefined8 *)pcVar10;
    *(undefined8 *)(pcVar20 + 8) = uVar2;
    uVar2 = *(undefined8 *)(pcVar10 + 0x20);
    uVar5 = *(undefined8 *)(pcVar10 + 0x28);
    *(undefined8 *)(pcVar20 + 0x10) = uVar3;
    *(undefined8 *)(pcVar20 + 0x18) = uVar4;
    uVar3 = *(undefined8 *)(pcVar10 + 0x30);
    uVar4 = *(undefined8 *)(pcVar10 + 0x38);
    *(undefined8 *)(pcVar20 + 0x20) = uVar2;
    *(undefined8 *)(pcVar20 + 0x28) = uVar5;
    uVar2 = *(undefined8 *)(pcVar10 + 0x40);
    uVar5 = *(undefined8 *)(pcVar10 + 0x48);
    *(undefined8 *)(pcVar20 + 0x30) = uVar3;
    *(undefined8 *)(pcVar20 + 0x38) = uVar4;
    uVar3 = *(undefined8 *)(pcVar10 + 0x50);
    uVar4 = *(undefined8 *)(pcVar10 + 0x58);
    *(undefined8 *)(pcVar20 + 0x40) = uVar2;
    *(undefined8 *)(pcVar20 + 0x48) = uVar5;
    uVar2 = *(undefined8 *)(pcVar10 + 0x60);
    uVar5 = *(undefined8 *)(pcVar10 + 0x68);
    *(undefined8 *)(pcVar20 + 0x50) = uVar3;
    *(undefined8 *)(pcVar20 + 0x58) = uVar4;
    uVar3 = *(undefined8 *)(pcVar10 + 0x70);
    uVar4 = *(undefined8 *)(pcVar10 + 0x78);
    *(undefined8 *)(pcVar20 + 0x60) = uVar2;
    *(undefined8 *)(pcVar20 + 0x68) = uVar5;
    *(undefined8 *)(pcVar20 + 0x70) = uVar3;
    *(undefined8 *)(pcVar20 + 0x78) = uVar4;
    lVar14 = lVar14 + -1;
    pcVar18 = pcVar10 + 0x80;
    pcVar9 = pcVar20 + 0x80;
  } while (lVar14 != 0);
  uVar2 = *(undefined8 *)(pcVar10 + 0x90);
  uVar3 = *(undefined8 *)(pcVar10 + 0x88);
  local_11d8.a.a = '\x7f';
  local_11d8.a.b = 0xff;
  local_11d8.a.c = 0x7fff;
  local_11d8.a.e = 0x7fffffff;
  *(undefined8 *)(pcVar20 + 0x80) = *(undefined8 *)(pcVar10 + 0x80);
  *(undefined8 *)(pcVar20 + 0x88) = uVar3;
  *(undefined8 *)(pcVar20 + 0x90) = uVar2;
  *(undefined4 *)(pcVar20 + 0x98) = *(undefined4 *)(pcVar10 + 0x98);
  local_11d8.a._6_2_ = local_11f0._6_2_;
  local_11d8.b._6_2_ = local_11f0._6_2_;
  local_11d8.a.d = 0xffff;
  local_11d8.b.d = 0xffff;
  local_11f8.data_._4_2_ = 0x1e;
  local_11d8.a.f = 0xffffffff;
  local_11d8.b.a = '\x7f';
  local_11d8.b.b = 0xff;
  local_11d8.b.c = 0x7fff;
  local_11d8.b.e = 0x7fffffff;
  local_11d8.b.f = 0xffffffff;
  local_11f8.data_._0_4_ = 0x14000a;
  local_11d8.c._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(6);
  puVar19 = local_11d8.c._Mypair._Myval2._Myfirst + 3;
  local_11d8.c._Mypair._Myval2._Myend = puVar19;
  memmove(local_11d8.c._Mypair._Myval2._Myfirst,&local_11f8,6);
  local_11f0.success_ = __xmm_0000000100000000ffffffffffffffec;
  local_11f0._1_7_ = _UNK_15289d391;
  local_11f0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289d398;
  local_11e0 = 0x14;
  local_11d8.c._Mypair._Myval2._Mylast = puVar19;
  local_11d8.d.cc._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x14);
  piVar17 = local_11d8.d.cc._Mypair._Myval2._Myfirst + 5;
  local_11d8.d.cc._Mypair._Myval2._Myend = piVar17;
  memmove(local_11d8.d.cc._Mypair._Myval2._Myfirst,&local_11f0,0x14);
  local_13c8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_13c8.position = 0;
  local_13c8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_13c8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_11d8.d.cc._Mypair._Myval2._Mylast = piVar17;
  tersetests::FakeStream::write(&local_13c8,local_1398,0x19c);
  local_1118._0_8_ = local_1118;
  local_13c8.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_13c8;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,(basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10),false);
  uVar2 = local_1118._0_8_;
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_20[0].transparent = false;
  local_1188.c._Mypair._Myval2._Myfirst = (ushort *)0x0;
  local_1188.c._Mypair._Myval2._Mylast = (ushort *)0x0;
  local_1188.c._Mypair._Myval2._Myend = (ushort *)0x0;
  local_1188.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
  local_1188.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
  local_1188.d.cc._Mypair._Myval2._Myend = (int *)0x0;
  if (((SerializationState *)(local_1118._0_8_ + 0x10f8))->malformed == false) {
    bVar1 = ((SerializationState *)(local_1118._0_8_ + 0x10f8))->transparent;
    ((SerializationState *)(local_1118._0_8_ + 0x10f8))->transparent = false;
    if (bVar1 == false) {
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::preStructInput((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)uVar2);
      NestedJSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&local_1188,
                 (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)uVar2);
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::postStructInput((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                         *)uVar2);
    }
    else {
      NestedJSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&local_1188,
                 (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)uVar2);
    }
  }
  testing::internal::CmpHelperEQ<NestedJSONStruct,NestedJSONStruct>
            (&local_11f0,"result","expected",&local_1188,&local_11d8);
  uVar8._Mypair._Myval2 = local_11f0.message_._Mypair._Myval2;
  if (local_11f0.success_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_11f8);
    if (local_11f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar18 = "";
    }
    else {
      pcVar18 = (char *)local_11f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar18 = *(char **)local_11f0.message_._Mypair._Myval2;
      }
    }
    pAVar13 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)local_13a8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                         ,0xbd,pcVar18);
    testing::internal::AssertHelper::operator=(pAVar13,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_13a8);
    plVar6 = (longlong *)
             CONCAT26(local_11f8.data_._6_2_,CONCAT24(local_11f8.data_._4_2_,local_11f8.data_._0_4_)
                     );
    if (plVar6 != (longlong *)0x0) {
      puVar16 = (undefined8 *)((longlong)*(int *)(*plVar6 + 4) + (longlong)plVar6);
      (**(code **)*puVar16)(puVar16,1);
    }
    uVar8._Mypair._Myval2 = local_11f0.message_._Mypair._Myval2;
    if (local_11f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
    }
    if (local_1188.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
      uVar21 = (longlong)local_1188.d.cc._Mypair._Myval2._Myend -
               (longlong)local_1188.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      piVar17 = local_1188.d.cc._Mypair._Myval2._Myfirst;
      if (0xfff < uVar21) {
        piVar17 = *(int **)(local_1188.d.cc._Mypair._Myval2._Myfirst + -2);
        uVar21 = uVar21 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_1188.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar17)))
        goto LAB_14c602c08;
      }
      ::operator_delete(piVar17,uVar21);
      local_1188.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
      local_1188.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
      local_1188.d.cc._Mypair._Myval2._Myend = (int *)0x0;
    }
    if (local_1188.c._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      uVar22 = ((longlong)local_1188.c._Mypair._Myval2._Myend -
                (longlong)local_1188.c._Mypair._Myval2._Myfirst >> 1) * 2;
      puVar19 = local_1188.c._Mypair._Myval2._Myfirst;
      if (0xfff < uVar22) {
        puVar19 = *(ushort **)(local_1188.c._Mypair._Myval2._Myfirst + -4);
        uVar22 = uVar22 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_1188.c._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar19)))
        goto LAB_14c602c08;
      }
      ::operator_delete(puVar19,uVar22);
      local_1188.c._Mypair._Myval2._Myend = (ushort *)0x0;
      local_1188.c._Mypair._Myval2._Myfirst = (ushort *)0x0;
      local_1188.c._Mypair._Myval2._Mylast = (ushort *)0x0;
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_13c8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar21 = (longlong)local_13c8.data._Mypair._Myval2._Myend -
               (longlong)local_13c8.data._Mypair._Myval2._Myfirst;
      pcVar18 = local_13c8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar21) {
        pcVar18 = *(char **)(local_13c8.data._Mypair._Myval2._Myfirst + -8);
        uVar21 = uVar21 + 0x27;
        if ((char *)0x1f < local_13c8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar18))
        goto LAB_14c602c08;
      }
      ::operator_delete(pcVar18,uVar21);
      local_13c8.data._Mypair._Myval2._Myend = (char *)0x0;
      local_13c8.data._Mypair._Myval2._Myfirst = (char *)0x0;
      local_13c8.data._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if (local_11d8.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
      uVar21 = (longlong)local_11d8.d.cc._Mypair._Myval2._Myend -
               (longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      piVar17 = local_11d8.d.cc._Mypair._Myval2._Myfirst;
      if (0xfff < uVar21) {
        piVar17 = *(int **)(local_11d8.d.cc._Mypair._Myval2._Myfirst + -2);
        uVar21 = uVar21 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar17)))
        goto LAB_14c602c08;
      }
      ::operator_delete(piVar17,uVar21);
      local_11d8.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
      local_11d8.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
      local_11d8.d.cc._Mypair._Myval2._Myend = (int *)0x0;
    }
    if (local_11d8.c._Mypair._Myval2._Myfirst == (ushort *)0x0) {
      return;
    }
    uVar22 = ((longlong)local_11d8.c._Mypair._Myval2._Myend -
              (longlong)local_11d8.c._Mypair._Myval2._Myfirst >> 1) * 2;
    puVar19 = local_11d8.c._Mypair._Myval2._Myfirst;
    if (0xfff < uVar22) {
      puVar19 = *(ushort **)(local_11d8.c._Mypair._Myval2._Myfirst + -4);
      uVar22 = uVar22 + 0x27;
      if (0x1f < (ulonglong)
                 ((longlong)local_11d8.c._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar19))) {
LAB_14c602c08:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_11f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
    }
    local_11f0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_11f0.success_ = local_20[0].malformed == false;
    if (local_20[0].malformed == false) {
      if (local_1188.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar21 = (longlong)local_1188.d.cc._Mypair._Myval2._Myend -
                 (longlong)local_1188.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar17 = local_1188.d.cc._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          piVar17 = *(int **)(local_1188.d.cc._Mypair._Myval2._Myfirst + -2);
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_1188.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar17))
             ) goto LAB_14c6026d4;
        }
        ::operator_delete(piVar17,uVar21);
        local_1188.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
        local_1188.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
        local_1188.d.cc._Mypair._Myval2._Myend = (int *)0x0;
      }
      if (local_1188.c._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        uVar22 = ((longlong)local_1188.c._Mypair._Myval2._Myend -
                  (longlong)local_1188.c._Mypair._Myval2._Myfirst >> 1) * 2;
        puVar19 = local_1188.c._Mypair._Myval2._Myfirst;
        if (0xfff < uVar22) {
          puVar19 = *(ushort **)(local_1188.c._Mypair._Myval2._Myfirst + -4);
          uVar22 = uVar22 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_1188.c._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar19)))
          goto LAB_14c6026d4;
        }
        ::operator_delete(puVar19,uVar22);
        local_1188.c._Mypair._Myval2._Myend = (ushort *)0x0;
        local_1188.c._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_1188.c._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_13c8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar21 = (longlong)local_13c8.data._Mypair._Myval2._Myend -
                 (longlong)local_13c8.data._Mypair._Myval2._Myfirst;
        pcVar18 = local_13c8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          pcVar18 = *(char **)(local_13c8.data._Mypair._Myval2._Myfirst + -8);
          uVar21 = uVar21 + 0x27;
          if ((char *)0x1f < local_13c8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar18))
          goto LAB_14c6026d4;
        }
        ::operator_delete(pcVar18,uVar21);
        local_13c8.data._Mypair._Myval2._Myend = (char *)0x0;
        local_13c8.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_13c8.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_11d8.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar21 = (longlong)local_11d8.d.cc._Mypair._Myval2._Myend -
                 (longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar17 = local_11d8.d.cc._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          piVar17 = *(int **)(local_11d8.d.cc._Mypair._Myval2._Myfirst + -2);
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar17))
             ) goto LAB_14c6026d4;
        }
        ::operator_delete(piVar17,uVar21);
        local_11d8.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
        local_11d8.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
        local_11d8.d.cc._Mypair._Myval2._Myend = (int *)0x0;
      }
      if (local_11d8.c._Mypair._Myval2._Myfirst == (ushort *)0x0) {
        return;
      }
      uVar22 = ((longlong)local_11d8.c._Mypair._Myval2._Myend -
                (longlong)local_11d8.c._Mypair._Myval2._Myfirst >> 1) * 2;
      puVar19 = local_11d8.c._Mypair._Myval2._Myfirst;
      if (0xfff < uVar22) {
        uVar22 = uVar22 + 0x27;
        puVar19 = *(ushort **)(local_11d8.c._Mypair._Myval2._Myfirst + -4);
        if (0x1f < (ulonglong)
                   ((longlong)local_11d8.c._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)*(ushort **)(local_11d8.c._Mypair._Myval2._Myfirst + -4)))) {
LAB_14c6026d4:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      pMVar11 = (Message *)testing::Message::Message((Message *)local_13a8);
      pbVar12 = testing::internal::GetBoolAssertionFailureMessage
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_1138,&local_11f0,"archive.isOk()","false","true");
      if (0xf < (pbVar12->_Mypair)._Myval2._Myres) {
        pbVar12 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar12->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar13 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_11f8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                           ,0xbe,(char *)pbVar12);
      testing::internal::AssertHelper::operator=(pAVar13,pMVar11);
      testing::internal::AssertHelper::~AssertHelper(&local_11f8);
      if (0xf < uStack_1120) {
        pvVar7 = (void *)CONCAT71(local_1138._1_7_,local_1138._Buf[0]);
        uVar21 = uStack_1120 + 1;
        pvVar15 = pvVar7;
        if (0xfff < uVar21) {
          pvVar15 = *(void **)((longlong)pvVar7 + -8);
          uVar21 = uStack_1120 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar15))) goto LAB_14c6029ac;
        }
        ::operator_delete(pvVar15,uVar21);
      }
      local_1138._Buf[0] = '\0';
      local_1128 = ___xmm_000000000000000f0000000000000000;
      uStack_1120 = _UNK_15076add8;
      if (local_13a8[0]._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar16 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)local_13a8[0]._Mypair._Myval2 + 4) +
                  (longlong)local_13a8[0]._Mypair._Myval2);
        (**(code **)*puVar16)(puVar16,1);
      }
      uVar8._Mypair._Myval2 = local_11f0.message_._Mypair._Myval2;
      if (local_11f0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_11f0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
      }
      if (local_1188.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar21 = (longlong)local_1188.d.cc._Mypair._Myval2._Myend -
                 (longlong)local_1188.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar17 = local_1188.d.cc._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          piVar17 = *(int **)(local_1188.d.cc._Mypair._Myval2._Myfirst + -2);
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_1188.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar17))
             ) goto LAB_14c6029ac;
        }
        ::operator_delete(piVar17,uVar21);
        local_1188.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
        local_1188.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
        local_1188.d.cc._Mypair._Myval2._Myend = (int *)0x0;
      }
      if (local_1188.c._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        uVar22 = ((longlong)local_1188.c._Mypair._Myval2._Myend -
                  (longlong)local_1188.c._Mypair._Myval2._Myfirst >> 1) * 2;
        puVar19 = local_1188.c._Mypair._Myval2._Myfirst;
        if (0xfff < uVar22) {
          puVar19 = *(ushort **)(local_1188.c._Mypair._Myval2._Myfirst + -4);
          uVar22 = uVar22 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_1188.c._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar19)))
          goto LAB_14c6029ac;
        }
        ::operator_delete(puVar19,uVar22);
        local_1188.c._Mypair._Myval2._Myend = (ushort *)0x0;
        local_1188.c._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_1188.c._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_13c8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar21 = (longlong)local_13c8.data._Mypair._Myval2._Myend -
                 (longlong)local_13c8.data._Mypair._Myval2._Myfirst;
        pcVar18 = local_13c8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          pcVar18 = *(char **)(local_13c8.data._Mypair._Myval2._Myfirst + -8);
          uVar21 = uVar21 + 0x27;
          if ((char *)0x1f < local_13c8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar18))
          goto LAB_14c6029ac;
        }
        ::operator_delete(pcVar18,uVar21);
        local_13c8.data._Mypair._Myval2._Myend = (char *)0x0;
        local_13c8.data._Mypair._Myval2._Myfirst = (char *)0x0;
        local_13c8.data._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_11d8.d.cc._Mypair._Myval2._Myfirst != (int *)0x0) {
        uVar21 = (longlong)local_11d8.d.cc._Mypair._Myval2._Myend -
                 (longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        piVar17 = local_11d8.d.cc._Mypair._Myval2._Myfirst;
        if (0xfff < uVar21) {
          piVar17 = *(int **)(local_11d8.d.cc._Mypair._Myval2._Myfirst + -2);
          uVar21 = uVar21 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_11d8.d.cc._Mypair._Myval2._Myfirst + (-8 - (longlong)piVar17))
             ) goto LAB_14c6029ac;
        }
        ::operator_delete(piVar17,uVar21);
        local_11d8.d.cc._Mypair._Myval2._Myfirst = (int *)0x0;
        local_11d8.d.cc._Mypair._Myval2._Mylast = (int *)0x0;
        local_11d8.d.cc._Mypair._Myval2._Myend = (int *)0x0;
      }
      if (local_11d8.c._Mypair._Myval2._Myfirst == (ushort *)0x0) {
        return;
      }
      uVar22 = ((longlong)local_11d8.c._Mypair._Myval2._Myend -
                (longlong)local_11d8.c._Mypair._Myval2._Myfirst >> 1) * 2;
      puVar19 = local_11d8.c._Mypair._Myval2._Myfirst;
      if (0xfff < uVar22) {
        uVar22 = uVar22 + 0x27;
        puVar19 = *(ushort **)(local_11d8.c._Mypair._Myval2._Myfirst + -4);
        if (0x1f < (ulonglong)
                   ((longlong)local_11d8.c._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)*(ushort **)(local_11d8.c._Mypair._Myval2._Myfirst + -4)))) {
LAB_14c6029ac:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  ::operator_delete(puVar19,uVar22);
  return;
}

// `scalar_deleting_destructor' @ 14c602c50

void * __thiscall
JSONInputArchiveTest_InputNestedStructs_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_InputNestedStructs_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c602c90

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputNestedStructs_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_InputNestedStructs_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_InputNestedStructs_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c602cd0

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_InputNestedStructs_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_InputNestedStructs_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_InputNestedStructs_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c602d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
JSONInputArchiveTest_TransparentStruct_Test::TestBody
          (JSONInputArchiveTest_TransparentStruct_Test *this)

{
  bool bVar1;
  JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *pJVar2;
  longlong *plVar3;
  void *pvVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  AssertHelper *pAVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong64 uVar14;
  undefined1 auStackY_11e8 [32];
  AssertHelper local_11b8;
  InnerOpaque local_11b0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_11a8;
  AssertionResult local_11a0;
  undefined8 local_1190;
  undefined4 local_1188;
  undefined1 local_1184;
  FakeStream local_1180;
  _Bxty local_1160;
  undefined8 local_1150;
  ulonglong uStack_1148;
  _Bxty local_1140;
  ulonglong local_1128;
  undefined1 local_1118 [40];
  longlong *local_10f0;
  longlong *local_10d0;
  undefined4 *local_10b8;
  FakeStream *local_10a0;
  undefined1 local_1098 [4096];
  basic_istream<char,std::char_traits<char>_> local_98;
  SerializationState local_20 [2];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14c602d2d;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_11e8;
  local_1188 = DAT_15289d328;
  local_1184 = DAT_15289d32c;
  local_11a0._0_8_ = _s________a___10_______b___20__;
  local_11a0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289d318;
  local_1190 = DAT_15289d320;
  local_1180.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_1180.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_1180.data._Mypair._Myval2._Myend = (char *)0x0;
  local_1180.position = 0;
  tersetests::FakeStream::write(&local_1180,&local_11a0.success_,0x1d);
  local_1118._0_8_ = local_1118;
  local_1180.position = 0;
  local_1118._8_8_ = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
  local_1118._16_8_ = &___7__CharInputStreamBuf_UFakeStream_tersetests___0BAAA__terse__6B_;
  local_10a0 = &local_1180;
  memset(local_1098,0,0x1000);
  *local_10f0 = (longlong)&local_98;
  *local_10d0 = (longlong)&local_98;
  *local_10b8 = 0;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (&local_98,(basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10),false);
  uVar10 = local_1118._0_8_;
  local_20[0].malformed = false;
  local_20[0].firstMember = false;
  local_20[0].transparent = false;
  if (((SerializationState *)(local_1118._0_8_ + 0x10f8))->malformed == false) {
    bVar1 = ((SerializationState *)(local_1118._0_8_ + 0x10f8))->transparent;
    ((SerializationState *)(local_1118._0_8_ + 0x10f8))->transparent = false;
    if (bVar1 == false) {
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::preStructInput((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)uVar10);
    }
    pJVar2 = (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
             *(longlong *)uVar10;
    pJVar2->field_0x10fa = 1;
    if (pJVar2->field_0x10f8 == '\0') {
      pJVar2->field_0x10fa = 0;
      InnerOpaque::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&local_11b0,pJVar2);
    }
    if (bVar1 == false) {
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::postStructInput((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                         *)uVar10);
    }
  }
  local_11b8.data_._0_4_ = 10;
  if (local_11b0.a == 10) {
    testing::AssertionSuccess(&local_11a0);
  }
  else {
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1140,(uint *)&local_11b8,&local_11b0.a);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1160,&local_11b0.a,(uint *)&local_11b8);
    testing::internal::EqFailure(&local_11a0,"result.inner.a","10u",pbVar6,pbVar8,false);
    if (0xf < uStack_1148) {
      pvVar4 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
      uVar14 = uStack_1148 + 1;
      pvVar11 = pvVar4;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar4 + -8);
        uVar14 = uStack_1148 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))) goto LAB_14c602f71;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_1160._Buf[0] = '\0';
    local_1150 = ___xmm_000000000000000f0000000000000000;
    uStack_1148 = _UNK_15076add8;
    if (0xf < local_1128) {
      uVar14 = local_1128 + 1;
      uVar10 = local_1140._Ptr;
      if (0xfff < uVar14) {
        uVar10 = *(undefined8 *)(local_1140._Ptr + -8);
        uVar14 = local_1128 + 0x28;
        if ((char *)0x1f < local_1140._Ptr + (-8 - uVar10)) {
LAB_14c602f71:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar14);
    }
  }
  uVar5._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
  if (local_11a0.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_11b8);
    if (local_11a0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_11a0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_11a0.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_11a0.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_11a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0xd0,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar7);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_11a8);
    plVar3 = (longlong *)CONCAT44(local_11b8.data_._4_4_,local_11b8.data_._0_4_);
    if (plVar3 != (longlong *)0x0) {
      puVar12 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
      (**(code **)*puVar12)(puVar12,1);
    }
    uVar5._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1180.data._Mypair._Myval2._Myend -
             (longlong)local_1180.data._Mypair._Myval2._Myfirst;
    pcVar13 = local_1180.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      pcVar13 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
      uVar14 = uVar14 + 0x27;
      if ((char *)0x1f < local_1180.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar13)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    local_11b8.data_._0_4_ = 0x14;
    if (local_11b0.b == 0x14) {
      testing::AssertionSuccess(&local_11a0);
    }
    else {
      pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_1140,(uint *)&local_11b8,&local_11b0.b);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_1160,&local_11b0.b,(uint *)&local_11b8);
      testing::internal::EqFailure(&local_11a0,"result.inner.b","20u",pbVar6,pbVar8,false);
      if (0xf < uStack_1148) {
        pvVar4 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
        uVar14 = uStack_1148 + 1;
        pvVar11 = pvVar4;
        if (0xfff < uVar14) {
          pvVar11 = *(void **)((longlong)pvVar4 + -8);
          uVar14 = uStack_1148 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))) goto LAB_14c60309c;
        }
        ::operator_delete(pvVar11,uVar14);
      }
      local_1160._Buf[0] = '\0';
      local_1150 = ___xmm_000000000000000f0000000000000000;
      uStack_1148 = _UNK_15076add8;
      if (0xf < local_1128) {
        uVar14 = local_1128 + 1;
        uVar10 = local_1140._Ptr;
        if (0xfff < uVar14) {
          uVar10 = *(undefined8 *)(local_1140._Ptr + -8);
          uVar14 = local_1128 + 0x28;
          if ((char *)0x1f < local_1140._Ptr + (-8 - uVar10)) {
LAB_14c60309c:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar14);
      }
    }
    uVar5._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
    if (local_11a0.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_11b8);
      if (local_11a0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_11a0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_11a0.message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_11a0.message_._Mypair._Myval2;
        }
      }
      pAVar9 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_11a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                          ,0xd1,pcVar13);
      testing::internal::AssertHelper::operator=(pAVar9,pMVar7);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_11a8);
      plVar3 = (longlong *)CONCAT44(local_11b8.data_._4_4_,local_11b8.data_._0_4_);
      if (plVar3 != (longlong *)0x0) {
        puVar12 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
        (**(code **)*puVar12)(puVar12,1);
      }
      uVar5._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
      if (local_11a0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_11a0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
      }
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar14 = (longlong)local_1180.data._Mypair._Myval2._Myend -
               (longlong)local_1180.data._Mypair._Myval2._Myfirst;
      pcVar13 = local_1180.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        uVar14 = uVar14 + 0x27;
        pcVar13 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
        if ((char *)0x1f <
            local_1180.data._Mypair._Myval2._Myfirst +
            (-8 - (longlong)*(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c6034d4;
    }
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    local_11a0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_11a0.success_ = local_20[0].malformed == false;
    if (local_20[0].malformed == false) {
      std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
      if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar14 = (longlong)local_1180.data._Mypair._Myval2._Myend -
               (longlong)local_1180.data._Mypair._Myval2._Myfirst;
      pcVar13 = local_1180.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        uVar14 = uVar14 + 0x27;
        pcVar13 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
        if ((char *)0x1f <
            local_1180.data._Mypair._Myval2._Myfirst +
            (-8 - (longlong)*(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c6034d4;
    }
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_11a8);
    pbVar8 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1160,&local_11a0,"archive.isOk()","false","true");
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_11b8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\json\\TestJSONInputArchive.cpp"
                        ,0xd2,(char *)pbVar8);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_11b8);
    if (0xf < uStack_1148) {
      pvVar4 = (void *)CONCAT71(local_1160._1_7_,local_1160._Buf[0]);
      uVar14 = uStack_1148 + 1;
      pvVar11 = pvVar4;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar4 + -8);
        uVar14 = uStack_1148 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))) goto LAB_14c6032b8;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_1160._Buf[0] = '\0';
    local_1150 = ___xmm_000000000000000f0000000000000000;
    uStack_1148 = _UNK_15076add8;
    if (local_11a8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_11a8._Mypair._Myval2 + 4) +
                (longlong)local_11a8._Mypair._Myval2);
      (**(code **)*puVar12)(puVar12,1);
    }
    uVar5._Mypair._Myval2 = local_11a0.message_._Mypair._Myval2;
    if (local_11a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_11a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    std::basic_istream<char,std::char_traits<char>_>::_vbase_destructor_(&local_98);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1118 + 0x10));
    if (local_1180.data._Mypair._Myval2._Myfirst == (char *)0x0) {
      return;
    }
    uVar14 = (longlong)local_1180.data._Mypair._Myval2._Myend -
             (longlong)local_1180.data._Mypair._Myval2._Myfirst;
    pcVar13 = local_1180.data._Mypair._Myval2._Myfirst;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pcVar13 = *(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8);
      if ((char *)0x1f <
          local_1180.data._Mypair._Myval2._Myfirst +
          (-8 - (longlong)*(char **)(local_1180.data._Mypair._Myval2._Myfirst + -8))) {
LAB_14c6032b8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_14c6034d4:
  ::operator_delete(pcVar13,uVar14);
  return;
}

// `scalar_deleting_destructor' @ 14c603510

void * __thiscall
JSONInputArchiveTest_TransparentStruct_Test::_scalar_deleting_destructor_
          (JSONInputArchiveTest_TransparentStruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c603550

Test * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_TransparentStruct_Test>::CreateTest
          (TestFactoryImpl<JSONInputArchiveTest_TransparentStruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7JSONInputArchiveTest_TransparentStruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c603590

void * __thiscall
testing::internal::TestFactoryImpl<JSONInputArchiveTest_TransparentStruct_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<JSONInputArchiveTest_TransparentStruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<JSONInputArchiveTest_TransparentStruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// char_traits<char>,JSONStruct> @ 14c6035d0

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>_JSONStruct>
          (basic_ostream<char,std::char_traits<char>_> *param_1,JSONStruct *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x10,param_1);
  return param_1;
}

// char_traits<char>,NestedJSONStruct> @ 14c603600

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>_NestedJSONStruct>
          (basic_ostream<char,std::char_traits<char>_> *param_1,NestedJSONStruct *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x50,param_1);
  return param_1;
}

// CmpHelperEQ<char,char> @ 14c603630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<char,char>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,char *param_3,
          char *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<char,char>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<char,char>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
    if (0xf < uStack_70) {
      pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
      uVar6 = uStack_70 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_70 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c603746;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_88._Buf[0] = '\0';
    local_78 = ___xmm_000000000000000f0000000000000000;
    uStack_70 = _UNK_15076add8;
    if (0xf < local_50) {
      uVar6 = local_50 + 1;
      uVar5 = local_68._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_68._Ptr + -8);
        uVar6 = local_50 + 0x28;
        if ((char *)0x1f < local_68._Ptr + (-8 - uVar5)) {
LAB_14c603746:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<JSONStruct,JSONStruct> @ 14c603790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<JSONStruct,JSONStruct>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,JSONStruct *param_3,
          JSONStruct *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((((param_3->a == param_4->a) && (param_3->b == param_4->b)) && (param_3->c == param_4->c)) &&
     (((param_3->d == param_4->d && (param_3->e == param_4->e)) && (param_3->f == param_4->f)))) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
    if (0xf < uStack_70) {
      pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
      uVar6 = uStack_70 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_70 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c6038d7;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_88._Buf[0] = '\0';
    local_78 = ___xmm_000000000000000f0000000000000000;
    uStack_70 = _UNK_15076add8;
    if (0xf < local_50) {
      uVar6 = local_50 + 1;
      uVar5 = local_68._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_68._Ptr + -8);
        uVar6 = local_50 + 0x28;
        if ((char *)0x1f < local_68._Ptr + (-8 - uVar5)) {
LAB_14c6038d7:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<NestedJSONStruct,NestedJSONStruct> @ 14c603920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<NestedJSONStruct,NestedJSONStruct>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          NestedJSONStruct *param_3,NestedJSONStruct *param_4)

{
  ushort *_Buf2;
  ushort *_Buf1;
  int *_Buf2_00;
  int *_Buf1_00;
  void *pvVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((((((param_3->a).a == (param_4->a).a) && ((param_3->a).b == (param_4->a).b)) &&
        ((param_3->a).c == (param_4->a).c)) &&
       ((((param_3->a).d == (param_4->a).d && ((param_3->a).e == (param_4->a).e)) &&
        (((param_3->a).f == (param_4->a).f &&
         (((param_3->b).a == (param_4->b).a && ((param_3->b).b == (param_4->b).b)))))))) &&
      ((param_3->b).c == (param_4->b).c)) &&
     ((((param_3->b).d == (param_4->b).d && ((param_3->b).e == (param_4->b).e)) &&
      ((param_3->b).f == (param_4->b).f)))) {
    _Buf2 = (param_4->c)._Mypair._Myval2._Myfirst;
    _Buf1 = (param_3->c)._Mypair._Myval2._Myfirst;
    uVar8 = (longlong)(param_3->c)._Mypair._Myval2._Mylast - (longlong)_Buf1;
    if (((((longlong)(param_4->c)._Mypair._Myval2._Mylast - (longlong)_Buf2 ^ uVar8) &
         0xfffffffffffffffe) == 0) && (iVar2 = memcmp(_Buf1,_Buf2,uVar8), iVar2 == 0)) {
      _Buf2_00 = (param_4->d).cc._Mypair._Myval2._Myfirst;
      _Buf1_00 = (param_3->d).cc._Mypair._Myval2._Myfirst;
      uVar8 = (longlong)(param_3->d).cc._Mypair._Myval2._Mylast - (longlong)_Buf1_00;
      if (((((longlong)(param_4->d).cc._Mypair._Myval2._Mylast - (longlong)_Buf2_00 ^ uVar8) &
           0xfffffffffffffffc) == 0) && (iVar2 = memcmp(_Buf1_00,_Buf2_00,uVar8), iVar2 == 0)) {
        AssertionSuccess(__return_storage_ptr__);
        return __return_storage_ptr__;
      }
    }
  }
  pbVar3 = FormatForComparisonFailureMessage<NestedJSONStruct,NestedJSONStruct>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar4 = FormatForComparisonFailureMessage<NestedJSONStruct,NestedJSONStruct>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar4,pbVar3,false);
  if (0xf < uStack_70) {
    pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar7 = uStack_70 + 1;
    pvVar5 = pvVar1;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c603b1f;
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_88._Buf[0] = '\0';
  local_78 = ___xmm_000000000000000f0000000000000000;
  uStack_70 = _UNK_15076add8;
  if (0xf < local_50) {
    uVar7 = local_50 + 1;
    uVar6 = local_68._Ptr;
    if (0xfff < uVar7) {
      uVar6 = *(undefined8 *)(local_68._Ptr + -8);
      uVar7 = local_50 + 0x28;
      if ((char *)0x1f < local_68._Ptr + (-8 - uVar6)) {
LAB_14c603b1f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar6,uVar7);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::array<char,3>,std::array<char,3>_> @ 14c603b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<std::array<char,3>,std::array<char,3>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          array<char,3> *param_3,array<char,3> *param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  ulong64 uVar5;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  iVar4 = (uint)*(ushort *)param_3->_Elems - (uint)*(ushort *)param_4->_Elems;
  if (iVar4 == 0) {
    iVar4 = (uint)(byte)param_3->_Elems[2] - (uint)(byte)param_4->_Elems[2];
  }
  if (iVar4 == 0) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    PrintToString<std::array<char,3>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<std::array<char,3>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar5 = uStack_60 + 1;
      pvVar2 = pvVar1;
      if (0xfff < uVar5) {
        pvVar2 = *(void **)((longlong)pvVar1 + -8);
        uVar5 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c603c82;
      }
      ::operator_delete(pvVar2,uVar5);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar5 = local_40 + 1;
      uVar3 = local_58._Ptr;
      if (0xfff < uVar5) {
        uVar3 = *(undefined8 *)(local_58._Ptr + -8);
        uVar5 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) {
LAB_14c603c82:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar5);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c603cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_3,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_4)

{
  JSONStruct *pJVar1;
  JSONStruct *pJVar2;
  void *pvVar3;
  JSONStruct *pJVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  short *psVar8;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pJVar4 = (param_3->_Mypair)._Myval2._Myfirst;
  pJVar1 = (param_3->_Mypair)._Myval2._Mylast;
  pJVar2 = (param_4->_Mypair)._Myval2._Myfirst;
  if ((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pJVar2 ^
       (longlong)pJVar1 - (longlong)pJVar4) & 0xfffffffffffffff0U) == 0) {
    if (pJVar4 != pJVar1) {
      psVar8 = &pJVar2->c;
      do {
        if ((((pJVar4->a != ((JSONStruct *)(psVar8 + -1))->a) ||
             (pJVar4->b != *(uchar *)((longlong)psVar8 + -1))) || (pJVar4->c != *psVar8)) ||
           (((pJVar4->d != psVar8[1] || (pJVar4->e != *(int *)(psVar8 + 3))) ||
            (pJVar4->f != *(uint *)(psVar8 + 5))))) goto LAB_14c603d84;
        pJVar4 = pJVar4 + 1;
        psVar8 = psVar8 + 8;
      } while (pJVar4 != pJVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c603d84:
    PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar3 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar7 = uStack_60 + 1;
      pvVar5 = pvVar3;
      if (0xfff < uVar7) {
        pvVar5 = *(void **)((longlong)pvVar3 + -8);
        uVar7 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5))) goto LAB_14c603e40;
      }
      ::operator_delete(pvVar5,uVar7);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar7 = local_40 + 1;
      uVar6 = local_58._Ptr;
      if (0xfff < uVar7) {
        uVar6 = *(undefined8 *)(local_58._Ptr + -8);
        uVar7 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar6)) {
LAB_14c603e40:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<char,char> @ 14c603e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<char,char>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,char *param_3,
          char *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pbVar2 = FormatForComparisonFailureMessage<char,char>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<char,char>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
  if (0xf < uStack_70) {
    pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar6 = uStack_70 + 1;
    pvVar4 = pvVar1;
    if (0xfff < uVar6) {
      pvVar4 = *(void **)((longlong)pvVar1 + -8);
      uVar6 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c603f81;
    }
    ::operator_delete(pvVar4,uVar6);
  }
  local_88._Buf[0] = '\0';
  local_78 = ___xmm_000000000000000f0000000000000000;
  uStack_70 = _UNK_15076add8;
  if (0xf < local_50) {
    uVar6 = local_50 + 1;
    uVar5 = local_68._Ptr;
    if (0xfff < uVar6) {
      uVar5 = *(undefined8 *)(local_68._Ptr + -8);
      uVar6 = local_50 + 0x28;
      if ((char *)0x1f < local_68._Ptr + (-8 - uVar5)) {
LAB_14c603f81:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<JSONStruct,JSONStruct> @ 14c603fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<JSONStruct,JSONStruct>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,JSONStruct *param_3,
          JSONStruct *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pbVar2 = FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
  if (0xf < uStack_70) {
    pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar6 = uStack_70 + 1;
    pvVar4 = pvVar1;
    if (0xfff < uVar6) {
      pvVar4 = *(void **)((longlong)pvVar1 + -8);
      uVar6 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c6040c1;
    }
    ::operator_delete(pvVar4,uVar6);
  }
  local_88._Buf[0] = '\0';
  local_78 = ___xmm_000000000000000f0000000000000000;
  uStack_70 = _UNK_15076add8;
  if (0xf < local_50) {
    uVar6 = local_50 + 1;
    uVar5 = local_68._Ptr;
    if (0xfff < uVar6) {
      uVar5 = *(undefined8 *)(local_68._Ptr + -8);
      uVar6 = local_50 + 0x28;
      if ((char *)0x1f < local_68._Ptr + (-8 - uVar5)) {
LAB_14c6040c1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<NestedJSONStruct,NestedJSONStruct> @ 14c604110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<NestedJSONStruct,NestedJSONStruct>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          NestedJSONStruct *param_3,NestedJSONStruct *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pbVar2 = FormatForComparisonFailureMessage<NestedJSONStruct,NestedJSONStruct>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<NestedJSONStruct,NestedJSONStruct>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
  if (0xf < uStack_70) {
    pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar6 = uStack_70 + 1;
    pvVar4 = pvVar1;
    if (0xfff < uVar6) {
      pvVar4 = *(void **)((longlong)pvVar1 + -8);
      uVar6 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c604201;
    }
    ::operator_delete(pvVar4,uVar6);
  }
  local_88._Buf[0] = '\0';
  local_78 = ___xmm_000000000000000f0000000000000000;
  uStack_70 = _UNK_15076add8;
  if (0xf < local_50) {
    uVar6 = local_50 + 1;
    uVar5 = local_68._Ptr;
    if (0xfff < uVar6) {
      uVar5 = *(undefined8 *)(local_68._Ptr + -8);
      uVar6 = local_50 + 0x28;
      if ((char *)0x1f < local_68._Ptr + (-8 - uVar5)) {
LAB_14c604201:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::array<char,3>,std::array<char,3>_> @ 14c604250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<std::array<char,3>,std::array<char,3>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          array<char,3> *param_3,array<char,3> *param_4)

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
  PrintToString<std::array<char,3>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::array<char,3>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c604338;
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
LAB_14c604338:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c604380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_3,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_4)

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
  PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c604468;
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
LAB_14c604468:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<JSONStruct> @ 14c6044b0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<JSONStruct>
          (JSONStruct *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// DefaultPrintNonContainerTo<NestedJSONStruct> @ 14c6044d0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<NestedJSONStruct>
          (NestedJSONStruct *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x50,param_2);
  return;
}

// DefaultPrintTo<JSONStruct> @ 14c6044f0

void __cdecl
testing::internal::DefaultPrintTo<JSONStruct>
          (WrapPrinterType<3> param_1,JSONStruct *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x10,param_3);
  return;
}

// DefaultPrintTo<NestedJSONStruct> @ 14c604510

void __cdecl
testing::internal::DefaultPrintTo<NestedJSONStruct>
          (WrapPrinterType<3> param_1,NestedJSONStruct *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x50,param_3);
  return;
}

// DefaultPrintTo<std::array<char,3>_> @ 14c604530

void __cdecl
testing::internal::DefaultPrintTo<std::array<char,3>_>
          (WrapPrinterType<0> param_1,array<char,3> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  longlong lVar1;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  lVar1 = 0;
  if (param_2 != param_2 + 1) {
    do {
      if (lVar1 != 0) {
        std::operator<<<std::char_traits<char>_>(param_3,',');
        if (lVar1 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_3," ...");
          goto LAB_14c60459c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      PrintTo(param_2->_Elems[lVar1],param_3);
      lVar1 = lVar1 + 1;
    } while ((array<char,3> *)(param_2->_Elems + lVar1) != param_2 + 1);
    if (lVar1 != 0) {
LAB_14c60459c:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// DefaultPrintTo<std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c6045e0

void __cdecl
testing::internal::DefaultPrintTo<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (WrapPrinterType<0> param_1,vector<JSONStruct,std::allocator<JSONStruct>_> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  JSONStruct *pJVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  pJVar1 = (param_2->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pJVar1 != (param_2->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_3,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_3," ...");
          goto LAB_14c604651;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      internal2::PrintBytesInObjectTo((uchar *)pJVar1,0x10,param_3);
      pJVar1 = pJVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pJVar1 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c604651:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// FormatForComparisonFailureMessage<char,char> @ 14c6046a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<char,char>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a8 = (char *)0x0;
  local_a0 = 0;
  PrintTo(*param_1,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<JSONStruct,JSONStruct> @ 14c604850

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<JSONStruct,JSONStruct>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          JSONStruct *param_1,JSONStruct *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_a8 = (char *)0x0;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a0 = 0;
  internal2::PrintBytesInObjectTo
            ((uchar *)param_1,0x10,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<NestedJSONStruct,NestedJSONStruct> @ 14c604a00

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<NestedJSONStruct,NestedJSONStruct>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          NestedJSONStruct *param_1,NestedJSONStruct *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_a8 = (char *)0x0;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a0 = 0;
  internal2::PrintBytesInObjectTo
            ((uchar *)param_1,0x50,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::array<char,3>,std::array<char,3>_> @ 14c604bb0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<std::array<char,3>,std::array<char,3>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          array<char,3> *param_1,array<char,3> *param_2)

{
  PrintToString<std::array<char,3>_>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c604bd0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<JSONStruct,std::allocator<JSONStruct>_>,std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_1,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_2)

{
  PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<JSONStruct> @ 14c604bf0

void __cdecl
testing::internal::PrintTo<JSONStruct>
          (JSONStruct *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// PrintTo<NestedJSONStruct> @ 14c604c10

void __cdecl
testing::internal::PrintTo<NestedJSONStruct>
          (NestedJSONStruct *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x50,param_2);
  return;
}

// PrintTo<std::array<char,3>_> @ 14c604c30

void __cdecl
testing::internal::PrintTo<std::array<char,3>_>
          (array<char,3> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  longlong lVar1;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  lVar1 = 0;
  if (param_1 != param_1 + 1) {
    do {
      if (lVar1 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar1 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c604c9c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      PrintTo(param_1->_Elems[lVar1],param_2);
      lVar1 = lVar1 + 1;
    } while ((array<char,3> *)(param_1->_Elems + lVar1) != param_1 + 1);
    if (lVar1 != 0) {
LAB_14c604c9c:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintTo<std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c604ce0

void __cdecl
testing::internal::PrintTo<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (vector<JSONStruct,std::allocator<JSONStruct>_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  JSONStruct *pJVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pJVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pJVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c604d51;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      internal2::PrintBytesInObjectTo((uchar *)pJVar1,0x10,param_2);
      pJVar1 = pJVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pJVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c604d51:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintToString<JSONStruct> @ 14c604da0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<JSONStruct>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          JSONStruct *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_a8 = (char *)0x0;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a0 = 0;
  internal2::PrintBytesInObjectTo
            ((uchar *)param_1,0x10,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// PrintToString<NestedJSONStruct> @ 14c604f50

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<NestedJSONStruct>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          NestedJSONStruct *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_a8 = (char *)0x0;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a0 = 0;
  internal2::PrintBytesInObjectTo
            ((uchar *)param_1,0x50,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// PrintToString<std::array<char,3>_> @ 14c605100

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<std::array<char,3>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          array<char,3> *param_1)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  lVar2 = 0;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_a8 = (char *)0x0;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a0 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,'{');
  if (param_1 != param_1 + 1) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_118,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_118," ...");
          goto LAB_14c605207;
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
      internal::PrintTo(param_1->_Elems[lVar2],
                        (basic_ostream<char,std::char_traits<char>_> *)local_118);
      lVar2 = lVar2 + 1;
    } while ((array<char,3> *)(param_1->_Elems + lVar2) != param_1 + 1);
    if (lVar2 != 0) {
LAB_14c605207:
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,'}');
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar3 = *local_d0, pcVar3 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar3 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar3 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar3 < local_a8) {
      pcVar3 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar3 = pcVar3 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar3);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c605340

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<JSONStruct,std::allocator<JSONStruct>_> *param_1)

{
  char *pcVar1;
  JSONStruct *pJVar2;
  longlong lVar3;
  char *pcVar4;
  int iStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined1 local_110 [24];
  char **local_f8;
  char **local_f0;
  char **local_d8;
  char **local_d0;
  int *local_c0;
  char *local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90;
  
  local_128._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_118 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  lVar3 = 0;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_90);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_110);
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  local_a8 = (char *)0x0;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a0 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,'{');
  pJVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pJVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar3 != 0) {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_118,',');
        if (lVar3 == 0x20) {
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_118," ...");
          goto LAB_14c60544c;
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
      internal2::PrintBytesInObjectTo
                ((uchar *)pJVar2,0x10,(basic_ostream<char,std::char_traits<char>_> *)local_118);
      pJVar2 = pJVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (pJVar2 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar3 != 0) {
LAB_14c60544c:
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,'}');
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar4 = *local_d0, pcVar4 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar4 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar4 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar4 < local_a8) {
      pcVar4 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar4 = pcVar4 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar4);
  }
  *(undefined ***)(local_128 + *(int *)(local_128._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128._0_8_ + 4)) =
       *(int *)(local_128._0_8_ + 4) + -0x98;
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_110);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_110);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_110 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_90);
  return __return_storage_ptr__;
}

// UniversalPrint<JSONStruct> @ 14c605580

void __cdecl
testing::internal::UniversalPrint<JSONStruct>
          (JSONStruct *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// UniversalPrint<NestedJSONStruct> @ 14c6055a0

void __cdecl
testing::internal::UniversalPrint<NestedJSONStruct>
          (NestedJSONStruct *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x50,param_2);
  return;
}

// UniversalPrint<std::array<char,3>_> @ 14c6055c0

void __cdecl
testing::internal::UniversalPrint<std::array<char,3>_>
          (array<char,3> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  longlong lVar1;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  lVar1 = 0;
  if (param_1 != param_1 + 1) {
    do {
      if (lVar1 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar1 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c60562c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      PrintTo(param_1->_Elems[lVar1],param_2);
      lVar1 = lVar1 + 1;
    } while ((array<char,3> *)(param_1->_Elems + lVar1) != param_1 + 1);
    if (lVar1 != 0) {
LAB_14c60562c:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// UniversalPrint<std::vector<JSONStruct,std::allocator<JSONStruct>_>_> @ 14c605670

void __cdecl
testing::internal::UniversalPrint<std::vector<JSONStruct,std::allocator<JSONStruct>_>_>
          (vector<JSONStruct,std::allocator<JSONStruct>_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  JSONStruct *pJVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pJVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pJVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c6056e1;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      internal2::PrintBytesInObjectTo((uchar *)pJVar1,0x10,param_2);
      pJVar1 = pJVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pJVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c6056e1:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// _Copy_memmove<JSONStruct_*,JSONStruct_*> @ 14c605730

JSONStruct * __cdecl
std::_Copy_memmove<JSONStruct_*,JSONStruct_*>
          (JSONStruct *param_1,JSONStruct *param_2,JSONStruct *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (JSONStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove<JSONStruct_const_*,JSONStruct_*> @ 14c605770

JSONStruct * __cdecl
std::_Copy_memmove<JSONStruct_const_*,JSONStruct_*>
          (JSONStruct *param_1,JSONStruct *param_2,JSONStruct *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (JSONStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<JSONStruct_*> @ 14c6057b0

JSONStruct * __cdecl
std::_Copy_memmove_tail<JSONStruct_*>
          (char *param_1,JSONStruct *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (JSONStruct *)(&param_2->a + param_3);
}

// _Emplace_reallocate<unsigned_short> @ 14c6057e0

ushort * __thiscall
std::vector<unsigned_short,std::allocator<unsigned_short>_>::_Emplace_reallocate<unsigned_short>
          (vector<unsigned_short,std::allocator<unsigned_short>_> *this,ushort *param_1,
          ushort *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ushort *puVar6;
  longlong lVar7;
  size_t _Size;
  
  puVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = (longlong)param_1 - (longlong)puVar5 >> 1;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar5 >> 1;
  if (lVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar5 >> 1;
  uVar1 = lVar2 + 1;
  if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 2);
  _Dst[lVar7] = *param_2;
  puVar5 = (this->_Mypair)._Myval2._Mylast;
  puVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == puVar5) {
    _Size = (longlong)puVar5 - (longlong)puVar6;
    puVar5 = _Dst;
    param_1 = puVar6;
  }
  else {
    memmove(_Dst,puVar6,(longlong)param_1 - (longlong)puVar6);
    puVar5 = _Dst + lVar7 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(puVar5,param_1,_Size);
  puVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar5 != (ushort *)0x0) {
    uVar3 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar5 >> 1) * 2;
    puVar6 = puVar5;
    if (0xfff < uVar3) {
      puVar6 = *(ushort **)(puVar5 + -4);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar6,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar4;
  return _Dst + lVar7;
}

// _Emplace_reallocate<int> @ 14c605960

int * __thiscall
std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int>
          (vector<int,std::allocator<int>_> *this,int *param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  ulong64 uVar7;
  longlong lVar8;
  size_t _Size;
  
  piVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)param_1 - (longlong)piVar5 >> 2;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)piVar5 >> 2;
  if (lVar2 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)piVar5 >> 2;
  uVar1 = lVar2 + 1;
  if (0x3fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x3fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 4);
  _Dst[lVar8] = *param_2;
  piVar5 = (this->_Mypair)._Myval2._Mylast;
  piVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == piVar5) {
    _Size = (longlong)piVar5 - (longlong)piVar6;
    piVar5 = _Dst;
    param_1 = piVar6;
  }
  else {
    memmove(_Dst,piVar6,(longlong)param_1 - (longlong)piVar6);
    piVar5 = _Dst + lVar8 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(piVar5,param_1,_Size);
  piVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (piVar5 != (int *)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)piVar5 & 0xfffffffffffffffc;
    piVar6 = piVar5;
    if (0xfff < uVar7) {
      piVar6 = *(int **)(piVar5 + -2);
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)piVar5 + (-8 - (longlong)piVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(piVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar4;
  return _Dst + lVar8;
}

// _Emplace_reallocate<JSONStruct> @ 14c605ae0

JSONStruct * __thiscall
std::vector<JSONStruct,std::allocator<JSONStruct>_>::_Emplace_reallocate<JSONStruct>
          (vector<JSONStruct,std::allocator<JSONStruct>_> *this,JSONStruct *param_1,
          JSONStruct *param_2)

{
  uchar uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  JSONStruct *_Dst;
  ulonglong uVar7;
  JSONStruct *pJVar8;
  JSONStruct *pJVar9;
  ulong64 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  size_t _Size;
  ulonglong uVar13;
  JSONStruct *pJVar14;
  
  pJVar8 = (this->_Mypair)._Myval2._Myfirst;
  lVar11 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pJVar8 >> 4;
  if (lVar11 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar12 = lVar11 + 1;
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pJVar8 >> 4;
  if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar13 = 0xfffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar13 = uVar12;
    if (uVar12 <= uVar7) {
      uVar13 = uVar7;
    }
    if (0xfffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar13 * 0x10);
  uVar1 = param_2->b;
  sVar2 = param_2->c;
  uVar3 = param_2->d;
  uVar4 = *(undefined2 *)&param_2->field_0x6;
  iVar5 = param_2->e;
  uVar6 = param_2->f;
  pJVar14 = (JSONStruct *)(&_Dst->a + ((longlong)param_1 - (longlong)pJVar8 & 0xfffffffffffffff0));
  pJVar14->a = param_2->a;
  pJVar14->b = uVar1;
  pJVar14->c = sVar2;
  pJVar14->d = uVar3;
  *(undefined2 *)&pJVar14->field_0x6 = uVar4;
  pJVar14->e = iVar5;
  pJVar14->f = uVar6;
  pJVar8 = (this->_Mypair)._Myval2._Mylast;
  pJVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pJVar8) {
    _Size = (longlong)pJVar8 - (longlong)pJVar9;
    pJVar8 = _Dst;
    param_1 = pJVar9;
  }
  else {
    memmove(_Dst,pJVar9,(longlong)param_1 - (longlong)pJVar9);
    pJVar8 = pJVar14 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pJVar8,param_1,_Size);
  pJVar8 = (this->_Mypair)._Myval2._Myfirst;
  if (pJVar8 != (JSONStruct *)0x0) {
    uVar10 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pJVar8 & 0xfffffffffffffff0;
    pJVar9 = pJVar8;
    if (0xfff < uVar10) {
      pJVar9 = *(JSONStruct **)&pJVar8[-1].e;
      uVar10 = uVar10 + 0x27;
      if (0x1f < (ulonglong)((longlong)pJVar8 + (-8 - (longlong)pJVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pJVar9,uVar10);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar12;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar13;
  return pJVar14;
}

// process<char,3> @ 14c605c60

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<char,3>(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                  *this,array<char,3> *param_1)

{
  array<char,3> *paVar1;
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  *this_00;
  int iVar2;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar3;
  char local_res8 [8];
  char local_res18 [16];
  
  if ((this->state).malformed == false) {
    skipWhiteSpace(this);
    local_res8[0] = '\0';
    pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
    if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) != 0) ||
       (local_res8[0] != '[')) {
      (this->state).malformed = true;
      return;
    }
    skipWhiteSpace(this);
    iVar2 = std::basic_istream<char,std::char_traits<char>_>::peek(&this->stream);
    if (iVar2 == 0x5d) {
      expectChar(this,']');
      return;
    }
    paVar1 = param_1 + 1;
    for (; param_1 != paVar1; param_1 = (array<char,3> *)((longlong)param_1 + 1)) {
      this_00 = (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                 *)this->_padding_;
      local_res8[0] = '\0';
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read(&this_00->stream,local_res8,1)
      ;
      if (((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
          (local_res8[0] == '\"')) &&
         (pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             (&this_00->stream,param_1->_Elems,1),
         ((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0)) {
        expectChar(this_00,'\"');
      }
      else {
        (this_00->state).malformed = true;
      }
      if ((this->state).malformed != false) {
        return;
      }
      skipWhiteSpace(this);
      local_res18[0] = '\0';
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res18,1);
      if (((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) != 0) {
        (this->state).malformed = true;
        return;
      }
      if (local_res18[0] == ',') {
        skipWhiteSpace(this);
      }
      else if (local_res18[0] == ']') break;
    }
    skipWhiteSpace(this);
  }
  return;
}

// process<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> @ 14c605e20

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
          (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,basic_string<char,std::char_traits<char>,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  ulonglong uVar1;
  ulonglong _Size;
  ulonglong uVar2;
  PolyAllocator<char,8,pma::DefaultMemoryResource> PVar3;
  char *_Src;
  char cVar4;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar5;
  _String_val<std::_Simple_types<char>_> *p_Var6;
  char *_Dst;
  ulonglong uVar7;
  char local_res18 [8];
  char local_res20 [8];
  
  if ((this->state).malformed == false) {
    local_res18[0] = '\0';
    pbVar5 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res18,1);
    if ((((byte)pbVar5[(longlong)*(int *)(*(longlong *)pbVar5 + 4) + 0x10] & 6) != 0) ||
       (local_res18[0] != '\"')) {
      (this->state).malformed = true;
      return;
    }
    (param_1->_Mypair)._Myval2._Mysize = 0;
    p_Var6 = &(param_1->_Mypair)._Myval2;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      p_Var6 = (_String_val<std::_Simple_types<char>_> *)(param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (p_Var6->_Bx)._Buf[0] = '\0';
    local_res20[0] = '\0';
    while (pbVar5 = std::basic_istream<char,std::char_traits<char>_>::read
                              (&this->stream,local_res20,1), cVar4 = local_res20[0],
          ((byte)pbVar5[(longlong)*(int *)(*(longlong *)pbVar5 + 4) + 0x10] & 6) == 0) {
      if (local_res20[0] == '\"') {
        return;
      }
      _Size = (param_1->_Mypair)._Myval2._Mysize;
      uVar2 = (param_1->_Mypair)._Myval2._Myres;
      if (_Size < uVar2) {
        (param_1->_Mypair)._Myval2._Mysize = _Size + 1;
        p_Var6 = &(param_1->_Mypair)._Myval2;
        if (0xf < uVar2) {
          p_Var6 = (_String_val<std::_Simple_types<char>_> *)(param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        (p_Var6->_Bx)._Buf[_Size] = local_res20[0];
        (p_Var6->_Bx)._Buf[_Size + 1] = '\0';
      }
      else {
        if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlen_string();
        }
        uVar7 = _Size + 1 | 0xf;
        if (uVar7 < 0x8000000000000000) {
          if (0x7fffffffffffffff - (uVar2 >> 1) < uVar2) {
            uVar7 = 0x7fffffffffffffff;
          }
          else {
            uVar1 = uVar2 + (uVar2 >> 1);
            if (uVar7 < uVar1) {
              uVar7 = uVar1;
            }
          }
        }
        else {
          uVar7 = 0x7fffffffffffffff;
        }
        PVar3 = (param_1->_Mypair)._Myval1;
        _Dst = (char *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar7 + 1,8);
        (param_1->_Mypair)._Myval2._Mysize = _Size + 1;
        (param_1->_Mypair)._Myval2._Myres = uVar7;
        if (uVar2 < 0x10) {
          memcpy(_Dst,&(param_1->_Mypair)._Myval2,_Size);
          _Dst[_Size] = cVar4;
          _Dst[_Size + 1] = '\0';
          (param_1->_Mypair)._Myval2._Bx._Ptr = _Dst;
        }
        else {
          _Src = (param_1->_Mypair)._Myval2._Bx._Ptr;
          memcpy(_Dst,_Src,_Size);
          _Dst[_Size] = cVar4;
          _Dst[_Size + 1] = '\0';
          PVar3 = (param_1->_Mypair)._Myval1;
          (**(code **)(*(longlong *)PVar3 + 0x10))(PVar3,_Src,uVar2 + 1,8);
          (param_1->_Mypair)._Myval2._Bx._Ptr = _Dst;
        }
      }
    }
    (this->state).malformed = true;
  }
  return;
}

// process<unsigned_short,std::allocator<unsigned_short>_> @ 14c606060

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<unsigned_short,std::allocator<unsigned_short>_>
          (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,vector<unsigned_short,std::allocator<unsigned_short>_> *param_1)

{
  ushort **ppuVar1;
  basic_istream<char,std::char_traits<char>_> *this_00;
  ushort *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar6;
  locale *plVar7;
  ctype<char> *pcVar8;
  undefined8 *puVar9;
  char local_res8 [8];
  ushort local_res18 [8];
  locale local_38;
  
  if ((this->state).malformed == false) {
    skipWhiteSpace(this);
    this_00 = &this->stream;
    local_res8[0] = '\0';
    pbVar6 = std::basic_istream<char,std::char_traits<char>_>::read(this_00,local_res8,1);
    if ((((byte)pbVar6[(longlong)*(int *)(*(longlong *)pbVar6 + 4) + 0x10] & 6) != 0) ||
       (local_res8[0] != '[')) {
      (this->state).malformed = true;
      return;
    }
    skipWhiteSpace(this);
    iVar4 = std::basic_istream<char,std::char_traits<char>_>::peek(this_00);
    if (iVar4 == 0x5d) {
      expectChar(this,']');
      return;
    }
    puVar2 = (param_1->_Mypair)._Myval2._Myfirst;
    if (puVar2 != (param_1->_Mypair)._Myval2._Mylast) {
      (param_1->_Mypair)._Myval2._Mylast = puVar2;
    }
    local_res18[0] = 0;
LAB_14c606120:
    do {
      puVar2 = (param_1->_Mypair)._Myval2._Mylast;
      if (puVar2 == (param_1->_Mypair)._Myval2._Myend) {
        std::vector<unsigned_short,std::allocator<unsigned_short>_>::
        _Emplace_reallocate<unsigned_short>(param_1,puVar2,local_res18);
      }
      else {
        *puVar2 = 0;
        ppuVar1 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      if (*(char *)(this->_padding_ + 0x10f8) == '\0') {
        std::basic_istream<char,std::char_traits<char>_>::operator>>
                  ((basic_istream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),
                   (param_1->_Mypair)._Myval2._Mylast + -1);
      }
      if ((this->state).malformed != false) {
        return;
      }
      if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) !=
          (longlong *)0x0) {
        (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) + 8)
        )();
      }
      bVar3 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(this_00,true);
      if (bVar3) {
        iVar4 = 0;
        plVar7 = std::ios_base::getloc
                           ((ios_base *)(&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),
                            &local_38);
        pcVar8 = std::use_facet<std::ctype<char>_>(plVar7);
        if ((local_38._Ptr != (_Locimp *)0x0) &&
           (puVar9 = (undefined8 *)(**(code **)((local_38._Ptr)->_padding_ + 0x10))(),
           puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)(puVar9,1);
        }
        uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
        while (uVar5 != 0xffffffff) {
          if ((*(byte *)((pcVar8->_Ctype)._Table + (uVar5 & 0xff)) & 0x48) == 0) goto LAB_14c60622a;
          uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                            (*(basic_streambuf<char,std::char_traits<char>_> **)
                              (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
        }
        iVar4 = 1;
LAB_14c60622a:
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   (&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),iVar4,false);
      }
      if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) !=
          (longlong *)0x0) {
        (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) +
                    0x10))();
      }
      local_res8[0] = '\0';
      pbVar6 = std::basic_istream<char,std::char_traits<char>_>::read(this_00,local_res8,1);
      if (((byte)pbVar6[(longlong)*(int *)(*(longlong *)pbVar6 + 4) + 0x10] & 6) != 0) {
        (this->state).malformed = true;
        return;
      }
      if (local_res8[0] == ',') {
        skipWhiteSpace(this);
        goto LAB_14c606120;
      }
    } while (local_res8[0] != ']');
    skipWhiteSpace(this);
  }
  return;
}

// process<int,std::allocator<int>_> @ 14c6062d0

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<int,std::allocator<int>_>
          (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,vector<int,std::allocator<int>_> *param_1)

{
  int **ppiVar1;
  basic_istream<char,std::char_traits<char>_> *this_00;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar6;
  locale *plVar7;
  ctype<char> *pcVar8;
  undefined8 *puVar9;
  char local_res8 [8];
  int local_res18 [4];
  locale local_38;
  
  if ((this->state).malformed == false) {
    skipWhiteSpace(this);
    this_00 = &this->stream;
    local_res8[0] = '\0';
    pbVar6 = std::basic_istream<char,std::char_traits<char>_>::read(this_00,local_res8,1);
    if ((((byte)pbVar6[(longlong)*(int *)(*(longlong *)pbVar6 + 4) + 0x10] & 6) != 0) ||
       (local_res8[0] != '[')) {
      (this->state).malformed = true;
      return;
    }
    skipWhiteSpace(this);
    iVar4 = std::basic_istream<char,std::char_traits<char>_>::peek(this_00);
    if (iVar4 == 0x5d) {
      expectChar(this,']');
      return;
    }
    piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
    if (piVar2 != (param_1->_Mypair)._Myval2._Mylast) {
      (param_1->_Mypair)._Myval2._Mylast = piVar2;
    }
    local_res18[0] = 0;
LAB_14c606390:
    do {
      piVar2 = (param_1->_Mypair)._Myval2._Mylast;
      if (piVar2 == (param_1->_Mypair)._Myval2._Myend) {
        std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int>(param_1,piVar2,local_res18);
      }
      else {
        *piVar2 = 0;
        ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppiVar1 = *ppiVar1 + 1;
      }
      if (*(char *)(this->_padding_ + 0x10f8) == '\0') {
        std::basic_istream<char,std::char_traits<char>_>::operator>>
                  ((basic_istream<char,std::char_traits<char>_> *)(this->_padding_ + 0x1080),
                   (param_1->_Mypair)._Myval2._Mylast + -1);
      }
      if ((this->state).malformed != false) {
        return;
      }
      if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) !=
          (longlong *)0x0) {
        (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) + 8)
        )();
      }
      bVar3 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(this_00,true);
      if (bVar3) {
        iVar4 = 0;
        plVar7 = std::ios_base::getloc
                           ((ios_base *)(&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),
                            &local_38);
        pcVar8 = std::use_facet<std::ctype<char>_>(plVar7);
        if ((local_38._Ptr != (_Locimp *)0x0) &&
           (puVar9 = (undefined8 *)(**(code **)((local_38._Ptr)->_padding_ + 0x10))(),
           puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)(puVar9,1);
        }
        uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
        while (uVar5 != 0xffffffff) {
          if ((*(byte *)((pcVar8->_Ctype)._Table + (uVar5 & 0xff)) & 0x48) == 0) goto LAB_14c60649a;
          uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                            (*(basic_streambuf<char,std::char_traits<char>_> **)
                              (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
        }
        iVar4 = 1;
LAB_14c60649a:
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   (&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),iVar4,false);
      }
      if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) !=
          (longlong *)0x0) {
        (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) +
                    0x10))();
      }
      local_res8[0] = '\0';
      pbVar6 = std::basic_istream<char,std::char_traits<char>_>::read(this_00,local_res8,1);
      if (((byte)pbVar6[(longlong)*(int *)(*(longlong *)pbVar6 + 4) + 0x10] & 6) != 0) {
        (this->state).malformed = true;
        return;
      }
      if (local_res8[0] == ',') {
        skipWhiteSpace(this);
        goto LAB_14c606390;
      }
    } while (local_res8[0] != ']');
    skipWhiteSpace(this);
  }
  return;
}

// process<JSONStruct,std::allocator<JSONStruct>_> @ 14c606540

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<JSONStruct,std::allocator<JSONStruct>_>
          (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,vector<JSONStruct,std::allocator<JSONStruct>_> *param_1)

{
  JSONStruct **ppJVar1;
  basic_istream<char,std::char_traits<char>_> *this_00;
  JSONStruct *pJVar2;
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  *this_01;
  bool bVar3;
  int iVar4;
  uint uVar5;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar6;
  locale *plVar7;
  ctype<char> *pcVar8;
  undefined8 *puVar9;
  char local_res8 [8];
  JSONStruct local_38;
  locale local_28;
  
  if ((this->state).malformed == false) {
    skipWhiteSpace(this);
    this_00 = &this->stream;
    local_res8[0] = '\0';
    pbVar6 = std::basic_istream<char,std::char_traits<char>_>::read(this_00,local_res8,1);
    if ((((byte)pbVar6[(longlong)*(int *)(*(longlong *)pbVar6 + 4) + 0x10] & 6) == 0) &&
       (local_res8[0] == '[')) {
      skipWhiteSpace(this);
      iVar4 = std::basic_istream<char,std::char_traits<char>_>::peek(this_00);
      if (iVar4 == 0x5d) {
        expectChar(this,']');
      }
      else {
        pJVar2 = (param_1->_Mypair)._Myval2._Myfirst;
        if (pJVar2 != (param_1->_Mypair)._Myval2._Mylast) {
          (param_1->_Mypair)._Myval2._Mylast = pJVar2;
        }
LAB_14c6065e0:
        do {
          pJVar2 = (param_1->_Mypair)._Myval2._Mylast;
          local_38.a = '\0';
          local_38.b = '\0';
          local_38.c = 0;
          local_38.d = 0;
          local_38._6_2_ = 0;
          local_38.e = 0;
          local_38.f = 0;
          if (pJVar2 == (param_1->_Mypair)._Myval2._Myend) {
            std::vector<JSONStruct,std::allocator<JSONStruct>_>::_Emplace_reallocate<JSONStruct>
                      (param_1,pJVar2,&local_38);
          }
          else {
            pJVar2->a = '\0';
            pJVar2->b = '\0';
            pJVar2->c = 0;
            pJVar2->d = 0;
            *(undefined2 *)&pJVar2->field_0x6 = 0;
            pJVar2->e = 0;
            pJVar2->f = 0;
            ppJVar1 = &(param_1->_Mypair)._Myval2._Mylast;
            *ppJVar1 = *ppJVar1 + 1;
          }
          this_01 = (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                     *)this->_padding_;
          pJVar2 = (param_1->_Mypair)._Myval2._Mylast;
          if ((this_01->state).malformed == false) {
            bVar3 = (this_01->state).transparent;
            (this_01->state).transparent = false;
            if (bVar3 == false) {
              preStructInput(this_01);
              JSONStruct::
              serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                        (pJVar2 + -1,
                         (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
                         this_01);
              postStructInput(this_01);
            }
            else {
              JSONStruct::
              serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                        (pJVar2 + -1,
                         (JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
                         this_01);
            }
          }
          if ((this->state).malformed != false) {
            return;
          }
          if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) !=
              (longlong *)0x0) {
            (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4))
                        + 8))();
          }
          bVar3 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(this_00,true);
          if (bVar3) {
            iVar4 = 0;
            plVar7 = std::ios_base::getloc
                               ((ios_base *)
                                (&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),&local_28
                               );
            pcVar8 = std::use_facet<std::ctype<char>_>(plVar7);
            if ((local_28._Ptr != (_Locimp *)0x0) &&
               (puVar9 = (undefined8 *)(**(code **)((local_28._Ptr)->_padding_ + 0x10))(),
               puVar9 != (undefined8 *)0x0)) {
              (**(code **)*puVar9)(puVar9,1);
            }
            uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                              (*(basic_streambuf<char,std::char_traits<char>_> **)
                                (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
            while (uVar5 != 0xffffffff) {
              if ((*(byte *)((pcVar8->_Ctype)._Table + (uVar5 & 0xff)) & 0x48) == 0)
              goto LAB_14c606719;
              uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                                (*(basic_streambuf<char,std::char_traits<char>_> **)
                                  (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
            }
            iVar4 = 1;
LAB_14c606719:
            std::basic_ios<char,std::char_traits<char>_>::setstate
                      ((basic_ios<char,std::char_traits<char>_> *)
                       (&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),iVar4,false);
          }
          if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) !=
              (longlong *)0x0) {
            (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4))
                        + 0x10))();
          }
          local_res8[0] = '\0';
          pbVar6 = std::basic_istream<char,std::char_traits<char>_>::read(this_00,local_res8,1);
          if (((byte)pbVar6[(longlong)*(int *)(*(longlong *)pbVar6 + 4) + 0x10] & 6) != 0)
          goto LAB_14c606794;
          if (local_res8[0] == ',') {
            skipWhiteSpace(this);
            goto LAB_14c6065e0;
          }
        } while (local_res8[0] != ']');
        skipWhiteSpace(this);
      }
    }
    else {
LAB_14c606794:
      (this->state).malformed = true;
    }
  }
  return;
}

// process<NestedJSONStruct::NestedVector> @ 14c6067c0

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::process<NestedJSONStruct::NestedVector>
          (ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
           *this,NestedVector *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar4;
  ulonglong uVar5;
  char local_res8 [8];
  
  if ((this->state).malformed != false) {
    return;
  }
  bVar1 = (this->state).transparent;
  (this->state).transparent = false;
  if (bVar1 == false) {
    preStructInput(this);
  }
  if ((this->state).malformed == false) {
    skipWhiteSpace(this);
    if ((this->state).firstMember == false) {
      bVar3 = expectChar(this,',');
      if (!bVar3) goto LAB_14c606945;
      skipWhiteSpace(this);
    }
    else {
      (this->state).firstMember = false;
    }
    bVar3 = expectChar(this,'\"');
    if (bVar3) {
      uVar5 = 0;
      do {
        cVar2 = "nested array in struct"[uVar5];
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) != 0) ||
           (local_res8[0] != cVar2)) goto LAB_14c60692a;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x16);
      local_res8[0] = '\0';
      pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
      if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
         (local_res8[0] == '\"')) {
        skipWhiteSpace(this);
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
           (local_res8[0] == ':')) {
          skipWhiteSpace(this);
          goto LAB_14c606945;
        }
      }
LAB_14c60692a:
      (this->state).malformed = true;
    }
  }
LAB_14c606945:
  process<int,std::allocator<int>_>
            ((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              *)this->_padding_,&param_1->cc);
  if (bVar1 == false) {
    postStructInput(this);
  }
  return;
}

// serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_> @ 14c606970

void __thiscall
InnerOpaque::serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
          (InnerOpaque *this,
          JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *param_1)

{
  char cVar1;
  bool bVar2;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar3;
  char local_res10 [8];
  
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c606aca;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_a;
    if (bVar2) {
      local_res10[0] = '\0';
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          local_res10,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         (local_res10[0] == cVar1)) {
        local_res10[0] = '\0';
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res10,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           (local_res10[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res10[0] = '\0';
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              local_res10,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             (local_res10[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c606aca;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c606aca:
  if (*(char *)(*(longlong *)param_1 + 0x10f8) == '\0') {
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
               &this->a);
  }
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c606c05;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_b;
    if (bVar2) {
      local_res10[0] = '\0';
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          local_res10,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         (local_res10[0] == cVar1)) {
        local_res10[0] = '\0';
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res10,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           (local_res10[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res10[0] = '\0';
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              local_res10,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             (local_res10[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c606c05;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c606c05:
  if (*(char *)(*(longlong *)param_1 + 0x10f8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014c606c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
               &this->b);
    return;
  }
  return;
}

// serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_> @ 14c606c50

void __thiscall
JSONStruct::serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
          (JSONStruct *this,
          JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *param_1)

{
  char cVar1;
  bool bVar2;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar3;
  ushort local_res8 [4];
  
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c606d98;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_a;
    if (bVar2) {
      local_res8[0] = local_res8[0] & 0xff00;
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          (char *)local_res8,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         ((uchar)local_res8[0] == cVar1)) {
        local_res8[0] = local_res8[0] & 0xff00;
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            (char *)local_res8,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           ((uchar)local_res8[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res8[0] = local_res8[0] & 0xff00;
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              (char *)local_res8,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             ((uchar)local_res8[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c606d98;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c606d98:
  local_res8[0] = 0;
  std::basic_istream<char,std::char_traits<char>_>::operator>>
            ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
             (short *)local_res8);
  this->a = (uchar)local_res8[0];
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c606ec8;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_b;
    if (bVar2) {
      local_res8[0] = local_res8[0] & 0xff00;
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          (char *)local_res8,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         ((uchar)local_res8[0] == cVar1)) {
        local_res8[0] = local_res8[0] & 0xff00;
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            (char *)local_res8,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           ((uchar)local_res8[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res8[0] = local_res8[0] & 0xff00;
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              (char *)local_res8,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             ((uchar)local_res8[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c606ec8;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c606ec8:
  local_res8[0] = 0;
  std::basic_istream<char,std::char_traits<char>_>::operator>>
            ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
             local_res8);
  this->b = (uchar)local_res8[0];
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c606ff8;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_c;
    if (bVar2) {
      local_res8[0] = local_res8[0] & 0xff00;
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          (char *)local_res8,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         ((uchar)local_res8[0] == cVar1)) {
        local_res8[0] = local_res8[0] & 0xff00;
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            (char *)local_res8,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           ((uchar)local_res8[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res8[0] = local_res8[0] & 0xff00;
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              (char *)local_res8,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             ((uchar)local_res8[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c606ff8;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c606ff8:
  if (*(char *)(*(longlong *)param_1 + 0x10f8) == '\0') {
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
               &this->c);
  }
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c607128;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_d;
    if (bVar2) {
      local_res8[0] = local_res8[0] & 0xff00;
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          (char *)local_res8,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         ((uchar)local_res8[0] == cVar1)) {
        local_res8[0] = local_res8[0] & 0xff00;
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            (char *)local_res8,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           ((uchar)local_res8[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res8[0] = local_res8[0] & 0xff00;
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              (char *)local_res8,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             ((uchar)local_res8[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c607128;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c607128:
  if (*(char *)(*(longlong *)param_1 + 0x10f8) == '\0') {
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
               &this->d);
  }
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c607258;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_e;
    if (bVar2) {
      local_res8[0] = local_res8[0] & 0xff00;
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          (char *)local_res8,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         ((uchar)local_res8[0] == cVar1)) {
        local_res8[0] = local_res8[0] & 0xff00;
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            (char *)local_res8,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           ((uchar)local_res8[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res8[0] = local_res8[0] & 0xff00;
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              (char *)local_res8,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             ((uchar)local_res8[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c607258;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c607258:
  if (*(char *)(*(longlong *)param_1 + 0x10f8) == '\0') {
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
               &this->e);
  }
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar2 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar2) goto LAB_14c607388;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar2 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    cVar1 = s_f;
    if (bVar2) {
      local_res8[0] = local_res8[0] & 0xff00;
      pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          (char *)local_res8,1);
      if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
         ((uchar)local_res8[0] == cVar1)) {
        local_res8[0] = local_res8[0] & 0xff00;
        pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            (char *)local_res8,1);
        if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
           ((uchar)local_res8[0] == '\"')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          local_res8[0] = local_res8[0] & 0xff00;
          pbVar3 = std::basic_istream<char,std::char_traits<char>_>::read
                             ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                              (char *)local_res8,1);
          if ((((byte)pbVar3[(longlong)*(int *)(*(longlong *)pbVar3 + 4) + 0x10] & 6) == 0) &&
             ((uchar)local_res8[0] == ':')) {
            terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                              *)param_1);
            goto LAB_14c607388;
          }
        }
      }
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c607388:
  if (*(char *)(*(longlong *)param_1 + 0x10f8) == '\0') {
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)(*(longlong *)param_1 + 0x1080),
               &this->f);
  }
  return;
}

// serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_> @ 14c6073d0

void __thiscall
NestedJSONStruct::
serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
          (NestedJSONStruct *this,
          JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *param_1)

{
  char cVar1;
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  *pEVar2;
  bool bVar3;
  basic_istream<char,struct_std::char_traits<char>_> *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char local_res8 [8];
  
  uVar5 = 0;
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar3 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar3) goto LAB_14c607514;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar3 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    uVar6 = uVar5;
    if (bVar3) {
      do {
        cVar1 = "first"[uVar6];
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) != 0) ||
           (local_res8[0] != cVar1)) goto LAB_14c60750d;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 5);
      local_res8[0] = '\0';
      pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          local_res8,1);
      if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
         (local_res8[0] == '\"')) {
        terse::
        ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
        ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1);
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
           (local_res8[0] == ':')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          goto LAB_14c607514;
        }
      }
LAB_14c60750d:
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c607514:
  pEVar2 = *(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
             **)param_1;
  if ((pEVar2->state).malformed == false) {
    bVar3 = (pEVar2->state).transparent;
    (pEVar2->state).transparent = false;
    if (bVar3 == false) {
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::preStructInput(pEVar2);
      JSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&this->a,(JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
                          pEVar2);
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::postStructInput(pEVar2);
    }
    else {
      JSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&this->a,(JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
                          pEVar2);
    }
  }
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar3 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar3) goto LAB_14c607671;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar3 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    uVar6 = uVar5;
    if (bVar3) {
      do {
        cVar1 = "another"[uVar6];
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) != 0) ||
           (local_res8[0] != cVar1)) goto LAB_14c60766a;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
      local_res8[0] = '\0';
      pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          local_res8,1);
      if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
         (local_res8[0] == '\"')) {
        terse::
        ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
        ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1);
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
           (local_res8[0] == ':')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          goto LAB_14c607671;
        }
      }
LAB_14c60766a:
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c607671:
  pEVar2 = *(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
             **)param_1;
  if ((pEVar2->state).malformed == false) {
    bVar3 = (pEVar2->state).transparent;
    (pEVar2->state).transparent = false;
    if (bVar3 == false) {
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::preStructInput(pEVar2);
      JSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&this->b,(JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
                          pEVar2);
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::postStructInput(pEVar2);
    }
    else {
      JSONStruct::
      serialize<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>_>
                (&this->b,(JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int> *)
                          pEVar2);
    }
  }
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar3 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar3) goto LAB_14c6077cd;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar3 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    uVar6 = uVar5;
    if (bVar3) {
      do {
        cVar1 = "array"[uVar6];
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) != 0) ||
           (local_res8[0] != cVar1)) goto LAB_14c6077c6;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 5);
      local_res8[0] = '\0';
      pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          local_res8,1);
      if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
         (local_res8[0] == '\"')) {
        terse::
        ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
        ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1);
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
           (local_res8[0] == ':')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          goto LAB_14c6077cd;
        }
      }
LAB_14c6077c6:
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c6077cd:
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<unsigned_short,std::allocator<unsigned_short>_>
            (*(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
               **)param_1,&this->c);
  if (param_1->field_0x10f8 == '\0') {
    terse::
    ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
    ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                      *)param_1);
    if (param_1->field_0x10f9 == '\0') {
      bVar3 = terse::
              ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
              ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1,',');
      if (!bVar3) goto LAB_14c6078ee;
      terse::
      ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
      ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                        *)param_1);
    }
    else {
      param_1->field_0x10f9 = 0;
    }
    bVar3 = terse::
            ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
            ::expectChar((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1,'\"');
    if (bVar3) {
      do {
        cVar1 = "array_in_struct"[uVar5];
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) != 0) ||
           (local_res8[0] != cVar1)) goto LAB_14c6078e7;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xf);
      local_res8[0] = '\0';
      pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                         ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                          local_res8,1);
      if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
         (local_res8[0] == '\"')) {
        terse::
        ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
        ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                          *)param_1);
        local_res8[0] = '\0';
        pbVar4 = std::basic_istream<char,std::char_traits<char>_>::read
                           ((basic_istream<char,std::char_traits<char>_> *)&param_1->field_0x1080,
                            local_res8,1);
        if ((((byte)pbVar4[(longlong)*(int *)(*(longlong *)pbVar4 + 4) + 0x10] & 6) == 0) &&
           (local_res8[0] == ':')) {
          terse::
          ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
          ::skipWhiteSpace((ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                            *)param_1);
          goto LAB_14c6078ee;
        }
      }
LAB_14c6078e7:
      param_1->field_0x10f8 = 1;
    }
  }
LAB_14c6078ee:
  terse::
  ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
  ::process<NestedJSONStruct::NestedVector>
            (*(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
               **)param_1,&this->d);
  return;
}

// transparent<InnerOpaque> @ 14c607920

Transparent<InnerOpaque> __cdecl terse::transparent<InnerOpaque>(InnerOpaque *param_1)

{
  InnerOpaque in_RDX;
  
  *param_1 = in_RDX;
  return (Transparent<InnerOpaque>)param_1;
}

// use_facet<std::ctype<char>_> @ 14c607930

ctype<char> * __cdecl std::use_facet<std::ctype<char>_>(locale *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  _Locimp *p_Var3;
  __uint64 _Var4;
  ctype<char> *pcVar5;
  _Lockit local_res8 [2];
  _Lockit local_res10 [2];
  ctype<char> *local_res18;
  
  std::_Lockit::_Lockit(local_res10,0);
  pcVar2 = id_exref;
  local_res18 = (ctype<char> *)_Facetptr<std::ctype<char>_>::_Psave;
  if (*(longlong *)id_exref == 0) {
    std::_Lockit::_Lockit(local_res8,0);
    if (*(longlong *)pcVar2 == 0) {
      *(int *)_Id_cnt_exref = *(int *)_Id_cnt_exref + 1;
      *(longlong *)pcVar2 = (longlong)*(int *)_Id_cnt_exref;
    }
    std::_Lockit::~_Lockit(local_res8);
  }
  uVar1 = *(ulonglong *)pcVar2;
  p_Var3 = param_1->_Ptr;
  if (uVar1 < p_Var3->_Facetcount) {
    pcVar5 = (ctype<char> *)p_Var3->_Facetvec[uVar1];
    if (pcVar5 != (ctype<char> *)0x0) goto LAB_14c607a24;
  }
  else {
    pcVar5 = (ctype<char> *)0x0;
  }
  if (p_Var3->_Xparent == false) {
LAB_14c6079d8:
    if (pcVar5 != (ctype<char> *)0x0) goto LAB_14c607a24;
  }
  else {
    p_Var3 = locale::_Getgloballocale();
    if (uVar1 < p_Var3->_Facetcount) {
      pcVar5 = (ctype<char> *)p_Var3->_Facetvec[uVar1];
      goto LAB_14c6079d8;
    }
  }
  pcVar5 = local_res18;
  if (local_res18 == (ctype<char> *)0x0) {
    _Var4 = std::ctype<char>::_Getcat((facet **)&local_res18,param_1);
    pcVar5 = local_res18;
    if (_Var4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    _Facet_Register((_Facet_base *)local_res18);
    (**(code **)(pcVar5->_padding_ + 8))(pcVar5);
    _Facetptr<std::ctype<char>_>::_Psave = (facet *)local_res18;
    pcVar5 = local_res18;
  }
LAB_14c607a24:
  std::_Lockit::~_Lockit(local_res10);
  return pcVar5;
}

// ws<char,std::char_traits<char>_> @ 14c607a50

basic_istream<char,std::char_traits<char>_> * __cdecl
std::ws<char,std::char_traits<char>_>(basic_istream<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  uint uVar2;
  locale *plVar3;
  ctype<char> *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  locale local_18;
  
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 8))();
  }
  bVar1 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
  if (bVar1) {
    iVar6 = 0;
    plVar3 = std::ios_base::getloc
                       ((ios_base *)(&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),
                        &local_18);
    pcVar4 = use_facet<std::ctype<char>_>(plVar3);
    if ((local_18._Ptr != (_Locimp *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)((local_18._Ptr)->_padding_ + 0x10))(),
       puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
    while (uVar2 != 0xffffffff) {
      if ((*(byte *)((pcVar4->_Ctype)._Table + (uVar2 & 0xff)) & 0x48) == 0) goto LAB_14c607b19;
      uVar2 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)));
    }
    iVar6 = 1;
LAB_14c607b19:
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (&param_1->field_0x0 + *(int *)(*(longlong *)param_1 + 4)),iVar6,false);
  }
  if (*(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&param_1->field_0x48 + *(int *)(*(longlong *)param_1 + 4)) + 0x10))
              ();
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 14c607b60

void * __thiscall
terse::CharInputStreamBuf<tersetests::FakeStream,4096>::_scalar_deleting_destructor_
          (CharInputStreamBuf<tersetests::FakeStream,4096> *this,uint param_1)

{
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1070);
  }
  return this;
}

// _Xlength @ 14c607ba0

void __cdecl std::vector<JSONStruct,std::allocator<JSONStruct>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// base64decode @ 14c607bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl terse::base64decode(char *param_1,char *param_2,ulong64 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_458 [32];
  byte local_438 [16];
  int local_428 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_458;
  uVar6 = 0;
  local_438[0] = 0xff;
  local_438[1] = 0xff;
  local_438[2] = 0xff;
  local_438[3] = 0xff;
  uVar5 = 0;
  local_438[4] = 0;
  local_438[5] = 0;
  local_438[6] = 0;
  local_438[7] = 0;
  uVar8 = uVar6;
  do {
    uVar9 = uVar8 + 1;
    if (local_438[uVar8] != local_438[uVar8 + 4]) {
      uVar5 = -(uint)(local_438[uVar8] < local_438[uVar8 + 4]) | 1;
      break;
    }
    uVar8 = uVar9;
  } while (uVar9 != 4);
  if (uVar5 == 0) {
    memset(local_428,0,0x400);
  }
  else {
    lVar4 = 8;
    piVar1 = local_428;
    do {
      *(undefined8 *)piVar1 = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 2) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 4) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 6) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 8) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 10) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 0xc) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 0xe) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 0x10) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 0x12) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 0x14) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 0x16) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 0x18) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 0x1a) = _UNK_15060db28;
      *(undefined8 *)(piVar1 + 0x1c) = ___xmm_ffffffffffffffffffffffffffffffff;
      *(undefined8 *)(piVar1 + 0x1e) = _UNK_15060db28;
      lVar4 = lVar4 + -1;
      piVar1 = piVar1 + 0x20;
    } while (lVar4 != 0);
  }
  local_428[*alphabet] = 0;
  local_428[alphabet[1]] = 1;
  local_428[alphabet[2]] = 2;
  local_428[alphabet[3]] = 3;
  local_428[alphabet[4]] = 4;
  local_428[alphabet[5]] = 5;
  local_428[alphabet[6]] = 6;
  local_428[alphabet[7]] = 7;
  local_428[alphabet[8]] = 8;
  local_428[alphabet[9]] = 9;
  local_428[alphabet[10]] = 10;
  local_428[alphabet[0xb]] = 0xb;
  local_428[alphabet[0xc]] = 0xc;
  local_428[alphabet[0xd]] = 0xd;
  local_428[alphabet[0xe]] = 0xe;
  local_428[alphabet[0xf]] = 0xf;
  local_428[alphabet[0x10]] = 0x10;
  local_428[alphabet[0x11]] = 0x11;
  local_428[alphabet[0x12]] = 0x12;
  local_428[alphabet[0x13]] = 0x13;
  local_428[alphabet[0x14]] = 0x14;
  local_428[alphabet[0x15]] = 0x15;
  local_428[alphabet[0x16]] = 0x16;
  local_428[alphabet[0x17]] = 0x17;
  local_428[alphabet[0x18]] = 0x18;
  local_428[alphabet[0x19]] = 0x19;
  local_428[alphabet[0x1a]] = 0x1a;
  local_428[alphabet[0x1b]] = 0x1b;
  local_428[alphabet[0x1c]] = 0x1c;
  local_428[alphabet[0x1d]] = 0x1d;
  local_428[alphabet[0x1e]] = 0x1e;
  local_428[alphabet[0x1f]] = 0x1f;
  local_428[alphabet[0x20]] = 0x20;
  local_428[alphabet[0x21]] = 0x21;
  local_428[alphabet[0x22]] = 0x22;
  local_428[alphabet[0x23]] = 0x23;
  local_428[alphabet[0x24]] = 0x24;
  local_428[alphabet[0x25]] = 0x25;
  local_428[alphabet[0x26]] = 0x26;
  local_428[alphabet[0x27]] = 0x27;
  local_428[alphabet[0x28]] = 0x28;
  local_428[alphabet[0x29]] = 0x29;
  local_428[alphabet[0x2a]] = 0x2a;
  local_428[alphabet[0x2b]] = 0x2b;
  local_428[alphabet[0x2c]] = 0x2c;
  local_428[alphabet[0x2d]] = 0x2d;
  local_428[alphabet[0x2e]] = 0x2e;
  local_428[alphabet[0x2f]] = 0x2f;
  local_428[alphabet[0x30]] = 0x30;
  local_428[alphabet[0x31]] = 0x31;
  local_428[alphabet[0x32]] = 0x32;
  local_428[alphabet[0x33]] = 0x33;
  local_428[alphabet[0x34]] = 0x34;
  local_428[alphabet[0x35]] = 0x35;
  local_428[alphabet[0x36]] = 0x36;
  local_428[alphabet[0x37]] = 0x37;
  local_428[alphabet[0x38]] = 0x38;
  local_428[alphabet[0x39]] = 0x39;
  local_428[alphabet[0x3a]] = 0x3a;
  local_428[alphabet[0x3b]] = 0x3b;
  local_428[alphabet[0x3c]] = 0x3c;
  local_428[alphabet[0x3d]] = 0x3d;
  local_428[alphabet[0x3e]] = 0x3e;
  iVar2 = -8;
  local_428[alphabet[0x3f]] = 0x3f;
  pcVar7 = param_1;
  uVar8 = uVar6;
  if (param_3 != 0) {
    do {
      if (local_428[(byte)param_2[uVar8]] == -1) break;
      uVar5 = (int)uVar6 * 0x40 + local_428[(byte)param_2[uVar8]];
      uVar6 = (ulonglong)uVar5;
      iVar3 = iVar2 + 6;
      if (-1 < iVar3) {
        *pcVar7 = (char)((int)uVar5 >> ((byte)iVar3 & 0x1f));
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar2 + -2;
      }
      iVar2 = iVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  return (longlong)pcVar7 - (longlong)param_1;
}

// expectChar @ 14c608060

bool __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::expectChar(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
             *this,char param_1)

{
  basic_istream<char,struct_std::char_traits<char>_> *pbVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  pbVar1 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
  if ((((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 6) == 0) &&
     (local_res8[0] == param_1)) {
    return true;
  }
  (this->state).malformed = true;
  return false;
}

// postStructInput @ 14c6080d0

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::postStructInput(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                  *this)

{
  basic_istream<char,struct_std::char_traits<char>_> *pbVar1;
  char local_res8 [32];
  
  skipWhiteSpace(this);
  local_res8[0] = '\0';
  pbVar1 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
  if ((((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 6) == 0) &&
     (local_res8[0] == '}')) {
    skipWhiteSpace(this);
    return;
  }
  (this->state).malformed = true;
  return;
}

// preStructInput @ 14c608140

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::preStructInput(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                 *this)

{
  basic_istream<char,struct_std::char_traits<char>_> *pbVar1;
  char local_res8 [32];
  
  (this->state).firstMember = true;
  skipWhiteSpace(this);
  local_res8[0] = '\0';
  pbVar1 = std::basic_istream<char,std::char_traits<char>_>::read(&this->stream,local_res8,1);
  if ((((byte)pbVar1[(longlong)*(int *)(*(longlong *)pbVar1 + 4) + 0x10] & 6) == 0) &&
     (local_res8[0] == '{')) {
    skipWhiteSpace(this);
    return;
  }
  (this->state).malformed = true;
  return;
}

// read @ 14c6081b0

ulong64 __thiscall tersetests::FakeStream::read(FakeStream *this,char *param_1,ulong64 param_2)

{
  char *pcVar1;
  char *_Size;
  
  pcVar1 = (this->data)._Mypair._Myval2._Myfirst;
  _Size = (this->data)._Mypair._Myval2._Mylast + (-this->position - (longlong)pcVar1);
  if (param_2 < _Size) {
    _Size = (char *)param_2;
  }
  if (_Size == (char *)0x0) {
    return 0;
  }
  memcpy(param_1,pcVar1 + this->position,(size_t)_Size);
  this->position = (ulong64)(_Size + this->position);
  return (ulong64)_Size;
}

// showmanyc @ 14c608220

long64 __thiscall
terse::CharInputStreamBuf<tersetests::FakeStream,4096>::showmanyc
          (CharInputStreamBuf<tersetests::FakeStream,4096> *this)

{
  FakeStream *pFVar1;
  
  pFVar1 = this->stream;
  return (long64)((pFVar1->data)._Mypair._Myval2._Mylast +
                 (-(longlong)(pFVar1->data)._Mypair._Myval2._Myfirst - pFVar1->position));
}

// skipWhiteSpace @ 14c608240

void __thiscall
terse::
ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
::skipWhiteSpace(ExtendableJSONInputArchive<terse::JSONInputArchive<tersetests::FakeStream,unsigned_int,unsigned_int>,tersetests::FakeStream,unsigned_int,unsigned_int>
                 *this)

{
  basic_istream<char,std::char_traits<char>_> *this_00;
  bool bVar1;
  uint uVar2;
  locale *plVar3;
  ctype<char> *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  locale local_18;
  
  this_00 = &this->stream;
  if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) != (longlong *)0x0)
  {
    (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) + 8))();
  }
  bVar1 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(this_00,true);
  if (bVar1) {
    iVar6 = 0;
    plVar3 = std::ios_base::getloc
                       ((ios_base *)(&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),
                        &local_18);
    pcVar4 = std::use_facet<std::ctype<char>_>(plVar3);
    if ((local_18._Ptr != (_Locimp *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)((local_18._Ptr)->_padding_ + 0x10))(),
       puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
    while (uVar2 != 0xffffffff) {
      if ((*(byte *)((pcVar4->_Ctype)._Table + (uVar2 & 0xff)) & 0x48) == 0) goto LAB_14c60830c;
      uVar2 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)));
    }
    iVar6 = 1;
LAB_14c60830c:
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (&this_00->field_0x0 + *(int *)(*(longlong *)this_00 + 4)),iVar6,false);
  }
  if (*(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) == (longlong *)0x0)
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c608348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(&this_00->field_0x48 + *(int *)(*(longlong *)this_00 + 4)) + 0x10))()
  ;
  return;
}

// underflow @ 14c608360

int __thiscall
terse::CharInputStreamBuf<tersetests::FakeStream,4096>::underflow
          (CharInputStreamBuf<tersetests::FakeStream,4096> *this)

{
  array<char,4096> *paVar1;
  byte *pbVar2;
  FakeStream *pFVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  array<char,4096> *_Dst;
  char *_Size;
  
  pbVar2 = *(byte **)this->_padding_;
  if (pbVar2 < pbVar2 + *(int *)this->_padding_) {
    return (int)*pbVar2;
  }
  paVar1 = &this->buffer;
  _Dst = paVar1;
  if ((array<char,4096> *)*(undefined1 **)this->_padding_ == paVar1) {
    _Dst = (array<char,4096> *)((this->buffer)._Elems + 1);
    paVar1->_Elems[0] = (pbVar2 + *(int *)this->_padding_)[-1];
  }
  pFVar3 = this->stream;
  pcVar6 = (char *)((longlong)paVar1 + (0x1000 - (longlong)_Dst));
  pcVar4 = (pFVar3->data)._Mypair._Myval2._Myfirst;
  _Size = (pFVar3->data)._Mypair._Myval2._Mylast + (-pFVar3->position - (longlong)pcVar4);
  if (pcVar6 < _Size) {
    _Size = pcVar6;
  }
  if (_Size == (char *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    memcpy(_Dst,pcVar4 + pFVar3->position,(size_t)_Size);
    pFVar3->position = (ulong64)(_Size + pFVar3->position);
    *(array<char,4096> **)this->_padding_ = paVar1;
    *(array<char,4096> **)this->_padding_ = _Dst;
    *(int *)this->_padding_ = (int)_Size;
    uVar5 = (uint)**(byte **)this->_padding_;
  }
  return uVar5;
}

// xsgetn @ 14c608440

long64 __thiscall
terse::CharInputStreamBuf<tersetests::FakeStream,4096>::xsgetn
          (CharInputStreamBuf<tersetests::FakeStream,4096> *this,char *param_1,long64 param_2)

{
  void *_Src;
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong _Size;
  ulong64 uVar3;
  
  if (param_2 < 1) {
    return 0;
  }
  _Src = *(void **)this->_padding_;
  uVar2 = (ulonglong)*(int *)this->_padding_;
  uVar3 = param_2;
  if (_Src < (void *)(uVar2 + (longlong)_Src)) {
    _Size = param_2;
    if (uVar2 < (ulonglong)param_2) {
      _Size = uVar2;
    }
    memcpy(param_1,_Src,_Size);
    uVar3 = param_2 - _Size;
    param_1 = param_1 + _Size;
    *(int *)this->_padding_ = *(int *)this->_padding_ - (int)_Size;
    *(longlong *)this->_padding_ = *(longlong *)this->_padding_ + (longlong)(int)_Size;
    if ((longlong)uVar3 < 1) goto LAB_14c6084cd;
  }
  uVar1 = tersetests::FakeStream::read(this->stream,param_1,uVar3);
  uVar3 = uVar3 - uVar1;
LAB_14c6084cd:
  (**(code **)(this->_padding_ + 0x30))(this);
  return param_2 - uVar3;
}

