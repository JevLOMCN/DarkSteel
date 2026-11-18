// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 23

// test_info_'' @ 141325790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test::
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
              ___7__TestFactoryImpl_VArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0xa5);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0xa5);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x89;
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
  pcVar6[0x88] = ::s_C__Workspace_UnrealEngine_Engin[0x88];
  pcVar6[0x89] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000089;
  uStack_40 = _UNK_152881418;
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
  *(undefined2 *)(local_58._Ptr + 0x88) = *(undefined2 *)(pcVar6 + 0x88);
  local_38 = 0xa5;
  ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArenaMemoryResourceTest","EnsureAlignmentRequirementsAreHonored",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 1413259d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test::test_info___
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
              ___7__TestFactoryImpl_VArenaMemoryResourceTest_EnsureArenaServesAllocations_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0x4f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0x4f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x89;
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
  pcVar6[0x88] = ::s_C__Workspace_UnrealEngine_Engin[0x88];
  pcVar6[0x89] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000089;
  uStack_40 = _UNK_152881418;
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
  *(undefined2 *)(local_58._Ptr + 0x88) = *(undefined2 *)(pcVar6 + 0x88);
  local_38 = 0x4f;
  ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArenaMemoryResourceTest","EnsureArenaServesAllocations",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 141325c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0x6f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0x6f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x89;
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
  pcVar6[0x88] = ::s_C__Workspace_UnrealEngine_Engin[0x88];
  pcVar6[0x89] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000089;
  uStack_40 = _UNK_152881418;
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
  *(undefined2 *)(local_58._Ptr + 0x88) = *(undefined2 *)(pcVar6 + 0x88);
  local_38 = 0x6f;
  ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArenaMemoryResourceTest","EnsureDeallocationAreNoop",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 141325e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test::test_info___
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
              ___7__TestFactoryImpl_VArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0x80);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,0x80);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x89;
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
  pcVar6[0x88] = ::s_C__Workspace_UnrealEngine_Engin[0x88];
  pcVar6[0x89] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000089;
  uStack_40 = _UNK_152881418;
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
  *(undefined2 *)(local_58._Ptr + 0x88) = *(undefined2 *)(pcVar6 + 0x88);
  local_38 = 0x80;
  ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArenaMemoryResourceTest","EnsureGrowthFactorIsHonored",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c460b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test::TestBody
          (ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 auStackY_f8 [32];
  AssertHelper local_c8;
  AssertionResult local_c0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b0;
  ArenaMemoryResource local_a8;
  MemoryResource local_98;
  ulong64 local_90;
  ulong64 local_88 [10];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98 = (MemoryResource)&TransparentMemoryResource::_vftable_;
  local_90 = 0;
  local_88[0] = 0;
  local_88[5] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_c8.data_._0_4_ = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  testing::AssertionSuccess(&local_c0);
  uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
  if (local_c0.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
    if (local_c0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
      }
    }
    iVar11 = 0x51;
  }
  else {
    if (local_c0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    local_c8.data_._0_4_ = 0;
    if (local_88[0] == 0) {
      testing::AssertionSuccess(&local_c0);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_c0,"upstream.deallocationCount","0ul",local_88,(ulong *)&local_c8);
    }
    if (local_c0.success_ != false) {
      if (local_c0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_c0.message_._Mypair._Myval2,0x20);
      }
      local_88[6] = 0x100;
      local_88[7] = 0;
      pma::ArenaMemoryResource::ArenaMemoryResource(&local_a8,0x100,&local_98);
      local_c0.success_ = local_90 != 0;
      local_c0.message_._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      if (local_90 == 0) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
        pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_38,&local_c0,"upstream.allocationCount > 0ul","false","true");
        if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
          pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar6->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_b0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                            ,0x59,(char *)pbVar6);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
        if (0xf < uStack_20) {
          pvVar2 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
          uVar10 = uStack_20 + 1;
          pvVar8 = pvVar2;
          if (0xfff < uVar10) {
            pvVar8 = *(void **)((longlong)pvVar2 + -8);
            uVar10 = uStack_20 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(pvVar8,uVar10);
        }
        local_b0._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )CONCAT44(local_c8.data_._4_4_,local_c8.data_._0_4_);
        local_28 = ___xmm_000000000000000f0000000000000000;
        uStack_20 = _UNK_15076add8;
        local_38._Buf[0] = '\0';
        goto LAB_14c461028;
      }
      local_c8.data_._0_4_ = 0;
      if (local_88[0] == 0) {
        testing::AssertionSuccess(&local_c0);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  (&local_c0,"upstream.deallocationCount","0ul",local_88,(ulong *)&local_c8);
      }
      uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
      if (local_c0.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
        if (local_c0.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
            pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
            iVar11 = 0x5a;
            goto LAB_14c461078;
          }
        }
        iVar11 = 0x5a;
LAB_14c461078:
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_b0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                            ,iVar11,pcVar7);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
        local_b0._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )CONCAT44(local_c8.data_._4_4_,local_c8.data_._0_4_);
LAB_14c461028:
        if (local_b0._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)
                    &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0._Mypair._Myval2)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_b0._Mypair._Myval2 + 4));
          (**(code **)*puVar9)(puVar9,1);
        }
      }
      else {
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        local_c8.data_._0_4_ = 1;
        if (local_88[7] == 1) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.expectedAllocation.count","1ul",local_88 + 7,
                     (ulong *)&local_c8);
        }
        uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
              iVar11 = 0x5b;
              goto LAB_14c461078;
            }
          }
          iVar11 = 0x5b;
          goto LAB_14c461078;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        local_90 = 0;
        pma::ArenaMemoryResource::allocate(&local_a8,0x80,4);
        local_c8.data_._0_4_ = 0;
        if (local_90 == 0) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.allocationCount","0ul",&local_90,(ulong *)&local_c8);
        }
        uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
              iVar11 = 0x61;
              goto LAB_14c461078;
            }
          }
          iVar11 = 0x61;
          goto LAB_14c461078;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        local_c8.data_._0_4_ = 0;
        if (local_88[0] == 0) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.deallocationCount","0ul",local_88,(ulong *)&local_c8);
        }
        uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
              iVar11 = 0x62;
              goto LAB_14c461078;
            }
          }
          iVar11 = 0x62;
          goto LAB_14c461078;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        pma::ArenaMemoryResource::allocate(&local_a8,0x80,4);
        local_c8.data_._0_4_ = 0;
        if (local_90 == 0) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.allocationCount","0ul",&local_90,(ulong *)&local_c8);
        }
        uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
              iVar11 = 0x65;
              goto LAB_14c461078;
            }
          }
          iVar11 = 0x65;
          goto LAB_14c461078;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        local_c8.data_._0_4_ = 0;
        if (local_88[0] == 0) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.deallocationCount","0ul",local_88,(ulong *)&local_c8);
        }
        uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
              iVar11 = 0x66;
              goto LAB_14c461078;
            }
          }
          iVar11 = 0x66;
          goto LAB_14c461078;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        pma::ArenaMemoryResource::allocate(&local_a8,1,1);
        local_c0.success_ = local_90 != 0;
        local_c0.message_._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        if (local_90 == 0) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_38,&local_c0,"upstream.allocationCount > 0ul","false","true");
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          pAVar5 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_b0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                              ,0x6a,(char *)pbVar6);
          testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
          if (0xf < uStack_20) {
            pvVar2 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
            uVar10 = uStack_20 + 1;
            pvVar8 = pvVar2;
            if (0xfff < uVar10) {
              pvVar8 = *(void **)((longlong)pvVar2 + -8);
              uVar10 = uStack_20 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete(pvVar8,uVar10);
          }
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          local_b0._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )CONCAT44(local_c8.data_._4_4_,local_c8.data_._0_4_);
          local_38._Buf[0] = '\0';
          goto LAB_14c461028;
        }
        local_c8.data_._0_4_ = 0;
        if (local_88[0] == 0) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.deallocationCount","0ul",local_88,(ulong *)&local_c8);
        }
        uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          iVar11 = 0x6b;
          goto LAB_14c461078;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        local_c8.data_._0_4_ = 2;
        if (local_88[7] == 2) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_c0,"upstream.expectedAllocation.count","2ul",local_88 + 7,
                     (ulong *)&local_c8);
        }
        if (local_c0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_b0);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar5 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_c8,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                              ,0x6c,pcVar7);
          testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
          testing::internal::AssertHelper::~AssertHelper(&local_c8);
          goto LAB_14c461028;
        }
      }
      uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
      if (local_c0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      pma::ArenaMemoryResource::~ArenaMemoryResource(&local_a8);
      goto LAB_14c461494;
    }
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
    if (local_c0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_c0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_c0.message_._Mypair._Myval2;
        iVar11 = 0x52;
        goto LAB_14c46142b;
      }
    }
    iVar11 = 0x52;
  }
LAB_14c46142b:
  pAVar5 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     ((AssertHelper *)&local_b0,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,iVar11,pcVar7);
  testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b0);
  plVar1 = (longlong *)CONCAT44(local_c8.data_._4_4_,local_c8.data_._0_4_);
  if (plVar1 != (longlong *)0x0) {
    puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
    (**(code **)*puVar9)(puVar9,1);
  }
  uVar3._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
  if (local_c0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_c0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
LAB_14c461494:
  pma::MemoryResource::~MemoryResource(&local_98);
  return;
}

// `scalar_deleting_destructor' @ 14c4614d0

void * __thiscall
ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test::_scalar_deleting_destructor_
          (ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c461510

Test * __thiscall
testing::internal::TestFactoryImpl<ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test>::
CreateTest(TestFactoryImpl<ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c461550

void * __thiscall
testing::internal::TestFactoryImpl<ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<ArenaMemoryResourceTest_EnsureArenaServesAllocations_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c461590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test::TestBody
          (ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 auStackY_d8 [32];
  AssertHelper local_a8;
  AssertionResult local_a0;
  ArenaMemoryResource local_90;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_80;
  MemoryResource local_78;
  undefined8 local_70;
  ulong64 local_68 [10];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78 = (MemoryResource)&TransparentMemoryResource::_vftable_;
  local_70 = 0;
  local_68[0] = 0;
  local_68[5] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_a8.data_._0_4_ = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  testing::AssertionSuccess(&local_a0);
  uVar2._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
  if (local_a0.success_ == false) {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_a0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_a0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_a0.message_._Mypair._Myval2;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_80,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                        ,0x71,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_80);
    plVar1 = (longlong *)CONCAT44(local_a8.data_._4_4_,local_a8.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    pma::ArenaMemoryResource::ArenaMemoryResource(&local_90,0x100,&local_78);
    pvVar3 = pma::ArenaMemoryResource::allocate(&local_90,0x80,4);
    pvVar4 = pma::ArenaMemoryResource::allocate(&local_90,0x40,4);
    pvVar5 = pma::ArenaMemoryResource::allocate(&local_90,0x20,4);
    pma::ArenaMemoryResource::deallocate(&local_90,pvVar5,0x20,4);
    pma::ArenaMemoryResource::deallocate(&local_90,pvVar4,0x40,4);
    pma::ArenaMemoryResource::deallocate(&local_90,pvVar3,0x80,4);
    local_a8.data_._0_4_ = 0;
    if (local_68[0] == 0) {
      testing::AssertionSuccess(&local_a0);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_a0,"upstream.deallocationCount","0ul",local_68,(ulong *)&local_a8);
    }
    if (local_a0.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_80);
      if (local_a0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_a0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
          pcVar8 = *(char **)local_a0.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                          ,0x7d,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper(&local_a8);
      if (local_80._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar9 = (undefined8 *)
                 ((longlong)&(local_80._Myval2)->field_0x0 +
                 (longlong)*(int *)(*(longlong *)local_80._Myval2 + 4));
        (**(code **)*puVar9)(puVar9,1);
      }
    }
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
    }
    pma::ArenaMemoryResource::~ArenaMemoryResource(&local_90);
  }
  pma::MemoryResource::~MemoryResource(&local_78);
  return;
}

// `scalar_deleting_destructor' @ 14c461880

void * __thiscall
ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test::_scalar_deleting_destructor_
          (ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c4618c0

Test * __thiscall
testing::internal::TestFactoryImpl<ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test>::
CreateTest(TestFactoryImpl<ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c461900

void * __thiscall
testing::internal::TestFactoryImpl<ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<ArenaMemoryResourceTest_EnsureDeallocationAreNoop_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c461940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test::TestBody
          (ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  undefined1 auStackY_118 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_e8;
  AssertionResult local_e0;
  AssertHelper local_d0;
  ArenaMemoryResource local_c8;
  MemoryResource local_b8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_b0;
  ulong64 local_a8 [10];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b8 = (MemoryResource)&TransparentMemoryResource::_vftable_;
  local_b0._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_a8[0] = 0;
  local_a8[5] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_e8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )((ulonglong)local_e8._Mypair._Myval2 & 0xffffffff00000000);
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  testing::AssertionSuccess(&local_e0);
  uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
  if (local_e0.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
    if (local_e0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
      }
    }
    iVar11 = 0x82;
  }
  else {
    if (local_e0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_e8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )((ulonglong)local_e8._Mypair._Myval2 & 0xffffffff00000000);
    if (local_a8[0] == 0) {
      testing::AssertionSuccess(&local_e0);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_e0,"upstream.deallocationCount","0ul",local_a8,(ulong *)&local_e8);
    }
    uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
    if (local_e0.success_ != false) {
      if (local_e0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      local_a8[6] = 0x100;
      local_a8[7] = 0;
      pma::ArenaMemoryResource::ArenaMemoryResource(&local_c8,0x100,0x80,__real_40400000,&local_b8);
      local_e8._Mypair._Myval2._0_4_ = 1;
      if (local_a8[7] == 1) {
        testing::AssertionSuccess(&local_e0);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  (&local_e0,"upstream.expectedAllocation.count","1ul",local_a8 + 7,
                   (ulong *)&local_e8);
      }
      uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
      if (local_e0.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
        if (local_e0.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
            pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
            iVar11 = 0x88;
            goto LAB_14c461fb1;
          }
        }
        iVar11 = 0x88;
LAB_14c461fb1:
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_d0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                            ,iVar11,pcVar8);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
        testing::internal::AssertHelper::~AssertHelper(&local_d0);
        local_d0.data_ = (AssertHelperData *)local_e8._Mypair._Myval2;
LAB_14c461f5f:
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_d0.data_
            != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)
                    &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.data_)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_d0.data_ + 4));
          (**(code **)*puVar9)(puVar9,1);
        }
      }
      else {
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        _Var3._Myval2 = local_b0._Myval2;
        local_e8._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_b0._Myval2;
        pma::ArenaMemoryResource::allocate(&local_c8,0x100,4);
        if (_Var3._Myval2 == local_b0._Myval2) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     (ulong64 *)&local_b0);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     (ulong64 *)&local_e8);
          testing::internal::EqFailure
                    (&local_e0,"prevAllocationCount","upstream.allocationCount",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     false);
          if (0xf < uStack_40) {
            pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
            uVar10 = uStack_40 + 1;
            pvVar6 = pvVar1;
            if (0xfff < uVar10) {
              pvVar6 = *(void **)((longlong)pvVar1 + -8);
              uVar10 = uStack_40 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))
              goto LAB_14c461bc6;
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
LAB_14c461bc6:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar10);
          }
        }
        uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar8 = "";
          }
          else {
            pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
              iVar11 = 0x8d;
              goto LAB_14c461fb1;
            }
          }
          iVar11 = 0x8d;
          goto LAB_14c461fb1;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_a8[6] = 0x80;
        local_a8[7] = 0;
        pma::ArenaMemoryResource::allocate(&local_c8,0x80,4);
        local_e8._Mypair._Myval2._0_4_ = 1;
        if (local_a8[7] == 1) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_e0,"upstream.expectedAllocation.count","1ul",local_a8 + 7,
                     (ulong *)&local_e8);
        }
        uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar8 = "";
          }
          else {
            pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
              iVar11 = 0x92;
              goto LAB_14c461fb1;
            }
          }
          iVar11 = 0x92;
          goto LAB_14c461fb1;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_a8[6] = 0x180;
        local_a8[7] = 0;
        pma::ArenaMemoryResource::allocate(&local_c8,0x100,4);
        local_e8._Mypair._Myval2._0_4_ = 1;
        if (local_a8[7] == 1) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_e0,"upstream.expectedAllocation.count","1ul",local_a8 + 7,
                     (ulong *)&local_e8);
        }
        uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar8 = "";
          }
          else {
            pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
              iVar11 = 0x97;
              goto LAB_14c461fb1;
            }
          }
          iVar11 = 0x97;
          goto LAB_14c461fb1;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        _Var3._Myval2 = local_b0._Myval2;
        local_e8._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_b0._Myval2;
        pma::ArenaMemoryResource::allocate(&local_c8,0x40,4);
        pma::ArenaMemoryResource::allocate(&local_c8,0x40,4);
        if (_Var3._Myval2 == local_b0._Myval2) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     (ulong64 *)&local_b0);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     (ulong64 *)&local_e8);
          testing::internal::EqFailure
                    (&local_e0,"prevAllocationCount","upstream.allocationCount",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     false);
          if (0xf < uStack_40) {
            pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
            uVar10 = uStack_40 + 1;
            pvVar6 = pvVar1;
            if (0xfff < uVar10) {
              pvVar6 = *(void **)((longlong)pvVar1 + -8);
              uVar10 = uStack_40 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))
              goto LAB_14c461e23;
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
LAB_14c461e23:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar10);
          }
        }
        uVar2._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar8 = "";
          }
          else {
            pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          iVar11 = 0x9d;
          goto LAB_14c461fb1;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_a8[6] = 0x480;
        local_a8[7] = 0;
        pma::ArenaMemoryResource::allocate(&local_c8,0x100,4);
        local_e8._Mypair._Myval2._0_4_ = 1;
        if (local_a8[7] == 1) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_e0,"upstream.expectedAllocation.count","1ul",local_a8 + 7,
                     (ulong *)&local_e8);
        }
        if (local_e0.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_d0);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar8 = "";
          }
          else {
            pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar5 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_e8,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                              ,0xa2,pcVar8);
          testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_e8);
          goto LAB_14c461f5f;
        }
      }
      if (local_e0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_e0.message_._Mypair._Myval2,0x20);
      }
      pma::ArenaMemoryResource::~ArenaMemoryResource(&local_c8);
      goto LAB_14c4621b2;
    }
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_e8);
    if (local_e0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_e0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_e0.message_._Mypair._Myval2;
        iVar11 = 0x83;
        goto LAB_14c462145;
      }
    }
    iVar11 = 0x83;
  }
LAB_14c462145:
  pAVar5 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_d0,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                      ,iVar11,pcVar8);
  testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_d0);
  if (local_e8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar9 = (undefined8 *)
             ((longlong)local_e8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_e8._Mypair._Myval2 + 4));
    (**(code **)*puVar9)(puVar9,1);
  }
  if (local_e0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_e0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_e0.message_._Mypair._Myval2,0x20);
  }
LAB_14c4621b2:
  pma::MemoryResource::~MemoryResource(&local_b8);
  return;
}

// `scalar_deleting_destructor' @ 14c4621f0

void * __thiscall
ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test::_scalar_deleting_destructor_
          (ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c462230

Test * __thiscall
testing::internal::TestFactoryImpl<ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test>::
CreateTest(TestFactoryImpl<ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c462270

void * __thiscall
testing::internal::TestFactoryImpl<ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<ArenaMemoryResourceTest_EnsureGrowthFactorIsHonored_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c4622b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test::TestBody
          (ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  void *pvVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStackY_d8 [32];
  Message local_a8;
  AssertHelper local_a0;
  AssertionResult local_98;
  ArenaMemoryResource local_88;
  MemoryResource local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78 = (MemoryResource)&TransparentMemoryResource::_vftable_;
  local_40 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  pma::ArenaMemoryResource::ArenaMemoryResource(&local_88,0x400,&local_78);
  local_a8.ss_._Mypair._Myval2._0_4_ = 0;
  pvVar3 = pma::ArenaMemoryResource::allocate(&local_88,7,4);
  local_a0.data_ = (AssertHelperData *)(ulonglong)((uint)pvVar3 & 3);
  if (((ulonglong)pvVar3 & 3) == 0) {
    testing::AssertionSuccess(&local_98);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_98,"p1 % 4ul","0ul",(ulong64 *)&local_a0,(ulong *)&local_a8);
  }
  uVar2._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
  if (local_98.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message(&local_a8);
    if (local_98.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_98.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_98.message_._Mypair._Myval2;
      }
    }
    iVar7 = 0xaa;
  }
  else {
    if (local_98.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_a8.ss_._Mypair._Myval2._0_4_ = 0;
    pvVar3 = pma::ArenaMemoryResource::allocate(&local_88,0xd,4);
    local_a0.data_ = (AssertHelperData *)(ulonglong)((uint)pvVar3 & 3);
    if (((ulonglong)pvVar3 & 3) == 0) {
      testing::AssertionSuccess(&local_98);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_98,"p2 % 4ul","0ul",(ulong64 *)&local_a0,(ulong *)&local_a8);
    }
    uVar2._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
    if (local_98.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message(&local_a8);
      if (local_98.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_98.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_98.message_._Mypair._Myval2;
          iVar7 = 0xad;
          goto LAB_14c46259f;
        }
      }
      iVar7 = 0xad;
    }
    else {
      if (local_98.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      local_a8.ss_._Mypair._Myval2._0_4_ = 0;
      pvVar3 = pma::ArenaMemoryResource::allocate(&local_88,0x1b,0x10);
      local_a0.data_ = (AssertHelperData *)(ulonglong)((uint)pvVar3 & 0xf);
      if (((ulonglong)pvVar3 & 0xf) == 0) {
        testing::AssertionSuccess(&local_98);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  (&local_98,"p3 % 16ul","0ul",(ulong64 *)&local_a0,(ulong *)&local_a8);
      }
      uVar2._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
      if (local_98.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message(&local_a8);
        if (local_98.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_98.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_98.message_._Mypair._Myval2;
            iVar7 = 0xb0;
            goto LAB_14c46259f;
          }
        }
        iVar7 = 0xb0;
      }
      else {
        if (local_98.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_98.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_a8.ss_._Mypair._Myval2._0_4_ = 0;
        pvVar3 = pma::ArenaMemoryResource::allocate(&local_88,0x29,0x10);
        local_a0.data_ = (AssertHelperData *)(ulonglong)((uint)pvVar3 & 0xf);
        if (((ulonglong)pvVar3 & 0xf) == 0) {
          testing::AssertionSuccess(&local_98);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_98,"p4 % 16ul","0ul",(ulong64 *)&local_a0,(ulong *)&local_a8);
        }
        if (local_98.success_ != false) goto LAB_14c4625ea;
        pMVar4 = (Message *)testing::Message::Message(&local_a8);
        if (local_98.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_98.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_98.message_._Mypair._Myval2;
            iVar7 = 0xb3;
            goto LAB_14c46259f;
          }
        }
        iVar7 = 0xb3;
      }
    }
  }
LAB_14c46259f:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_a0,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\resources\\TestArenaMemoryResource.cpp"
                       ,iVar7,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_a0);
  plVar1 = (longlong *)
           CONCAT44(local_a8.ss_._Mypair._Myval2._4_4_,local_a8.ss_._Mypair._Myval2._0_4_);
  if (plVar1 != (longlong *)0x0) {
    puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c4625ea:
  if (local_98.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_98.message_._Mypair._Myval2);
    ::operator_delete((void *)local_98.message_._Mypair._Myval2,0x20);
  }
  pma::ArenaMemoryResource::~ArenaMemoryResource(&local_88);
  pma::MemoryResource::~MemoryResource(&local_78);
  return;
}

// `scalar_deleting_destructor' @ 14c462650

void * __thiscall
ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test::_scalar_deleting_destructor_
          (ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c462690

Test * __thiscall
testing::internal::
TestFactoryImpl<ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test>::CreateTest
          (TestFactoryImpl<ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test> *this
          )

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4626d0

void * __thiscall
testing::internal::
TestFactoryImpl<ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test> *this
          ,uint param_1)

{
  *this = (TestFactoryImpl<ArenaMemoryResourceTest_EnsureAlignmentRequirementsAreHonored_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c462710

void * __thiscall
_anon_97C83A59::TransparentMemoryResource::_scalar_deleting_destructor_
          (TransparentMemoryResource *this,uint param_1)

{
  pma::MemoryResource::~MemoryResource((MemoryResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// allocate @ 14c462750

void * __thiscall
_anon_97C83A59::TransparentMemoryResource::allocate
          (TransparentMemoryResource *this,ulong64 param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  void *pvVar2;
  
  (this->lastAllocation).size = param_1;
  (this->lastAllocation).alignment = param_2;
  this->allocationCount = this->allocationCount + 1;
  if (param_1 == (this->expectedAllocation).size) {
    puVar1 = &(this->expectedAllocation).count;
    *puVar1 = *puVar1 + 1;
  }
  pvVar2 = pma::DefaultMemoryResource::allocate((DefaultMemoryResource *)this,param_1,param_2);
  return pvVar2;
}

// deallocate @ 14c462780

void __thiscall
_anon_97C83A59::TransparentMemoryResource::deallocate
          (TransparentMemoryResource *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  ulong64 *puVar1;
  
  (this->lastDeallocation).ptr = param_1;
  (this->lastDeallocation).size = param_2;
  (this->lastDeallocation).alignment = param_3;
  this->deallocationCount = this->deallocationCount + 1;
  if (param_2 == (this->expectedDeallocation).size) {
    puVar1 = &(this->expectedDeallocation).count;
    *puVar1 = *puVar1 + 1;
  }
  pma::DefaultMemoryResource::deallocate((DefaultMemoryResource *)this,param_1,param_2,param_3);
  return;
}

