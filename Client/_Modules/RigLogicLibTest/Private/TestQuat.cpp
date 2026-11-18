// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 132

// test_info_'' @ 141385870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'QuatTestConstruction_Concatenation_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_Concatenation_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xf6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xf6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xf6;
  QuatTestConstruction_Concatenation_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","Concatenation",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141385a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'QuatTestConstruction_FromAxisAngle_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromAxisAngle_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xec);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xec);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xec;
  QuatTestConstruction_FromAxisAngle_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromAxisAngle",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141385c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesXYZ1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesXYZ1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 8;
  QuatTestConstruction_FromEulerAnglesXYZ1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesXYZ1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141385e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesXYZ2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesXYZ2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x44);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x44);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x44;
  QuatTestConstruction_FromEulerAnglesXYZ2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesXYZ2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesXZY1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesXZY1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x12);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x12);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x12;
  QuatTestConstruction_FromEulerAnglesXZY1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesXZY1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesXZY2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesXZY2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x4e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x4e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x4e;
  QuatTestConstruction_FromEulerAnglesXZY2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesXZY2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesYXZ1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesYXZ1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x1c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x1c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x1c;
  QuatTestConstruction_FromEulerAnglesYXZ1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesYXZ1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesYXZ2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesYXZ2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x58);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x58);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x58;
  QuatTestConstruction_FromEulerAnglesYXZ2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesYXZ2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesYZX1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesYZX1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x26);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x26);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x26;
  QuatTestConstruction_FromEulerAnglesYZX1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesYZX1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesYZX2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesYZX2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x62);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x62);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x62;
  QuatTestConstruction_FromEulerAnglesYZX2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesYZX2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesZXY1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesZXY1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x30);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x30);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x30;
  QuatTestConstruction_FromEulerAnglesZXY1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesZXY1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141386e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesZXY2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesZXY2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x6c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x6c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x6c;
  QuatTestConstruction_FromEulerAnglesZXY2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesZXY2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesZYX1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesZYX1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x3a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x3a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x3a;
  QuatTestConstruction_FromEulerAnglesZYX1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesZYX1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_FromEulerAnglesZYX2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_FromEulerAnglesZYX2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x76);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x76);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x76;
  QuatTestConstruction_FromEulerAnglesZYX2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","FromEulerAnglesZYX2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesXYZ1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesXYZ1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x80);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x80);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x80;
  QuatTestConstruction_ToEulerAnglesXYZ1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesXYZ1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesXYZ2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesXYZ2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xb6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xb6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xb6;
  QuatTestConstruction_ToEulerAnglesXYZ2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesXYZ2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesXZY1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesXZY1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x89);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x89);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x89;
  QuatTestConstruction_ToEulerAnglesXZY1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesXZY1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesXZY2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesXZY2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xbf);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xbf);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xbf;
  QuatTestConstruction_ToEulerAnglesXZY2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesXZY2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesYXZ1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesYXZ1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x92);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x92);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x92;
  QuatTestConstruction_ToEulerAnglesYXZ1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesYXZ1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141387e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesYXZ2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesYXZ2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,200);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,200);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 200;
  QuatTestConstruction_ToEulerAnglesYXZ2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesYXZ2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesYZX1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesYZX1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x9b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0x9b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0x9b;
  QuatTestConstruction_ToEulerAnglesYZX1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesYZX1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesYZX2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesYZX2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xd1);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xd1);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xd1;
  QuatTestConstruction_ToEulerAnglesYZX2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesYZX2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesZXY1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesZXY1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xa4);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xa4);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xa4;
  QuatTestConstruction_ToEulerAnglesZXY1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesZXY1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesZXY2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesZXY2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xda);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xda);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xda;
  QuatTestConstruction_ToEulerAnglesZXY2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesZXY2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesZYX1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesZYX1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xad);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xad);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xad;
  QuatTestConstruction_ToEulerAnglesZYX1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesZYX1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'QuatTestConstruction_ToEulerAnglesZYX2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VQuatTestConstruction_ToEulerAnglesZYX2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xe3);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,0xe3);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x70;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
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
  pcVar6[0x70] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000070;
  uStack_40 = _UNK_152899298;
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
  *(local_58._Ptr + 0x70) = pcVar6[0x70];
  local_38 = 0xe3;
  QuatTestConstruction_ToEulerAnglesZYX2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("QuatTestConstruction","ToEulerAnglesZYX2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c5c6d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesXYZ1_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesXYZ1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"q.x","0.2853201f","1e-4f",___xmm_3fd242af400000003fd242af60000000,
             _UNK_152899308,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0xc;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"q.y","-0.3352703f","1e-4f",___xmm_bfd5751180000000bfd57511e0000000,
               _UNK_1528993b8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0xd;
          goto LAB_14c5c6f92;
        }
      }
      iVar6 = 0xd;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"q.z","-0.2146799f","1e-4f",___xmm_bfcb7aa180000000bfcb7aa160000000,
                 _UNK_152899388,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0xe;
            goto LAB_14c5c6f92;
          }
        }
        iVar6 = 0xe;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"q.w","0.8718364f","1e-4f",___xmm_3febe615800000003febe61580000000,
                   _UNK_152899328,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5c6fdd;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0xf;
            goto LAB_14c5c6f92;
          }
        }
        iVar6 = 0xf;
      }
    }
  }
LAB_14c5c6f92:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c6fdd:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c7020

void * __thiscall
QuatTestConstruction_FromEulerAnglesXYZ1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesXYZ1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c7060

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesXYZ1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c70a0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c70e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesXZY1_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesXZY1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"q.x","0.1888237f","1e-4f",___xmm_3fc82b60000000003fc82b6040000000,
             _UNK_1528992d8,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x16;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"q.y","-0.3352703f","1e-4f",___xmm_bfd5751180000000bfd57511e0000000,
               _UNK_1528993b8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0x17;
          goto LAB_14c5c7312;
        }
      }
      iVar6 = 0x17;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"q.z","-0.2146799f","1e-4f",___xmm_bfcb7aa180000000bfcb7aa160000000,
                 _UNK_152899388,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x18;
            goto LAB_14c5c7312;
          }
        }
        iVar6 = 0x18;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"q.w","0.8976926f","1e-4f",___xmm_3fecb9e5e00000003fecb9e5c0000000,
                   _UNK_152899338,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5c735d;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x19;
            goto LAB_14c5c7312;
          }
        }
        iVar6 = 0x19;
      }
    }
  }
LAB_14c5c7312:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c735d:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c73a0

void * __thiscall
QuatTestConstruction_FromEulerAnglesXZY1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesXZY1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c73e0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesXZY1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c7420

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c7460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesYXZ1_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesYXZ1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"q.x","0.2853201f","1e-4f",___xmm_3fd242af400000003fd242af60000000,
             _UNK_152899308,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x20;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"q.y","-0.3352703f","1e-4f",___xmm_bfd5751180000000bfd57511e0000000,
               _UNK_1528993b8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0x21;
          goto LAB_14c5c7692;
        }
      }
      iVar6 = 0x21;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"q.z","-0.018283f","1e-4f",___xmm_bf92b8c760000000bf92b8ca00000000,
                 _UNK_152899358,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x22;
            goto LAB_14c5c7692;
          }
        }
        iVar6 = 0x22;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"q.w","0.8976926f","1e-4f",___xmm_3fecb9e5e00000003fecb9e5c0000000,
                   _UNK_152899338,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5c76dd;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x23;
            goto LAB_14c5c7692;
          }
        }
        iVar6 = 0x23;
      }
    }
  }
LAB_14c5c7692:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c76dd:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c7720

void * __thiscall
QuatTestConstruction_FromEulerAnglesYXZ1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesYXZ1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c7760

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesYXZ1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c77a0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c77e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesYZX1_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesYZX1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"q.x","0.2853201f","1e-4f",___xmm_3fd242af400000003fd242af60000000,
             _UNK_152899308,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x2a;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"q.y","-0.3976926f","1e-4f",___xmm_bfd973cba0000000bfd973cba0000000,
               _UNK_1528993c8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0x2b;
          goto LAB_14c5c7a12;
        }
      }
      iVar6 = 0x2b;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"q.z","-0.018283f","1e-4f",___xmm_bf92b8c760000000bf92b8ca00000000,
                 _UNK_152899358,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x2c;
            goto LAB_14c5c7a12;
          }
        }
        iVar6 = 0x2c;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"q.w","0.8718364f","1e-4f",___xmm_3febe615800000003febe61580000000,
                   _UNK_152899328,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5c7a5d;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x2d;
            goto LAB_14c5c7a12;
          }
        }
        iVar6 = 0x2d;
      }
    }
  }
LAB_14c5c7a12:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c7a5d:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c7aa0

void * __thiscall
QuatTestConstruction_FromEulerAnglesYZX1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesYZX1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c7ae0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesYZX1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c7b20

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c7b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesZXY1_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesZXY1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"q.x","0.1888237f","1e-4f",___xmm_3fc82b60000000003fc82b6040000000,
             _UNK_1528992d8,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x34;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"q.y","-0.3976926f","1e-4f",___xmm_bfd973cba0000000bfd973cba0000000,
               _UNK_1528993c8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0x35;
          goto LAB_14c5c7d92;
        }
      }
      iVar6 = 0x35;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"q.z","-0.2146799f","1e-4f",___xmm_bfcb7aa180000000bfcb7aa160000000,
                 _UNK_152899388,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x36;
            goto LAB_14c5c7d92;
          }
        }
        iVar6 = 0x36;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"q.w","0.8718364f","1e-4f",___xmm_3febe615800000003febe61580000000,
                   _UNK_152899328,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5c7ddd;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x37;
            goto LAB_14c5c7d92;
          }
        }
        iVar6 = 0x37;
      }
    }
  }
LAB_14c5c7d92:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c7ddd:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c7e20

void * __thiscall
QuatTestConstruction_FromEulerAnglesZXY1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesZXY1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c7e60

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesZXY1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c7ea0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c7ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesZYX1_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesZYX1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"q.x","0.1888237f","1e-4f",___xmm_3fc82b60000000003fc82b6040000000,
             _UNK_1528992d8,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x3e;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"q.y","-0.3976926f","1e-4f",___xmm_bfd973cba0000000bfd973cba0000000,
               _UNK_1528993c8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0x3f;
          goto LAB_14c5c8112;
        }
      }
      iVar6 = 0x3f;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"q.z","-0.018283f","1e-4f",___xmm_bf92b8c760000000bf92b8ca00000000,
                 _UNK_152899358,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x40;
            goto LAB_14c5c8112;
          }
        }
        iVar6 = 0x40;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"q.w","0.8976926f","1e-4f",___xmm_3fecb9e5e00000003fecb9e5c0000000,
                   _UNK_152899338,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5c815d;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x41;
            goto LAB_14c5c8112;
          }
        }
        iVar6 = 0x41;
      }
    }
  }
LAB_14c5c8112:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c815d:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c81a0

void * __thiscall
QuatTestConstruction_FromEulerAnglesZYX1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesZYX1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c81e0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesZYX1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c8220

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c8260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesXYZ2_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesXYZ2_Test *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","0.0669873f","1e-4f",___xmm_3fb12614600000003fb1261460000000,
             _UNK_1528992a8,__real_3f1a36e2e0000000);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0x48,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)local_res18[0]._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  dVar3 = _UNK_152899398;
  dVar2 = ___xmm_bfd0000000000000bfd0000000000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.y","-0.25f","1e-4f",___xmm_bfd0000000000000bfd0000000000000,_UNK_152899398,
             dVar1);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x49;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat(local_38,"q.z","-0.25f","1e-4f",dVar2,dVar3,dVar1);
    uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x4a;
          goto LAB_14c5c8454;
        }
      }
      iVar9 = 0x4a;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.w","0.9330127f","1e-4f",___xmm_3feddb3d800000003feddb3d60000000,
                 _UNK_152899348,dVar1);
      if (local_38[0].success_ != false) goto LAB_14c5c849f;
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x4b;
          goto LAB_14c5c8454;
        }
      }
      iVar9 = 0x4b;
    }
  }
LAB_14c5c8454:
  pAVar6 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar9,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5c849f:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c8590

void * __thiscall
QuatTestConstruction_FromEulerAnglesXYZ2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesXYZ2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c85d0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesXYZ2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c8610

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXYZ2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c8650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesXZY2_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesXZY2_Test *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","-0.0669873f","1e-4f",___xmm_bfb1261460000000bfb1261460000000,
             _UNK_152899378,__real_3f1a36e2e0000000);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0x52,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)local_res18[0]._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  dVar3 = _UNK_152899398;
  dVar2 = ___xmm_bfd0000000000000bfd0000000000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.y","-0.25f","1e-4f",___xmm_bfd0000000000000bfd0000000000000,_UNK_152899398,
             dVar1);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x53;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat(local_38,"q.z","-0.25f","1e-4f",dVar2,dVar3,dVar1);
    uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x54;
          goto LAB_14c5c8844;
        }
      }
      iVar9 = 0x54;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.w","0.9330127f","1e-4f",___xmm_3feddb3d800000003feddb3d60000000,
                 _UNK_152899348,dVar1);
      if (local_38[0].success_ != false) goto LAB_14c5c888f;
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x55;
          goto LAB_14c5c8844;
        }
      }
      iVar9 = 0x55;
    }
  }
LAB_14c5c8844:
  pAVar6 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar9,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5c888f:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c8980

void * __thiscall
QuatTestConstruction_FromEulerAnglesXZY2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesXZY2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c89c0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesXZY2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c8a00

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesXZY2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c8a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesYXZ2_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesYXZ2_Test *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","0.0669873f","1e-4f",___xmm_3fb12614600000003fb1261460000000,
             _UNK_1528992a8,__real_3f1a36e2e0000000);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0x5c,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)local_res18[0]._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  dVar3 = _UNK_152899398;
  dVar2 = ___xmm_bfd0000000000000bfd0000000000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.y","-0.25f","1e-4f",___xmm_bfd0000000000000bfd0000000000000,_UNK_152899398,
             dVar1);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x5d;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat(local_38,"q.z","-0.25f","1e-4f",dVar2,dVar3,dVar1);
    uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x5e;
          goto LAB_14c5c8c34;
        }
      }
      iVar9 = 0x5e;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.w","0.9330127f","1e-4f",___xmm_3feddb3d800000003feddb3d60000000,
                 _UNK_152899348,dVar1);
      if (local_38[0].success_ != false) goto LAB_14c5c8c7f;
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x5f;
          goto LAB_14c5c8c34;
        }
      }
      iVar9 = 0x5f;
    }
  }
LAB_14c5c8c34:
  pAVar6 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar9,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5c8c7f:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c8d70

void * __thiscall
QuatTestConstruction_FromEulerAnglesYXZ2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesYXZ2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c8db0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesYXZ2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c8df0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYXZ2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c8e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesYZX2_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesYZX2_Test *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","0.0669873f","1e-4f",___xmm_3fb12614600000003fb1261460000000,
             _UNK_1528992a8,__real_3f1a36e2e0000000);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0x66,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)local_res18[0]._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  dVar3 = _UNK_152899398;
  dVar2 = ___xmm_bfd0000000000000bfd0000000000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.y","-0.25f","1e-4f",___xmm_bfd0000000000000bfd0000000000000,_UNK_152899398,
             dVar1);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x67;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat(local_38,"q.z","-0.25f","1e-4f",dVar2,dVar3,dVar1);
    uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x68;
          goto LAB_14c5c9024;
        }
      }
      iVar9 = 0x68;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.w","0.9330127f","1e-4f",___xmm_3feddb3d800000003feddb3d60000000,
                 _UNK_152899348,dVar1);
      if (local_38[0].success_ != false) goto LAB_14c5c906f;
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x69;
          goto LAB_14c5c9024;
        }
      }
      iVar9 = 0x69;
    }
  }
LAB_14c5c9024:
  pAVar6 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar9,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5c906f:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c9160

void * __thiscall
QuatTestConstruction_FromEulerAnglesYZX2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesYZX2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c91a0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesYZX2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c91e0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesYZX2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c9220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesZXY2_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesZXY2_Test *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","-0.0669873f","1e-4f",___xmm_bfb1261460000000bfb1261460000000,
             _UNK_152899378,__real_3f1a36e2e0000000);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0x70,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)local_res18[0]._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  dVar3 = _UNK_152899398;
  dVar2 = ___xmm_bfd0000000000000bfd0000000000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.y","-0.25f","1e-4f",___xmm_bfd0000000000000bfd0000000000000,_UNK_152899398,
             dVar1);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x71;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat(local_38,"q.z","-0.25f","1e-4f",dVar2,dVar3,dVar1);
    uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x72;
          goto LAB_14c5c9414;
        }
      }
      iVar9 = 0x72;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.w","0.9330127f","1e-4f",___xmm_3feddb3d800000003feddb3d60000000,
                 _UNK_152899348,dVar1);
      if (local_38[0].success_ != false) goto LAB_14c5c945f;
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x73;
          goto LAB_14c5c9414;
        }
      }
      iVar9 = 0x73;
    }
  }
LAB_14c5c9414:
  pAVar6 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar9,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5c945f:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c9550

void * __thiscall
QuatTestConstruction_FromEulerAnglesZXY2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesZXY2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c9590

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesZXY2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c95d0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZXY2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c9610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromEulerAnglesZYX2_Test::TestBody
          (QuatTestConstruction_FromEulerAnglesZYX2_Test *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","-0.06698729f","1e-4f",___xmm_bfb1261440000000bfb1261460000000,
             _UNK_152899368,__real_3f1a36e2e0000000);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0x7a,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)local_res18[0]._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  dVar3 = _UNK_152899398;
  dVar2 = ___xmm_bfd0000000000000bfd0000000000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.y","-0.25f","1e-4f",___xmm_bfd0000000000000bfd0000000000000,_UNK_152899398,
             dVar1);
  uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x7b;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat(local_38,"q.z","-0.25f","1e-4f",dVar2,dVar3,dVar1);
    uVar4._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x7c;
          goto LAB_14c5c9804;
        }
      }
      iVar9 = 0x7c;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.w","0.9330127f","1e-4f",___xmm_3feddb3d800000003feddb3d60000000,
                 _UNK_152899348,dVar1);
      if (local_38[0].success_ != false) goto LAB_14c5c984f;
      pMVar5 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar9 = 0x7d;
          goto LAB_14c5c9804;
        }
      }
      iVar9 = 0x7d;
    }
  }
LAB_14c5c9804:
  pAVar6 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar9,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5c984f:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c9940

void * __thiscall
QuatTestConstruction_FromEulerAnglesZYX2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromEulerAnglesZYX2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c9980

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromEulerAnglesZYX2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c99c0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromEulerAnglesZYX2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c9a00

void __thiscall
QuatTestConstruction_ToEulerAnglesXYZ1_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesXYZ1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar7 = tdm::fastasin<float>(__real_bf3504f2);
  fVar8 = atan2f(__real_be3b67b5,__real_3f2ed9ec);
  fVar9 = atan2f(__real_3eb504f2,__real_3f1cc472);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_3fe0c15240000000,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x84;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-45.0_fdeg}.value","1e-4f",(double)fVar7,
               __real_bfe921fb60000000,dVar1);
    uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0x85;
          goto LAB_14c5c9c18;
        }
      }
      iVar6 = 0x85;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-15.0_fdeg}.value","1e-4f",(double)fVar8,
                 __real_bfd0c15240000000,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5c9c63;
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0x86;
          goto LAB_14c5c9c18;
        }
      }
      iVar6 = 0x86;
    }
  }
LAB_14c5c9c18:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c9c63:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5c9cb0

void * __thiscall
QuatTestConstruction_ToEulerAnglesXYZ1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesXYZ1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5c9cf0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesXYZ1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5c9d30

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5c9d70

void __thiscall
QuatTestConstruction_ToEulerAnglesXZY1_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesXZY1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar7 = tdm::fastasin<float>(__real_be8483f2);
  fVar8 = atan2f(__real_bf2ed9ea,__real_3f2ed9ec);
  fVar9 = atan2f(__real_3ef746e8,__real_3f5625ef);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_3fe0c15240000000,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x8d;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-45.0_fdeg}.value","1e-4f",(double)fVar8,
               __real_bfe921fb60000000,dVar1);
    uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0x8e;
          goto LAB_14c5c9f88;
        }
      }
      iVar6 = 0x8e;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-15.0_fdeg}.value","1e-4f",(double)fVar7,
                 __real_bfd0c15240000000,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5c9fd3;
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0x8f;
          goto LAB_14c5c9f88;
        }
      }
      iVar6 = 0x8f;
    }
  }
LAB_14c5c9f88:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5c9fd3:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ca020

void * __thiscall
QuatTestConstruction_ToEulerAnglesXZY1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesXZY1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ca060

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesXZY1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ca0a0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ca0e0

void __thiscall
QuatTestConstruction_ToEulerAnglesYXZ1_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesYXZ1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar7 = atan2f(__real_bf1cc46f,__real_3f1cc472);
  fVar8 = atan2f(__real_be6585f0,__real_3f5625ef);
  fVar9 = tdm::fastasin<float>(__real_3f000000);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_3fe0c15240000000,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x96;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-45.0_fdeg}.value","1e-4f",(double)fVar7,
               __real_bfe921fb60000000,dVar1);
    uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0x97;
          goto LAB_14c5ca2f8;
        }
      }
      iVar6 = 0x97;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-15.0_fdeg}.value","1e-4f",(double)fVar8,
                 __real_bfd0c15240000000,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5ca343;
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0x98;
          goto LAB_14c5ca2f8;
        }
      }
      iVar6 = 0x98;
    }
  }
LAB_14c5ca2f8:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5ca343:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ca390

void * __thiscall
QuatTestConstruction_ToEulerAnglesYXZ1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesYXZ1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ca3d0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesYXZ1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ca410

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ca450

void __thiscall
QuatTestConstruction_ToEulerAnglesYZX1_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesYZX1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar7 = tdm::fastasin<float>(__real_be8483eb);
  fVar8 = atan2f(__real_bf2ed9ed,__real_3f2ed9ec);
  fVar9 = atan2f(__real_3ef746ea,__real_3f5625ef);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_3fe0c15240000000,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x9f;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-45.0_fdeg}.value","1e-4f",(double)fVar8,
               __real_bfe921fb60000000,dVar1);
    uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0xa0;
          goto LAB_14c5ca668;
        }
      }
      iVar6 = 0xa0;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-15.0_fdeg}.value","1e-4f",(double)fVar7,
                 __real_bfd0c15240000000,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5ca6b3;
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0xa1;
          goto LAB_14c5ca668;
        }
      }
      iVar6 = 0xa1;
    }
  }
LAB_14c5ca668:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5ca6b3:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ca700

void * __thiscall
QuatTestConstruction_ToEulerAnglesYZX1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesYZX1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ca740

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesYZX1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ca780

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ca7c0

void __thiscall
QuatTestConstruction_ToEulerAnglesZXY1_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesZXY1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar7 = atan2f(__real_bf1cc472,__real_3f1cc471);
  fVar8 = atan2f(__real_be6585fd,__real_3f5625ef);
  fVar9 = tdm::fastasin<float>(__real_3effffff);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_3fe0c15240000000,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0xa8;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-45.0_fdeg}.value","1e-4f",(double)fVar7,
               __real_bfe921fb60000000,dVar1);
    uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0xa9;
          goto LAB_14c5ca9d8;
        }
      }
      iVar6 = 0xa9;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-15.0_fdeg}.value","1e-4f",(double)fVar8,
                 __real_bfd0c15240000000,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5caa23;
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0xaa;
          goto LAB_14c5ca9d8;
        }
      }
      iVar6 = 0xaa;
    }
  }
LAB_14c5ca9d8:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5caa23:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5caa70

void * __thiscall
QuatTestConstruction_ToEulerAnglesZXY1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesZXY1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5caab0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesZXY1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5caaf0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cab30

void __thiscall
QuatTestConstruction_ToEulerAnglesZYX1_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesZYX1_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar7 = tdm::fastasin<float>(__real_bf3504f5);
  fVar8 = atan2f(__real_be3b67a8,__real_3f2ed9ec);
  fVar9 = atan2f(__real_3eb504f0,__real_3f1cc471);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_3fe0c15240000000,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0xb1;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-45.0_fdeg}.value","1e-4f",(double)fVar7,
               __real_bfe921fb60000000,dVar1);
    uVar2._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0xb2;
          goto LAB_14c5cad48;
        }
      }
      iVar6 = 0xb2;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-15.0_fdeg}.value","1e-4f",(double)fVar8,
                 __real_bfd0c15240000000,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5cad93;
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar6 = 0xb3;
          goto LAB_14c5cad48;
        }
      }
      iVar6 = 0xb3;
    }
  }
LAB_14c5cad48:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5cad93:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cade0

void * __thiscall
QuatTestConstruction_ToEulerAnglesZYX1_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesZYX1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cae20

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX1_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesZYX1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cae60

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5caea0

void __thiscall
QuatTestConstruction_ToEulerAnglesXYZ2_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesXYZ2_Test *this)

{
  double dVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar8 = tdm::fastasin<float>(__real_bf000000);
  fVar9 = atan2f(__real_beddb3d8,__real_3f400000);
  fVar10 = atan2f(0.0,__real_3f5db3d7);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{0.0_fdeg}.value","1e-4f",(double)fVar10,0.0,
             __real_3f1a36e2e0000000);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar7 = 0xba;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    dVar2 = __real_bfe0c15240000000;
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar8,
               __real_bfe0c15240000000,dVar1);
    uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xbb;
          goto LAB_14c5cb0a6;
        }
      }
      iVar7 = 0xbb;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,
                 dVar2,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5cb0f1;
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xbc;
          goto LAB_14c5cb0a6;
        }
      }
      iVar7 = 0xbc;
    }
  }
LAB_14c5cb0a6:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar7,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5cb0f1:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cb140

void * __thiscall
QuatTestConstruction_ToEulerAnglesXYZ2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesXYZ2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cb180

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesXYZ2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cb1c0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXYZ2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cb200

void __thiscall
QuatTestConstruction_ToEulerAnglesXZY2_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesXZY2_Test *this)

{
  double dVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar8 = tdm::fastasin<float>(__real_bf000000);
  fVar9 = atan2f(__real_beddb3d8,__real_3f400000);
  fVar10 = atan2f(0.0,__real_3f5db3d7);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{0.0_fdeg}.value","1e-4f",(double)fVar10,0.0,
             __real_3f1a36e2e0000000);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar7 = 0xc3;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    dVar2 = __real_bfe0c15240000000;
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,
               __real_bfe0c15240000000,dVar1);
    uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xc4;
          goto LAB_14c5cb406;
        }
      }
      iVar7 = 0xc4;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar8,
                 dVar2,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5cb451;
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xc5;
          goto LAB_14c5cb406;
        }
      }
      iVar7 = 0xc5;
    }
  }
LAB_14c5cb406:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar7,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5cb451:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cb4a0

void * __thiscall
QuatTestConstruction_ToEulerAnglesXZY2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesXZY2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cb4e0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesXZY2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cb520

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesXZY2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cb560

void __thiscall
QuatTestConstruction_ToEulerAnglesYXZ2_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesYXZ2_Test *this)

{
  double dVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar9 = atan2f(__real_bf000000,__real_3f5db3d7);
  fVar10 = tdm::fastasin<float>(__real_80000000);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{0.0_fdeg}.value","1e-4f",(double)fVar10,0.0,
             __real_3f1a36e2e0000000);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0xcc,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
               (longlong)local_res18[0]._Mypair._Myval2);
      (**(code **)*puVar7)(puVar7,1);
    }
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  dVar2 = __real_bfe0c15240000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[1].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_bfe0c15240000000,dVar1);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar8 = 0xcd;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[2].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,dVar2,
               dVar1);
    if (local_48[0].success_ != false) goto LAB_14c5cb760;
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_48[0].message_._Mypair._Myval2;
        iVar8 = 0xce;
        goto LAB_14c5cb715;
      }
    }
    iVar8 = 0xce;
  }
LAB_14c5cb715:
  pAVar5 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar8,pcVar6);
  testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar7 = (undefined8 *)
             ((longlong)local_res18[0]._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_14c5cb760:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cb850

void * __thiscall
QuatTestConstruction_ToEulerAnglesYXZ2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesYXZ2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cb890

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesYXZ2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cb8d0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYXZ2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cb910

void __thiscall
QuatTestConstruction_ToEulerAnglesYZX2_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesYZX2_Test *this)

{
  double dVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar8 = tdm::fastasin<float>(__real_bf000000);
  fVar9 = atan2f(__real_beddb3d8,__real_3f400000);
  fVar10 = atan2f(0.0,__real_3f5db3d7);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{0.0_fdeg}.value","1e-4f",(double)fVar10,0.0,
             __real_3f1a36e2e0000000);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar7 = 0xd5;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    dVar2 = __real_bfe0c15240000000;
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,
               __real_bfe0c15240000000,dVar1);
    uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xd6;
          goto LAB_14c5cbb16;
        }
      }
      iVar7 = 0xd6;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar8,
                 dVar2,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5cbb61;
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xd7;
          goto LAB_14c5cbb16;
        }
      }
      iVar7 = 0xd7;
    }
  }
LAB_14c5cbb16:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar7,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5cbb61:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cbbb0

void * __thiscall
QuatTestConstruction_ToEulerAnglesYZX2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesYZX2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cbbf0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesYZX2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cbc30

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesYZX2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cbc70

void __thiscall
QuatTestConstruction_ToEulerAnglesZXY2_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesZXY2_Test *this)

{
  double dVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar9 = atan2f(__real_bf000000,__real_3f5db3d7);
  fVar10 = tdm::fastasin<float>(0.0);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{0.0_fdeg}.value","1e-4f",(double)fVar10,0.0,
             __real_3f1a36e2e0000000);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                        ,0xde,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
               (longlong)local_res18[0]._Mypair._Myval2);
      (**(code **)*puVar7)(puVar7,1);
    }
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  dVar2 = __real_bfe0c15240000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[1].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,
             __real_bfe0c15240000000,dVar1);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar8 = 0xdf;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_48,"result[2].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,dVar2,
               dVar1);
    if (local_48[0].success_ != false) goto LAB_14c5cbe6b;
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_48[0].message_._Mypair._Myval2;
        iVar8 = 0xe0;
        goto LAB_14c5cbe20;
      }
    }
    iVar8 = 0xe0;
  }
LAB_14c5cbe20:
  pAVar5 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                      ,iVar8,pcVar6);
  testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar7 = (undefined8 *)
             ((longlong)local_res18[0]._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4));
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_14c5cbe6b:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cbf50

void * __thiscall
QuatTestConstruction_ToEulerAnglesZXY2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesZXY2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cbf90

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesZXY2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cbfd0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZXY2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cc010

void __thiscall
QuatTestConstruction_ToEulerAnglesZYX2_Test::TestBody
          (QuatTestConstruction_ToEulerAnglesZYX2_Test *this)

{
  double dVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48 [4];
  
  fVar8 = tdm::fastasin<float>(__real_bf000000);
  fVar9 = atan2f(__real_beddb3d8,__real_3f400000);
  fVar10 = atan2f(__real_32000000,__real_3f5db3d7);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_48,"result[0].value","tdm::frad{0.0_fdeg}.value","1e-4f",(double)fVar10,0.0,
             __real_3f1a36e2e0000000);
  uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
  if (local_48[0].success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
      }
    }
    iVar7 = 0xe7;
  }
  else {
    if (local_48[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    dVar2 = __real_bfe0c15240000000;
    testing::internal::DoubleNearPredFormat
              (local_48,"result[1].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar8,
               __real_bfe0c15240000000,dVar1);
    uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2;
    if (local_48[0].success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xe8;
          goto LAB_14c5cc21b;
        }
      }
      iVar7 = 0xe8;
    }
    else {
      if (local_48[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_48[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_48,"result[2].value","tdm::frad{-30.0_fdeg}.value","1e-4f",(double)fVar9,
                 dVar2,dVar1);
      if (local_48[0].success_ != false) goto LAB_14c5cc266;
      pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_48[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_48[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_48[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_48[0].message_._Mypair._Myval2;
          iVar7 = 0xe9;
          goto LAB_14c5cc21b;
        }
      }
      iVar7 = 0xe9;
    }
  }
LAB_14c5cc21b:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar7,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5cc266:
  if (local_48[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_48[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cc2b0

void * __thiscall
QuatTestConstruction_ToEulerAnglesZYX2_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_ToEulerAnglesZYX2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cc2f0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX2_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_ToEulerAnglesZYX2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cc330

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_ToEulerAnglesZYX2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cc370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_FromAxisAngle_Test::TestBody(QuatTestConstruction_FromAxisAngle_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  float extraout_XMM0_Db;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  __libm_sse2_sincosf_();
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_38,"q.x","0.230813f","1e-4f",___xmm_3fcd8b47c00000003fcd8b48a0000000,
             _UNK_1528992f8,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
  if (local_38[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_38[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_38[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0xf0;
  }
  else {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_38,"q.y","0.168722f","1e-4f",___xmm_3fc598aec00000003fc598af60000000,
               _UNK_1528992c8,dVar1);
    uVar2._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
    if (local_38[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_38[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_38[0].message_._Mypair._Myval2;
          iVar6 = 0xf1;
          goto LAB_14c5cc5ca;
        }
      }
      iVar6 = 0xf1;
    }
    else {
      if (local_38[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_38,"q.z","0.133027f","1e-4f",___xmm_3fc10707600000003fc10707c0000000,
                 _UNK_1528992b8,dVar1);
      uVar2._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2;
      if (local_38[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_38[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_38[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_38[0].message_._Mypair._Myval2;
            iVar6 = 0xf2;
            goto LAB_14c5cc5ca;
          }
        }
        iVar6 = 0xf2;
      }
      else {
        if (local_38[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_38[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_38,"q.w","0.948979f","1e-4f",(double)extraout_XMM0_Db,
                   __real_3fee5e0940000000,dVar1);
        if (local_38[0].success_ != false) goto LAB_14c5cc615;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_38[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_38[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_38[0].message_._Mypair._Myval2;
            iVar6 = 0xf3;
            goto LAB_14c5cc5ca;
          }
        }
        iVar6 = 0xf3;
      }
    }
  }
LAB_14c5cc5ca:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5cc615:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cc660

void * __thiscall
QuatTestConstruction_FromAxisAngle_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_FromAxisAngle_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cc6a0

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromAxisAngle_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_FromAxisAngle_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_FromAxisAngle_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cc6e0

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_FromAxisAngle_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_FromAxisAngle_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_FromAxisAngle_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cc720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
QuatTestConstruction_Concatenation_Test::TestBody(QuatTestConstruction_Concatenation_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            (local_28,"qc.x","0.210893303f","1e-4f",___xmm_3fcafe8d400000003fcafe8d40000000,
             _UNK_1528992e8,__real_3f1a36e2e0000000);
  uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
  if (local_28[0].success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    iVar6 = 0xfa;
  }
  else {
    if (local_28[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              (local_28,"qc.y","-0.547044694f","1e-4f",___xmm_bfe18163e0000000bfe18163e0000000,
               _UNK_1528993d8,dVar1);
    uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
    if (local_28[0].success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
          iVar6 = 0xfb;
          goto LAB_14c5cc952;
        }
      }
      iVar6 = 0xfb;
    }
    else {
      if (local_28[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                (local_28,"qc.z","-0.315327674f","1e-4f",___xmm_bfd42e5420000000bfd42e5420000000,
                 _UNK_1528993a8,dVar1);
      uVar2._Mypair._Myval2 = local_28[0].message_._Mypair._Myval2;
      if (local_28[0].success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0xfc;
            goto LAB_14c5cc952;
          }
        }
        iVar6 = 0xfc;
      }
      else {
        if (local_28[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  (local_28,"qc.w","0.746213555f","1e-4f",___xmm_3fe7e0fb400000003fe7e0fb40000000,
                   _UNK_152899318,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5cc99d;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0xfd;
            goto LAB_14c5cc952;
          }
        }
        iVar6 = 0xfd;
      }
    }
  }
LAB_14c5cc952:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestQuat.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5cc99d:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cc9e0

void * __thiscall
QuatTestConstruction_Concatenation_Test::_scalar_deleting_destructor_
          (QuatTestConstruction_Concatenation_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cca20

Test * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_Concatenation_Test>::CreateTest
          (TestFactoryImpl<QuatTestConstruction_Concatenation_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7QuatTestConstruction_Concatenation_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cca60

void * __thiscall
testing::internal::TestFactoryImpl<QuatTestConstruction_Concatenation_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<QuatTestConstruction_Concatenation_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<QuatTestConstruction_Concatenation_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// fastasin<float> @ 14c5ccaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl tdm::fastasin<float>(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar1 = __real_3f800000 - fVar2;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = SQRT(fVar1) *
          (((((((__real_3bda90c5 - fVar2 * ___real_3aa57a2c) * fVar2 - ___real_3c8bfc66) * fVar2 +
              ___real_3cfd10f8) * fVar2 - ___real_3d4d8392) * fVar2 + ___real_3db63a9e) * fVar2 -
           ___real_3e5bbfca) * fVar2 + __real_3fc90fda);
  if (0.0 <= param_1) {
    return __real_3fc90fda - fVar1;
  }
  return fVar1 - __real_3fc90fda;
}

// quat2euler<float> @ 14c5ccb50

vec<3,tdm::ang<float,tdm::impl::radians>_> * __cdecl
tdm::impl::quat2euler<float>
          (vec<3,tdm::ang<float,tdm::impl::radians>_> *__return_storage_ptr__,quat<float> *param_1,
          rot_seq param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  switch(param_2) {
  case xyz:
    fVar5 = param_1->x;
    fVar3 = param_1->z;
    fVar1 = param_1->y;
    fVar6 = fVar3 + fVar3;
    fVar7 = fVar1 + fVar1;
    fVar3 = fVar6 * fVar3;
    fVar9 = param_1->w;
    __return_storage_ptr__->values[0].value = 0.0;
    fVar12 = (fVar5 + fVar5) * fVar9;
    fVar8 = fVar7 * fVar9 + fVar6 * fVar5;
    fVar4 = fastasin<float>(fVar8);
    fVar11 = __real_3f800000;
    bVar2 = __real_3f800000 <= (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    __return_storage_ptr__->values[1].value = fVar4;
    if (bVar2) {
      fVar9 = 0.0;
      fVar12 = fVar12 + fVar6 * fVar1;
    }
    else {
      fVar9 = atan2f(fVar6 * fVar9 - fVar7 * fVar5,fVar11 - (fVar3 + fVar7 * fVar1));
      fVar12 = fVar12 - fVar6 * fVar1;
      fVar3 = fVar7 * fVar1;
    }
    fVar5 = atan2f(fVar12,fVar11 - (fVar3 + (fVar5 + fVar5) * fVar5));
    __return_storage_ptr__->values[0].value = fVar5;
    __return_storage_ptr__->values[2].value = fVar9;
    break;
  case xzy:
    fVar5 = param_1->x;
    fVar3 = param_1->z;
    fVar1 = param_1->y;
    fVar7 = fVar3 + fVar3;
    fVar8 = fVar1 + fVar1;
    fVar9 = param_1->w;
    __return_storage_ptr__->values[0].value = 0.0;
    fVar10 = (fVar5 + fVar5) * fVar9;
    fVar12 = fVar8 * fVar5 - fVar7 * fVar9;
    fVar11 = fVar8 * fVar1;
    fVar6 = fastasin<float>((float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000));
    fVar4 = __real_3f800000;
    bVar2 = __real_3f800000 <= (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    __return_storage_ptr__->values[2].value = fVar6;
    if (bVar2) {
      fVar9 = 0.0;
      fVar10 = fVar10 - fVar7 * fVar1;
    }
    else {
      fVar9 = atan2f(fVar8 * fVar9 + fVar7 * fVar5,fVar4 - (fVar7 * fVar3 + fVar11));
      fVar10 = fVar10 + fVar7 * fVar1;
      fVar11 = fVar7 * fVar3;
    }
    fVar5 = atan2f(fVar10,fVar4 - (fVar11 + (fVar5 + fVar5) * fVar5));
    __return_storage_ptr__->values[0].value = fVar5;
    __return_storage_ptr__->values[1].value = fVar9;
    break;
  case yxz:
    fVar5 = param_1->x;
    fVar3 = param_1->z;
    fVar1 = param_1->y;
    fVar6 = fVar3 + fVar3;
    fVar8 = fVar1 + fVar1;
    fVar12 = (fVar5 + fVar5) * fVar5;
    fVar3 = fVar6 * fVar3;
    fVar9 = param_1->w;
    fVar7 = fVar6 * fVar1 - (fVar5 + fVar5) * fVar9;
    fVar4 = fastasin<float>((float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000));
    fVar11 = __real_3f800000;
    bVar2 = __real_3f800000 <= (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    __return_storage_ptr__->values[0].value = fVar4;
    if (bVar2) {
      fVar4 = 0.0;
      fVar5 = fVar8 * fVar9 - fVar6 * fVar5;
    }
    else {
      fVar4 = atan2f(fVar6 * fVar9 + fVar8 * fVar5,fVar11 - (fVar3 + fVar12));
      fVar5 = fVar8 * fVar9 + fVar6 * fVar5;
      fVar3 = fVar12;
    }
    fVar5 = atan2f(fVar5,fVar11 - (fVar8 * fVar1 + fVar3));
    __return_storage_ptr__->values[1].value = fVar5;
    __return_storage_ptr__->values[2].value = fVar4;
    break;
  case yzx:
    fVar5 = param_1->x;
    fVar3 = param_1->y;
    fVar1 = param_1->w;
    fVar9 = param_1->z;
    __return_storage_ptr__->values[0].value = 0.0;
    fVar7 = fVar9 + fVar9;
    fVar8 = fVar3 + fVar3;
    fVar11 = (fVar5 + fVar5) * fVar5;
    fVar12 = fVar1 * fVar7 + fVar8 * fVar5;
    fVar6 = fastasin<float>(fVar12);
    fVar4 = __real_3f800000;
    bVar2 = __real_3f800000 <= (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    __return_storage_ptr__->values[2].value = fVar6;
    if (bVar2) {
      fVar6 = 0.0;
      fVar12 = fVar1 * fVar8 + fVar7 * fVar5;
    }
    else {
      fVar12 = fVar1 * fVar8 - fVar7 * fVar5;
      fVar6 = atan2f(fVar1 * (fVar5 + fVar5) - fVar3 * fVar7,fVar4 - (fVar9 * fVar7 + fVar11));
      fVar11 = fVar9 * fVar7;
    }
    __return_storage_ptr__->values[0].value = fVar6;
    fVar5 = atan2f(fVar12,fVar4 - (fVar11 + fVar3 * fVar8));
    __return_storage_ptr__->values[1].value = fVar5;
    break;
  case zxy:
    fVar5 = param_1->x;
    fVar3 = param_1->y;
    fVar1 = param_1->z;
    fVar7 = fVar3 + fVar3;
    fVar8 = fVar1 + fVar1;
    fVar12 = (fVar5 + fVar5) * fVar5;
    fVar6 = fVar3 * fVar7;
    fVar11 = param_1->w;
    fVar4 = fVar3 * fVar8 + fVar11 * (fVar5 + fVar5);
    fVar3 = fastasin<float>(fVar4);
    fVar9 = __real_3f800000;
    bVar2 = __real_3f800000 <= (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    __return_storage_ptr__->values[0].value = fVar3;
    if (bVar2) {
      fVar3 = 0.0;
      fVar4 = fVar11 * fVar8 + fVar7 * fVar5;
    }
    else {
      fVar4 = fVar11 * fVar8 - fVar7 * fVar5;
      fVar3 = atan2f(fVar11 * fVar7 - fVar8 * fVar5,fVar9 - (fVar6 + fVar12));
      fVar6 = fVar12;
    }
    fVar9 = fVar9 - (fVar1 * fVar8 + fVar6);
    __return_storage_ptr__->values[1].value = fVar3;
    goto LAB_14c5cd05a;
  case zyx:
    fVar5 = param_1->x;
    fVar3 = param_1->y;
    fVar1 = param_1->w;
    fVar9 = param_1->z;
    __return_storage_ptr__->values[0].value = 0.0;
    fVar7 = fVar9 + fVar9;
    fVar6 = fVar3 + fVar3;
    fVar12 = (fVar5 + fVar5) * fVar5;
    fVar8 = fVar7 * fVar5 - fVar1 * fVar6;
    fVar4 = fastasin<float>((float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000));
    fVar11 = __real_3f800000;
    bVar2 = __real_3f800000 <= (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    __return_storage_ptr__->values[1].value = fVar4;
    if (bVar2) {
      __return_storage_ptr__->values[0].value = 0.0;
      fVar4 = fVar1 * fVar7 - fVar6 * fVar5;
      fVar9 = fVar11 - (fVar9 * fVar7 + fVar12);
    }
    else {
      fVar4 = fVar1 * fVar7 + fVar6 * fVar5;
      fVar9 = fVar11 - (fVar9 * fVar7 + fVar3 * fVar6);
      fVar5 = atan2f(fVar1 * (fVar5 + fVar5) + fVar3 * fVar7,fVar11 - (fVar3 * fVar6 + fVar12));
      __return_storage_ptr__->values[0].value = fVar5;
    }
LAB_14c5cd05a:
    fVar5 = atan2f(fVar4,fVar9);
    __return_storage_ptr__->values[2].value = fVar5;
    break;
  default:
    __return_storage_ptr__->values[0] = 0.0;
    __return_storage_ptr__->values[1] = 0.0;
    __return_storage_ptr__->values[2].value = 0.0;
  }
  return __return_storage_ptr__;
}

