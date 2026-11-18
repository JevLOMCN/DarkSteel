// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 94

// test_info_'' @ 141323950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_CustomDestroyer_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_CustomDestroyer_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x9a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x9a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x9a;
  ScopedPtrTest_CustomDestroyer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","CustomDestroyer",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141323b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_EmptyConstruction_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_EmptyConstruction_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x40);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x40);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x40;
  ScopedPtrTest_EmptyConstruction_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","EmptyConstruction",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141323d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VScopedPtrTest_MoveAssignWithCustomDestroyer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xa6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xa6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0xa6;
  ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","MoveAssignWithCustomDestroyer",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141323f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_MoveAssign_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_MoveAssign_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x54);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x54);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x54;
  ScopedPtrTest_MoveAssign_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","MoveAssign",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141324190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VScopedPtrTest_MoveConstructWithCustomDestroyer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xb5);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xb5);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0xb5;
  ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","MoveConstructWithCustomDestroyer",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413243a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_MoveConstruct_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_MoveConstruct_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x62);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x62);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x62;
  ScopedPtrTest_MoveConstruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","MoveConstruct",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413245b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_ProperCleanup_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_ProperCleanup_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x46);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x46);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x46;
  ScopedPtrTest_ProperCleanup_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","ProperCleanup",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413247c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_ReAssign_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_ReAssign_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x70);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x70);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x70;
  ScopedPtrTest_ReAssign_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","ReAssign",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413249d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_Reset_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_Reset_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x80);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x80);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x80;
  ScopedPtrTest_Reset_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","Reset",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141324be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ScopedPtrTest_StoreDerivedInBasePointer_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VScopedPtrTest_StoreDerivedInBasePointer_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xca);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xca);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0xca;
  ScopedPtrTest_StoreDerivedInBasePointer_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","StoreDerivedInBasePointer",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141324df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ScopedPtrTest_UseDefaultCreateDestroy_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VScopedPtrTest_UseDefaultCreateDestroy_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xc2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0xc2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0xc2;
  ScopedPtrTest_UseDefaultCreateDestroy_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","UseDefaultCreateDestroy",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141325000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_UseNewDeleteForArrays_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VScopedPtrTest_UseNewDeleteForArrays_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x95);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x95);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x95;
  ScopedPtrTest_UseNewDeleteForArrays_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","UseNewDeleteForArrays",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141325210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ScopedPtrTest_UseNewDelete_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VScopedPtrTest_UseNewDelete_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x90);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,0x90);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x90;
  ScopedPtrTest_UseNewDelete_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScopedPtrTest","UseNewDelete",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c4599c0

void __thiscall
ScopedPtrTest_EmptyConstruction_Test::TestBody(ScopedPtrTest_EmptyConstruction_Test *this)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,0x42,pcVar2);
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

// `scalar_deleting_destructor' @ 14c459a80

void * __thiscall
ScopedPtrTest_EmptyConstruction_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_EmptyConstruction_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c459ac0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_EmptyConstruction_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_EmptyConstruction_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_EmptyConstruction_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c459b00

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_EmptyConstruction_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_EmptyConstruction_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_EmptyConstruction_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c459b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ScopedPtrTest_ProperCleanup_Test::TestBody(ScopedPtrTest_ProperCleanup_Test *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar14;
  ulong64 uVar15;
  undefined1 auStackY_a8 [32];
  AssertHelper local_78;
  AssertionResult local_70;
  int local_60 [2];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar14._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  testing::AssertionSuccess(&local_70);
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x48,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_78.data_._0_4_ = 0;
  if (local_60[1] == 0) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60 + 1);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60 + 1,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.destructed","0",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c459c75;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c459c75:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x49,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  pbVar6 = ::operator_new(8);
  iVar5 = local_60[0];
  if (pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar6->_Mypair)._Myval2._Bx._Ptr = (char *)local_60;
    iVar5 = local_60[0] + 1;
    local_60[0] = iVar5;
    uVar14._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )pbVar6;
  }
  local_78.data_._0_4_ = 1;
  if (iVar5 == 1) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.constructed","1",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c459dc6;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c459dc6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x4c;
  }
  else {
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_78.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"counters.destructed","0",local_60 + 1,(int *)&local_78);
    uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ != false) {
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (uVar14._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
        *piVar1 = *piVar1 + 1;
        ::operator_delete((void *)uVar14._Mypair._Myval2,8);
      }
      local_78.data_._0_4_ = 1;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_70,"counters.constructed","1",local_60,(int *)&local_78);
      uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      if (local_70.success_ == false) {
        pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
        if (local_70.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = (char *)local_70.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
            pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
          }
        }
        pAVar9 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_58,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                            ,0x50,pcVar12);
        testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
        plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
        if (plVar2 != (longlong *)0x0) {
          puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
          (**(code **)*puVar13)(puVar13,1);
        }
      }
      else {
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_78.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.destructed","1",local_60 + 1,(int *)&local_78);
        if (local_70.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_58);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_78,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                              ,0x51,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_78);
          if (local_58._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_58._Mypair._Myval2 + 4) +
                      (longlong)local_58._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          uVar15 = 0x20;
          uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
          goto LAB_14c45a10e;
        }
      }
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      uVar15 = 0x20;
      uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      goto LAB_14c45a10e;
    }
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
        iVar5 = 0x4d;
        goto LAB_14c45a092;
      }
    }
    iVar5 = 0x4d;
  }
LAB_14c45a092:
  pAVar9 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     ((AssertHelper *)&local_58,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,iVar5,pcVar12);
  testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
  plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
  if (plVar2 != (longlong *)0x0) {
    puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
    (**(code **)*puVar13)(puVar13,1);
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
  }
  if (uVar14._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  uVar15 = 8;
  piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
  *piVar1 = *piVar1 + 1;
LAB_14c45a10e:
  ::operator_delete((void *)uVar14._Mypair._Myval2,uVar15);
  return;
}

// `scalar_deleting_destructor' @ 14c45a290

void * __thiscall
ScopedPtrTest_ProperCleanup_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_ProperCleanup_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45a2d0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_ProperCleanup_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_ProperCleanup_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_ProperCleanup_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45a310

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_ProperCleanup_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_ProperCleanup_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_ProperCleanup_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45a350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ScopedPtrTest_MoveAssign_Test::TestBody(ScopedPtrTest_MoveAssign_Test *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar14;
  ulong64 uVar15;
  undefined1 auStackY_a8 [32];
  AssertHelper local_78;
  AssertionResult local_70;
  int local_60 [2];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar14._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  testing::AssertionSuccess(&local_70);
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x56,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_78.data_._0_4_ = 0;
  if (local_60[1] == 0) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60 + 1);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60 + 1,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.destructed","0",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c45a485;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c45a485:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x57,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  pbVar6 = ::operator_new(8);
  iVar5 = local_60[0];
  if (pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar6->_Mypair)._Myval2._Bx._Ptr = (char *)local_60;
    iVar5 = local_60[0] + 1;
    local_60[0] = iVar5;
    uVar14._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )pbVar6;
  }
  local_78.data_._0_4_ = 1;
  if (iVar5 == 1) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.constructed","1",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c45a5d6;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c45a5d6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x5b;
  }
  else {
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_78.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"counters.destructed","0",local_60 + 1,(int *)&local_78);
    uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ != false) {
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (uVar14._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
        *piVar1 = *piVar1 + 1;
        ::operator_delete((void *)uVar14._Mypair._Myval2,8);
      }
      local_78.data_._0_4_ = 1;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_70,"counters.constructed","1",local_60,(int *)&local_78);
      uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      if (local_70.success_ == false) {
        pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
        if (local_70.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = (char *)local_70.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
            pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
          }
        }
        pAVar9 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_58,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                            ,0x5e,pcVar12);
        testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
        plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
        if (plVar2 != (longlong *)0x0) {
          puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
          (**(code **)*puVar13)(puVar13,1);
        }
      }
      else {
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_78.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.destructed","1",local_60 + 1,(int *)&local_78);
        if (local_70.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_58);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_78,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                              ,0x5f,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_78);
          if (local_58._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_58._Mypair._Myval2 + 4) +
                      (longlong)local_58._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          uVar15 = 0x20;
          uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
          goto LAB_14c45a91e;
        }
      }
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      uVar15 = 0x20;
      uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      goto LAB_14c45a91e;
    }
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
        iVar5 = 0x5c;
        goto LAB_14c45a8a2;
      }
    }
    iVar5 = 0x5c;
  }
LAB_14c45a8a2:
  pAVar9 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     ((AssertHelper *)&local_58,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,iVar5,pcVar12);
  testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
  plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
  if (plVar2 != (longlong *)0x0) {
    puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
    (**(code **)*puVar13)(puVar13,1);
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
  }
  if (uVar14._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  uVar15 = 8;
  piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
  *piVar1 = *piVar1 + 1;
LAB_14c45a91e:
  ::operator_delete((void *)uVar14._Mypair._Myval2,uVar15);
  return;
}

// `scalar_deleting_destructor' @ 14c45aaa0

void * __thiscall
ScopedPtrTest_MoveAssign_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_MoveAssign_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45aae0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveAssign_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_MoveAssign_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_MoveAssign_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45ab20

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveAssign_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_MoveAssign_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_MoveAssign_Test>)&___7TestFactoryBase_internal_testing__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45ab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ScopedPtrTest_MoveConstruct_Test::TestBody(ScopedPtrTest_MoveConstruct_Test *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar14;
  ulong64 uVar15;
  undefined1 auStackY_a8 [32];
  AssertHelper local_78;
  AssertionResult local_70;
  int local_60 [2];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar14._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  testing::AssertionSuccess(&local_70);
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,100,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_78.data_._0_4_ = 0;
  if (local_60[1] == 0) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60 + 1);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60 + 1,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.destructed","0",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c45ac95;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c45ac95:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x65,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  pbVar6 = ::operator_new(8);
  iVar5 = local_60[0];
  if (pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar6->_Mypair)._Myval2._Bx._Ptr = (char *)local_60;
    iVar5 = local_60[0] + 1;
    local_60[0] = iVar5;
    uVar14._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )pbVar6;
  }
  local_78.data_._0_4_ = 1;
  if (iVar5 == 1) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.constructed","1",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c45ade6;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c45ade6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x69;
  }
  else {
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_78.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"counters.destructed","0",local_60 + 1,(int *)&local_78);
    uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ != false) {
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (uVar14._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
        *piVar1 = *piVar1 + 1;
        ::operator_delete((void *)uVar14._Mypair._Myval2,8);
      }
      local_78.data_._0_4_ = 1;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_70,"counters.constructed","1",local_60,(int *)&local_78);
      uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      if (local_70.success_ == false) {
        pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
        if (local_70.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = (char *)local_70.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
            pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
          }
        }
        pAVar9 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_58,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                            ,0x6c,pcVar12);
        testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
        plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
        if (plVar2 != (longlong *)0x0) {
          puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
          (**(code **)*puVar13)(puVar13,1);
        }
      }
      else {
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_78.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.destructed","1",local_60 + 1,(int *)&local_78);
        if (local_70.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_58);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_78,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                              ,0x6d,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_78);
          if (local_58._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_58._Mypair._Myval2 + 4) +
                      (longlong)local_58._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          uVar15 = 0x20;
          uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
          goto LAB_14c45b12e;
        }
      }
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      uVar15 = 0x20;
      uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      goto LAB_14c45b12e;
    }
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
        iVar5 = 0x6a;
        goto LAB_14c45b0b2;
      }
    }
    iVar5 = 0x6a;
  }
LAB_14c45b0b2:
  pAVar9 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     ((AssertHelper *)&local_58,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,iVar5,pcVar12);
  testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
  plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
  if (plVar2 != (longlong *)0x0) {
    puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
    (**(code **)*puVar13)(puVar13,1);
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
  }
  if (uVar14._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  uVar15 = 8;
  piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
  *piVar1 = *piVar1 + 1;
LAB_14c45b12e:
  ::operator_delete((void *)uVar14._Mypair._Myval2,uVar15);
  return;
}

// `scalar_deleting_destructor' @ 14c45b2b0

void * __thiscall
ScopedPtrTest_MoveConstruct_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_MoveConstruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45b2f0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveConstruct_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_MoveConstruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_MoveConstruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45b330

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveConstruct_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_MoveConstruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_MoveConstruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45b370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ScopedPtrTest_ReAssign_Test::TestBody(ScopedPtrTest_ReAssign_Test *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar14;
  ulong64 uVar15;
  undefined1 auStackY_a8 [32];
  AssertHelper local_78;
  AssertionResult local_70;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_60;
  int local_58 [2];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar14._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  testing::AssertionSuccess(&local_70);
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_60,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x72,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_60);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_78.data_._0_4_ = 0;
  if (local_58[1] == 0) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_58 + 1);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_58 + 1,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.destructed","0",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c45b4a5;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c45b4a5:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_60,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0x73,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_60);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  pbVar6 = ::operator_new(8);
  iVar5 = local_58[0];
  if (pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar6->_Mypair)._Myval2._Bx._Ptr = (char *)local_58;
    iVar5 = local_58[0] + 1;
    local_58[0] = iVar5;
    uVar14._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )pbVar6;
  }
  local_78.data_._0_4_ = 1;
  if (iVar5 == 1) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_58);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_58,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.constructed","1",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar10 = pvVar3;
      if (0xfff < uVar15) {
        pvVar10 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10))) goto LAB_14c45b5f6;
      }
      ::operator_delete(pvVar10,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar11 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar11)) {
LAB_14c45b5f6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x76;
  }
  else {
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_78.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"counters.destructed","0",local_58 + 1,(int *)&local_78);
    uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ != false) {
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (uVar14._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
        *piVar1 = *piVar1 + 1;
        ::operator_delete((void *)uVar14._Mypair._Myval2,8);
      }
      local_78.data_._0_4_ = 1;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_70,"counters.constructed","1",local_58,(int *)&local_78);
      uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      if (local_70.success_ == false) {
        pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
        if (local_70.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = (char *)local_70.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
            pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
          }
        }
        pAVar9 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_60,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                            ,0x79,pcVar12);
        testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_60);
        plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
        if (plVar2 != (longlong *)0x0) {
          puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
          (**(code **)*puVar13)(puVar13,1);
        }
      }
      else {
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_78.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.destructed","1",local_58 + 1,(int *)&local_78);
        uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
        if (local_70.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_60,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                              ,0x7a,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_60);
          plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
          if (plVar2 != (longlong *)0x0) {
            puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          uVar15 = 0x20;
          uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
          goto LAB_14c45bb1a;
        }
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_78.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.constructed","1",local_58,(int *)&local_78);
        uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
        if (local_70.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_60,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                              ,0x7c,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_60);
          plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
          if (plVar2 != (longlong *)0x0) {
            puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          uVar15 = 0x20;
          uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
          goto LAB_14c45bb1a;
        }
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_78.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.destructed","1",local_58 + 1,(int *)&local_78);
        if (local_70.success_ == false) {
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_60);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar9 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_78,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                              ,0x7d,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
          testing::internal::AssertHelper::~AssertHelper(&local_78);
          if (local_60._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_60._Mypair._Myval2 + 4) +
                      (longlong)local_60._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
          }
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          uVar15 = 0x20;
          uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
          goto LAB_14c45bb1a;
        }
      }
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      uVar15 = 0x20;
      uVar14._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      goto LAB_14c45bb1a;
    }
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_70.message_._Mypair._Myval2;
        iVar5 = 0x77;
        goto LAB_14c45ba9e;
      }
    }
    iVar5 = 0x77;
  }
LAB_14c45ba9e:
  pAVar9 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     ((AssertHelper *)&local_60,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                      ,iVar5,pcVar12);
  testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_60);
  plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
  if (plVar2 != (longlong *)0x0) {
    puVar13 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
    (**(code **)*puVar13)(puVar13,1);
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
  }
  if (uVar14._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  uVar15 = 8;
  piVar1 = (int *)((((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    uVar14._Mypair._Myval2)->_Mypair)._Myval2._Bx._Ptr + 4);
  *piVar1 = *piVar1 + 1;
LAB_14c45bb1a:
  ::operator_delete((void *)uVar14._Mypair._Myval2,uVar15);
  return;
}

// `scalar_deleting_destructor' @ 14c45bc90

void * __thiscall
ScopedPtrTest_ReAssign_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_ReAssign_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45bcd0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_ReAssign_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_ReAssign_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_ReAssign_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45bd10

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_ReAssign_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_ReAssign_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_ReAssign_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45bd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ScopedPtrTest_Reset_Test::TestBody(ScopedPtrTest_Reset_Test *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar16;
  undefined1 auStackY_a8 [32];
  AssertHelper local_78;
  AssertionResult local_70;
  int local_60 [2];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_58;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pbVar16 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  testing::AssertionSuccess(&local_70);
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,0x82,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar14 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar14)(puVar14,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_78.data_._0_4_ = 0;
  if (local_60[1] == 0) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60 + 1);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60 + 1,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.destructed","0",pbVar7,pbVar6,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar11 = pvVar3;
      if (0xfff < uVar15) {
        pvVar11 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) goto LAB_14c45be85;
      }
      ::operator_delete(pvVar11,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar12 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar12 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar12)) {
LAB_14c45be85:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar12,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,0x83,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar14 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar14)(puVar14,1);
    }
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_70.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  pbVar7 = ::operator_new(8);
  pbVar6 = pbVar16;
  iVar5 = local_60[0];
  if (pbVar7 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (pbVar7->_Mypair)._Myval2._Bx._Ptr = (char *)local_60;
    iVar5 = local_60[0] + 1;
    local_60[0] = iVar5;
    pbVar6 = pbVar7;
  }
  local_78.data_._0_4_ = 1;
  if (iVar5 == 1) {
    testing::AssertionSuccess(&local_70);
  }
  else {
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_78,local_60);
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_60,(int *)&local_78);
    testing::internal::EqFailure(&local_70,"counters.constructed","1",pbVar8,pbVar7,false);
    if (0xf < uStack_38) {
      pvVar3 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar15 = uStack_38 + 1;
      pvVar11 = pvVar3;
      if (0xfff < uVar15) {
        pvVar11 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) goto LAB_14c45bfd6;
      }
      ::operator_delete(pvVar11,uVar15);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar15 = local_18 + 1;
      uVar12 = local_30._Ptr;
      if (0xfff < uVar15) {
        uVar12 = *(undefined8 *)(local_30._Ptr + -8);
        uVar15 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar12)) {
LAB_14c45bfd6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar12,uVar15);
    }
  }
  uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
  if (local_70.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_70.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_70.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x86;
LAB_14c45c468:
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,iVar5,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar14 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar14)(puVar14,1);
    }
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    }
    if (pbVar6 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    pcVar13 = (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    local_70.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )pbVar6;
  }
  else {
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_78.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"counters.destructed","0",local_60 + 1,(int *)&local_78);
    uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ == false) {
      pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_70.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
          iVar5 = 0x87;
          goto LAB_14c45c468;
        }
      }
      iVar5 = 0x87;
      goto LAB_14c45c468;
    }
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    pbVar7 = ::operator_new(8);
    if (pbVar7 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (pbVar7->_Mypair)._Myval2._Bx._Ptr = (char *)local_60;
      local_60[0] = local_60[0] + 1;
      pbVar16 = pbVar7;
    }
    if (pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      piVar1 = (int *)((pbVar6->_Mypair)._Myval2._Bx._Ptr + 4);
      *piVar1 = *piVar1 + 1;
      ::operator_delete(pbVar6,8);
    }
    local_78.data_._0_4_ = 2;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_70,"counters.constructed","2",local_60,(int *)&local_78);
    uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
    if (local_70.success_ == false) {
      pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_70.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
          iVar5 = 0x89;
          goto LAB_14c45c34b;
        }
      }
      iVar5 = 0x89;
    }
    else {
      if (local_70.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      local_78.data_._0_4_ = 1;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_70,"counters.destructed","1",local_60 + 1,(int *)&local_78);
      uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
      if (local_70.success_ != false) {
        if (local_70.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_70.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        if (pbVar16 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          piVar1 = (int *)((pbVar16->_Mypair)._Myval2._Bx._Ptr + 4);
          *piVar1 = *piVar1 + 1;
          ::operator_delete(pbVar16,8);
        }
        local_78.data_._0_4_ = 2;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_70,"counters.constructed","2",local_60,(int *)&local_78);
        uVar4._Mypair._Myval2 = local_70.message_._Mypair._Myval2;
        if (local_70.success_ == false) {
          pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
          if (local_70.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar13 = "";
          }
          else {
            pcVar13 = (char *)local_70.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
              pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
            }
          }
          pAVar10 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              ((AssertHelper *)&local_58,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                               ,0x8c,pcVar13);
          testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
          plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
          if (plVar2 != (longlong *)0x0) {
            puVar14 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        else {
          if (local_70.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_70.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          local_78.data_._0_4_ = 2;
          testing::internal::EqHelper::Compare<int,int,0>
                    (&local_70,"counters.destructed","2",local_60 + 1,(int *)&local_78);
          if (local_70.success_ == false) {
            pMVar9 = (Message *)testing::Message::Message((Message *)&local_58);
            if (local_70.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar13 = "";
            }
            else {
              pcVar13 = (char *)local_70.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
                pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
              }
            }
            pAVar10 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_78,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                                 ,0x8d,pcVar13);
            testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
            testing::internal::AssertHelper::~AssertHelper(&local_78);
            if (local_58._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar14 = (undefined8 *)
                        ((longlong)&(local_58._Myval2)->field_0x0 +
                        (longlong)*(int *)(*(longlong *)local_58._Myval2 + 4));
              (**(code **)*puVar14)(puVar14,1);
            }
            if (local_70.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              return;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_70.message_._Mypair._Myval2);
            uVar15 = 0x20;
            goto LAB_14c45c4e4;
          }
        }
        if (local_70.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_70.message_._Mypair._Myval2);
        uVar15 = 0x20;
        goto LAB_14c45c4e4;
      }
      pMVar9 = (Message *)testing::Message::Message((Message *)&local_78);
      if (local_70.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_70.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_70.message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_70.message_._Mypair._Myval2;
        }
      }
      iVar5 = 0x8a;
    }
LAB_14c45c34b:
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_58,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,iVar5,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_58);
    plVar2 = (longlong *)CONCAT44(local_78.data_._4_4_,local_78.data_._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar14 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar14)(puVar14,1);
    }
    if (local_70.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_70.message_._Mypair._Myval2);
      ::operator_delete((void *)local_70.message_._Mypair._Myval2,0x20);
    }
    if (pbVar16 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    pcVar13 = (pbVar16->_Mypair)._Myval2._Bx._Ptr;
    local_70.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )pbVar16;
  }
  *(int *)(pcVar13 + 4) = *(int *)(pcVar13 + 4) + 1;
  uVar15 = 8;
LAB_14c45c4e4:
  ::operator_delete((void *)local_70.message_._Mypair._Myval2,uVar15);
  return;
}

// `scalar_deleting_destructor' @ 14c45c660

void * __thiscall
ScopedPtrTest_Reset_Test::_scalar_deleting_destructor_(ScopedPtrTest_Reset_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45c6a0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_Reset_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_Reset_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_Reset_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45c6e0

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_Reset_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_Reset_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_Reset_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45c720

void __thiscall ScopedPtrTest_UseNewDelete_Test::TestBody(ScopedPtrTest_UseNewDelete_Test *this)

{
  int *piVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  piVar1 = ::operator_new(4);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0x2a;
  }
  local_res10.data_._0_4_ = 0x2a;
  testing::internal::EqHelper::Compare<int,int,0>(&local_18,"*sp","42",piVar1,(int *)&local_res10);
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
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,0x92,pcVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
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
  if (piVar1 != (int *)0x0) {
    ::operator_delete(piVar1,4);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45c840

void * __thiscall
ScopedPtrTest_UseNewDelete_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_UseNewDelete_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45c880

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_UseNewDelete_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_UseNewDelete_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_UseNewDelete_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45c8c0

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_UseNewDelete_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_UseNewDelete_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_UseNewDelete_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45c900

void __thiscall
ScopedPtrTest_UseNewDeleteForArrays_Test::TestBody(ScopedPtrTest_UseNewDeleteForArrays_Test *this)

{
  int *_Dst;
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_18;
  
  _Dst = operator_new__(400);
  if (_Dst == (int *)0x0) {
    _Dst = (int *)0x0;
  }
  else {
    memset(_Dst,0,400);
  }
  local_res10.data_._0_4_ = 0;
  testing::internal::EqHelper::Compare<int,int,0>(&local_18,"sp[0]","0",_Dst,(int *)&local_res10);
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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                         ,0x97,pcVar2);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar3 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
               (longlong)local_res18[0]._Mypair._Myval2);
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
  if (_Dst != (int *)0x0) {
    operator_delete__(_Dst);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45ca20

void * __thiscall
ScopedPtrTest_UseNewDeleteForArrays_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_UseNewDeleteForArrays_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45ca60

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_UseNewDeleteForArrays_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_UseNewDeleteForArrays_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_UseNewDeleteForArrays_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45caa0

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_UseNewDeleteForArrays_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_UseNewDeleteForArrays_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_UseNewDeleteForArrays_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ScopedPtrTest_CustomDestroyer_Test::TestBody(ScopedPtrTest_CustomDestroyer_Test *this)

{
  int *piVar1;
  int *piVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStackY_118 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_e8;
  ulong64 local_e0;
  AssertHelper local_d8;
  AssertionResult local_d0;
  AssertionResult local_c0;
  ScopedPtr<int,std::function<void___cdecl(int_*)>_> local_a8;
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  piVar2 = (int *)0x0;
  local_e0 = 0;
  piVar1 = ::operator_new(4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar2 = piVar1;
  }
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,int_*>
        ::_vftable_;
  local_58._8_8_ = &local_e0;
  local_20 = (longlong *)local_58;
  pma::ScopedPtr<int,std::function<void___cdecl(int_*)>_>::
  ScopedPtr<int,std::function<void___cdecl(int_*)>_>
            (&local_a8,piVar2,(function<void___cdecl(int_*)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  local_e8._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       ((ulonglong)local_e8._Myval2._4_4_ << 0x20);
  if (local_e0 == 0) {
    testing::AssertionSuccess(&local_c0);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_c0,"timesCalled","0ul",&local_e0,(ulong *)&local_e8);
  }
  if (local_c0.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_e8);
    if (local_c0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_c0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_c0.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_d8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0xa1,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_d8);
    if (local_e8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar6 = (undefined8 *)
               ((longlong)&(local_e8._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_e8._Myval2 + 4));
      (**(code **)*puVar6)(puVar6,1);
    }
    if (local_c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_c0.message_._Mypair._Myval2,0x20);
    }
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_a8.ptr !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_d0._0_8_ = local_a8.ptr;
      if ((ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)local_a8._padding_ ==
          (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_a8._padding_ + 0x10))(local_a8._padding_,&local_d0);
      local_a8.ptr = (int *)0x0;
    }
    if ((ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)local_a8._padding_ !=
        (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)0x0) {
      (**(code **)(*(longlong *)local_a8._padding_ + 0x20))
                (local_a8._padding_,
                 (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)local_a8._padding_ !=
                 &local_a8);
    }
  }
  else {
    if (local_c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_c0.message_._Mypair._Myval2,0x20);
    }
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_a8.ptr !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_e8._Myval2 =
           (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_a8.ptr;
      if ((ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)local_a8._padding_ ==
          (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_a8._padding_ + 0x10))(local_a8._padding_,&local_e8);
      local_a8.ptr = (int *)0x0;
    }
    if ((ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)local_a8._padding_ !=
        (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)0x0) {
      (**(code **)(*(longlong *)local_a8._padding_ + 0x20))
                (local_a8._padding_,
                 (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *)local_a8._padding_ !=
                 &local_a8);
    }
    local_e8._Myval2._0_4_ = 1;
    if (local_e0 == 1) {
      testing::AssertionSuccess(&local_d0);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_d0,"timesCalled","1ul",&local_e0,(ulong *)&local_e8);
    }
    if (local_d0.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
      if (local_d0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_d0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_d0.message_._Mypair._Myval2;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_e8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                          ,0xa3,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_e8);
      if (local_d8.data_ != (AssertHelperData *)0x0) {
        puVar6 = (undefined8 *)
                 ((longlong)&(local_d8.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_d8.data_ + 4));
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    if (local_d0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_d0.message_._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45ce20

void * __thiscall
ScopedPtrTest_CustomDestroyer_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_CustomDestroyer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45ce60

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_CustomDestroyer_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_CustomDestroyer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_CustomDestroyer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45cea0

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_CustomDestroyer_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_CustomDestroyer_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_CustomDestroyer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45cee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody
          (ScopedPtrTest_MoveAssignWithCustomDestroyer_Test *this)

{
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var1;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  undefined1 auStackY_168 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_138;
  ulong64 local_130;
  AssertHelper local_128;
  AssertionResult local_120;
  AssertionResult local_110;
  _Func_class<void,pmatests::_anonymous_namespace_::Base_*> local_f8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_b8;
  _Func_class<void,pmatests::_anonymous_namespace_::Base_*> local_a8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_68;
  undefined **local_58;
  ulong64 *local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pbVar7 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_130 = 0;
  local_f8._Mystorage._Ptrs[7] = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0;
  local_b8._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  pbVar2 = ::operator_new(8);
  if (pbVar2 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined ***)pbVar2 = &pmatests::Derived::_vftable_;
    pbVar7 = pbVar2;
  }
  local_a8._Mystorage._Ptrs[7] = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0;
  local_58 = &std::
              _Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,pmatests::Base_*>
              ::_vftable_;
  local_50 = &local_130;
  local_20 = &local_58;
  local_a8._Mystorage._Ptrs[7] =
       std::
       _Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
       ::_Move(&local_58,&local_a8);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
    local_20 = (undefined ***)0x0;
  }
  local_68 = pbVar7;
  std::_Func_class<void,pmatests::`anonymous_namespace'::Base_*>::_Swap(&local_a8,&local_f8);
  pbVar7 = local_68;
  _Var1._Myval2 = local_b8._Myval2;
  local_68 = local_b8._Myval2;
  local_b8._Myval2 = pbVar7;
  if (_Var1._Myval2 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
  {
    local_138._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )_Var1._Myval2;
    if (local_a8._Mystorage._Ptrs[7] ==
        (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_a8._Mystorage._Ptrs[7] + 0x10))
              (local_a8._Mystorage._Ptrs[7],&local_138);
    local_68 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  if (local_a8._Mystorage._Ptrs[7] !=
      (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
    (**(code **)((longlong)*local_a8._Mystorage._Ptrs[7] + 0x20))
              (local_a8._Mystorage._Ptrs[7],
               local_a8._Mystorage._Ptrs[7] !=
               (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)&local_a8);
    local_a8._Mystorage._Ptrs[7] = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0;
  }
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  local_138._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )((ulonglong)local_138._Mypair._Myval2 & 0xffffffff00000000);
  if (local_130 == 0) {
    testing::AssertionSuccess(&local_110);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_110,"timesCalled","0ul",&local_130,(ulong *)&local_138);
  }
  if (local_110.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_138);
    if (local_110.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_110.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_110.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_128,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0xb0,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_128);
    if (local_138._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar6 = (undefined8 *)
               ((longlong)local_138._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
      (**(code **)*puVar6)(puVar6,1);
    }
    if (local_110.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_110.message_._Mypair._Myval2);
      ::operator_delete((void *)local_110.message_._Mypair._Myval2,0x20);
    }
    if (local_b8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_120._0_8_ = local_b8._Myval2;
      if (local_f8._Mystorage._Ptrs[7] ==
          (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_f8._Mystorage._Ptrs[7] + 0x10))
                (local_f8._Mystorage._Ptrs[7],&local_120);
      local_b8._Myval2 =
           (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    if (local_f8._Mystorage._Ptrs[7] !=
        (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
      (**(code **)((longlong)*local_f8._Mystorage._Ptrs[7] + 0x20))
                (local_f8._Mystorage._Ptrs[7],
                 local_f8._Mystorage._Ptrs[7] !=
                 (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)&local_f8);
    }
  }
  else {
    if (local_110.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_110.message_._Mypair._Myval2);
      ::operator_delete((void *)local_110.message_._Mypair._Myval2,0x20);
    }
    if (local_b8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_138._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_b8._Myval2;
      if (local_f8._Mystorage._Ptrs[7] ==
          (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_f8._Mystorage._Ptrs[7] + 0x10))
                (local_f8._Mystorage._Ptrs[7],&local_138);
      local_b8._Myval2 =
           (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    if (local_f8._Mystorage._Ptrs[7] !=
        (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
      (**(code **)((longlong)*local_f8._Mystorage._Ptrs[7] + 0x20))
                (local_f8._Mystorage._Ptrs[7],
                 local_f8._Mystorage._Ptrs[7] !=
                 (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)&local_f8);
    }
    local_138._Mypair._Myval2._0_4_ = 1;
    if (local_130 == 1) {
      testing::AssertionSuccess(&local_120);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_120,"timesCalled","1ul",&local_130,(ulong *)&local_138);
    }
    if (local_120.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_128);
      if (local_120.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_120.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_120.message_._Mypair._Myval2;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_138,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                          ,0xb2,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_138);
      if (local_128.data_ != (AssertHelperData *)0x0) {
        puVar6 = (undefined8 *)
                 ((longlong)&(local_128.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_128.data_ + 4));
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)local_120.message_._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45d2b0

void * __thiscall
ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_MoveAssignWithCustomDestroyer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45d2f0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveAssignWithCustomDestroyer_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_MoveAssignWithCustomDestroyer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_MoveAssignWithCustomDestroyer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45d330

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveAssignWithCustomDestroyer_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_MoveAssignWithCustomDestroyer_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_MoveAssignWithCustomDestroyer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45d370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody
          (ScopedPtrTest_MoveConstructWithCustomDestroyer_Test *this)

{
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  char *pcVar4;
  undefined8 *puVar5;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  undefined1 auStackY_118 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_e8;
  ulong64 local_e0;
  AssertHelper local_d8;
  AssertionResult local_d0;
  AssertionResult local_c0;
  _Func_base<void,pmatests::_anonymous_namespace_::Base_*> local_a8 [7];
  _Func_base<void,pmatests::_anonymous_namespace_::Base_*> *local_70;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_68;
  undefined **local_58;
  ulong64 *local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pbVar6 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_e0 = 0;
  pbVar1 = ::operator_new(8);
  if (pbVar1 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined ***)pbVar1 = &pmatests::Derived::_vftable_;
    pbVar6 = pbVar1;
  }
  local_70 = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0;
  local_58 = &std::
              _Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,pmatests::Base_*>
              ::_vftable_;
  local_50 = &local_e0;
  local_20 = &local_58;
  local_70 = std::
             _Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
             ::_Move(&local_58,local_a8);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
  }
  local_e8._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       ((ulonglong)local_e8._Myval2._4_4_ << 0x20);
  local_68 = pbVar6;
  if (local_e0 == 0) {
    testing::AssertionSuccess(&local_c0);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_c0,"timesCalled","0ul",&local_e0,(ulong *)&local_e8);
  }
  if (local_c0.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_e8);
    if (local_c0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_c0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_c0.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_d8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0xbd,pcVar4);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_d8);
    if (local_e8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_e8._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_e8._Myval2 + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
    if (local_c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_c0.message_._Mypair._Myval2,0x20);
    }
    if (local_68 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_d0._0_8_ = local_68;
      if (local_70 == (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_70 + 0x10))(local_70,&local_d0);
      local_68 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    if (local_70 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
      (**(code **)((longlong)*local_70 + 0x20))(local_70,local_70 != local_a8);
    }
  }
  else {
    if (local_c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_c0.message_._Mypair._Myval2,0x20);
    }
    if (local_68 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_e8._Myval2 = local_68;
      if (local_70 == (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_70 + 0x10))(local_70,&local_e8);
      local_68 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    if (local_70 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
      (**(code **)((longlong)*local_70 + 0x20))(local_70,local_70 != local_a8);
    }
    local_e8._Myval2._0_4_ = 1;
    if (local_e0 == 1) {
      testing::AssertionSuccess(&local_d0);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_d0,"timesCalled","1ul",&local_e0,(ulong *)&local_e8);
    }
    if (local_d0.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_d8);
      if (local_d0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)local_d0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)local_d0.message_._Mypair._Myval2;
        }
      }
      pAVar3 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_e8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                          ,0xbf,pcVar4);
      testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_e8);
      if (local_d8.data_ != (AssertHelperData *)0x0) {
        puVar5 = (undefined8 *)
                 ((longlong)&(local_d8.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_d8.data_ + 4));
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if (local_d0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_d0.message_._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45d6b0

void * __thiscall
ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_MoveConstructWithCustomDestroyer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45d6f0

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveConstructWithCustomDestroyer_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_MoveConstructWithCustomDestroyer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_MoveConstructWithCustomDestroyer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45d730

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_MoveConstructWithCustomDestroyer_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_MoveConstructWithCustomDestroyer_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_MoveConstructWithCustomDestroyer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45d770

void __thiscall
ScopedPtrTest_UseDefaultCreateDestroy_Test::TestBody
          (ScopedPtrTest_UseDefaultCreateDestroy_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  int *piVar2;
  int *piVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  char *pcVar6;
  undefined8 *puVar7;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18;
  AssertionResult local_18;
  
  piVar2 = ::operator_new(4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0x2a;
  }
  local_res10.data_._0_4_ = 0x2a;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_18,"*spPrimitive","42",piVar2,(int *)&local_res10);
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                        ,0xc4,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)&(local_res18._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18._Myval2 + 4));
      (**(code **)*puVar7)(puVar7,1);
    }
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
    }
    if (piVar2 != (int *)0x0) {
      ::operator_delete(piVar2,4);
      return;
    }
  }
  else {
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    piVar3 = operator_new__(0x28);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
    }
    local_res10.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_18,"spArray[0]","0",piVar3,(int *)&local_res10);
    if (local_18.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_res18);
      if (local_18.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = (char *)local_18.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
          pcVar6 = *(char **)local_18.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_res10,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\TestScopedPtr.cpp"
                          ,199,pcVar6);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_res10);
      if (local_res18._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar7 = (undefined8 *)
                 ((longlong)&(local_res18._Myval2)->field_0x0 +
                 (longlong)*(int *)(*(longlong *)local_res18._Myval2 + 4));
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    if (local_18.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_18.message_._Mypair._Myval2);
      ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
    }
    if (piVar3 != (int *)0x0) {
      operator_delete__(piVar3);
    }
    if (piVar2 != (int *)0x0) {
      ::operator_delete(piVar2,4);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45d9e0

void * __thiscall
ScopedPtrTest_UseDefaultCreateDestroy_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_UseDefaultCreateDestroy_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45da20

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_UseDefaultCreateDestroy_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_UseDefaultCreateDestroy_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_UseDefaultCreateDestroy_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45da60

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_UseDefaultCreateDestroy_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_UseDefaultCreateDestroy_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_UseDefaultCreateDestroy_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c45daa0

void __thiscall
ScopedPtrTest_StoreDerivedInBasePointer_Test::TestBody
          (ScopedPtrTest_StoreDerivedInBasePointer_Test *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = ::operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &pmatests::Derived::_vftable_;
  }
  puVar2 = ::operator_new(8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &pmatests::Derived::_vftable_;
    (*(code *)pmatests::Derived::_vftable_)(puVar2,1);
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c45db20

void * __thiscall
ScopedPtrTest_StoreDerivedInBasePointer_Test::_scalar_deleting_destructor_
          (ScopedPtrTest_StoreDerivedInBasePointer_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c45db60

Test * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_StoreDerivedInBasePointer_Test>::CreateTest
          (TestFactoryImpl<ScopedPtrTest_StoreDerivedInBasePointer_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScopedPtrTest_StoreDerivedInBasePointer_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c45dba0

void * __thiscall
testing::internal::TestFactoryImpl<ScopedPtrTest_StoreDerivedInBasePointer_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScopedPtrTest_StoreDerivedInBasePointer_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScopedPtrTest_StoreDerivedInBasePointer_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// makeScoped<int_[0],unsigned_long> @ 14c45dbe0

ScopedPtr<int_[0],pma::Delete<int_[0],int_[0]>_> __cdecl
pma::makeScoped<int_[0],unsigned_long>(ulong *param_1)

{
  ulong64 _Size;
  void *_Dst;
  uint *in_RDX;
  
  _Size = SUB168(ZEXT816(4) * ZEXT416(*in_RDX),0);
  if (SUB168(ZEXT816(4) * ZEXT416(*in_RDX),8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = operator_new__(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    *(void **)param_1 = _Dst;
    return (ScopedPtr<int_[0],pma::Delete<int_[0],int_[0]>_>)(int *)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (ScopedPtr<int_[0],pma::Delete<int_[0],int_[0]>_>)(int *)param_1;
}

// makeScoped<int_[0],pma::New<int_[0],int_[0]>,pma::Delete<int_[0],int_[0]>,unsigned_long,int> @ 14c45dc60

ScopedPtr<int,pma::Delete<int_[0],int_[0]>_> __cdecl
pma::makeScoped<int_[0],pma::New<int_[0],int_[0]>,pma::Delete<int_[0],int_[0]>,unsigned_long,int>
          (ulong *param_1)

{
  ulong64 _Size;
  void *_Dst;
  uint *in_RDX;
  
  _Size = SUB168(ZEXT816(4) * ZEXT416(*in_RDX),0);
  if (SUB168(ZEXT816(4) * ZEXT416(*in_RDX),8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = operator_new__(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    *(void **)param_1 = _Dst;
    return (ScopedPtr<int,pma::Delete<int_[0],int_[0]>_>)(int *)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (ScopedPtr<int,pma::Delete<int_[0],int_[0]>_>)(int *)param_1;
}

// makeScoped<int_[0],pma::New,pma::Delete,unsigned_long> @ 14c45dce0

ScopedPtr<int_[0],pma::Delete<int_[0],int_[0]>_> __cdecl
pma::makeScoped<int_[0],pma::New,pma::Delete,unsigned_long>(ulong *param_1)

{
  ulong64 _Size;
  void *_Dst;
  uint *in_RDX;
  
  _Size = SUB168(ZEXT816(4) * ZEXT416(*in_RDX),0);
  if (SUB168(ZEXT816(4) * ZEXT416(*in_RDX),8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = operator_new__(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    *(void **)param_1 = _Dst;
    return (ScopedPtr<int_[0],pma::Delete<int_[0],int_[0]>_>)(int *)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (ScopedPtr<int_[0],pma::Delete<int_[0],int_[0]>_>)(int *)param_1;
}

// makeScoped<int,int> @ 14c45dd60

ScopedPtr<int,pma::Delete<int,int>_> __cdecl pma::makeScoped<int,int>(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_RDX;
  
  puVar1 = ::operator_new(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *in_RDX;
    *(undefined4 **)param_1 = puVar1;
    return (ScopedPtr<int,pma::Delete<int,int>_>)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (ScopedPtr<int,pma::Delete<int,int>_>)param_1;
}

// makeScoped<int,pma::New<int,int>,pma::Delete<int,int>,int,int> @ 14c45ddb0

ScopedPtr<int,pma::Delete<int,int>_> __cdecl
pma::makeScoped<int,pma::New<int,int>,pma::Delete<int,int>,int,int>(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_RDX;
  
  puVar1 = ::operator_new(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *in_RDX;
    *(undefined4 **)param_1 = puVar1;
    return (ScopedPtr<int,pma::Delete<int,int>_>)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (ScopedPtr<int,pma::Delete<int,int>_>)param_1;
}

// makeScoped<int,pma::New,pma::Delete,int> @ 14c45de00

ScopedPtr<int,pma::Delete<int,int>_> __cdecl
pma::makeScoped<int,pma::New,pma::Delete,int>(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_RDX;
  
  puVar1 = ::operator_new(4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *in_RDX;
    *(undefined4 **)param_1 = puVar1;
    return (ScopedPtr<int,pma::Delete<int,int>_>)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (ScopedPtr<int,pma::Delete<int,int>_>)param_1;
}

// ScopedPtr<int,std::function<void___cdecl(int_*)>_> @ 14c45de50

ScopedPtr<int,std::function<void___cdecl(int_*)>_> * __thiscall
pma::ScopedPtr<int,std::function<void___cdecl(int_*)>_>::
ScopedPtr<int,std::function<void___cdecl(int_*)>_>
          (ScopedPtr<int,std::function<void___cdecl(int_*)>_> *this,int *param_1,
          function<void___cdecl(int_*)> *param_2)

{
  function<void___cdecl(int_*)> *pfVar1;
  longlong lVar2;
  
  this->_padding_ = 0;
  pfVar1 = *(function<void___cdecl(int_*)> **)&param_2->field_0x38;
  if (pfVar1 != (function<void___cdecl(int_*)> *)0x0) {
    if (pfVar1 == param_2) {
      lVar2 = (**(code **)(*(longlong *)pfVar1 + 8))(pfVar1,this);
      this->_padding_ = lVar2;
      pfVar1 = *(function<void___cdecl(int_*)> **)&param_2->field_0x38;
      if (pfVar1 != (function<void___cdecl(int_*)> *)0x0) {
        (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != param_2);
        *(undefined8 *)&param_2->field_0x38 = 0;
      }
    }
    else {
      this->_padding_ = (longlong)pfVar1;
      *(undefined8 *)&param_2->field_0x38 = 0;
    }
  }
  this->ptr = param_1;
  return this;
}

// ~Base @ 14c45dee0

void __thiscall pmatests::`anonymous_namespace'::Base::~Base(void *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c45def0

void * __thiscall
pmatests::`anonymous_namespace'::Base::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c45df20

void * __thiscall
pmatests::`anonymous_namespace'::Derived::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Copy @ 14c45df50

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,int_*>::
_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,int_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Copy @ 14c45df70

_Func_base<void,pmatests::_anonymous_namespace_::Base_*> * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,pmatests::Base_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Copy @ 14c45df90

_Func_base<void,pmatests::_anonymous_namespace_::Base_*> * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,pmatests::Base_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Delete_this @ 14c45dfb0

void __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,int_*>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14c45dfd0

void __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14c45dff0

void __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Do_call @ 14c45e010

void __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,int_*>::
_Do_call(void *this,int **param_1)

{
  ::operator_delete(*param_1,4);
  **(longlong **)((longlong)this + 8) = **(longlong **)((longlong)this + 8) + 1;
  return;
}

// _Do_call @ 14c45e040

void __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Do_call(void *this,Base **param_1)

{
  Base *pBVar1;
  
  pBVar1 = *param_1;
  if (pBVar1 != (Base *)0x0) {
    (**(code **)*pBVar1)(pBVar1,1);
  }
  **(longlong **)((longlong)this + 8) = **(longlong **)((longlong)this + 8) + 1;
  return;
}

// _Do_call @ 14c45e070

void __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Do_call(void *this,Base **param_1)

{
  Base *pBVar1;
  
  pBVar1 = *param_1;
  if (pBVar1 != (Base *)0x0) {
    (**(code **)*pBVar1)(pBVar1,1);
  }
  **(longlong **)((longlong)this + 8) = **(longlong **)((longlong)this + 8) + 1;
  return;
}

// _Get @ 14c45e0a0

void * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,int_*>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14c45e0b0

void * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14c45e0c0

void * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14c45e0d0

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,int_*>::
_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,int_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c45e0f0

_Func_base<void,pmatests::_anonymous_namespace_::Base_*> * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,pmatests::Base_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c45e110

_Func_base<void,pmatests::_anonymous_namespace_::Base_*> * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::`3'::<lambda_1>,void,pmatests::Base_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Swap @ 14c45e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
std::_Func_class<void,pmatests::`anonymous_namespace'::Base_*>::_Swap
          (_Func_class<void,pmatests::_anonymous_namespace_::Base_*> *this,
          _Func_class<void,pmatests::_anonymous_namespace_::Base_*> *param_1)

{
  _Func_base<void,pmatests::_anonymous_namespace_::Base_*> *p_Var1;
  undefined1 auStack_88 [32];
  _Func_base<void,pmatests::_anonymous_namespace_::Base_*> local_68 [7];
  _Func_base<void,pmatests::_anonymous_namespace_::Base_*> *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  p_Var1 = (this->_Mystorage)._Ptrs[7];
  if ((p_Var1 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)this) &&
     ((param_1->_Mystorage)._Ptrs[7] !=
      (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)param_1)) {
    (this->_Mystorage)._Ptrs[7] = (param_1->_Mystorage)._Ptrs[7];
    (param_1->_Mystorage)._Ptrs[7] = p_Var1;
    return;
  }
  local_30 = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0;
  if (p_Var1 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)this) {
      local_30 = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)
                 (**(code **)((longlong)*p_Var1 + 8))(p_Var1,local_68);
      p_Var1 = (this->_Mystorage)._Ptrs[7];
      if (p_Var1 == (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0)
      goto LAB_14c45e1c3;
      (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                (p_Var1,p_Var1 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)this);
      p_Var1 = local_30;
    }
    local_30 = p_Var1;
    (this->_Mystorage)._Ptrs[7] = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0;
  }
LAB_14c45e1c3:
  p_Var1 = (param_1->_Mystorage)._Ptrs[7];
  if (p_Var1 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)param_1) {
      p_Var1 = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)
               (**(code **)(*(longlong *)&p_Var1->field_0x0 + 8))(p_Var1,this);
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      p_Var1 = (param_1->_Mystorage)._Ptrs[7];
      if (p_Var1 == (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0)
      goto LAB_14c45e209;
      (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                (p_Var1,p_Var1 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)
                                  param_1);
    }
    else {
      (this->_Mystorage)._Ptrs[7] = p_Var1;
    }
    (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0
    ;
  }
LAB_14c45e209:
  if (local_30 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
    if (local_30 == local_68) {
      p_Var1 = (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)
               (**(code **)((longlong)*local_30 + 8))(local_30,param_1);
      (param_1->_Mystorage)._Ptrs[7] = p_Var1;
      if (local_30 != (_Func_base<void,pmatests::_anonymous_namespace_::Base_*> *)0x0) {
        (**(code **)((longlong)*local_30 + 0x20))(local_30,local_30 != local_68);
      }
    }
    else {
      (param_1->_Mystorage)._Ptrs[7] = local_30;
    }
  }
  return;
}

// _Target_type @ 14c45e270

type_info * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_CustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,int_*>::
_Target_type(void *this)

{
  return (type_info *)
         &`private:_virtual_void___cdecl_ScopedPtrTest_CustomDestroyer_Test::TestBody(void)___ptr64'
          ::__l3::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14c45e280

type_info * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`private:_virtual_void___cdecl_ScopedPtrTest_MoveAssignWithCustomDestroyer_Test::TestBody(void)___ptr64'
          ::__l3::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14c45e290

type_info * __thiscall
std::
_Func_impl_no_alloc<`ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody'::__l3::<lambda_1>,void,pmatests::`anonymous_namespace'::Base_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`private:_virtual_void___cdecl_ScopedPtrTest_MoveConstructWithCustomDestroyer_Test::TestBody(void)___ptr64'
          ::__l3::<lambda_1>::RTTI_Type_Descriptor;
}

