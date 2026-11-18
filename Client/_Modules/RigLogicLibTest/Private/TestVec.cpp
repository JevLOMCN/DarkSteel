// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 372

// test_info_'' @ 14138a1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromArgsVec1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromArgsVec1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x2b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x2b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x2b;
  VecTestConstruction_ConstructFromArgsVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromArgsVec1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromArgsVec2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromArgsVec2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x30);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x30);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x30;
  VecTestConstruction_ConstructFromArgsVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromArgsVec2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138a5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromArgsVec3_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromArgsVec3_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x36);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x36);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x36;
  VecTestConstruction_ConstructFromArgsVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromArgsVec3",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138a7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromArgsVec4_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromArgsVec4_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x3d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x3d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x3d;
  VecTestConstruction_ConstructFromArgsVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromArgsVec4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromArgsVecArbitrary_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromArgsVecArbitrary_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x45);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x45);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x45;
  VecTestConstruction_ConstructFromArgsVecArbitrary_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromArgsVecArbitrary",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromScalarVec1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromScalarVec1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x71);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x71);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x71;
  VecTestConstruction_ConstructFromScalarVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromScalarVec1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromScalarVec2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromScalarVec2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x76);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x76);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x76;
  VecTestConstruction_ConstructFromScalarVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromScalarVec2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138b020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromScalarVec3_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromScalarVec3_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x7c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x7c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x7c;
  VecTestConstruction_ConstructFromScalarVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromScalarVec3",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromScalarVec4_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromScalarVec4_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x83);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x83);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x83;
  VecTestConstruction_ConstructFromScalarVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromScalarVec4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138b440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromScalarVecArbitrary_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromScalarVecArbitrary_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x8b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x8b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x8b;
  VecTestConstruction_ConstructFromScalarVecArbitrary_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromScalarVecArbitrary",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138b650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromVec1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromVec1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x4e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x4e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x4e;
  VecTestConstruction_ConstructFromVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromVec1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138b860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromVec2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromVec2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x53);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x53);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x53;
  VecTestConstruction_ConstructFromVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromVec2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromVec3_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromVec3_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x59);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x59);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x59;
  VecTestConstruction_ConstructFromVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromVec3",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138bc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromVec4_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromVec4_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x60);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x60);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x60;
  VecTestConstruction_ConstructFromVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromVec4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138be90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_ConstructFromVecArbitrary_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_ConstructFromVecArbitrary_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x68);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x68);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x68;
  VecTestConstruction_ConstructFromVecArbitrary_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","ConstructFromVecArbitrary",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_DefaultConstructVec1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_DefaultConstructVec1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 8;
  VecTestConstruction_DefaultConstructVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","DefaultConstructVec1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138c2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_DefaultConstructVec2_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_DefaultConstructVec2_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xd);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xd);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xd;
  VecTestConstruction_DefaultConstructVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","DefaultConstructVec2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_DefaultConstructVec3_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_DefaultConstructVec3_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x13);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x13);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x13;
  VecTestConstruction_DefaultConstructVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","DefaultConstructVec3",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138c6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_DefaultConstructVec4_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_DefaultConstructVec4_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1a;
  VecTestConstruction_DefaultConstructVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","DefaultConstructVec4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestConstruction_DefaultConstructVecArbitrary_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestConstruction_DefaultConstructVecArbitrary_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x22);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x22);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x22;
  VecTestConstruction_DefaultConstructVecArbitrary_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestConstruction","DefaultConstructVecArbitrary",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138caf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestApplyVec1_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestApplyVec1_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1be);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1be);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1be;
  VecTestMembers_TestApplyVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestApplyVec1",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138cd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestApplyVec2_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestApplyVec2_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1c8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1c8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1c8;
  VecTestMembers_TestApplyVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestApplyVec2",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138cf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestApplyVec3_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestApplyVec3_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1d2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1d2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1d2;
  VecTestMembers_TestApplyVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestApplyVec3",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestApplyVec4_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestApplyVec4_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1dc);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1dc);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1dc;
  VecTestMembers_TestApplyVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestApplyVec4",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138d330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestApplyVecArbirtary_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestMembers_TestApplyVecArbirtary_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1e6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1e6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1e6;
  VecTestMembers_TestApplyVecArbirtary_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestApplyVecArbirtary",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestLength_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestLength_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1f6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1f6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1f6;
  VecTestMembers_TestLength_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestLength",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestNegate_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestNegate_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1f0);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1f0);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1f0;
  VecTestMembers_TestNegate_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestNegate",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138d960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestNormalize_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestNormalize_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x201);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x201);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x201;
  VecTestMembers_TestNormalize_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestNormalize",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138db70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestMembers_TestSum_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestMembers_TestSum_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x213);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x213);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x213;
  VecTestMembers_TestSum_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestMembers","TestSum",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138dd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignArgsVec1_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignArgsVec1_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xbd);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xbd);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xbd;
  VecTestOperators_AssignArgsVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignArgsVec1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138df90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignArgsVec2_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignArgsVec2_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xc3);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xc3);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xc3;
  VecTestOperators_AssignArgsVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignArgsVec2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138e1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignArgsVec3_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignArgsVec3_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xca);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xca);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xca;
  VecTestOperators_AssignArgsVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignArgsVec3",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138e3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignArgsVec4_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignArgsVec4_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xd2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xd2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xd2;
  VecTestOperators_AssignArgsVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignArgsVec4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignArgsVec5_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignArgsVec5_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xdb);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xdb);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xdb;
  VecTestOperators_AssignArgsVec5_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignArgsVec5",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138e7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignVec1_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignVec1_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x94);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x94);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x94;
  VecTestOperators_AssignVec1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignVec1",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138e9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignVec2_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignVec2_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x9a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x9a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x9a;
  VecTestOperators_AssignVec2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignVec2",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138ebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignVec3_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignVec3_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xa1);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xa1);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xa1;
  VecTestOperators_AssignVec3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignVec3",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138ee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignVec4_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_AssignVec4_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xa9);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xa9);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xa9;
  VecTestOperators_AssignVec4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignVec4",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138f010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_AssignVecArbitrary_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_AssignVecArbitrary_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xb2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xb2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xb2;
  VecTestOperators_AssignVecArbitrary_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","AssignVecArbitrary",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138f220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestAddScalarVec_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestAddScalarVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x15d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x15d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x15d;
  VecTestOperators_TestAddScalarVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestAddScalarVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138f430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestAddVecScalar_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestAddVecScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x163);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x163);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x163;
  VecTestOperators_TestAddVecScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestAddVecScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138f640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestAddVecVec_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestAddVecVec_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x156);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x156);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x156;
  VecTestOperators_TestAddVecVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestAddVecVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138f850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentAddInitializer_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentAddInitializer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x110);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x110);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x110;
  VecTestOperators_TestCompoundAssignmentAddInitializer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentAddInitializer",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138fa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentAddScalar_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentAddScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x10a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x10a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x10a;
  VecTestOperators_TestCompoundAssignmentAddScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentAddScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138fc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentAddVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentAddVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x116);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x116);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x116;
  VecTestOperators_TestCompoundAssignmentAddVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentAddVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 14138fe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentDivideInitializer_Test::
test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentDivideInitializer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x149);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x149);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x149;
  VecTestOperators_TestCompoundAssignmentDivideInitializer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentDivideInitializer",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141390090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentDivideScalar_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentDivideScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x143);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x143);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x143;
  VecTestOperators_TestCompoundAssignmentDivideScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentDivideScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413902a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentDivideVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentDivideVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x14f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x14f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x14f;
  VecTestOperators_TestCompoundAssignmentDivideVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentDivideVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413904b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test::
test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x136);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x136);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x136;
  VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentMultiplyInitializer",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413906c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentMultiplyScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x130);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x130);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x130;
  VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentMultiplyScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413908d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentMultiplyVec_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentMultiplyVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x13c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x13c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x13c;
  VecTestOperators_TestCompoundAssignmentMultiplyVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentMultiplyVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141390ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test::
test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentSubtractInitializer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x123);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x123);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x123;
  VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentSubtractInitializer",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141390cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentSubtractScalar_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentSubtractScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x11d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x11d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x11d;
  VecTestOperators_TestCompoundAssignmentSubtractScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentSubtractScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141390f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestCompoundAssignmentSubtractVec_Test::test_info___
          (void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestCompoundAssignmentSubtractVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x129);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x129);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x129;
  VecTestOperators_TestCompoundAssignmentSubtractVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestCompoundAssignmentSubtractVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestDecrement_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestDecrement_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x104);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x104);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x104;
  VecTestOperators_TestDecrement_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestDecrement",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestDivideScalarVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestDivideScalarVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x196);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x196);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x196;
  VecTestOperators_TestDivideScalarVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestDivideScalarVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestDivideVecScalar_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestDivideVecScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x19c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x19c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x19c;
  VecTestOperators_TestDivideVecScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestDivideVecScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestDivideVecVec_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestDivideVecVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,399);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,399);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 399;
  VecTestOperators_TestDivideVecVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestDivideVecVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestEquality_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestEquality_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1ae);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1ae);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1ae;
  VecTestOperators_TestEquality_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestEquality",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestIncrement_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestIncrement_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xfe);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xfe);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xfe;
  VecTestOperators_TestIncrement_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestIncrement",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestMultiplyScalarVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestMultiplyScalarVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x183);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x183);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x183;
  VecTestOperators_TestMultiplyScalarVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestMultiplyScalarVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141391f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestMultiplyVecScalar_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestMultiplyVecScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x189);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x189);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x189;
  VecTestOperators_TestMultiplyVecScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestMultiplyVecScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141392190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestMultiplyVecVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestMultiplyVecVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x17c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x17c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x17c;
  VecTestOperators_TestMultiplyVecVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestMultiplyVecVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413923a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestNonEquality_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestNonEquality_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1b6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1b6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1b6;
  VecTestOperators_TestNonEquality_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestNonEquality",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413925b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestSubscriptConst_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestSubscriptConst_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xf6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xf6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xf6;
  VecTestOperators_TestSubscriptConst_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestSubscriptConst",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413927c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestSubscriptModify_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestSubscriptModify_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xed);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xed);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xed;
  VecTestOperators_TestSubscriptModify_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestSubscriptModify",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 1413929d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestSubscript_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestSubscript_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xe5);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0xe5);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0xe5;
  VecTestOperators_TestSubscript_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestSubscript",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141392be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestSubtractScalarVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestSubtractScalarVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x170);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x170);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x170;
  VecTestOperators_TestSubtractScalarVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestSubtractScalarVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141392df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'VecTestOperators_TestSubtractVecScalar_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestSubtractVecScalar_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x176);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x176);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x176;
  VecTestOperators_TestSubtractVecScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestSubtractVecScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141393000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestSubtractVecVec_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VVecTestOperators_TestSubtractVecVec_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x169);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x169);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x169;
  VecTestOperators_TestSubtractVecVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestSubtractVecVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141393210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestUnaryMinus_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestUnaryMinus_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1a8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1a8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1a8;
  VecTestOperators_TestUnaryMinus_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestUnaryMinus",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// test_info_'' @ 141393420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'VecTestOperators_TestUnaryPlus_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VVecTestOperators_TestUnaryPlus_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1a2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1a2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x6f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x6f;
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
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined4 *)(pcVar6 + 0x68) = ::s_C__Workspace_UnrealEngine_Engin._104_4_;
  *(undefined2 *)(pcVar6 + 0x6c) = ::s_C__Workspace_UnrealEngine_Engin._108_2_;
  pcVar6[0x6e] = ::s_C__Workspace_UnrealEngine_Engin[0x6e];
  pcVar6[0x6f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x70);
  local_48 = ___xmm_000000000000006f000000000000006f;
  uStack_40 = _UNK_152895288;
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
  local_38 = 0x1a2;
  VecTestOperators_TestUnaryPlus_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("VecTestOperators","TestUnaryPlus",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x70);
  return;
}

// `scalar_deleting_destructor' @ 14c5d0c80

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractScalar_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d0cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       ___xmm_0000000e0000000b0000000800000005 - ___xmm_00000004000000030000000200000001;
  local_68.values[1] = _UNK_15289b2b4 - _UNK_150631e34;
  local_68.values[2] = _UNK_15289b2b8 - _UNK_150631e38;
  local_68.values[3] = _UNK_15289b2bc - _UNK_150631e3c;
  local_78.values[0] = ___xmm_0000000a000000080000000600000004;
  local_78.values[1] = _UNK_15289b274;
  local_78.values[2] = _UNK_15289b278;
  local_78.values[3] = _UNK_15289b27c;
  if ((((local_68.values[0] == 4) && (local_68.values[1] == 6)) && (local_68.values[2] == 8)) &&
     (local_68.values[3] == _UNK_15289b27c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v","tdm::vec4<long int>(4, 6, 8, 10)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5d0e1a;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5d0e1a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x126,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d0f00

void * __thiscall
VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d0f40

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test>
::CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d0f80

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test>
::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractInitializer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentSubtractVec_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentSubtractVec_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       ___xmm_0000000e0000000b0000000800000005 - ___xmm_00000004000000030000000200000001;
  local_68.values[1] = _UNK_15289b2b4 - _UNK_150631e34;
  local_68.values[2] = _UNK_15289b2b8 - _UNK_150631e38;
  local_68.values[3] = _UNK_15289b2bc - _UNK_150631e3c;
  local_78.values[0] = ___xmm_0000000a000000080000000600000004;
  local_78.values[1] = _UNK_15289b274;
  local_78.values[2] = _UNK_15289b278;
  local_78.values[3] = _UNK_15289b27c;
  if ((((local_68.values[0] == 4) && (local_68.values[1] == 6)) && (local_68.values[2] == 8)) &&
     (local_68.values[3] == _UNK_15289b27c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v1","tdm::vec4<long int>(4, 6, 8, 10)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5d111a;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5d111a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x12d,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d1200

void * __thiscall
VecTestOperators_TestCompoundAssignmentSubtractVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentSubtractVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d1240

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractVec_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestCompoundAssignmentSubtractVec_Test__6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d1280

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractVec_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d12c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] = ___xmm_00000004000000030000000200000001 * 2;
  local_68.values[1] = _UNK_150631e34 * 2;
  local_68.values[2] = _UNK_150631e38 * 2;
  local_68.values[3] = _UNK_150631e3c * 2;
  local_78.values[0] = ___xmm_00000008000000060000000400000002;
  local_78.values[1] = _UNK_15289b254;
  local_78.values[2] = _UNK_15289b258;
  local_78.values[3] = _UNK_15289b25c;
  if ((((local_68.values[0] == 2) && (local_68.values[1] == 4)) && (local_68.values[2] == 6)) &&
     (local_68.values[3] == _UNK_15289b25c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v","tdm::vec4<long int>(2, 4, 6, 8)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5d1416;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5d1416:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x133,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d1500

void * __thiscall
VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d1540

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d1580

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d15c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 auStackY_78 [32];
  AssertionResult local_48;
  AssertHelper local_38;
  AssertionResult local_30;
  vec<4,long> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_30 = ___xmm_00000004000000030000000200000001;
  local_48 = ___xmm_00000004000000030000000200000001;
  if (__isa_available < 2) {
    uVar3 = 0;
    do {
      *(int *)(&local_30.success_ + uVar3) =
           *(int *)(&local_30.success_ + uVar3) * *(int *)(&local_48.success_ + uVar3);
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x10);
  }
  else {
    local_30 = (AssertionResult)
               pmulld((undefined1  [16])___xmm_00000004000000030000000200000001,
                      (undefined1  [16])___xmm_00000004000000030000000200000001);
  }
  local_20.values._0_8_ = ___xmm_00000010000000090000000400000001;
  local_20.values._8_8_ = _UNK_15289b2c8;
  testing::internal::EqHelper::Compare<tdm::vec<4,long>,tdm::vec<4,long>,0>
            (&local_48,"v","tdm::vec4<long int>(1, 4, 9, 16)",(vec<4,long> *)&local_30,&local_20);
  if (local_48.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_20);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulonglong *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_38,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x139,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_38);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_20.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               (local_20.values._0_8_ + (longlong)*(int *)(*(longlong *)local_20.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_48.message_._Mypair._Myval2;
  if (local_48.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d1720

void * __thiscall
VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d1760

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test>
::CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d17a0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test>
::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyInitializer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentMultiplyVec_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentMultiplyVec_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined1 auStackY_d8 [32];
  AssertionResult local_a0;
  AssertHelper local_90;
  undefined1 local_88 [16];
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78.values = ___xmm_00000004000000030000000200000001;
  local_88 = ___xmm_00000001000000020000000300000004;
  if (__isa_available < 2) {
    uVar6 = 0;
    do {
      *(int *)((longlong)local_78.values + uVar6) =
           *(int *)((longlong)local_78.values + uVar6) * *(int *)(local_88 + uVar6);
      uVar6 = uVar6 + 4;
    } while (uVar6 < 0x10);
  }
  else {
    local_78.values =
         (long  [4])
         pmulld(___xmm_00000001000000020000000300000004,___xmm_00000004000000030000000200000001);
  }
  local_68.values[0] = ___xmm_00000004000000060000000600000004;
  local_68.values[1] = _UNK_15289b234;
  local_68.values[2] = _UNK_15289b238;
  local_68.values[3] = _UNK_15289b23c;
  if ((((local_78.values[0] == 4) && (local_78.values[1] == 6)) && (local_78.values[2] == 6)) &&
     (local_78.values[3] == _UNK_15289b23c)) {
    testing::AssertionSuccess(&local_a0);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_68,&local_78);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_78,&local_68);
    testing::internal::EqFailure
              (&local_a0,"v1","tdm::vec4<long int>(4, 6, 6, 4)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar11 = uStack_40 + 1;
      pvVar7 = pvVar2;
      if (0xfff < uVar11) {
        pvVar7 = *(void **)((longlong)pvVar2 + -8);
        uVar11 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7))) goto LAB_14c5d1951;
      }
      ::operator_delete(pvVar7,uVar11);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar11 = local_20 + 1;
      uVar8 = local_38._Ptr;
      if (0xfff < uVar11) {
        uVar8 = *(undefined8 *)(local_38._Ptr + -8);
        uVar11 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar8)) {
LAB_14c5d1951:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar8,uVar11);
    }
  }
  if (local_a0.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_68);
    if (local_a0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_a0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_a0.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_90,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x140,pcVar9);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_90);
    plVar1 = (longlong *)CONCAT44(local_68.values[1],local_68.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar10 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d1a30

void * __thiscall
VecTestOperators_TestCompoundAssignmentMultiplyVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentMultiplyVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d1a70

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyVec_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestCompoundAssignmentMultiplyVec_Test__6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d1ab0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyVec_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentMultiplyVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d1af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentDivideScalar_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentDivideScalar_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       (int)((-(uint)(___xmm_00000020000000240000001800000008 < 0) &
             ___xmm_00000001000000010000000100000001) + ___xmm_00000020000000240000001800000008) >>
       1;
  local_68.values[1] = (int)((-(uint)(_UNK_15289b304 < 0) & _UNK_150631da4) + _UNK_15289b304) >> 1;
  local_68.values[2] = (int)((-(uint)(_UNK_15289b308 < 0) & _UNK_150631da8) + _UNK_15289b308) >> 1;
  local_68.values[3] = (int)((-(uint)(_UNK_15289b30c < 0) & _UNK_150631dac) + _UNK_15289b30c) >> 1;
  local_78.values[0] = ___xmm_00000010000000120000000c00000004;
  local_78.values[1] = _UNK_15289b2d4;
  local_78.values[2] = _UNK_15289b2d8;
  local_78.values[3] = _UNK_15289b2dc;
  if ((((local_68.values[0] == 4) && (local_68.values[1] == 0xc)) && (local_68.values[2] == 0x12))
     && (local_68.values[3] == _UNK_15289b2dc)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v","tdm::vec4<long int>(4, 12, 18, 16)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5d1c59;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5d1c59:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x146,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d1d40

void * __thiscall
VecTestOperators_TestCompoundAssignmentDivideScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentDivideScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d1d80

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideScalar_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentDivideScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d1dc0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideScalar_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentDivideInitializer_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentDivideInitializer_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_78 [32];
  AssertionResult local_48;
  AssertHelper local_38;
  vec<4,long> local_30;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_20;
  long alStack_18 [2];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_20 = ___xmm_000000080000000c0000000c00000008;
  alStack_18 = (long  [2])_UNK_15289b268;
  local_30.values._0_8_ = ___xmm_000000080000000c0000000c00000008;
  local_30.values._8_8_ = _UNK_15289b268;
  testing::internal::EqHelper::Compare<tdm::vec<4,long>,tdm::vec<4,long>,0>
            (&local_48,"v","tdm::vec4<long int>(8, 12, 12, 8)",(vec<4,long> *)&local_20,&local_30);
  if (local_48.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_30);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_38,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x14c,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_38);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_30.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_30.values._0_8_ + (longlong)*(int *)(*(longlong *)local_30.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_48.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48.message_._Mypair._Myval2);
    ::operator_delete((void *)local_48.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d1f10

void * __thiscall
VecTestOperators_TestCompoundAssignmentDivideInitializer_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentDivideInitializer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d1f50

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideInitializer_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideInitializer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentDivideInitializer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d1f90

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideInitializer_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideInitializer_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideInitializer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d1fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentDivideVec_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentDivideVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_88 [32];
  AssertionResult local_50;
  AssertHelper local_40;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  undefined8 uStack_30;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_28 = ___xmm_00000020000000120000000800000002;
  uStack_20 = _UNK_15289b2e8;
  local_38._Myval2 = ___xmm_00000020000000120000000800000002;
  uStack_30 = _UNK_15289b2e8;
  testing::AssertionSuccess(&local_50);
  if (local_50.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_38);
    if (local_50.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_50.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_50.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_50.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_40,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x153,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_40);
    if (local_38._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_38._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_50.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_50.message_._Mypair._Myval2);
    ::operator_delete((void *)local_50.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d20d0

void * __thiscall
VecTestOperators_TestCompoundAssignmentDivideVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentDivideVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2110

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideVec_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestCompoundAssignmentDivideVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2150

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideVec_Test> *this,uint param_1
          )

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentDivideVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d2190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestAddVecVec_Test::TestBody(VecTestOperators_TestAddVecVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_98 [32];
  AssertionResult local_68;
  AssertHelper local_58 [3];
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_28.values[0] =
       ___xmm_00000008000000070000000600000005 + ___xmm_00000004000000030000000200000001;
  local_28.values[1] = _UNK_150631ed4 + _UNK_150631e34;
  local_28.values[2] = _UNK_150631ed8 + _UNK_150631e38;
  local_28.values[3] = _UNK_150631edc + _UNK_150631e3c;
  local_40.values._0_8_ = ___xmm_0000000c0000000a0000000800000006;
  local_40.values._8_8_ = _UNK_15289b2a8;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_68,"res","tdm::vec4<int>(6, 8, 10, 12)",&local_28,&local_40);
  if (local_68.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x15a,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(local_58);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d22c0

void * __thiscall
VecTestOperators_TestAddVecVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestAddVecVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2300

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestAddVecVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestAddVecVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestAddVecVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2340

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestAddVecVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestAddVecVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestAddVecVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d2380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestAddScalarVec_Test::TestBody(VecTestOperators_TestAddScalarVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStackY_98 [32];
  byte local_68 [8];
  byte local_60 [8];
  AssertionResult local_58;
  AssertHelper local_48;
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar6 = 0;
  local_68[0] = 4;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (local_68[lVar2] != local_60[lVar2]) {
      uVar6 = -(uint)(local_68[lVar2] < local_60[lVar2]) | 1;
      break;
    }
    lVar2 = lVar3;
  } while (lVar3 != 4);
  local_28.values[0] = ___xmm_00000004000000040000000400000004;
  local_28.values[1] = _UNK_150b50dd4;
  local_28.values[2] = _UNK_150b50dd8;
  local_28.values[3] = _UNK_150b50ddc;
  if (uVar6 == 0) {
    local_28.values[0] = 0;
    local_28.values[1] = 0;
    local_28.values[2] = 0;
    local_28.values[3] = 0;
  }
  local_28.values[0] = ___xmm_00000004000000030000000200000001 + local_28.values[0];
  local_28.values[1] = _UNK_150631e34 + local_28.values[1];
  local_28.values[2] = _UNK_150631e38 + local_28.values[2];
  local_28.values[3] = _UNK_150631e3c + local_28.values[3];
  local_40.values._0_8_ = ___xmm_00000008000000070000000600000005;
  local_40.values._8_8_ = _UNK_150631ed8;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"res","tdm::vec4<int>(5, 6, 7, 8)",&local_28,&local_40);
  if (local_58.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x160,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d2510

void * __thiscall
VecTestOperators_TestAddScalarVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestAddScalarVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2550

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestAddScalarVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestAddScalarVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestAddScalarVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2590

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestAddScalarVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestAddScalarVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestAddScalarVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d25d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestAddVecScalar_Test::TestBody(VecTestOperators_TestAddVecScalar_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_88 [32];
  AssertionResult local_58;
  AssertHelper local_48;
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_28.values[0] =
       ___xmm_00000007000000070000000700000007 + ___xmm_00000004000000030000000200000001;
  local_28.values[1] = _UNK_151c6c134 + _UNK_150631e34;
  local_28.values[2] = _UNK_151c6c138 + _UNK_150631e38;
  local_28.values[3] = _UNK_151c6c13c + _UNK_150631e3c;
  local_40.values._0_8_ = ___xmm_0000000b0000000a0000000900000008;
  local_40.values._8_8_ = _UNK_150689568;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"res","tdm::vec4<int>(8, 9, 10, 11)",&local_28,&local_40);
  if (local_58.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x166,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d2700

void * __thiscall
VecTestOperators_TestAddVecScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestAddVecScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2740

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestAddVecScalar_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestAddVecScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestAddVecScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2780

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestAddVecScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestAddVecScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestAddVecScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d27c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestSubtractVecVec_Test::TestBody(VecTestOperators_TestSubtractVecVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_98 [32];
  AssertionResult local_68;
  AssertHelper local_58 [3];
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_28.values[0] =
       ___xmm_00000004000000030000000200000001 - ___xmm_00000005000000060000000700000008;
  local_28.values[1] = _UNK_150631e34 - _UNK_15289b244;
  local_28.values[2] = _UNK_150631e38 - _UNK_15289b248;
  local_28.values[3] = _UNK_150631e3c - _UNK_15289b24c;
  local_40.values._0_8_ = ___xmm_fffffffffffffffdfffffffbfffffff9;
  local_40.values._8_8_ = _UNK_15289b398;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_68,"res","tdm::vec4<int>(-7, -5, -3, -1)",&local_28,&local_40);
  if (local_68.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x16d,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(local_58);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d28f0

void * __thiscall
VecTestOperators_TestSubtractVecVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestSubtractVecVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2930

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubtractVecVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestSubtractVecVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestSubtractVecVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2970

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubtractVecVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestSubtractVecVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestSubtractVecVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d29b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestSubtractScalarVec_Test::TestBody
          (VecTestOperators_TestSubtractScalarVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStackY_98 [32];
  byte local_68 [8];
  byte local_60 [8];
  AssertionResult local_58;
  AssertHelper local_48;
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar6 = 0;
  local_68[0] = 4;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (local_68[lVar2] != local_60[lVar2]) {
      uVar6 = -(uint)(local_68[lVar2] < local_60[lVar2]) | 1;
      break;
    }
    lVar2 = lVar3;
  } while (lVar3 != 4);
  local_28.values[0] = ___xmm_00000004000000040000000400000004;
  local_28.values[1] = _UNK_150b50dd4;
  local_28.values[2] = _UNK_150b50dd8;
  local_28.values[3] = _UNK_150b50ddc;
  if (uVar6 == 0) {
    local_28.values[0] = 0;
    local_28.values[1] = 0;
    local_28.values[2] = 0;
    local_28.values[3] = 0;
  }
  local_28.values[0] = local_28.values[0] - ___xmm_00000004000000030000000200000001;
  local_28.values[1] = local_28.values[1] - _UNK_150631e34;
  local_28.values[2] = local_28.values[2] - _UNK_150631e38;
  local_28.values[3] = local_28.values[3] - _UNK_150631e3c;
  local_40.values._0_8_ = ___xmm_00000000000000010000000200000003;
  local_40.values._8_8_ = _UNK_15289b1f8;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"res","tdm::vec4<int>(3, 2, 1, 0)",&local_28,&local_40);
  if (local_58.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x173,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d2b40

void * __thiscall
VecTestOperators_TestSubtractScalarVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestSubtractScalarVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2b80

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubtractScalarVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestSubtractScalarVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestSubtractScalarVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2bc0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubtractScalarVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestSubtractScalarVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestSubtractScalarVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d2c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestSubtractVecScalar_Test::TestBody
          (VecTestOperators_TestSubtractVecScalar_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_88 [32];
  AssertionResult local_58;
  AssertHelper local_48;
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_28.values[0] =
       ___xmm_00000004000000030000000200000001 - ___xmm_00000007000000070000000700000007;
  local_28.values[1] = _UNK_150631e34 - _UNK_151c6c134;
  local_28.values[2] = _UNK_150631e38 - _UNK_151c6c138;
  local_28.values[3] = _UNK_150631e3c - _UNK_151c6c13c;
  local_40.values._0_8_ = ___xmm_fffffffdfffffffcfffffffbfffffffa;
  local_40.values._8_8_ = _UNK_15289b388;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"res","tdm::vec4<int>(-6, -5, -4, -3)",&local_28,&local_40);
  if (local_58.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x179,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d2d30

void * __thiscall
VecTestOperators_TestSubtractVecScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestSubtractVecScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2d70

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubtractVecScalar_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestSubtractVecScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestSubtractVecScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2db0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubtractVecScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestSubtractVecScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestSubtractVecScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d2df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestMultiplyVecVec_Test::TestBody(VecTestOperators_TestMultiplyVecVec_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 auStackY_98 [32];
  AssertHelper local_68;
  undefined1 local_60 [16];
  AssertionResult local_48;
  vec<4,int> local_38;
  AssertionResult local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_60 = ___xmm_00000008000000070000000600000005;
  local_48 = ___xmm_00000004000000030000000200000001;
  if (__isa_available < 2) {
    uVar3 = 0;
    do {
      *(int *)(&local_48.success_ + uVar3) =
           *(int *)(&local_48.success_ + uVar3) * *(int *)(local_60 + uVar3);
      uVar3 = uVar3 + 4;
      local_28 = local_48;
    } while (uVar3 < 0x10);
  }
  else {
    local_28 = (AssertionResult)
               pmulld(___xmm_00000008000000070000000600000005,
                      (undefined1  [16])___xmm_00000004000000030000000200000001);
  }
  local_38.values._0_8_ = ___xmm_00000020000000150000000c00000005;
  local_38.values._8_8_ = _UNK_15289b2f8;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_48,"res","tdm::vec4<int>(5, 12, 21, 32)",(vec<4,int> *)&local_28,&local_38);
  if (local_48.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_38);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulonglong *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_68,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x180,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_68);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_38.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               (local_38.values._0_8_ + (longlong)*(int *)(*(longlong *)local_38.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_48.message_._Mypair._Myval2;
  if (local_48.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d2f70

void * __thiscall
VecTestOperators_TestMultiplyVecVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestMultiplyVecVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d2fb0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestMultiplyVecVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestMultiplyVecVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestMultiplyVecVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d2ff0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestMultiplyVecVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestMultiplyVecVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestMultiplyVecVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d3030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestMultiplyScalarVec_Test::TestBody
          (VecTestOperators_TestMultiplyScalarVec_Test *this)

{
  uint uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int aiVar8 [4];
  undefined1 auStackY_a8 [32];
  byte local_78 [8];
  byte local_70 [8];
  AssertionResult local_68;
  AssertHelper local_58;
  undefined1 local_50 [16];
  vec<4,int> local_38;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar3 = 0;
  local_78[0] = 4;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_50 = ___xmm_00000004000000030000000200000001;
  uVar1 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  uVar6 = uVar3;
  do {
    uVar7 = uVar6 + 1;
    if (local_78[uVar6] != local_70[uVar6]) {
      uVar1 = -(uint)(local_78[uVar6] < local_70[uVar6]) | 1;
      break;
    }
    uVar6 = uVar7;
  } while (uVar7 != 4);
  aiVar8 = ___xmm_00000004000000040000000400000004;
  if (uVar1 == 0) {
    aiVar8 = (int  [4])ZEXT816(0);
  }
  local_38.values[0] = aiVar8[0];
  local_38.values[1] = aiVar8[1];
  local_38.values[2] = aiVar8[2];
  local_38.values[3] = aiVar8[3];
  if (__isa_available < 2) {
    do {
      *(int *)((longlong)local_38.values + uVar3) =
           *(int *)((longlong)local_38.values + uVar3) * *(int *)(local_50 + uVar3);
      uVar3 = uVar3 + 4;
      local_28.values = local_38.values;
    } while (uVar3 < 0x10);
  }
  else {
    local_28.values = (int  [4])pmulld(___xmm_00000004000000030000000200000001,aiVar8);
  }
  local_38.values._8_8_ = _UNK_152898638;
  local_38.values._0_8_ = ___xmm_000000100000000c0000000800000004;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_68,"res","tdm::vec4<int>(4, 8, 12, 16)",&local_28,&local_38);
  if (local_68.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_38);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x186,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_58);
    if ((longlong *)local_38.values._0_8_ != (longlong *)0x0) {
      puVar5 = (undefined8 *)
               (local_38.values._0_8_ + (longlong)*(int *)(*(longlong *)local_38.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d31f0

void * __thiscall
VecTestOperators_TestMultiplyScalarVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestMultiplyScalarVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d3230

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestMultiplyScalarVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestMultiplyScalarVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestMultiplyScalarVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d3270

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestMultiplyScalarVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestMultiplyScalarVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestMultiplyScalarVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d32b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestMultiplyVecScalar_Test::TestBody
          (VecTestOperators_TestMultiplyVecScalar_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined1 auStackY_88 [32];
  AssertHelper local_58 [2];
  AssertionResult local_48;
  vec<4,int> local_38;
  AssertionResult local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar3 = 0;
  local_48 = ___xmm_00000004000000030000000200000001;
  if (__isa_available < 2) {
    do {
      *(int *)(&local_48.success_ + uVar3 * 4) = *(int *)(&local_48.success_ + uVar3 * 4) * -2;
      uVar3 = uVar3 + 1;
      local_28 = local_48;
    } while (uVar3 < 4);
  }
  else {
    local_28 = (AssertionResult)
               pmulld((undefined1  [16])___xmm_00000004000000030000000200000001,
                      ___xmm_fffffffefffffffefffffffefffffffe);
  }
  local_38.values._0_8_ = ___xmm_fffffff8fffffffafffffffcfffffffe;
  local_38.values._8_8_ = _UNK_15289b368;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_48,"res","tdm::vec4<int>(-2, -4, -6, -8)",(vec<4,int> *)&local_28,&local_38);
  if (local_48.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_38);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulonglong *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x18c,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(local_58);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_38.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               (local_38.values._0_8_ + (longlong)*(int *)(*(longlong *)local_38.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_48.message_._Mypair._Myval2;
  if (local_48.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d3420

void * __thiscall
VecTestOperators_TestMultiplyVecScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestMultiplyVecScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d3460

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestMultiplyVecScalar_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestMultiplyVecScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestMultiplyVecScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d34a0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestMultiplyVecScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestMultiplyVecScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestMultiplyVecScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d34e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestDivideVecVec_Test::TestBody(VecTestOperators_TestDivideVecVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_78 [32];
  AssertionResult local_48;
  AssertHelper local_38;
  vec<4,int> local_30;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_20;
  int aiStack_18 [2];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_20 = ___xmm_00000002000000020000000300000005;
  aiStack_18 = (int  [2])_UNK_15289b218;
  local_30.values._0_8_ = ___xmm_00000002000000020000000300000005;
  local_30.values._8_8_ = _UNK_15289b218;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_48,"res","tdm::vec4<int>(5, 3, 2, 2)",(vec<4,int> *)&local_20,&local_30);
  if (local_48.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_30);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_38,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x193,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_38);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_30.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_30.values._0_8_ + (longlong)*(int *)(*(longlong *)local_30.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_48.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48.message_._Mypair._Myval2);
    ::operator_delete((void *)local_48.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d35f0

void * __thiscall
VecTestOperators_TestDivideVecVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestDivideVecVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d3630

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDivideVecVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestDivideVecVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestDivideVecVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d3670

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDivideVecVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestDivideVecVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestDivideVecVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d36b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestDivideScalarVec_Test::TestBody(VecTestOperators_TestDivideScalarVec_Test *this)

{
  longlong lVar1;
  longlong lVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStackY_98 [32];
  byte local_68 [8];
  byte local_60 [8];
  AssertionResult local_58;
  AssertHelper local_48 [2];
  vec<4,int> local_38;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar6 = 0;
  local_68[0] = 10;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    if (local_68[lVar1] != local_60[lVar1]) {
      uVar6 = -(uint)(local_68[lVar1] < local_60[lVar1]) | 1;
      break;
    }
    lVar1 = lVar2;
  } while (lVar2 != 4);
  if (uVar6 == 0) {
    local_38.values[0] = 0;
    local_38.values[1] = 0;
    local_38.values[2] = 0;
    local_38.values[3] = 0;
  }
  else {
    local_38.values._0_8_ = ___xmm_0000000a0000000a0000000a0000000a;
    local_38.values._8_8_ = _UNK_15289b288;
  }
  local_28.values[0] = local_38.values[0];
  local_28.values[1] = local_38.values[1] / 2;
  local_28.values[2] =
       local_38.values[2] / 3 + (local_38.values[2] >> 0x1f) +
       (int)(((longlong)local_38.values[2] / 3 + ((longlong)local_38.values[2] >> 0x3f) &
             0xffffffffU) >> 0x1f);
  local_28.values[3] = (int)(local_38.values[3] + (local_38.values[3] >> 0x1f & 3U)) >> 2;
  local_38.values._0_8_ = ___xmm_0000000200000003000000050000000a;
  local_38.values._8_8_ = _UNK_15289b228;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"res","tdm::vec4<int>(10, 5, 3, 2)",&local_28,&local_38);
  if (local_58.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_38);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x199,pcVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(local_48);
    if ((longlong *)local_38.values._0_8_ != (longlong *)0x0) {
      puVar5 = (undefined8 *)
               (local_38.values._0_8_ + (longlong)*(int *)(*(longlong *)local_38.values._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d3860

void * __thiscall
VecTestOperators_TestDivideScalarVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestDivideScalarVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d38a0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDivideScalarVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestDivideScalarVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestDivideScalarVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d38e0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDivideScalarVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestDivideScalarVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestDivideScalarVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d3920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestDivideVecScalar_Test::TestBody(VecTestOperators_TestDivideVecScalar_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_88 [32];
  AssertionResult local_58;
  AssertHelper local_48;
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_28.values[0] =
       (int)((-(uint)(___xmm_00000004000000030000000200000001 < 0) &
             ___xmm_00000001000000010000000100000001) + ___xmm_00000004000000030000000200000001) >>
       1;
  local_28.values[1] = (int)((-(uint)(_UNK_150631e34 < 0) & _UNK_150631da4) + _UNK_150631e34) >> 1;
  local_28.values[2] = (int)((-(uint)(_UNK_150631e38 < 0) & _UNK_150631da8) + _UNK_150631e38) >> 1;
  local_28.values[3] = (int)((-(uint)(_UNK_150631e3c < 0) & _UNK_150631dac) + _UNK_150631e3c) >> 1;
  local_40.values._0_8_ = ___xmm_00000002000000010000000100000000;
  local_40.values._8_8_ = _UNK_15289b208;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"res","tdm::vec4<int>(0, 1, 1, 2)",&local_28,&local_40);
  if (local_58.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x19f,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d3a60

void * __thiscall
VecTestOperators_TestDivideVecScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestDivideVecScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d3aa0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDivideVecScalar_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestDivideVecScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestDivideVecScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d3ae0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDivideVecScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestDivideVecScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestDivideVecScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d3b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c5d3b7d) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3bd0) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3be3) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3bf8) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3bfd) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3c18) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3c2b) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3c40) */
/* WARNING: Removing unreachable block (ram,0x00014c5d3c5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestUnaryPlus_Test::TestBody(VecTestOperators_TestUnaryPlus_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_d8 [32];
  AssertionResult local_a0;
  AssertHelper local_90;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68 = ___xmm_0000000600000005fffffffdfffffffc;
  uStack_60 = _UNK_1528985c8;
  local_78 = ___xmm_0000000600000005fffffffdfffffffc;
  uStack_70 = _UNK_1528985c8;
  testing::AssertionSuccess(&local_a0);
  if (local_a0.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_88);
    if (local_a0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_a0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_a0.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_90,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x1a5,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_90);
    if (local_88[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_88[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_88[0]._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d3d20

void * __thiscall
VecTestOperators_TestUnaryPlus_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestUnaryPlus_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d3d60

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestUnaryPlus_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestUnaryPlus_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestUnaryPlus_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d3da0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestUnaryPlus_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestUnaryPlus_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestUnaryPlus_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d3de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestUnaryMinus_Test::TestBody(VecTestOperators_TestUnaryMinus_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 auStackY_88 [32];
  AssertionResult local_58;
  AssertHelper local_48;
  vec<4,int> local_40;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_28.values[0] = -___xmm_0000000600000005fffffffdfffffffc;
  local_28.values[1] = -_UNK_1528985c4;
  local_28.values[2] = -_UNK_1528985c8;
  local_28.values[3] = -_UNK_1528985cc;
  local_40.values._0_8_ = ___xmm_fffffffafffffffb0000000300000004;
  local_40.values._8_8_ = _UNK_15289b378;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"v2","tdm::vec4<int>(4, 3, -5, -6)",&local_28,&local_40);
  if (local_58.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_40);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x1ab,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_40.values._0_8_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               (local_40.values._0_8_ + (longlong)*(int *)(*(longlong *)local_40.values._0_8_ + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d3f00

void * __thiscall
VecTestOperators_TestUnaryMinus_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestUnaryMinus_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d3f40

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestUnaryMinus_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestUnaryMinus_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestUnaryMinus_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d3f80

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestUnaryMinus_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestUnaryMinus_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestUnaryMinus_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d3fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c5d402c) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4002) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4017) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4043) */
/* WARNING: Removing unreachable block (ram,0x00014c5d408f) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4092) */
/* WARNING: Removing unreachable block (ram,0x00014c5d40d3) */
/* WARNING: Removing unreachable block (ram,0x00014c5d40e7) */
/* WARNING: Removing unreachable block (ram,0x00014c5d40fc) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4112) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4117) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4134) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4148) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4152) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4167) */

void __thiscall
VecTestOperators_TestEquality_Test::TestBody(VecTestOperators_TestEquality_Test *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c5d4190

void * __thiscall
VecTestOperators_TestEquality_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestEquality_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d41d0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestEquality_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestEquality_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestEquality_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d4210

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestEquality_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestEquality_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestEquality_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d4250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c5d42bc) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4292) */
/* WARNING: Removing unreachable block (ram,0x00014c5d42a7) */
/* WARNING: Removing unreachable block (ram,0x00014c5d42d3) */
/* WARNING: Removing unreachable block (ram,0x00014c5d431f) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4322) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4363) */
/* WARNING: Removing unreachable block (ram,0x00014c5d4377) */
/* WARNING: Removing unreachable block (ram,0x00014c5d438c) */
/* WARNING: Removing unreachable block (ram,0x00014c5d43a2) */
/* WARNING: Removing unreachable block (ram,0x00014c5d43a7) */
/* WARNING: Removing unreachable block (ram,0x00014c5d43c4) */
/* WARNING: Removing unreachable block (ram,0x00014c5d43d8) */
/* WARNING: Removing unreachable block (ram,0x00014c5d43e2) */
/* WARNING: Removing unreachable block (ram,0x00014c5d43f7) */

void __thiscall
VecTestOperators_TestNonEquality_Test::TestBody(VecTestOperators_TestNonEquality_Test *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c5d4420

void * __thiscall
VecTestOperators_TestNonEquality_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestNonEquality_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d4460

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestNonEquality_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestNonEquality_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestNonEquality_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d44a0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestNonEquality_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestNonEquality_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestNonEquality_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d44e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestApplyVec1_Test::TestBody(VecTestMembers_TestApplyVec1_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_a8 [32];
  int local_78 [2];
  AssertHelper local_70;
  Message local_68;
  AssertionResult local_60;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70.data_._0_4_ = 1;
  local_78[0] = 0;
  local_68.ss_._Mypair._Myval2._0_4_ = 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_60,"val","count + 1",(int *)&local_70,(int *)&local_68);
  uVar3._Mypair._Myval2 = local_60.message_._Mypair._Myval2;
  if (local_60.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message(&local_68);
    if (local_60.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_60.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_60.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_60.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_70,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1c2,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    plVar1 = (longlong *)
             CONCAT44(local_68.ss_._Mypair._Myval2._4_4_,local_68.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
    uVar3._Mypair._Myval2 = local_60.message_._Mypair._Myval2;
    if (local_60.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_60.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_60.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_60.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    local_78[0] = local_78[0] + 1;
  }
  local_70.data_._0_4_ = 1;
  if (local_78[0] == 1) {
    testing::AssertionSuccess(&local_60);
  }
  else {
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
               (int *)&local_70);
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,local_78
              );
    testing::internal::EqFailure
              (&local_60,"count","1",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,false);
    if (0xf < uStack_38) {
      pvVar2 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar10 = uStack_38 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5d46d4;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar10 = local_18 + 1;
      uVar7 = local_30._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_30._Ptr + -8);
        uVar10 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar7)) {
LAB_14c5d46d4:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_60.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message(&local_68);
    if (local_60.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_60.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_60.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_60.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_70,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1c5,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    plVar1 = (longlong *)
             CONCAT44(local_68.ss_._Mypair._Myval2._4_4_,local_68.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_60.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_60.message_._Mypair._Myval2);
    ::operator_delete((void *)local_60.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d47c0

void * __thiscall
VecTestMembers_TestApplyVec1_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestApplyVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d4800

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestApplyVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestApplyVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d4840

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec1_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestApplyVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestApplyVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d4880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestApplyVec2_Test::TestBody(VecTestMembers_TestApplyVec2_Test *this)

{
  void *pvVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_a8 [32];
  int local_78 [2];
  AssertHelper local_70;
  AssertionResult local_68;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70.data_._0_4_ = 1;
  local_78[0] = 0;
  local_70.data_._4_4_ = 2;
  tdm::vec<2,int>::apply<_VecTestMembers_TestApplyVec2_Test::TestBody_::__l2::<lambda_1>_>
            ((vec<2,int> *)&local_70,(<lambda_1>)local_78);
  local_70.data_._0_4_ = 2;
  if (local_78[0] == 2) {
    testing::AssertionSuccess(&local_68);
  }
  else {
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
               (int *)&local_70);
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,local_78
              );
    testing::internal::EqFailure
              (&local_68,"count","2",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,false);
    if (0xf < uStack_38) {
      pvVar1 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar7 = uStack_38 + 1;
      pvVar3 = pvVar1;
      if (0xfff < uVar7) {
        pvVar3 = *(void **)((longlong)pvVar1 + -8);
        uVar7 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c5d4996;
      }
      ::operator_delete(pvVar3,uVar7);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar7 = local_18 + 1;
      uVar4 = local_30._Ptr;
      if (0xfff < uVar7) {
        uVar4 = *(undefined8 *)(local_30._Ptr + -8);
        uVar7 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar4)) {
LAB_14c5d4996:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar7);
    }
  }
  if (local_68.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_58);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x1cf,pcVar5);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    if (local_58._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar6 = (undefined8 *)
               ((longlong)&(local_58._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_58._Myval2 + 4));
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d4a70

void * __thiscall
VecTestMembers_TestApplyVec2_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestApplyVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d4ab0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestApplyVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestApplyVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d4af0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec2_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestApplyVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestApplyVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d4b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestApplyVec3_Test::TestBody(VecTestMembers_TestApplyVec3_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_b8 [32];
  int local_88 [2];
  AssertHelper local_80;
  vec<3,int> local_78;
  AssertionResult local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78.values[0] = 1;
  local_88[0] = 0;
  local_78.values[1] = 2;
  local_78.values[2] = 3;
  tdm::vec<3,int>::apply<_VecTestMembers_TestApplyVec3_Test::TestBody_::__l2::<lambda_1>_>
            (&local_78,(<lambda_1>)local_88);
  local_80.data_._0_4_ = 3;
  if (local_88[0] == 3) {
    testing::AssertionSuccess(&local_68);
  }
  else {
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
               (int *)&local_80);
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,local_88
              );
    testing::internal::EqFailure
              (&local_68,"count","3",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar8 = uStack_40 + 1;
      pvVar4 = pvVar2;
      if (0xfff < uVar8) {
        pvVar4 = *(void **)((longlong)pvVar2 + -8);
        uVar8 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) goto LAB_14c5d4c4d;
      }
      ::operator_delete(pvVar4,uVar8);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar8 = local_20 + 1;
      uVar5 = local_38._Ptr;
      if (0xfff < uVar8) {
        uVar5 = *(undefined8 *)(local_38._Ptr + -8);
        uVar8 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar5)) {
LAB_14c5d4c4d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar8);
    }
  }
  if (local_68.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x1d9,pcVar6);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar7 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d4d30

void * __thiscall
VecTestMembers_TestApplyVec3_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestApplyVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d4d70

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestApplyVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestApplyVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d4db0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec3_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestApplyVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestApplyVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d4df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestApplyVec4_Test::TestBody(VecTestMembers_TestApplyVec4_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_a8 [32];
  int local_78 [2];
  AssertHelper local_70;
  AssertionResult local_68;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68._0_8_ = ___xmm_00000004000000030000000200000001;
  local_68.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_150631e38;
  local_78[0] = 0;
  tdm::vec<4,int>::apply<_VecTestMembers_TestApplyVec4_Test::TestBody_::__l2::<lambda_1>_>
            ((vec<4,int> *)&local_68,(<lambda_1>)local_78);
  local_70.data_._0_4_ = 4;
  if (local_78[0] == 4) {
    testing::AssertionSuccess(&local_68);
  }
  else {
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
               (int *)&local_70);
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,local_78
              );
    testing::internal::EqFailure
              (&local_68,"count","4",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,false);
    if (0xf < uStack_38) {
      pvVar1 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar8 = uStack_38 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar8) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar8 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5d4f05;
      }
      ::operator_delete(pvVar4,uVar8);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar8 = local_18 + 1;
      uVar5 = local_30._Ptr;
      if (0xfff < uVar8) {
        uVar5 = *(undefined8 *)(local_30._Ptr + -8);
        uVar8 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar5)) {
LAB_14c5d4f05:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar8);
    }
  }
  if (local_68.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_58);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x1e3,pcVar6);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    if (local_58._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)&(local_58._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_58._Myval2 + 4));
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  uVar2._Mypair._Myval2 = local_68.message_._Mypair._Myval2;
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d4fe0

void * __thiscall
VecTestMembers_TestApplyVec4_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestApplyVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d5020

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestApplyVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestApplyVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d5060

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVec4_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestApplyVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestApplyVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d50a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestMembers_TestApplyVecArbirtary_Test::TestBody(VecTestMembers_TestApplyVecArbirtary_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong64 uVar7;
  longlong lVar8;
  _Bxty *p_Var9;
  undefined1 auStackY_a8 [32];
  int local_78;
  int local_74;
  AssertionResult local_70;
  AssertHelper local_60;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar8 = 5;
  p_Var9 = &local_50;
  local_50._Ptr = ___xmm_00000004000000030000000200000001;
  local_50._8_8_ = _UNK_150631e38;
  local_40 = CONCAT44(local_40._4_4_,5);
  local_78 = 0;
  do {
    local_74 = local_78 + 1;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"val","count + 1",(int *)p_Var9->_Buf,&local_74);
    uVar1._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_58);
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = (char *)local_70.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
          pcVar6 = *(char **)local_70.message_._Mypair._Myval2;
        }
      }
      pAVar3 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_60,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                          ,0x1ea,pcVar6);
      testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
      testing::internal::AssertHelper::~AssertHelper(&local_60);
      if (local_58._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar4 = (undefined8 *)
                 ((longlong)&(local_58._Myval2)->field_0x0 +
                 (longlong)*(int *)(*(longlong *)local_58._Myval2 + 4));
        (**(code **)*puVar4)(puVar4,1);
      }
      uVar1._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_78 = local_78 + 1;
    }
    p_Var9 = (_Bxty *)((longlong)p_Var9 + 4);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_74 = 5;
  if (local_78 == 5) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
               &local_74);
    testing::PrintToString<int>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               &local_78);
    testing::internal::EqFailure
              (&local_70,"count","5",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,false);
    if (0xf < uStack_38) {
      uVar7 = uStack_38 + 1;
      uVar5 = local_50._Ptr;
      if (0xfff < uVar7) {
        uVar5 = *(undefined8 *)(local_50._Ptr + -8);
        uVar7 = uStack_38 + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar5)) goto LAB_14c5d52d4;
      }
      ::operator_delete((void *)uVar5,uVar7);
    }
    local_50._Ptr = local_50._Ptr & 0xffffffffffffff00;
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar7 = local_18 + 1;
      uVar5 = local_30._Ptr;
      if (0xfff < uVar7) {
        uVar5 = *(undefined8 *)(local_30._Ptr + -8);
        uVar7 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar5)) {
LAB_14c5d52d4:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar7);
    }
  }
  if (local_70.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_60);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1ed,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    if (local_60.data_ != (AssertHelperData *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_60.data_)->type +
               (longlong)*(int *)(*(longlong *)local_60.data_ + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d53c0

void * __thiscall
VecTestMembers_TestApplyVecArbirtary_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestApplyVecArbirtary_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d5400

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVecArbirtary_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestApplyVecArbirtary_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestApplyVecArbirtary_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d5440

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestApplyVecArbirtary_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestApplyVecArbirtary_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestApplyVecArbirtary_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d5480

void __thiscall
VecTestConstruction_DefaultConstructVec1_Test::TestBody
          (VecTestConstruction_DefaultConstructVec1_Test *this)

{
  longlong *plVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  AssertHelper local_res10;
  Message local_res18 [2];
  AssertionResult local_18;
  
  local_res18[0].ss_._Mypair._Myval2._0_4_ = 0;
  local_res10.data_._0_4_ = 0;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_18,"v[0]","0",(int *)local_res18,(int *)&local_res10);
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message(local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,10,pcVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    plVar1 = (longlong *)
             CONCAT44(local_res18[0].ss_._Mypair._Myval2._4_4_,
                      local_res18[0].ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d5570

void * __thiscall
VecTestConstruction_DefaultConstructVec1_Test::_scalar_deleting_destructor_
          (VecTestConstruction_DefaultConstructVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// TestBody @ 14c5d55b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestNegate_Test::TestBody(VecTestMembers_TestNegate_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,int> local_78;
  vec<4,int> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] = -___xmm_0000000600000005fffffffdfffffffc;
  local_68.values[1] = -_UNK_1528985c4;
  local_68.values[2] = -_UNK_1528985c8;
  local_68.values[3] = -_UNK_1528985cc;
  local_78.values[0] = ___xmm_fffffffafffffffb0000000300000004;
  local_78.values[1] = _UNK_15289b374;
  local_78.values[2] = _UNK_15289b378;
  local_78.values[3] = _UNK_15289b37c;
  if ((((local_68.values[0] == 4) && (local_68.values[1] == 3)) && (local_68.values[2] == -5)) &&
     (local_68.values[3] == _UNK_15289b37c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure(&local_90,"v1","tdm::vec4<int>(4, 3, -5, -6)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5d5705;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5d5705:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,499,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d57f0

void * __thiscall
VecTestMembers_TestNegate_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestNegate_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d5830

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_DefaultConstructVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// CreateTest @ 14c5d5870

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestNegate_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestNegate_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestNegate_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d58b0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_DefaultConstructVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c5d58f0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestNegate_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestNegate_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestNegate_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d5930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestLength_Test::TestBody(VecTestMembers_TestLength_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStackY_c8 [32];
  AssertHelper local_88;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_80 [7];
  double local_48;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uStack_40;
  ulonglong local_28;
  
  dVar1 = __real_3f1a36e2eb1c432d;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_48,"v1.length()","1.2409","0.0001",
             (double)SQRT(_UNK_152896554 * _UNK_152896554 +
                          ___xmm_3f800000be4ccccdbf0000003f000000 *
                          ___xmm_3f800000be4ccccdbf0000003f000000 + _UNK_152896558 * _UNK_152896558
                          + _UNK_15289655c * _UNK_15289655c),__real_3ff3dab9f559b3d0,
             __real_3f1a36e2eb1c432d);
  if (local_48._0_1_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_88);
    if (uStack_40._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)uStack_40._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_40._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)uStack_40._Mypair._Myval2;
      }
    }
    iVar7 = 0x1f8;
LAB_14c5d5bc3:
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_80,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,iVar7,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_80);
    local_80[0]._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_88.data_;
  }
  else {
    if (uStack_40._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 uStack_40._Mypair._Myval2);
      ::operator_delete((void *)uStack_40._Mypair._Myval2,0x20);
    }
    local_48 = ___xmm_40380000000000004022000000000000;
    uStack_40._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )_UNK_15289b348;
    testing::internal::DoubleNearPredFormat
              ((AssertionResult *)&local_48,"v2.length()","55.2268","0.0001",
               SQRT((double)_UNK_15289b348 * (double)_UNK_15289b348 +
                    ___xmm_40380000000000004022000000000000 *
                    ___xmm_40380000000000004022000000000000 +
                    ___xmm_40400000000000004042800000000000 *
                    ___xmm_40400000000000004042800000000000 + _UNK_15289b358 * _UNK_15289b358),
               __real_404b9d07c84b5dcc,dVar1);
    uVar2._Mypair._Myval2 = uStack_40._Mypair._Myval2;
    if (local_48._0_1_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_88);
      if (uStack_40._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)uStack_40._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)uStack_40._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)uStack_40._Mypair._Myval2;
          iVar7 = 0x1fb;
          goto LAB_14c5d5bc3;
        }
      }
      iVar7 = 0x1fb;
      goto LAB_14c5d5bc3;
    }
    if (uStack_40._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 uStack_40._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_48 = 0.0;
    uStack_40._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    testing::internal::DoubleNearPredFormat
              ((AssertionResult *)&local_48,"v2.length()","0.0","0.0001",0.0,0.0,dVar1);
    if (local_48._0_1_ != false) goto LAB_14c5d5c0e;
    pMVar3 = (Message *)testing::Message::Message((Message *)local_80);
    if (uStack_40._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)uStack_40._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_40._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)uStack_40._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1fe,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_88);
  }
  if (local_80[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)
              &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80[0]._Mypair._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_80[0]._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5d5c0e:
  uVar2._Mypair._Myval2 = uStack_40._Mypair._Myval2;
  if (uStack_40._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_40._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d5c60

void * __thiscall
VecTestMembers_TestLength_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestLength_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d5ca0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestLength_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestLength_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestLength_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d5ce0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestLength_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestLength_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestLength_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d5d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestMembers_TestNormalize_Test::TestBody(VecTestMembers_TestNormalize_Test *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  undefined8 uVar7;
  double dVar8;
  AssertionResult AVar9;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar10;
  Message *pMVar11;
  AssertHelper *pAVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auStackY_f8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_b8;
  AssertionResult local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  AssertionResult local_90 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  float local_50 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  auVar22._12_4_ = _UNK_15289655c * _UNK_15289655c;
  auVar22._4_4_ = auVar22._12_4_;
  auVar22._0_4_ = auVar22._12_4_;
  auVar22._8_4_ = auVar22._12_4_;
  auVar18._0_4_ =
       SQRT(_UNK_152896554 * _UNK_152896554 +
            ___xmm_3f800000be4ccccdbf0000003f000000 * ___xmm_3f800000be4ccccdbf0000003f000000 +
            _UNK_152896558 * _UNK_152896558 + auVar22._12_4_);
  auVar18._4_4_ = auVar18._0_4_;
  auVar18._8_4_ = auVar18._0_4_;
  auVar18._12_4_ = auVar18._0_4_;
  auVar22 = rcpps(auVar22,auVar18);
  fVar21 = auVar22._0_4_;
  fVar23 = auVar22._4_4_;
  fVar24 = auVar22._8_4_;
  fVar25 = auVar22._12_4_;
  local_50[0] = ___xmm_3f800000be4ccccdbf0000003f000000 *
                ((fVar21 + fVar21) - fVar21 * fVar21 * auVar18._0_4_);
  local_50[1] = _UNK_152896554 * ((fVar23 + fVar23) - fVar23 * fVar23 * auVar18._0_4_);
  local_50[2] = _UNK_152896558 * ((fVar24 + fVar24) - fVar24 * fVar24 * auVar18._0_4_);
  local_50[3] = _UNK_15289655c * ((fVar25 + fVar25) - fVar25 * fVar25 * auVar18._0_4_);
  testing::AssertionSuccess(local_90);
  if (local_90[0].success_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_b8);
    if (local_90[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_90[0].message_._Mypair._Myval2;
      if (0xf < *(ulonglong *)((longlong)local_90[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_90[0].message_._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_b0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x206,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
    if (local_b8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar14 = (undefined8 *)
                ((longlong)&(local_b8._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_b8._Myval2 + 4));
      (**(code **)*puVar14)(puVar14,1);
    }
    if (local_90[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_90[0].message_._Mypair._Myval2,0x20);
    return;
  }
  uVar6._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
  if (local_90[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
  }
  dVar8 = __real_3f1a36e2e0000000;
  uVar16 = 0;
  local_b0.message_._Mypair._Myval2 = _UNK_15289b318;
  local_b0._0_8_ = ___xmm_3f4e48e9be24f766bece48e93ece48e9;
  uVar15 = uVar16;
  do {
    testing::internal::DoubleNearPredFormat
              (local_90,"v1[ri]","tdm::vec4<float>(0.4029f, -0.4029f, -0.1611f, 0.8058f)[ri]",
               "0.0001f",(double)*(float *)((longlong)local_50 + uVar15),
               (double)*(float *)(&local_b0.success_ + uVar15),dVar8);
    if (local_90[0].success_ == false) {
      pMVar11 = (Message *)testing::Message::Message((Message *)&local_b8);
      if (local_90[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_90[0].message_._Mypair._Myval2;
        if (0xf < *(ulonglong *)((longlong)local_90[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_90[0].message_._Mypair._Myval2;
        }
      }
      pAVar12 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          ((AssertHelper *)&local_b0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                           ,0x206,pcVar13);
      testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
      if (local_b8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar14 = (undefined8 *)
                  ((longlong)&(local_b8._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_b8._Myval2 + 4));
        (**(code **)*puVar14)(puVar14,1);
      }
      if (local_90[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_90[0].message_._Mypair._Myval2);
      ::operator_delete((void *)local_90[0].message_._Mypair._Myval2,0x20);
      return;
    }
    uVar6._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
    if (local_90[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_90[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 4;
  } while (uVar15 < 0x10);
  local_90[0] = ___xmm_40380000000000004022000000000000;
  auVar19._0_8_ =
       SQRT((double)__xmm_40380000000000004022000000000000._8_8_._Mypair *
            (double)__xmm_40380000000000004022000000000000._8_8_ +
            (double)__xmm_40380000000000004022000000000000 *
            (double)__xmm_40380000000000004022000000000000 +
            (double)__xmm_40400000000000004042800000000000 *
            (double)__xmm_40400000000000004042800000000000 +
            __xmm_40400000000000004042800000000000._8_8_ *
            __xmm_40400000000000004042800000000000._8_8_);
  auVar19._8_8_ = auVar19._0_8_;
  local_70 = divpd((undefined1  [16])___xmm_40380000000000004022000000000000,auVar19);
  local_60 = divpd(___xmm_40400000000000004042800000000000,auVar19);
  testing::AssertionSuccess(local_90);
  if (local_90[0].success_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_b8);
    if (local_90[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_90[0].message_._Mypair._Myval2;
      if (0xf < *(ulonglong *)((longlong)local_90[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_90[0].message_._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_b0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x20c,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
    if (local_b8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar14 = (undefined8 *)
                ((longlong)&(local_b8._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_b8._Myval2 + 4));
      (**(code **)*puVar14)(puVar14,1);
    }
    uVar6._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
    if (local_90[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    return;
  }
  uVar10._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
  uVar15 = uVar16;
  uVar4 = _UNK_15289b338;
  uVar5 = ___xmm_3fe28a71de69ad433fe56fd21ff2e48f;
  uVar6._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289b328;
  uVar7 = ___xmm_3fdbced916872b023fc4d9e83e425aee;
  dVar8 = __real_3f1a36e2eb1c432d;
  if (local_90[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar10._Mypair._Myval2,0x20);
    uVar4 = _UNK_15289b338;
    uVar5 = ___xmm_3fe28a71de69ad433fe56fd21ff2e48f;
    uVar6._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )_UNK_15289b328;
    uVar7 = ___xmm_3fdbced916872b023fc4d9e83e425aee;
    dVar8 = __real_3f1a36e2eb1c432d;
  }
  do {
    local_b0.message_._Mypair._Myval2 = uVar6._Mypair._Myval2;
    local_b0._0_8_ = uVar7;
    local_a0 = uVar5;
    uStack_98 = uVar4;
    testing::internal::DoubleNearPredFormat
              (local_90,"v2[ri]","tdm::vec4<double>(0.1629, 0.4345, 0.6699, 0.5794)[ri]","0.0001",
               *(double *)(local_70 + uVar15),*(double *)(&local_b0.success_ + uVar15),dVar8);
    if (local_90[0].success_ == false) {
      pMVar11 = (Message *)testing::Message::Message((Message *)&local_b8);
      if (local_90[0].message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_90[0].message_._Mypair._Myval2;
        if (0xf < *(ulonglong *)((longlong)local_90[0].message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_90[0].message_._Mypair._Myval2;
        }
      }
      iVar17 = 0x20c;
      goto LAB_14c5d6163;
    }
    uVar10._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
    if (local_90[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_90[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar10._Mypair._Myval2,0x20);
    }
    AVar9 = ___xmm_00000000000000003ff0000000000000;
    uVar15 = uVar15 + 8;
  } while (uVar15 < 0x20);
  local_90[0] = ___xmm_00000000000000003ff0000000000000;
  dVar3 = SQRT((double)__xmm_00000000000000003ff0000000000000._8_8_._Mypair *
               (double)__xmm_00000000000000003ff0000000000000._8_8_ +
               (double)__xmm_00000000000000003ff0000000000000 *
               (double)__xmm_00000000000000003ff0000000000000 + 0.0 + 0.0);
  uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar3;
  auVar1._12_4_ = uVar20;
  local_70 = divpd((undefined1  [16])___xmm_00000000000000003ff0000000000000,auVar1);
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = uVar20;
  local_60 = divpd(ZEXT816(0),auVar2);
  testing::AssertionSuccess(local_90);
  if (local_90[0].success_ != false) {
    uVar6._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
    if (local_90[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_90[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    while( true ) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = AVar9;
      testing::internal::DoubleNearPredFormat
                (local_90,"v2[ri]","tdm::vec4<double>(1.0, 0.0, 0.0, 0.0)[ri]","0.0001",
                 *(double *)(local_70 + uVar16),*(double *)(&local_b0.success_ + uVar16),dVar8);
      if (local_90[0].success_ == false) break;
      uVar6._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
      if (local_90[0].message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_90[0].message_._Mypair._Myval2);
        ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
      }
      uVar16 = uVar16 + 8;
      if (0x1f < uVar16) {
        return;
      }
    }
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_b0);
    if (local_90[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_90[0].message_._Mypair._Myval2;
      if (0xf < *(ulonglong *)((longlong)local_90[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_90[0].message_._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_b8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x210,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
    local_b8._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_b0._0_8_;
    goto LAB_14c5d6195;
  }
  pMVar11 = (Message *)testing::Message::Message((Message *)&local_b8);
  if (local_90[0].message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar13 = "";
LAB_14c5d612d:
    iVar17 = 0x210;
  }
  else {
    pcVar13 = (char *)local_90[0].message_._Mypair._Myval2;
    if (*(ulong64 *)((longlong)local_90[0].message_._Mypair._Myval2 + 0x18) < 0x10)
    goto LAB_14c5d612d;
    pcVar13 = *(char **)local_90[0].message_._Mypair._Myval2;
    iVar17 = 0x210;
  }
LAB_14c5d6163:
  pAVar12 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      ((AssertHelper *)&local_b0,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar17,pcVar13);
  testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
LAB_14c5d6195:
  if (local_b8._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar14 = (undefined8 *)
              ((longlong)&(local_b8._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_b8._Myval2 + 4));
    (**(code **)*puVar14)(puVar14,1);
  }
  uVar6._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
  if (local_90[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d6400

void * __thiscall
VecTestMembers_TestNormalize_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestNormalize_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d6440

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestNormalize_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestNormalize_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestNormalize_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d6480

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestNormalize_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestNormalize_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestNormalize_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d64c0

void __thiscall
VecTestConstruction_DefaultConstructVec2_Test::TestBody
          (VecTestConstruction_DefaultConstructVec2_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  local_res18[0]._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_res10.data_._0_4_ = 0;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_18,"v[0]","0",(int *)local_res18,(int *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xf;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"v[1]","0",(int *)((longlong)&local_res18[0]._Mypair._Myval2 + 4),
               (int *)&local_res10);
    if (local_18.success_ != false) goto LAB_14c5d6606;
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
        iVar5 = 0x10;
        goto LAB_14c5d65bb;
      }
    }
    iVar5 = 0x10;
  }
LAB_14c5d65bb:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d6606:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d6640

void * __thiscall
VecTestConstruction_DefaultConstructVec2_Test::_scalar_deleting_destructor_
          (VecTestConstruction_DefaultConstructVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d6680

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_DefaultConstructVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d66c0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_DefaultConstructVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d6700

void __thiscall VecTestMembers_TestSum_Test::TestBody(VecTestMembers_TestSum_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  if (local_18.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x215,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d67c0

void * __thiscall
VecTestMembers_TestSum_Test::_scalar_deleting_destructor_
          (VecTestMembers_TestSum_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d6800

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestSum_Test>::CreateTest
          (TestFactoryImpl<VecTestMembers_TestSum_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestMembers_TestSum_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d6840

void * __thiscall
testing::internal::TestFactoryImpl<VecTestMembers_TestSum_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestMembers_TestSum_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestMembers_TestSum_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d6880

void __thiscall
VecTestConstruction_DefaultConstructVec3_Test::TestBody
          (VecTestConstruction_DefaultConstructVec3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  int local_28 [4];
  AssertionResult local_18;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_res10.data_._0_4_ = 0;
  testing::internal::EqHelper::Compare<int,int,0>(&local_18,"v[0]","0",local_28,(int *)&local_res10)
  ;
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x15;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"v[1]","0",local_28 + 1,(int *)&local_res10);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x16;
          goto LAB_14c5d6a07;
        }
      }
      iVar5 = 0x16;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_18,"v[2]","0",local_28 + 2,(int *)&local_res10);
      if (local_18.success_ != false) goto LAB_14c5d6a52;
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x17;
          goto LAB_14c5d6a07;
        }
      }
      iVar5 = 0x17;
    }
  }
LAB_14c5d6a07:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d6a52:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d6a90

void * __thiscall
VecTestConstruction_DefaultConstructVec3_Test::_scalar_deleting_destructor_
          (VecTestConstruction_DefaultConstructVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d6ad0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_DefaultConstructVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d6b10

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec3_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_DefaultConstructVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d6b50

void __thiscall
VecTestConstruction_DefaultConstructVec4_Test::TestBody
          (VecTestConstruction_DefaultConstructVec4_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18;
  int local_28 [4];
  AssertionResult local_18;
  
  local_res10.data_._0_4_ = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  testing::internal::EqHelper::Compare<int,int,0>(&local_18,"v[0]","0",local_28,(int *)&local_res10)
  ;
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x1c;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"v[1]","0",local_28 + 1,(int *)&local_res10);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x1d;
          goto LAB_14c5d6d5f;
        }
      }
      iVar5 = 0x1d;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_18,"v[2]","0",local_28 + 2,(int *)&local_res10);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0x1e;
            goto LAB_14c5d6d5f;
          }
        }
        iVar5 = 0x1e;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_18,"v[3]","0",local_28 + 3,(int *)&local_res10);
        if (local_18.success_ != false) goto LAB_14c5d6daa;
        pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0x1f;
            goto LAB_14c5d6d5f;
          }
        }
        iVar5 = 0x1f;
      }
    }
  }
LAB_14c5d6d5f:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18._Mypair._Myval2 + 4) +
             (longlong)local_res18._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d6daa:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d6de0

void * __thiscall
VecTestConstruction_DefaultConstructVec4_Test::_scalar_deleting_destructor_
          (VecTestConstruction_DefaultConstructVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d6e20

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_DefaultConstructVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d6e60

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVec4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_DefaultConstructVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d6ea0

void __thiscall
VecTestConstruction_DefaultConstructVecArbitrary_Test::TestBody
          (VecTestConstruction_DefaultConstructVecArbitrary_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18;
  AssertionResult local_38;
  int local_28 [8];
  
  local_28[4] = 0;
  local_res10.data_._0_4_ = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  testing::internal::EqHelper::Compare<int,int,0>(&local_38,"v[0]","0",local_28,(int *)&local_res10)
  ;
  uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
  if (local_38.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x24;
  }
  else {
    if (local_38.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_38,"v[1]","0",local_28 + 1,(int *)&local_res10);
    uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
    if (local_38.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
      if (local_38.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_38.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
          iVar5 = 0x25;
          goto LAB_14c5d713f;
        }
      }
      iVar5 = 0x25;
    }
    else {
      if (local_38.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_38,"v[2]","0",local_28 + 2,(int *)&local_res10);
      uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
      if (local_38.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
        if (local_38.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_38.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
            iVar5 = 0x26;
            goto LAB_14c5d713f;
          }
        }
        iVar5 = 0x26;
      }
      else {
        if (local_38.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_38.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_38,"v[3]","0",local_28 + 3,(int *)&local_res10);
        uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
        if (local_38.success_ == false) {
          pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
          if (local_38.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_38.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
              iVar5 = 0x27;
              goto LAB_14c5d713f;
            }
          }
          iVar5 = 0x27;
        }
        else {
          if (local_38.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_38.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          local_res10.data_._0_4_ = 0;
          testing::internal::EqHelper::Compare<int,int,0>
                    (&local_38,"v[4]","0",local_28 + 4,(int *)&local_res10);
          if (local_38.success_ != false) goto LAB_14c5d718a;
          pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
          if (local_38.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_38.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
              iVar5 = 0x28;
              goto LAB_14c5d713f;
            }
          }
          iVar5 = 0x28;
        }
      }
    }
  }
LAB_14c5d713f:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18._Mypair._Myval2 + 4) +
             (longlong)local_res18._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d718a:
  if (local_38.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38.message_._Mypair._Myval2);
    ::operator_delete((void *)local_38.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d71d0

void * __thiscall
VecTestConstruction_DefaultConstructVecArbitrary_Test::_scalar_deleting_destructor_
          (VecTestConstruction_DefaultConstructVecArbitrary_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d7210

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVecArbitrary_Test>::
CreateTest(TestFactoryImpl<VecTestConstruction_DefaultConstructVecArbitrary_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_DefaultConstructVecArbitrary_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d7250

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_DefaultConstructVecArbitrary_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_DefaultConstructVecArbitrary_Test> *this,uint param_1
          )

{
  *this = (TestFactoryImpl<VecTestConstruction_DefaultConstructVecArbitrary_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7290

void __thiscall
VecTestConstruction_ConstructFromArgsVec1_Test::TestBody
          (VecTestConstruction_ConstructFromArgsVec1_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  if (local_18.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x2d,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d7350

void * __thiscall
VecTestConstruction_ConstructFromArgsVec1_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromArgsVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d7390

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromArgsVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d73d0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7410

void __thiscall
VecTestConstruction_ConstructFromArgsVec2_Test::TestBody
          (VecTestConstruction_ConstructFromArgsVec2_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x32;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    if (local_18.success_ != false) goto LAB_14c5d7511;
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
        iVar5 = 0x33;
        goto LAB_14c5d74c3;
      }
    }
    iVar5 = 0x33;
  }
LAB_14c5d74c3:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d7511:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d7540

void * __thiscall
VecTestConstruction_ConstructFromArgsVec2_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromArgsVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d7580

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromArgsVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d75c0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7600

void __thiscall
VecTestConstruction_ConstructFromArgsVec3_Test::TestBody
          (VecTestConstruction_ConstructFromArgsVec3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x38;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x39;
          goto LAB_14c5d7718;
        }
      }
      iVar5 = 0x39;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      if (local_18.success_ != false) goto LAB_14c5d7763;
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x3a;
          goto LAB_14c5d7718;
        }
      }
      iVar5 = 0x3a;
    }
  }
LAB_14c5d7718:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d7763:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d77a0

void * __thiscall
VecTestConstruction_ConstructFromArgsVec3_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromArgsVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d77e0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromArgsVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d7820

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec3_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7860

void __thiscall
VecTestConstruction_ConstructFromArgsVec4_Test::TestBody
          (VecTestConstruction_ConstructFromArgsVec4_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x3f;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x40;
          goto LAB_14c5d79e5;
        }
      }
      iVar5 = 0x40;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0x41;
            goto LAB_14c5d79e5;
          }
        }
        iVar5 = 0x41;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        if (local_18.success_ != false) goto LAB_14c5d7a30;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0x42;
            goto LAB_14c5d79e5;
          }
        }
        iVar5 = 0x42;
      }
    }
  }
LAB_14c5d79e5:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d7a30:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d7a60

void * __thiscall
VecTestConstruction_ConstructFromArgsVec4_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromArgsVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d7aa0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromArgsVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d7ae0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7b20

void __thiscall
VecTestConstruction_ConstructFromArgsVecArbitrary_Test::TestBody
          (VecTestConstruction_ConstructFromArgsVecArbitrary_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x47;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x48;
          goto LAB_14c5d7d12;
        }
      }
      iVar5 = 0x48;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0x49;
            goto LAB_14c5d7d12;
          }
        }
        iVar5 = 0x49;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
        if (local_18.success_ == false) {
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_18.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_18.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
              iVar5 = 0x4a;
              goto LAB_14c5d7d12;
            }
          }
          iVar5 = 0x4a;
        }
        else {
          if (local_18.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_18.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          testing::AssertionSuccess(&local_18);
          if (local_18.success_ != false) goto LAB_14c5d7d5d;
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_18.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_18.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
              iVar5 = 0x4b;
              goto LAB_14c5d7d12;
            }
          }
          iVar5 = 0x4b;
        }
      }
    }
  }
LAB_14c5d7d12:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d7d5d:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d7d90

void * __thiscall
VecTestConstruction_ConstructFromArgsVecArbitrary_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromArgsVecArbitrary_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d7dd0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVecArbitrary_Test>::
CreateTest(TestFactoryImpl<VecTestConstruction_ConstructFromArgsVecArbitrary_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromArgsVecArbitrary_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d7e10

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromArgsVecArbitrary_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVecArbitrary_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromArgsVecArbitrary_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7e50

void __thiscall
VecTestConstruction_ConstructFromVec1_Test::TestBody
          (VecTestConstruction_ConstructFromVec1_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  if (local_18.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x50,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d7f10

void * __thiscall
VecTestConstruction_ConstructFromVec1_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d7f50

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d7f90

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d7fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
VecTestConstruction_ConstructFromVec2_Test::TestBody
          (VecTestConstruction_ConstructFromVec2_Test *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStackY_68 [32];
  AssertionResult local_38;
  Message local_28;
  AssertHelper local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_28.ss_._Mypair._Myval2._4_4_ = 2;
  local_20.data_ = (AssertHelperData *)&DAT_200000001;
  local_28.ss_._Mypair._Myval2._0_4_ = 1;
  testing::AssertionSuccess(&local_38);
  uVar2._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
  if (local_38.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message(&local_28);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_38.message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x55;
  }
  else {
    if (local_38.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_28.ss_._Mypair._Myval2._0_4_ = 2;
    if (local_20.data_._4_4_ == 2) {
      testing::AssertionSuccess(&local_38);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_38,"v[1]","2",(long *)((longlong)&local_20.data_ + 4),(int *)&local_28);
    }
    if (local_38.success_ != false) goto LAB_14c5d812a;
    pMVar3 = (Message *)testing::Message::Message(&local_28);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_38.message_._Mypair._Myval2;
        iVar6 = 0x56;
        goto LAB_14c5d80df;
      }
    }
    iVar6 = 0x56;
  }
LAB_14c5d80df:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_20,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_20);
  plVar1 = (longlong *)
           CONCAT44(local_28.ss_._Mypair._Myval2._4_4_,local_28.ss_._Mypair._Myval2._0_4_);
  if (plVar1 != (longlong *)0x0) {
    puVar5 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5d812a:
  if (local_38.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38.message_._Mypair._Myval2);
    ::operator_delete((void *)local_38.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d8170

void * __thiscall
VecTestConstruction_ConstructFromVec2_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d81b0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d81f0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d8230

void __thiscall
VecTestConstruction_ConstructFromVec3_Test::TestBody
          (VecTestConstruction_ConstructFromVec3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x5b;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x5c;
          goto LAB_14c5d8348;
        }
      }
      iVar5 = 0x5c;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      if (local_18.success_ != false) goto LAB_14c5d8393;
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x5d;
          goto LAB_14c5d8348;
        }
      }
      iVar5 = 0x5d;
    }
  }
LAB_14c5d8348:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d8393:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d83d0

void * __thiscall
VecTestConstruction_ConstructFromVec3_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d8410

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d8450

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec3_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d8490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestConstruction_ConstructFromVec4_Test::TestBody
          (VecTestConstruction_ConstructFromVec4_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStackY_78 [32];
  AssertHelper local_48;
  AssertionResult local_40;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_28._Myval2 = ___xmm_00000004000000030000000200000001;
  uStack_20 = _UNK_150631e38;
  local_48.data_._0_4_ = 1;
  testing::AssertionSuccess(&local_40);
  uVar1._Mypair._Myval2 = local_40.message_._Mypair._Myval2;
  if (local_40.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_48);
    if (local_40.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_40.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
      }
    }
    iVar7 = 0x62;
LAB_14c5d86f1:
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_28,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,iVar7,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_28);
    _Var4._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
         CONCAT44(local_48.data_._4_4_,local_48.data_._0_4_);
  }
  else {
    if (local_40.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_40.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_48.data_._0_4_ = 2;
    if (local_28._Myval2._4_4_ == 2) {
      testing::AssertionSuccess(&local_40);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_40,"v[1]","2",(long *)((longlong)&local_28._Myval2 + 4),(int *)&local_48);
    }
    uVar1._Mypair._Myval2 = local_40.message_._Mypair._Myval2;
    if (local_40.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_48);
      if (local_40.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_40.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
          iVar7 = 99;
          goto LAB_14c5d86f1;
        }
      }
      iVar7 = 99;
      goto LAB_14c5d86f1;
    }
    if (local_40.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_40.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_48.data_._0_4_ = 3;
    if ((int)uStack_20 == 3) {
      testing::AssertionSuccess(&local_40);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_40,"v[2]","3",(long *)&uStack_20,(int *)&local_48);
    }
    uVar1._Mypair._Myval2 = local_40.message_._Mypair._Myval2;
    if (local_40.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_48);
      if (local_40.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_40.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
          iVar7 = 100;
          goto LAB_14c5d86f1;
        }
      }
      iVar7 = 100;
      goto LAB_14c5d86f1;
    }
    if (local_40.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_40.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_48.data_._0_4_ = 4;
    if (uStack_20._4_4_ == 4) {
      testing::AssertionSuccess(&local_40);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_40,"v[3]","4",(long *)((longlong)&uStack_20 + 4),(int *)&local_48);
    }
    if (local_40.success_ != false) goto LAB_14c5d873c;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_28);
    if (local_40.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_40.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_48,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x65,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    _Var4._Myval2 = local_28._Myval2;
  }
  if (_Var4._Myval2 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
  {
    puVar6 = (undefined8 *)
             ((longlong)&(_Var4._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)_Var4._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5d873c:
  if (local_40.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_40.message_._Mypair._Myval2);
    ::operator_delete((void *)local_40.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d8780

void * __thiscall
VecTestConstruction_ConstructFromVec4_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d87c0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d8800

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVec4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d8840

void __thiscall
VecTestConstruction_ConstructFromVecArbitrary_Test::TestBody
          (VecTestConstruction_ConstructFromVecArbitrary_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x6a;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0x6b;
          goto LAB_14c5d8a32;
        }
      }
      iVar5 = 0x6b;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0x6c;
            goto LAB_14c5d8a32;
          }
        }
        iVar5 = 0x6c;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
        if (local_18.success_ == false) {
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_18.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_18.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
              iVar5 = 0x6d;
              goto LAB_14c5d8a32;
            }
          }
          iVar5 = 0x6d;
        }
        else {
          if (local_18.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_18.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          testing::AssertionSuccess(&local_18);
          if (local_18.success_ != false) goto LAB_14c5d8a7d;
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_18.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_18.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
              iVar5 = 0x6e;
              goto LAB_14c5d8a32;
            }
          }
          iVar5 = 0x6e;
        }
      }
    }
  }
LAB_14c5d8a32:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d8a7d:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d8ab0

void * __thiscall
VecTestConstruction_ConstructFromVecArbitrary_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromVecArbitrary_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d8af0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVecArbitrary_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromVecArbitrary_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromVecArbitrary_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d8b30

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromVecArbitrary_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromVecArbitrary_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromVecArbitrary_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d8b70

void __thiscall
VecTestConstruction_ConstructFromScalarVec1_Test::TestBody
          (VecTestConstruction_ConstructFromScalarVec1_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  if (local_18.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x73,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d8c30

void * __thiscall
VecTestConstruction_ConstructFromScalarVec1_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromScalarVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d8c70

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromScalarVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d8cb0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d8cf0

void __thiscall
VecTestConstruction_ConstructFromScalarVec2_Test::TestBody
          (VecTestConstruction_ConstructFromScalarVec2_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  byte local_28 [8];
  byte local_20 [8];
  AssertionResult local_18;
  
  uVar7 = 0;
  local_28[0] = 0x2a;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (local_28[lVar3] != local_20[lVar3]) {
      uVar7 = -(uint)(local_28[lVar3] < local_20[lVar3]) | 1;
      break;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  if (uVar7 == 0) {
    local_res18[0]._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    local_res18[0]._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x2a0000002a;
  }
  local_res10.data_._0_4_ = 0x2a;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_18,"v[0]","42",(int *)local_res18,(int *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar8 = 0x78;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x2a;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"v[1]","42",(int *)((longlong)&local_res18[0]._Mypair._Myval2 + 4),
               (int *)&local_res10);
    if (local_18.success_ != false) goto LAB_14c5d8e82;
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
        iVar8 = 0x79;
        goto LAB_14c5d8e37;
      }
    }
    iVar8 = 0x79;
  }
LAB_14c5d8e37:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar8,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5d8e82:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d8ec0

void * __thiscall
VecTestConstruction_ConstructFromScalarVec2_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromScalarVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d8f00

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromScalarVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d8f40

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d8f80

void __thiscall
VecTestConstruction_ConstructFromScalarVec3_Test::TestBody
          (VecTestConstruction_ConstructFromScalarVec3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  byte local_38 [8];
  byte local_30 [8];
  int local_28 [4];
  AssertionResult local_18;
  
  uVar7 = 0;
  local_38[0] = 0x2a;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (local_38[lVar3] != local_30[lVar3]) {
      uVar7 = -(uint)(local_38[lVar3] < local_30[lVar3]) | 1;
      break;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  if (uVar7 == 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
  }
  else {
    local_28[0] = 0x2a;
    local_28[1] = 0x2a;
    local_28[2] = 0x2a;
  }
  local_res10.data_._0_4_ = 0x2a;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_18,"v[0]","42",local_28,(int *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar8 = 0x7e;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x2a;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"v[1]","42",local_28 + 1,(int *)&local_res10);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
          iVar8 = 0x7f;
          goto LAB_14c5d915a;
        }
      }
      iVar8 = 0x7f;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0x2a;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_18,"v[2]","42",local_28 + 2,(int *)&local_res10);
      if (local_18.success_ != false) goto LAB_14c5d91a5;
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
          iVar8 = 0x80;
          goto LAB_14c5d915a;
        }
      }
      iVar8 = 0x80;
    }
  }
LAB_14c5d915a:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar8,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5d91a5:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d91e0

void * __thiscall
VecTestConstruction_ConstructFromScalarVec3_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromScalarVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d9220

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromScalarVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d9260

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec3_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d92a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestConstruction_ConstructFromScalarVec4_Test::TestBody
          (VecTestConstruction_ConstructFromScalarVec4_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  byte local_38 [8];
  byte local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  AssertionResult local_18;
  
  uVar7 = 0;
  local_38[0] = 0x2a;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (local_38[lVar3] != local_30[lVar3]) {
      uVar7 = -(uint)(local_38[lVar3] < local_30[lVar3]) | 1;
      break;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  if (uVar7 == 0) {
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    local_28 = ___xmm_0000002a0000002a0000002a0000002a;
    uStack_20 = _UNK_152898668;
  }
  local_res10.data_._0_4_ = 0x2a;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_18,"v[0]","42",(int *)&local_28,(int *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar8 = 0x85;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x2a;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"v[1]","42",(int *)((longlong)&local_28 + 4),(int *)&local_res10);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
          iVar8 = 0x86;
          goto LAB_14c5d94ff;
        }
      }
      iVar8 = 0x86;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0x2a;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_18,"v[2]","42",(int *)&uStack_20,(int *)&local_res10);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
            iVar8 = 0x87;
            goto LAB_14c5d94ff;
          }
        }
        iVar8 = 0x87;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0x2a;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_18,"v[3]","42",(int *)((longlong)&uStack_20 + 4),(int *)&local_res10);
        if (local_18.success_ != false) goto LAB_14c5d954a;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_18.message_._Mypair._Myval2;
            iVar8 = 0x88;
            goto LAB_14c5d94ff;
          }
        }
        iVar8 = 0x88;
      }
    }
  }
LAB_14c5d94ff:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar8,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5d954a:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d9580

void * __thiscall
VecTestConstruction_ConstructFromScalarVec4_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromScalarVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d95c0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestConstruction_ConstructFromScalarVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d9600

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d9640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestConstruction_ConstructFromScalarVecArbitrary_Test::TestBody
          (VecTestConstruction_ConstructFromScalarVecArbitrary_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  byte local_48 [8];
  byte local_40 [8];
  AssertionResult local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18 [4];
  
  uVar7 = 0;
  local_48[0] = 0x2a;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    if (local_48[lVar3] != local_40[lVar3]) {
      uVar7 = -(uint)(local_48[lVar3] < local_40[lVar3]) | 1;
      break;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  if (uVar7 == 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18[0] = 0;
  }
  else {
    local_28 = ___xmm_0000002a0000002a0000002a0000002a;
    uStack_20 = _UNK_152898668;
    local_18[0] = 0x2a;
  }
  local_res10.data_._0_4_ = 0x2a;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_38,"v[0]","42",(int *)&local_28,(int *)&local_res10);
  uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
  if (local_38.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_38.message_._Mypair._Myval2;
      }
    }
    iVar8 = 0x8d;
  }
  else {
    if (local_38.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x2a;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_38,"v[1]","42",(int *)((longlong)&local_28 + 4),(int *)&local_res10);
    uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
    if (local_38.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_38.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_38.message_._Mypair._Myval2;
          iVar8 = 0x8e;
          goto LAB_14c5d993d;
        }
      }
      iVar8 = 0x8e;
    }
    else {
      if (local_38.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0x2a;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_38,"v[2]","42",(int *)&uStack_20,(int *)&local_res10);
      uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
      if (local_38.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_38.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_38.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_38.message_._Mypair._Myval2;
            iVar8 = 0x8f;
            goto LAB_14c5d993d;
          }
        }
        iVar8 = 0x8f;
      }
      else {
        if (local_38.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_38.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0x2a;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_38,"v[3]","42",(int *)((longlong)&uStack_20 + 4),(int *)&local_res10);
        uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
        if (local_38.success_ == false) {
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_38.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)local_38.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
              pcVar5 = *(char **)local_38.message_._Mypair._Myval2;
              iVar8 = 0x90;
              goto LAB_14c5d993d;
            }
          }
          iVar8 = 0x90;
        }
        else {
          if (local_38.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_38.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          local_res10.data_._0_4_ = 0x2a;
          testing::internal::EqHelper::Compare<int,int,0>
                    (&local_38,"v[4]","42",local_18,(int *)&local_res10);
          if (local_38.success_ != false) goto LAB_14c5d9988;
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_38.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)local_38.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
              pcVar5 = *(char **)local_38.message_._Mypair._Myval2;
              iVar8 = 0x91;
              goto LAB_14c5d993d;
            }
          }
          iVar8 = 0x91;
        }
      }
    }
  }
LAB_14c5d993d:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar8,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5d9988:
  if (local_38.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38.message_._Mypair._Myval2);
    ::operator_delete((void *)local_38.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d99c0

void * __thiscall
VecTestConstruction_ConstructFromScalarVecArbitrary_Test::_scalar_deleting_destructor_
          (VecTestConstruction_ConstructFromScalarVecArbitrary_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d9a00

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVecArbitrary_Test>::
CreateTest(TestFactoryImpl<VecTestConstruction_ConstructFromScalarVecArbitrary_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestConstruction_ConstructFromScalarVecArbitrary_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d9a40

void * __thiscall
testing::internal::TestFactoryImpl<VecTestConstruction_ConstructFromScalarVecArbitrary_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVecArbitrary_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestConstruction_ConstructFromScalarVecArbitrary_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d9a80

void __thiscall VecTestOperators_AssignVec1_Test::TestBody(VecTestOperators_AssignVec1_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  if (local_18.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x97,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d9b40

void * __thiscall
VecTestOperators_AssignVec1_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d9b80

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d9bc0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec1_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d9c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall VecTestOperators_AssignVec2_Test::TestBody(VecTestOperators_AssignVec2_Test *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStackY_68 [32];
  AssertionResult local_38;
  Message local_28;
  AssertHelper local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  local_28.ss_._Mypair._Myval2._4_4_ = 2;
  local_20.data_ = (AssertHelperData *)&DAT_200000001;
  local_28.ss_._Mypair._Myval2._0_4_ = 1;
  testing::AssertionSuccess(&local_38);
  uVar2._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
  if (local_38.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message(&local_28);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_38.message_._Mypair._Myval2;
      }
    }
    iVar6 = 0x9d;
  }
  else {
    if (local_38.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_28.ss_._Mypair._Myval2._0_4_ = 2;
    if (local_20.data_._4_4_ == 2) {
      testing::AssertionSuccess(&local_38);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_38,"v[1]","2",(long *)((longlong)&local_20.data_ + 4),(int *)&local_28);
    }
    if (local_38.success_ != false) goto LAB_14c5d9d5a;
    pMVar3 = (Message *)testing::Message::Message(&local_28);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_38.message_._Mypair._Myval2;
        iVar6 = 0x9e;
        goto LAB_14c5d9d0f;
      }
    }
    iVar6 = 0x9e;
  }
LAB_14c5d9d0f:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_20,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_20);
  plVar1 = (longlong *)
           CONCAT44(local_28.ss_._Mypair._Myval2._4_4_,local_28.ss_._Mypair._Myval2._0_4_);
  if (plVar1 != (longlong *)0x0) {
    puVar5 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c5d9d5a:
  if (local_38.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38.message_._Mypair._Myval2);
    ::operator_delete((void *)local_38.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d9da0

void * __thiscall
VecTestOperators_AssignVec2_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d9de0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d9e20

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec2_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d9e60

void __thiscall VecTestOperators_AssignVec3_Test::TestBody(VecTestOperators_AssignVec3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xa4;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xa5;
          goto LAB_14c5d9f78;
        }
      }
      iVar5 = 0xa5;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      if (local_18.success_ != false) goto LAB_14c5d9fc3;
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xa6;
          goto LAB_14c5d9f78;
        }
      }
      iVar5 = 0xa6;
    }
  }
LAB_14c5d9f78:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5d9fc3:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5da000

void * __thiscall
VecTestOperators_AssignVec3_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5da040

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5da080

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec3_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5da0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall VecTestOperators_AssignVec4_Test::TestBody(VecTestOperators_AssignVec4_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStackY_78 [32];
  AssertHelper local_48;
  AssertionResult local_40;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_28._Myval2 = ___xmm_00000004000000030000000200000001;
  uStack_20 = _UNK_150631e38;
  local_48.data_._0_4_ = 1;
  testing::AssertionSuccess(&local_40);
  uVar1._Mypair._Myval2 = local_40.message_._Mypair._Myval2;
  if (local_40.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_48);
    if (local_40.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_40.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
      }
    }
    iVar7 = 0xac;
LAB_14c5da321:
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_28,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,iVar7,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_28);
    _Var4._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
         CONCAT44(local_48.data_._4_4_,local_48.data_._0_4_);
  }
  else {
    if (local_40.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_40.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_48.data_._0_4_ = 2;
    if (local_28._Myval2._4_4_ == 2) {
      testing::AssertionSuccess(&local_40);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_40,"v[1]","2",(long *)((longlong)&local_28._Myval2 + 4),(int *)&local_48);
    }
    uVar1._Mypair._Myval2 = local_40.message_._Mypair._Myval2;
    if (local_40.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_48);
      if (local_40.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_40.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
          iVar7 = 0xad;
          goto LAB_14c5da321;
        }
      }
      iVar7 = 0xad;
      goto LAB_14c5da321;
    }
    if (local_40.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_40.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_48.data_._0_4_ = 3;
    if ((int)uStack_20 == 3) {
      testing::AssertionSuccess(&local_40);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_40,"v[2]","3",(long *)&uStack_20,(int *)&local_48);
    }
    uVar1._Mypair._Myval2 = local_40.message_._Mypair._Myval2;
    if (local_40.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_48);
      if (local_40.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_40.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
          iVar7 = 0xae;
          goto LAB_14c5da321;
        }
      }
      iVar7 = 0xae;
      goto LAB_14c5da321;
    }
    if (local_40.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_40.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_48.data_._0_4_ = 4;
    if (uStack_20._4_4_ == 4) {
      testing::AssertionSuccess(&local_40);
    }
    else {
      testing::internal::CmpHelperEQFailure<long,int>
                (&local_40,"v[3]","4",(long *)((longlong)&uStack_20 + 4),(int *)&local_48);
    }
    if (local_40.success_ != false) goto LAB_14c5da36c;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_28);
    if (local_40.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_40.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_40.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_40.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_48,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0xaf,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    _Var4._Myval2 = local_28._Myval2;
  }
  if (_Var4._Myval2 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
  {
    puVar6 = (undefined8 *)
             ((longlong)&(_Var4._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)_Var4._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5da36c:
  if (local_40.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_40.message_._Mypair._Myval2);
    ::operator_delete((void *)local_40.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5da3b0

void * __thiscall
VecTestOperators_AssignVec4_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5da3f0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5da430

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVec4_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5da470

void __thiscall
VecTestOperators_AssignVecArbitrary_Test::TestBody(VecTestOperators_AssignVecArbitrary_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xb6;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xb7;
          goto LAB_14c5da662;
        }
      }
      iVar5 = 0xb7;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xb8;
            goto LAB_14c5da662;
          }
        }
        iVar5 = 0xb8;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
        if (local_18.success_ == false) {
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_18.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_18.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
              iVar5 = 0xb9;
              goto LAB_14c5da662;
            }
          }
          iVar5 = 0xb9;
        }
        else {
          if (local_18.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_18.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          testing::AssertionSuccess(&local_18);
          if (local_18.success_ != false) goto LAB_14c5da6ad;
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_18.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_18.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
              iVar5 = 0xba;
              goto LAB_14c5da662;
            }
          }
          iVar5 = 0xba;
        }
      }
    }
  }
LAB_14c5da662:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5da6ad:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5da6e0

void * __thiscall
VecTestOperators_AssignVecArbitrary_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignVecArbitrary_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5da720

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVecArbitrary_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignVecArbitrary_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignVecArbitrary_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5da760

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignVecArbitrary_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignVecArbitrary_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignVecArbitrary_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5da7a0

void __thiscall
VecTestOperators_AssignArgsVec1_Test::TestBody(VecTestOperators_AssignArgsVec1_Test *this)

{
  longlong *plVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  AssertHelper local_res10;
  Message local_res18 [2];
  AssertionResult local_18;
  
  local_res18[0].ss_._Mypair._Myval2._0_4_ = 0x3f800000;
  local_res10.data_._0_4_ = 0x3f800000;
  testing::internal::EqHelper::Compare<float,float,0>
            (&local_18,"v[0]","1.0f",(float *)local_res18,(float *)&local_res10);
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message(local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0xc0,pcVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    plVar1 = (longlong *)
             CONCAT44(local_res18[0].ss_._Mypair._Myval2._4_4_,
                      local_res18[0].ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5da890

void * __thiscall
VecTestOperators_AssignArgsVec1_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignArgsVec1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5da8d0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec1_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignArgsVec1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignArgsVec1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5da910

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignArgsVec1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignArgsVec1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5da950

void __thiscall
VecTestOperators_AssignArgsVec2_Test::TestBody(VecTestOperators_AssignArgsVec2_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  undefined8 local_res18;
  AssertionResult local_18;
  
  local_res18 = (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                 )CONCAT44(__real_40000000,__real_3f800000);
  local_res10.data_._0_4_ = 0x3f800000;
  testing::internal::EqHelper::Compare<float,float,0>
            (&local_18,"v[0]","1.0f",(float *)&local_res18,(float *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xc6;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x40000000;
    testing::internal::EqHelper::Compare<float,float,0>
              (&local_18,"v[1]","2.0f",(float *)((longlong)&local_res18 + 4),(float *)&local_res10);
    if (local_18.success_ != false) goto LAB_14c5daaac;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
        iVar5 = 199;
        goto LAB_14c5daa61;
      }
    }
    iVar5 = 199;
  }
LAB_14c5daa61:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18 + 4) + (longlong)local_res18);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5daaac:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5daae0

void * __thiscall
VecTestOperators_AssignArgsVec2_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignArgsVec2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dab20

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec2_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignArgsVec2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignArgsVec2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dab60

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignArgsVec2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignArgsVec2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5daba0

void __thiscall
VecTestOperators_AssignArgsVec3_Test::TestBody(VecTestOperators_AssignArgsVec3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  float local_28;
  float local_24;
  float local_20 [2];
  AssertionResult local_18;
  
  local_28 = 1.0;
  local_24 = 2.0;
  local_20[0] = 3.0;
  local_res10.data_._0_4_ = 0x3f800000;
  testing::internal::EqHelper::Compare<float,float,0>
            (&local_18,"v[0]","1.0f",&local_28,(float *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xcd;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x40000000;
    testing::internal::EqHelper::Compare<float,float,0>
              (&local_18,"v[1]","2.0f",&local_24,(float *)&local_res10);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xce;
          goto LAB_14c5dad37;
        }
      }
      iVar5 = 0xce;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0x40400000;
      testing::internal::EqHelper::Compare<float,float,0>
                (&local_18,"v[2]","3.0f",local_20,(float *)&local_res10);
      if (local_18.success_ != false) goto LAB_14c5dad82;
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xcf;
          goto LAB_14c5dad37;
        }
      }
      iVar5 = 0xcf;
    }
  }
LAB_14c5dad37:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5dad82:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dadc0

void * __thiscall
VecTestOperators_AssignArgsVec3_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignArgsVec3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dae00

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec3_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignArgsVec3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignArgsVec3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dae40

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec3_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignArgsVec3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignArgsVec3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dae80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_AssignArgsVec4_Test::TestBody(VecTestOperators_AssignArgsVec4_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  AssertionResult local_18;
  
  local_res10.data_._0_4_ = 0x3f800000;
  local_28 = ___xmm_4080000040400000400000003f800000;
  uStack_20 = _UNK_15076c058;
  testing::internal::EqHelper::Compare<float,float,0>
            (&local_18,"v[0]","1.0f",(float *)&local_28,(float *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xd5;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x40000000;
    testing::internal::EqHelper::Compare<float,float,0>
              (&local_18,"v[1]","2.0f",(float *)((longlong)&local_28 + 4),(float *)&local_res10);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xd6;
          goto LAB_14c5db09d;
        }
      }
      iVar5 = 0xd6;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0x40400000;
      testing::internal::EqHelper::Compare<float,float,0>
                (&local_18,"v[2]","3.0f",(float *)&uStack_20,(float *)&local_res10);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xd7;
            goto LAB_14c5db09d;
          }
        }
        iVar5 = 0xd7;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0x40800000;
        testing::internal::EqHelper::Compare<float,float,0>
                  (&local_18,"v[3]","4.0f",(float *)((longlong)&uStack_20 + 4),(float *)&local_res10
                  );
        if (local_18.success_ != false) goto LAB_14c5db0e8;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xd8;
            goto LAB_14c5db09d;
          }
        }
        iVar5 = 0xd8;
      }
    }
  }
LAB_14c5db09d:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5db0e8:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5db120

void * __thiscall
VecTestOperators_AssignArgsVec4_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignArgsVec4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5db160

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec4_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignArgsVec4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignArgsVec4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5db1a0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignArgsVec4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignArgsVec4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5db1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_AssignArgsVec5_Test::TestBody(VecTestOperators_AssignArgsVec5_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18 [4];
  
  local_18[0] = 5.0;
  local_res10.data_._0_4_ = 0x3f800000;
  local_28 = ___xmm_4080000040400000400000003f800000;
  uStack_20 = _UNK_15076c058;
  testing::internal::EqHelper::Compare<float,float,0>
            (&local_38,"v[0]","1.0f",(float *)&local_28,(float *)&local_res10);
  uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
  if (local_38.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xde;
  }
  else {
    if (local_38.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_res10.data_._0_4_ = 0x40000000;
    testing::internal::EqHelper::Compare<float,float,0>
              (&local_38,"v[1]","2.0f",(float *)((longlong)&local_28 + 4),(float *)&local_res10);
    uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
    if (local_38.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_38.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_38.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
          iVar5 = 0xdf;
          goto LAB_14c5db493;
        }
      }
      iVar5 = 0xdf;
    }
    else {
      if (local_38.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_38.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_res10.data_._0_4_ = 0x40400000;
      testing::internal::EqHelper::Compare<float,float,0>
                (&local_38,"v[2]","3.0f",(float *)&uStack_20,(float *)&local_res10);
      uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
      if (local_38.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_38.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_38.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
            iVar5 = 0xe0;
            goto LAB_14c5db493;
          }
        }
        iVar5 = 0xe0;
      }
      else {
        if (local_38.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_38.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0x40800000;
        testing::internal::EqHelper::Compare<float,float,0>
                  (&local_38,"v[3]","4.0f",(float *)((longlong)&uStack_20 + 4),(float *)&local_res10
                  );
        uVar1._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
        if (local_38.success_ == false) {
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_38.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_38.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
              iVar5 = 0xe1;
              goto LAB_14c5db493;
            }
          }
          iVar5 = 0xe1;
        }
        else {
          if (local_38.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_38.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          local_res10.data_._0_4_ = 0x40a00000;
          testing::internal::EqHelper::Compare<float,float,0>
                    (&local_38,"v[4]","5.0f",local_18,(float *)&local_res10);
          if (local_38.success_ != false) goto LAB_14c5db4de;
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          if (local_38.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar3 = "";
          }
          else {
            pcVar3 = (char *)local_38.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
              pcVar3 = *(char **)local_38.message_._Mypair._Myval2;
              iVar5 = 0xe2;
              goto LAB_14c5db493;
            }
          }
          iVar5 = 0xe2;
        }
      }
    }
  }
LAB_14c5db493:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5db4de:
  if (local_38.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38.message_._Mypair._Myval2);
    ::operator_delete((void *)local_38.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5db510

void * __thiscall
VecTestOperators_AssignArgsVec5_Test::_scalar_deleting_destructor_
          (VecTestOperators_AssignArgsVec5_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5db550

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec5_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_AssignArgsVec5_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_AssignArgsVec5_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5db590

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_AssignArgsVec5_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_AssignArgsVec5_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_AssignArgsVec5_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5db5d0

void __thiscall
VecTestOperators_TestSubscript_Test::TestBody(VecTestOperators_TestSubscript_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xe7;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xe8;
          goto LAB_14c5db755;
        }
      }
      iVar5 = 0xe8;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xe9;
            goto LAB_14c5db755;
          }
        }
        iVar5 = 0xe9;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        if (local_18.success_ != false) goto LAB_14c5db7a0;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xea;
            goto LAB_14c5db755;
          }
        }
        iVar5 = 0xea;
      }
    }
  }
LAB_14c5db755:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5db7a0:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5db7d0

void * __thiscall
VecTestOperators_TestSubscript_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestSubscript_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5db810

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubscript_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestSubscript_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestSubscript_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5db850

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubscript_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestSubscript_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestSubscript_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5db890

void __thiscall
VecTestOperators_TestSubscriptModify_Test::TestBody(VecTestOperators_TestSubscriptModify_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xf0;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xf1;
          goto LAB_14c5dba15;
        }
      }
      iVar5 = 0xf1;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xf2;
            goto LAB_14c5dba15;
          }
        }
        iVar5 = 0xf2;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        if (local_18.success_ != false) goto LAB_14c5dba60;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xf3;
            goto LAB_14c5dba15;
          }
        }
        iVar5 = 0xf3;
      }
    }
  }
LAB_14c5dba15:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5dba60:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dba90

void * __thiscall
VecTestOperators_TestSubscriptModify_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestSubscriptModify_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dbad0

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubscriptModify_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestSubscriptModify_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestSubscriptModify_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dbb10

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubscriptModify_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestSubscriptModify_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestSubscriptModify_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dbb50

void __thiscall
VecTestOperators_TestSubscriptConst_Test::TestBody(VecTestOperators_TestSubscriptConst_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::AssertionSuccess(&local_18);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0xf8;
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_18);
    uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
    if (local_18.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
          iVar5 = 0xf9;
          goto LAB_14c5dbcd5;
        }
      }
      iVar5 = 0xf9;
    }
    else {
      if (local_18.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_18.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_18);
      uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
      if (local_18.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xfa;
            goto LAB_14c5dbcd5;
          }
        }
        iVar5 = 0xfa;
      }
      else {
        if (local_18.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_18.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        testing::AssertionSuccess(&local_18);
        if (local_18.success_ != false) goto LAB_14c5dbd20;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_18.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_18.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_18.message_._Mypair._Myval2;
            iVar5 = 0xfb;
            goto LAB_14c5dbcd5;
          }
        }
        iVar5 = 0xfb;
      }
    }
  }
LAB_14c5dbcd5:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                       ,iVar5,pcVar3);
  testing::internal::AssertHelper::operator=(this_00,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_14c5dbd20:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dbd50

void * __thiscall
VecTestOperators_TestSubscriptConst_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestSubscriptConst_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dbd90

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubscriptConst_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestSubscriptConst_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestSubscriptConst_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dbdd0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestSubscriptConst_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestSubscriptConst_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestSubscriptConst_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dbe10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestIncrement_Test::TestBody(VecTestOperators_TestIncrement_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,int> local_78;
  vec<4,int> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       ___xmm_00000001000000010000000100000001 + ___xmm_00000004000000030000000200000001;
  local_68.values[1] = _UNK_150631da4 + _UNK_150631e34;
  local_68.values[2] = _UNK_150631da8 + _UNK_150631e38;
  local_68.values[3] = _UNK_150631dac + _UNK_150631e3c;
  local_78.values[0] = ___xmm_00000005000000040000000300000002;
  local_78.values[1] = _UNK_1528985b4;
  local_78.values[2] = _UNK_1528985b8;
  local_78.values[3] = _UNK_1528985bc;
  if ((((local_68.values[0] == 2) && (local_68.values[1] == 3)) && (local_68.values[2] == 4)) &&
     (local_68.values[3] == _UNK_1528985bc)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure(&local_90,"v","tdm::vec4<int>(2, 3, 4, 5)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5dbf6a;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5dbf6a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x101,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dc050

void * __thiscall
VecTestOperators_TestIncrement_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestIncrement_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dc090

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestIncrement_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestIncrement_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestIncrement_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dc0d0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestIncrement_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestIncrement_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestIncrement_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dc110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestDecrement_Test::TestBody(VecTestOperators_TestDecrement_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,int> local_78;
  vec<4,int> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       ___xmm_00000004000000030000000200000001 - ___xmm_00000001000000010000000100000001;
  local_68.values[1] = _UNK_150631e34 - _UNK_150631da4;
  local_68.values[2] = _UNK_150631e38 - _UNK_150631da8;
  local_68.values[3] = _UNK_150631e3c - _UNK_150631dac;
  local_78.values[0] = (int)__xmm_00000003000000020000000100000000;
  local_78.values[1] = __xmm_00000003000000020000000100000000._4_4_;
  local_78.values[2] = _UNK_150631e08;
  local_78.values[3] = _UNK_150631e0c;
  if ((((local_68.values[0] == 0) && (local_68.values[1] == 1)) && (local_68.values[2] == 2)) &&
     (local_68.values[3] == _UNK_150631e0c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure(&local_90,"v","tdm::vec4<int>(0, 1, 2, 3)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5dc269;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5dc269:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x107,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dc350

void * __thiscall
VecTestOperators_TestDecrement_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestDecrement_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dc390

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDecrement_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestDecrement_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestDecrement_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dc3d0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestDecrement_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestDecrement_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestDecrement_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dc410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentAddScalar_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentAddScalar_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       ___xmm_00000002000000020000000200000002 + ___xmm_00000004000000030000000200000001;
  local_68.values[1] = _UNK_15066df64 + _UNK_150631e34;
  local_68.values[2] = _UNK_15066df68 + _UNK_150631e38;
  local_68.values[3] = _UNK_15066df6c + _UNK_150631e3c;
  local_78.values[0] = ___xmm_00000006000000050000000400000003;
  local_78.values[1] = _UNK_1510c2284;
  local_78.values[2] = _UNK_1510c2288;
  local_78.values[3] = _UNK_1510c228c;
  if ((((local_68.values[0] == 3) && (local_68.values[1] == 4)) && (local_68.values[2] == 5)) &&
     (local_68.values[3] == _UNK_1510c228c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v","tdm::vec4<long int>(3, 4, 5, 6)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5dc56a;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5dc56a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x10d,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dc650

void * __thiscall
VecTestOperators_TestCompoundAssignmentAddScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentAddScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dc690

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddScalar_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestCompoundAssignmentAddScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dc6d0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddScalar_Test> *this,uint param_1
          )

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dc710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentAddInitializer_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentAddInitializer_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] = ___xmm_00000004000000030000000200000001 * 2;
  local_68.values[1] = _UNK_150631e34 * 2;
  local_68.values[2] = _UNK_150631e38 * 2;
  local_68.values[3] = _UNK_150631e3c * 2;
  local_78.values[0] = ___xmm_00000008000000060000000400000002;
  local_78.values[1] = _UNK_15289b254;
  local_78.values[2] = _UNK_15289b258;
  local_78.values[3] = _UNK_15289b25c;
  if ((((local_68.values[0] == 2) && (local_68.values[1] == 4)) && (local_68.values[2] == 6)) &&
     (local_68.values[3] == _UNK_15289b25c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v","tdm::vec4<long int>(2, 4, 6, 8)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5dc866;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5dc866:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x113,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dc950

void * __thiscall
VecTestOperators_TestCompoundAssignmentAddInitializer_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentAddInitializer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dc990

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddInitializer_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddInitializer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentAddInitializer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dc9d0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddInitializer_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddInitializer_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddInitializer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentAddVec_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentAddVec_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] = ___xmm_00000004000000030000000200000001 * 2;
  local_68.values[1] = _UNK_150631e34 * 2;
  local_68.values[2] = _UNK_150631e38 * 2;
  local_68.values[3] = _UNK_150631e3c * 2;
  local_78.values[0] = ___xmm_00000008000000060000000400000002;
  local_78.values[1] = _UNK_15289b254;
  local_78.values[2] = _UNK_15289b258;
  local_78.values[3] = _UNK_15289b25c;
  if ((((local_68.values[0] == 2) && (local_68.values[1] == 4)) && (local_68.values[2] == 6)) &&
     (local_68.values[3] == _UNK_15289b25c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v1","tdm::vec4<long int>(2, 4, 6, 8)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5dcb66;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5dcb66:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x11a,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dcc50

void * __thiscall
VecTestOperators_TestCompoundAssignmentAddVec_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentAddVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dcc90

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddVec_Test>::CreateTest
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7VecTestOperators_TestCompoundAssignmentAddVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5dccd0

void * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddVec_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<VecTestOperators_TestCompoundAssignmentAddVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5dcd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
VecTestOperators_TestCompoundAssignmentSubtractScalar_Test::TestBody
          (VecTestOperators_TestCompoundAssignmentSubtractScalar_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 auStackY_c8 [32];
  AssertionResult local_90;
  AssertHelper local_80;
  vec<4,long> local_78;
  vec<4,long> local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.values[0] =
       ___xmm_0000000e0000000b0000000800000005 - ___xmm_00000002000000020000000200000002;
  local_68.values[1] = _UNK_15289b2b4 - _UNK_15066df64;
  local_68.values[2] = _UNK_15289b2b8 - _UNK_15066df68;
  local_68.values[3] = _UNK_15289b2bc - _UNK_15066df6c;
  local_78.values[0] = ___xmm_0000000c000000090000000600000003;
  local_78.values[1] = _UNK_15289b294;
  local_78.values[2] = _UNK_15289b298;
  local_78.values[3] = _UNK_15289b29c;
  if ((((local_68.values[0] == 3) && (local_68.values[1] == 6)) && (local_68.values[2] == 9)) &&
     (local_68.values[3] == _UNK_15289b29c)) {
    testing::AssertionSuccess(&local_90);
  }
  else {
    pbVar3 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_78,&local_68);
    pbVar4 = testing::internal::
             FormatForComparisonFailureMessage<tdm::vec<4,long>,tdm::vec<4,long>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_68,&local_78);
    testing::internal::EqFailure
              (&local_90,"v","tdm::vec4<long int>(3, 6, 9, 12)",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5dce6a;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar10 = local_20 + 1;
      uVar7 = local_38._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_38._Ptr + -8);
        uVar10 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c5dce6a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_90.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_90.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_90.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_90.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_80,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                         ,0x120,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_80);
    plVar1 = (longlong *)CONCAT44(local_78.values[1],local_78.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_90.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90.message_._Mypair._Myval2);
    ::operator_delete((void *)local_90.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5dcf50

void * __thiscall
VecTestOperators_TestCompoundAssignmentSubtractScalar_Test::_scalar_deleting_destructor_
          (VecTestOperators_TestCompoundAssignmentSubtractScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5dcf90

Test * __thiscall
testing::internal::TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractScalar_Test>::
CreateTest(TestFactoryImpl<VecTestOperators_TestCompoundAssignmentSubtractScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7VecTestOperators_TestCompoundAssignmentSubtractScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// CmpHelperEQ<long,int> @ 14c5dcfd0

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<long,int>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,long *param_3,
          int *param_4)

{
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperEQFailure<long,int>(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<long,int> @ 14c5dd020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<long,int>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,long *param_3,
          int *param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong64 uVar3;
  char *pcVar4;
  undefined1 auStackY_1e8 [32];
  int iStack_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  char **local_168;
  char **local_160;
  char **local_148;
  char **local_140;
  int *local_130;
  char *local_118;
  uint local_110;
  basic_ios<char,std::char_traits<char>_> local_100;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  PrintToString<int>((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                     param_4);
  local_198._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_188 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_100);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_198,
             (basic_streambuf<char,std::char_traits<char>_> *)local_180);
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_118 = (char *)0x0;
  local_110 = 0;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_188,*param_3);
  local_98._8_8_ = 0;
  local_98._Ptr = (char *)0x0;
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  if ((((byte)local_110 & 0x22) == 2) || (pcVar4 = *local_140, pcVar4 == (char *)0x0)) {
    if (((local_110 & 4) == 0) && (*local_148 != (char *)0x0)) {
      pcVar2 = *local_168;
      pcVar4 = *local_148 + ((longlong)*local_130 - (longlong)pcVar2);
    }
    else {
      pcVar4 = (char *)0x0;
      pcVar2 = (char *)0x0;
    }
  }
  else {
    if (pcVar4 < local_118) {
      pcVar4 = local_118;
    }
    pcVar2 = *local_160;
    pcVar4 = pcVar4 + -(longlong)pcVar2;
  }
  if (pcVar2 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,pcVar2,
               (ulong64)pcVar4);
  }
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_180);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_180 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_100)
  ;
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,false);
  if (0xf < uStack_80) {
    uVar3 = uStack_80 + 1;
    uVar1 = local_98._Ptr;
    if (0xfff < uVar3) {
      uVar1 = *(undefined8 *)(local_98._Ptr + -8);
      uVar3 = uStack_80 + 0x28;
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar1)) goto LAB_14c5dd26a;
    }
    ::operator_delete((void *)uVar1,uVar3);
  }
  local_98._Ptr = local_98._Ptr & 0xffffffffffffff00;
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  if (0xf < local_60) {
    uVar3 = local_60 + 1;
    uVar1 = local_78._Ptr;
    if (0xfff < uVar3) {
      uVar1 = *(undefined8 *)(local_78._Ptr + -8);
      uVar3 = local_60 + 0x28;
      if ((char *)0x1f < local_78._Ptr + (-8 - uVar1)) {
LAB_14c5dd26a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar1,uVar3);
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<long> @ 14c5dd2c0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<long>
          (long *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c5dd2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// DefaultPrintTo<long> @ 14c5dd2e0

void __cdecl
testing::internal::DefaultPrintTo<long>
          (WrapPrinterType<3> param_1,long *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014c5dd2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*param_2);
  return;
}

// FormatForComparisonFailureMessage<int,long> @ 14c5dd300

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<int,long>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int *param_1,long *param_2)

{
  PrintToString<int>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<long,int> @ 14c5dd320

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<long,int>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          long *param_1,int *param_2)

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
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
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

// PrintTo<long> @ 14c5dd4d0

void __cdecl
testing::internal::PrintTo<long>(long *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c5dd4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintToString<long> @ 14c5dd4f0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<long>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          long *param_1)

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
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
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

// UniversalPrint<long> @ 14c5dd6a0

void __cdecl
testing::internal::UniversalPrint<long>
          (long *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c5dd6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// apply<`VecTestMembers_TestApplyVec2_Test::TestBody'::__l2::<lambda_1>_> @ 14c5dd6c0

vec<2,int> * __thiscall
tdm::vec<2,int>::apply<_VecTestMembers_TestApplyVec2_Test::TestBody_::__l2::<lambda_1>_>
          (vec<2,int> *this,<lambda_1> param_1)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int local_res8 [4];
  AssertHelper local_res18;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res20;
  AssertionResult local_28;
  
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values,local_res8);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1cc,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
  }
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values + 1,local_res8);
  if (local_28.success_ != false) {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
    return this;
  }
  pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
  if (local_28.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)local_28.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
      pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
    }
  }
  pAVar3 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res18,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1cc,pcVar5);
  testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res18);
  if (local_res20._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)&(local_res20._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
  }
  return this;
}

// apply<`VecTestMembers_TestApplyVec3_Test::TestBody'::__l2::<lambda_1>_> @ 14c5dd8e0

vec<3,int> * __thiscall
tdm::vec<3,int>::apply<_VecTestMembers_TestApplyVec3_Test::TestBody_::__l2::<lambda_1>_>
          (vec<3,int> *this,<lambda_1> param_1)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int local_res8 [2];
  AssertHelper local_res18;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res20;
  AssertionResult local_28;
  
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values,local_res8);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1d6,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
  }
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values + 1,local_res8);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1d6,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
  }
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values + 2,local_res8);
  if (local_28.success_ != false) {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
    return this;
  }
  pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
  if (local_28.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)local_28.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
      pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
    }
  }
  pAVar3 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res18,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1d6,pcVar5);
  testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res18);
  if (local_res20._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)&(local_res20._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
  }
  return this;
}

// apply<`VecTestMembers_TestApplyVec4_Test::TestBody'::__l2::<lambda_1>_> @ 14c5ddbe0

vec<4,int> * __thiscall
tdm::vec<4,int>::apply<_VecTestMembers_TestApplyVec4_Test::TestBody_::__l2::<lambda_1>_>
          (vec<4,int> *this,<lambda_1> param_1)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int local_res8 [2];
  AssertHelper local_res18;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res20;
  AssertionResult local_28;
  
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values,local_res8);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1e0,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
  }
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values + 1,local_res8);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1e0,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
  }
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values + 2,local_res8);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                        ,0x1e0,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
  }
  local_res8[0] = *param_1.count + 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_28,"val","count + 1",this->values + 3,local_res8);
  if (local_28.success_ != false) {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
    }
    *param_1.count = *param_1.count + 1;
    return this;
  }
  pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
  if (local_28.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)local_28.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
      pcVar5 = *(char **)local_28.message_._Mypair._Myval2;
    }
  }
  pAVar3 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res18,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestVec.cpp"
                      ,0x1e0,pcVar5);
  testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res18);
  if (local_res20._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)&(local_res20._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
  }
  return this;
}

