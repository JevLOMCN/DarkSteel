// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 38

// test_info_'' @ 1413217b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODConstraint_ApplyTo_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODConstraint_ApplyTo_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x52);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x52);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x79;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  pcVar6[0x78] = ::s_C__Workspace_UnrealEngine_Engin[0x78];
  pcVar6[0x79] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000079;
  uStack_40 = _UNK_15287bb88;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x78) = *(undefined2 *)(pcVar6 + 0x78);
  local_38 = 0x52;
  LODConstraint_ApplyTo_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODConstraint","ApplyTo",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413219d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODConstraint_ClampTo_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODConstraint_ClampTo_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x4b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x4b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x79;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  pcVar6[0x78] = ::s_C__Workspace_UnrealEngine_Engin[0x78];
  pcVar6[0x79] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000079;
  uStack_40 = _UNK_15287bb88;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x78) = *(undefined2 *)(pcVar6 + 0x78);
  local_38 = 0x4b;
  LODConstraint_ClampTo_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODConstraint","ClampTo",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141321bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODConstraint_GetLODCount_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODConstraint_GetLODCount_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x1f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x1f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x79;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  pcVar6[0x78] = ::s_C__Workspace_UnrealEngine_Engin[0x78];
  pcVar6[0x79] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000079;
  uStack_40 = _UNK_15287bb88;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x78) = *(undefined2 *)(pcVar6 + 0x78);
  local_38 = 0x1f;
  LODConstraint_GetLODCount_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODConstraint","GetLODCount",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141321e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODConstraint_GetMaxLOD_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODConstraint_GetMaxLOD_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,7);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,7);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x79;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  pcVar6[0x78] = ::s_C__Workspace_UnrealEngine_Engin[0x78];
  pcVar6[0x79] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000079;
  uStack_40 = _UNK_15287bb88;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x78) = *(undefined2 *)(pcVar6 + 0x78);
  local_38 = 7;
  LODConstraint_GetMaxLOD_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODConstraint","GetMaxLOD",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141322030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODConstraint_GetMinLOD_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODConstraint_GetMinLOD_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x13);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x13);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x79;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  pcVar6[0x78] = ::s_C__Workspace_UnrealEngine_Engin[0x78];
  pcVar6[0x79] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000079;
  uStack_40 = _UNK_15287bb88;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x78) = *(undefined2 *)(pcVar6 + 0x78);
  local_38 = 0x13;
  LODConstraint_GetMinLOD_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODConstraint","GetMinLOD",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141322250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODConstraint_HasImpactOn_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODConstraint_HasImpactOn_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x2b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                      ,0x2b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x79;
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
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  pcVar6[0x78] = ::s_C__Workspace_UnrealEngine_Engin[0x78];
  pcVar6[0x79] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000079;
  uStack_40 = _UNK_15287bb88;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x78) = *(undefined2 *)(pcVar6 + 0x78);
  local_38 = 0x2b;
  LODConstraint_HasImpactOn_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODConstraint","HasImpactOn",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c334020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall LODConstraint_GetMaxLOD_Test::TestBody(LODConstraint_GetMaxLOD_Test *this)

{
  longlong *plVar1;
  ulong64 uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStackY_d8 [32];
  ushort local_a8 [4];
  AssertHelper local_a0;
  ArrayView<unsigned_short_const_> local_98;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_88;
  LODConstraint local_80;
  LODConstraint local_60;
  LODConstraint local_40;
  ushort local_20 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  dna::LODConstraint::LODConstraint(&local_60,0,7,(MemoryResource *)0x0);
  local_a0.data_._0_4_ = 0;
  local_a8[0] = dna::LODConstraint::getMaxLOD(&local_60);
  if (local_a8[0] == 0) {
    testing::AssertionSuccess((AssertionResult *)&local_98);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,int>
              ((AssertionResult *)&local_98,"lc1.getMaxLOD()","0",local_a8,(int *)&local_a0);
  }
  uVar2 = local_98.sz;
  if ((char)local_98.ptr == '\0') {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_a0);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_98.sz;
      if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                   *)local_98.sz)->_Myval2)._Myres) {
        pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                    *)local_98.sz)->_Myval2)._Bx._Ptr;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                        ,9,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_88);
    plVar1 = (longlong *)CONCAT44(local_a0.data_._4_4_,local_a0.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar6)(puVar6,1);
    }
    uVar2 = local_98.sz;
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
      ::operator_delete((void *)uVar2,0x20);
    }
  }
  else {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
      ::operator_delete((void *)uVar2,0x20);
    }
    dna::LODConstraint::LODConstraint(&local_80,2,5,(MemoryResource *)0x0);
    local_a0.data_._0_4_ = 2;
    local_a8[0] = dna::LODConstraint::getMaxLOD(&local_80);
    if (local_a8[0] == 2) {
      testing::AssertionSuccess((AssertionResult *)&local_98);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,int>
                ((AssertionResult *)&local_98,"lc2.getMaxLOD()","2",local_a8,(int *)&local_a0);
    }
    if ((char)local_98.ptr == '\0') {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_a0);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_98.sz;
        if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                     *)local_98.sz)->_Myval2)._Myres) {
          pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                      *)local_98.sz)->_Myval2)._Bx._Ptr;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                          ,0xc,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_88);
      plVar1 = (longlong *)CONCAT44(local_a0.data_._4_4_,local_a0.data_._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar6)(puVar6,1);
      }
      uVar2 = local_98.sz;
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)uVar2,0x20);
      }
      if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                  (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_80.lods._Mypair._Myval2._Myend -
                    (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
    }
    else {
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)local_98.sz,0x20);
      }
      local_20[0] = 1;
      local_20[1] = 3;
      local_20[2] = 4;
      local_98.ptr = local_20;
      local_98.sz = (ulong64)&DAT_00000003;
      dna::LODConstraint::LODConstraint(&local_40,&local_98,(MemoryResource *)0x0);
      local_a0.data_._0_4_ = 1;
      local_a8[0] = dna::LODConstraint::getMaxLOD(&local_40);
      if (local_a8[0] == 1) {
        testing::AssertionSuccess((AssertionResult *)&local_98);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned_short,int>
                  ((AssertionResult *)&local_98,"lc3.getMaxLOD()","1",local_a8,(int *)&local_a0);
      }
      uVar2 = local_98.sz;
      if ((char)local_98.ptr == '\0') {
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_88);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_98.sz;
          if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                       *)local_98.sz)->_Myval2)._Myres) {
            pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                        *)local_98.sz)->_Myval2)._Bx._Ptr;
          }
        }
        pAVar4 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_a0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                            ,0x10,pcVar5);
        testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
        testing::internal::AssertHelper::~AssertHelper(&local_a0);
        if (local_88._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar6 = (undefined8 *)
                   ((longlong)&(local_88._Myval2)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_88._Myval2 + 4));
          (**(code **)*puVar6)(puVar6,1);
        }
        uVar2 = local_98.sz;
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz)
          ;
          ::operator_delete((void *)uVar2,0x20);
        }
        if (local_40.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
          (**(code **)(*(longlong *)local_40.lods._Mypair._Myval1 + 0x10))
                    (local_40.lods._Mypair._Myval1,local_40.lods._Mypair._Myval2._Myfirst,
                     ((longlong)local_40.lods._Mypair._Myval2._Myend -
                      (longlong)local_40.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
          local_40.lods._Mypair._Myval2._Myend = (ushort *)0x0;
          local_40.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
          local_40.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
        }
        if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
          (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                    (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                     ((longlong)local_80.lods._Mypair._Myval2._Myend -
                      (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
          local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
          local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
          local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
        }
      }
      else {
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz)
          ;
          ::operator_delete((void *)uVar2,0x20);
        }
        if (local_40.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
          (**(code **)(*(longlong *)local_40.lods._Mypair._Myval1 + 0x10))
                    (local_40.lods._Mypair._Myval1,local_40.lods._Mypair._Myval2._Myfirst,
                     ((longlong)local_40.lods._Mypair._Myval2._Myend -
                      (longlong)local_40.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
          local_40.lods._Mypair._Myval2._Myend = (ushort *)0x0;
          local_40.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
          local_40.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
        }
        if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
          (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                    (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                     ((longlong)local_80.lods._Mypair._Myval2._Myend -
                      (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
          local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
          local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
          local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
        }
      }
    }
  }
  if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
              (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
               ((longlong)local_60.lods._Mypair._Myval2._Myend -
                (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c334520

void * __thiscall
LODConstraint_GetMaxLOD_Test::_scalar_deleting_destructor_
          (LODConstraint_GetMaxLOD_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c334560

Test * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_GetMaxLOD_Test>::CreateTest
          (TestFactoryImpl<LODConstraint_GetMaxLOD_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7LODConstraint_GetMaxLOD_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c3345a0

void * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_GetMaxLOD_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODConstraint_GetMaxLOD_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODConstraint_GetMaxLOD_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c3345e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall LODConstraint_GetMinLOD_Test::TestBody(LODConstraint_GetMinLOD_Test *this)

{
  longlong *plVar1;
  ulong64 uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStackY_d8 [32];
  ushort local_a8 [4];
  AssertHelper local_a0;
  ArrayView<unsigned_short_const_> local_98;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_88;
  LODConstraint local_80;
  LODConstraint local_60;
  LODConstraint local_40;
  ushort local_20 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  dna::LODConstraint::LODConstraint(&local_60,0,7,(MemoryResource *)0x0);
  local_a0.data_._0_4_ = 7;
  local_a8[0] = dna::LODConstraint::getMinLOD(&local_60);
  if (local_a8[0] == 7) {
    testing::AssertionSuccess((AssertionResult *)&local_98);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,int>
              ((AssertionResult *)&local_98,"lc1.getMinLOD()","7",local_a8,(int *)&local_a0);
  }
  uVar2 = local_98.sz;
  if ((char)local_98.ptr == '\0') {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_a0);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_98.sz;
      if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                   *)local_98.sz)->_Myval2)._Myres) {
        pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                    *)local_98.sz)->_Myval2)._Bx._Ptr;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                        ,0x15,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_88);
    plVar1 = (longlong *)CONCAT44(local_a0.data_._4_4_,local_a0.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar6)(puVar6,1);
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
      ::operator_delete((void *)local_98.sz,0x20);
    }
    if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
                (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
                 ((longlong)local_60.lods._Mypair._Myval2._Myend -
                  (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    }
  }
  else {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
      ::operator_delete((void *)uVar2,0x20);
    }
    dna::LODConstraint::LODConstraint(&local_80,2,5,(MemoryResource *)0x0);
    local_a0.data_._0_4_ = 5;
    local_a8[0] = dna::LODConstraint::getMinLOD(&local_80);
    if (local_a8[0] == 5) {
      testing::AssertionSuccess((AssertionResult *)&local_98);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,int>
                ((AssertionResult *)&local_98,"lc2.getMinLOD()","5",local_a8,(int *)&local_a0);
    }
    if ((char)local_98.ptr == '\0') {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_a0);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_98.sz;
        if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                     *)local_98.sz)->_Myval2)._Myres) {
          pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                      *)local_98.sz)->_Myval2)._Bx._Ptr;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                          ,0x18,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_88);
      plVar1 = (longlong *)CONCAT44(local_a0.data_._4_4_,local_a0.data_._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar6)(puVar6,1);
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)local_98.sz,0x20);
      }
      if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                  (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_80.lods._Mypair._Myval2._Myend -
                    (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
      }
      if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
                  (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_60.lods._Mypair._Myval2._Myend -
                    (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
    }
    else {
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)local_98.sz,0x20);
      }
      local_20[0] = 1;
      local_20[1] = 3;
      local_98.sz = (ulong64)&DAT_00000003;
      local_98.ptr = local_20;
      local_20[2] = 4;
      dna::LODConstraint::LODConstraint(&local_40,&local_98,(MemoryResource *)0x0);
      local_a0.data_._0_4_ = 4;
      local_a8[0] = dna::LODConstraint::getMinLOD(&local_40);
      if (local_a8[0] == 4) {
        testing::AssertionSuccess((AssertionResult *)&local_98);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned_short,int>
                  ((AssertionResult *)&local_98,"lc3.getMinLOD()","4",local_a8,(int *)&local_a0);
      }
      if ((char)local_98.ptr == '\0') {
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_88);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_98.sz;
          if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                       *)local_98.sz)->_Myval2)._Myres) {
            pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                        *)local_98.sz)->_Myval2)._Bx._Ptr;
          }
        }
        pAVar4 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_a0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                            ,0x1c,pcVar5);
        testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
        testing::internal::AssertHelper::~AssertHelper(&local_a0);
        if (local_88._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar6 = (undefined8 *)
                   ((longlong)&(local_88._Myval2)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_88._Myval2 + 4));
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      uVar2 = local_98.sz;
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)uVar2,0x20);
      }
      if (local_40.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_40.lods._Mypair._Myval1 + 0x10))
                  (local_40.lods._Mypair._Myval1,local_40.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_40.lods._Mypair._Myval2._Myend -
                    (longlong)local_40.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_40.lods._Mypair._Myval2._Myend = (ushort *)0x0;
        local_40.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_40.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                  (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_80.lods._Mypair._Myval2._Myend -
                    (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
                  (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_60.lods._Mypair._Myval2._Myend -
                    (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c334aa0

void * __thiscall
LODConstraint_GetMinLOD_Test::_scalar_deleting_destructor_
          (LODConstraint_GetMinLOD_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c334ae0

Test * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_GetMinLOD_Test>::CreateTest
          (TestFactoryImpl<LODConstraint_GetMinLOD_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7LODConstraint_GetMinLOD_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c334b20

void * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_GetMinLOD_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODConstraint_GetMinLOD_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODConstraint_GetMinLOD_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c334b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall LODConstraint_GetLODCount_Test::TestBody(LODConstraint_GetLODCount_Test *this)

{
  longlong *plVar1;
  ulong64 uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStackY_d8 [32];
  ushort local_a8 [4];
  AssertHelper local_a0;
  ArrayView<unsigned_short_const_> local_98;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_88;
  LODConstraint local_80;
  LODConstraint local_60;
  LODConstraint local_40;
  ushort local_20 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  dna::LODConstraint::LODConstraint(&local_60,0,7,(MemoryResource *)0x0);
  local_a0.data_._0_4_ = 8;
  local_a8[0] = dna::LODConstraint::getLODCount(&local_60);
  if (local_a8[0] == 8) {
    testing::AssertionSuccess((AssertionResult *)&local_98);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,int>
              ((AssertionResult *)&local_98,"lc1.getLODCount()","8",local_a8,(int *)&local_a0);
  }
  uVar2 = local_98.sz;
  if ((char)local_98.ptr == '\0') {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_a0);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_98.sz;
      if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                   *)local_98.sz)->_Myval2)._Myres) {
        pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                    *)local_98.sz)->_Myval2)._Bx._Ptr;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_88,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                        ,0x21,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_88);
    plVar1 = (longlong *)CONCAT44(local_a0.data_._4_4_,local_a0.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar6)(puVar6,1);
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
      ::operator_delete((void *)local_98.sz,0x20);
    }
    if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
                (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
                 ((longlong)local_60.lods._Mypair._Myval2._Myend -
                  (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    }
  }
  else {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
      ::operator_delete((void *)uVar2,0x20);
    }
    dna::LODConstraint::LODConstraint(&local_80,2,5,(MemoryResource *)0x0);
    local_a0.data_._0_4_ = 4;
    local_a8[0] = dna::LODConstraint::getLODCount(&local_80);
    if (local_a8[0] == 4) {
      testing::AssertionSuccess((AssertionResult *)&local_98);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,int>
                ((AssertionResult *)&local_98,"lc2.getLODCount()","4",local_a8,(int *)&local_a0);
    }
    if ((char)local_98.ptr == '\0') {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_a0);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_98.sz;
        if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                     *)local_98.sz)->_Myval2)._Myres) {
          pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                      *)local_98.sz)->_Myval2)._Bx._Ptr;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_88,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                          ,0x24,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_88);
      plVar1 = (longlong *)CONCAT44(local_a0.data_._4_4_,local_a0.data_._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar6)(puVar6,1);
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)local_98.sz,0x20);
      }
      if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                  (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_80.lods._Mypair._Myval2._Myend -
                    (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
      }
      if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
                  (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_60.lods._Mypair._Myval2._Myend -
                    (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
    }
    else {
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)local_98.sz,0x20);
      }
      local_98.ptr = local_20;
      local_20[0] = 1;
      local_20[1] = 3;
      local_98.sz = (ulong64)&DAT_00000003;
      local_20[2] = 4;
      dna::LODConstraint::LODConstraint(&local_40,&local_98,(MemoryResource *)0x0);
      local_a0.data_._0_4_ = 3;
      local_a8[0] = dna::LODConstraint::getLODCount(&local_40);
      if (local_a8[0] == 3) {
        testing::AssertionSuccess((AssertionResult *)&local_98);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned_short,int>
                  ((AssertionResult *)&local_98,"lc3.getLODCount()","3",local_a8,(int *)&local_a0);
      }
      if ((char)local_98.ptr == '\0') {
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_88);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_98.sz;
          if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                       *)local_98.sz)->_Myval2)._Myres) {
            pcVar5 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                        *)local_98.sz)->_Myval2)._Bx._Ptr;
          }
        }
        pAVar4 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_a0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                            ,0x28,pcVar5);
        testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
        testing::internal::AssertHelper::~AssertHelper(&local_a0);
        if (local_88._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar6 = (undefined8 *)
                   ((longlong)&(local_88._Myval2)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_88._Myval2 + 4));
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      uVar2 = local_98.sz;
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98.sz);
        ::operator_delete((void *)uVar2,0x20);
      }
      if (local_40.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_40.lods._Mypair._Myval1 + 0x10))
                  (local_40.lods._Mypair._Myval1,local_40.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_40.lods._Mypair._Myval2._Myend -
                    (longlong)local_40.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_40.lods._Mypair._Myval2._Myend = (ushort *)0x0;
        local_40.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_40.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_80.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_80.lods._Mypair._Myval1 + 0x10))
                  (local_80.lods._Mypair._Myval1,local_80.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_80.lods._Mypair._Myval2._Myend -
                    (longlong)local_80.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_80.lods._Mypair._Myval2._Myend = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_80.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_60.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_60.lods._Mypair._Myval1 + 0x10))
                  (local_60.lods._Mypair._Myval1,local_60.lods._Mypair._Myval2._Myfirst,
                   ((longlong)local_60.lods._Mypair._Myval2._Myend -
                    (longlong)local_60.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c335030

void * __thiscall
LODConstraint_GetLODCount_Test::_scalar_deleting_destructor_
          (LODConstraint_GetLODCount_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c335070

Test * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_GetLODCount_Test>::CreateTest
          (TestFactoryImpl<LODConstraint_GetLODCount_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7LODConstraint_GetLODCount_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c3350b0

void * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_GetLODCount_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODConstraint_GetLODCount_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODConstraint_GetLODCount_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c3350f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall LODConstraint_HasImpactOn_Test::TestBody(LODConstraint_HasImpactOn_Test *this)

{
  void *pvVar1;
  bool bVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *pAVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  int iVar9;
  undefined1 auStackY_118 [32];
  ArrayView<unsigned_short_const_> local_e8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_d8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_d0;
  LODConstraint local_c8;
  LODConstraint local_a8;
  ushort local_88 [4];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_80;
  LODConstraint local_60;
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ushort local_20 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  dna::LODConstraint::LODConstraint(&local_a8,0,7,(MemoryResource *)0x0);
  bVar2 = dna::LODConstraint::hasImpactOn(&local_a8,0);
  bVar2 = !bVar2;
  local_e8.sz = 0;
  local_e8.ptr._0_1_ = bVar2;
  if (!bVar2) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40
                        ,(AssertionResult *)&local_e8,"lc1.hasImpactOn(0)","true","false");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_d0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                        ,0x2d,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
    if (0xf < uStack_28) {
      pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
      uVar8 = uStack_28 + 1;
      pvVar7 = pvVar1;
      if (0xfff < uVar8) {
        pvVar7 = *(void **)((longlong)pvVar1 + -8);
        uVar8 = uStack_28 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar7,uVar8);
    }
    goto joined_r0x00014c3361e4;
  }
  bVar2 = dna::LODConstraint::hasImpactOn(&local_a8,1);
  local_e8.ptr._0_1_ = !bVar2;
  local_e8.sz = 0;
  if ((bool)local_e8.ptr._0_1_) {
    bVar2 = dna::LODConstraint::hasImpactOn(&local_a8,7);
    local_e8.ptr._0_1_ = !bVar2;
    local_e8.sz = 0;
    if ((bool)local_e8.ptr._0_1_) {
      bVar2 = dna::LODConstraint::hasImpactOn(&local_a8,8);
      local_e8.ptr._0_1_ = !bVar2;
      local_e8.sz = 0;
      if ((bool)local_e8.ptr._0_1_) {
        local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_a8,9);
        local_e8.sz = 0;
        if ((bool)local_e8.ptr._0_1_) {
          dna::LODConstraint::LODConstraint(&local_c8,2,5,(MemoryResource *)0x0);
          bVar2 = dna::LODConstraint::hasImpactOn(&local_c8,0);
          local_e8.ptr._0_1_ = !bVar2;
          local_e8.sz = 0;
          if ((bool)local_e8.ptr._0_1_) {
            local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_c8,1);
            local_e8.sz = 0;
            if ((bool)local_e8.ptr._0_1_) {
              local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_c8,4);
              local_e8.sz = 0;
              if ((bool)local_e8.ptr._0_1_) {
                local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_c8,5);
                local_e8.sz = 0;
                if ((bool)local_e8.ptr._0_1_) {
                  local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_c8,6);
                  local_e8.sz = 0;
                  if ((bool)local_e8.ptr._0_1_) {
                    local_e8.ptr = local_88;
                    local_88[0] = 0;
                    local_88[1] = 7;
                    local_e8.sz = (ulong64)&DAT_00000002;
                    dna::LODConstraint::LODConstraint
                              ((LODConstraint *)&local_80,&local_e8,(MemoryResource *)0x0);
                    bVar2 = dna::LODConstraint::hasImpactOn((LODConstraint *)&local_80,0);
                    bVar2 = !bVar2;
                    local_e8.sz = 0;
                    local_e8.ptr._0_1_ = bVar2;
                    if (!bVar2) {
                      pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                      pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                           *)&local_40,(AssertionResult *)&local_e8,
                                          "lc3.hasImpactOn(0)","true","false");
                      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                      }
                      pAVar5 = (AssertHelper *)
                               testing::internal::AssertHelper::AssertHelper
                                         ((AssertHelper *)&local_d0,kFatalFailure,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                          ,0x3c,(char *)pbVar4);
                      testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)&local_40);
                      if (local_d8._Myval2 !=
                          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                          0x0) {
                        puVar6 = (undefined8 *)
                                 ((longlong)&(local_d8._Myval2)->field_0x0 +
                                 (longlong)*(int *)(*(longlong *)local_d8._Myval2 + 4));
                        (**(code **)*puVar6)(puVar6,1);
                      }
                      uVar8 = local_e8.sz;
                      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          local_e8.sz !=
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                        _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)local_e8.sz);
                        ::operator_delete((void *)uVar8,0x20);
                      }
                      std::
                      vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      ::
                      ~vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                                (&local_80);
                      goto LAB_14c335ce4;
                    }
                    bVar2 = dna::LODConstraint::hasImpactOn((LODConstraint *)&local_80,1);
                    local_e8.ptr._0_1_ = !bVar2;
                    local_e8.sz = 0;
                    if ((bool)local_e8.ptr._0_1_) {
                      local_e8.ptr._0_1_ =
                           dna::LODConstraint::hasImpactOn((LODConstraint *)&local_80,2);
                      local_e8.sz = 0;
                      if (!(bool)local_e8.ptr._0_1_) {
                        pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)&local_40,(AssertionResult *)&local_e8,
                                            "lc3.hasImpactOn(2)","false","true");
                        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                        }
                        iVar9 = 0x3e;
                        goto LAB_14c33568a;
                      }
                      local_e8.ptr._0_1_ =
                           dna::LODConstraint::hasImpactOn((LODConstraint *)&local_80,3);
                      local_e8.sz = 0;
                      if (!(bool)local_e8.ptr._0_1_) {
                        pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)&local_40,(AssertionResult *)&local_e8,
                                            "lc3.hasImpactOn(3)","false","true");
                        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                        }
                        iVar9 = 0x3f;
                        goto LAB_14c33568a;
                      }
                      local_e8.ptr._0_1_ =
                           dna::LODConstraint::hasImpactOn((LODConstraint *)&local_80,4);
                      local_e8.sz = 0;
                      if (!(bool)local_e8.ptr._0_1_) {
                        pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)&local_40,(AssertionResult *)&local_e8,
                                            "lc3.hasImpactOn(4)","false","true");
                        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                        }
                        iVar9 = 0x40;
                        goto LAB_14c33568a;
                      }
                      local_e8.ptr = local_20;
                      local_20[0] = 1;
                      local_20[1] = 3;
                      local_20[2] = 5;
                      local_e8.sz = (ulong64)&DAT_00000003;
                      dna::LODConstraint::LODConstraint(&local_60,&local_e8,(MemoryResource *)0x0);
                      bVar2 = dna::LODConstraint::hasImpactOn(&local_60,0);
                      bVar2 = !bVar2;
                      local_e8.sz = 0;
                      local_e8.ptr._0_1_ = bVar2;
                      if (bVar2) {
                        local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_60,1);
                        local_e8.sz = 0;
                        if (!(bool)local_e8.ptr._0_1_) {
                          pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                          pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                               *)&local_40,(AssertionResult *)&local_e8,
                                              "lc4.hasImpactOn(1)","false","true");
                          if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                          }
                          iVar9 = 0x45;
                          goto LAB_14c335524;
                        }
                        local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_60,2);
                        local_e8.sz = 0;
                        if (!(bool)local_e8.ptr._0_1_) {
                          pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                          pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                               *)&local_40,(AssertionResult *)&local_e8,
                                              "lc4.hasImpactOn(2)","false","true");
                          if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                          }
                          iVar9 = 0x46;
                          goto LAB_14c335524;
                        }
                        local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_60,3);
                        local_e8.sz = 0;
                        if (!(bool)local_e8.ptr._0_1_) {
                          pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                          pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                               *)&local_40,(AssertionResult *)&local_e8,
                                              "lc4.hasImpactOn(3)","false","true");
                          if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                          }
                          iVar9 = 0x47;
                          goto LAB_14c335524;
                        }
                        local_e8.ptr._0_1_ = dna::LODConstraint::hasImpactOn(&local_60,4);
                        local_e8.sz = 0;
                        if (!(bool)local_e8.ptr._0_1_) {
                          pMVar3 = (Message *)testing::Message::Message((Message *)&local_d0);
                          pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                               *)&local_40,(AssertionResult *)&local_e8,
                                              "lc4.hasImpactOn(4)","false","true");
                          if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                          }
                          pAVar5 = (AssertHelper *)
                                   testing::internal::AssertHelper::AssertHelper
                                             ((AssertHelper *)&local_d8,kFatalFailure,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                              ,0x48,(char *)pbVar4);
                          testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d8);
                          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                            *)&local_40);
                          goto LAB_14c3354a1;
                        }
                      }
                      else {
                        pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)&local_40,(AssertionResult *)&local_e8,
                                            "lc4.hasImpactOn(0)","true","false");
                        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(pbVar4->_Mypair)._Myval2._Bx._Ptr;
                        }
                        iVar9 = 0x44;
LAB_14c335524:
                        pAVar5 = (AssertHelper *)
                                 testing::internal::AssertHelper::AssertHelper
                                           ((AssertHelper *)&local_d0,kFatalFailure,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                            ,iVar9,(char *)pbVar4);
                        testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
                        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                        _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)&local_40);
                        local_d0._Myval2 = local_d8._Myval2;
LAB_14c3354a1:
                        if (local_d0._Myval2 !=
                            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *
                            )0x0) {
                          puVar6 = (undefined8 *)
                                   ((longlong)&(local_d0._Myval2)->field_0x0 +
                                   (longlong)*(int *)(*(longlong *)local_d0._Myval2 + 4));
                          (**(code **)*puVar6)(puVar6,1);
                        }
                        uVar8 = local_e8.sz;
                        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            local_e8.sz !=
                            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
                        {
                          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                            *)local_e8.sz);
                          ::operator_delete((void *)uVar8,0x20);
                        }
                      }
                      dna::LODConstraint::~LODConstraint(&local_60);
                    }
                    else {
                      pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                      pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                           *)&local_40,(AssertionResult *)&local_e8,
                                          "lc3.hasImpactOn(1)","true","false");
                      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                      }
                      iVar9 = 0x3d;
LAB_14c33568a:
                      pAVar5 = (AssertHelper *)
                               testing::internal::AssertHelper::AssertHelper
                                         ((AssertHelper *)&local_d0,kFatalFailure,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                          ,iVar9,(char *)pbVar4);
                      testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)&local_40);
                      if (local_d8._Myval2 !=
                          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                          0x0) {
                        puVar6 = (undefined8 *)
                                 ((longlong)&(local_d8._Myval2)->field_0x0 +
                                 (longlong)*(int *)(*(longlong *)local_d8._Myval2 + 4));
                        (**(code **)*puVar6)(puVar6,1);
                      }
                      uVar8 = local_e8.sz;
                      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          local_e8.sz !=
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                        _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)local_e8.sz);
                        ::operator_delete((void *)uVar8,0x20);
                        dna::LODConstraint::~LODConstraint((LODConstraint *)&local_80);
                        goto LAB_14c335ce4;
                      }
                    }
                    dna::LODConstraint::~LODConstraint((LODConstraint *)&local_80);
                    goto LAB_14c335ce4;
                  }
                  pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                  pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_40,(AssertionResult *)&local_e8,"lc2.hasImpactOn(6)"
                                      ,"false","true");
                  if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                  }
                  pAVar5 = (AssertHelper *)
                           testing::internal::AssertHelper::AssertHelper
                                     ((AssertHelper *)&local_d0,kFatalFailure,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                      ,0x38,(char *)pbVar4);
                  testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
                  if (0xf < uStack_28) {
                    pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
                    uVar8 = uStack_28 + 1;
                    pvVar7 = pvVar1;
                    if (0xfff < uVar8) {
                      uVar8 = uStack_28 + 0x28;
                      pvVar7 = *(void **)((longlong)pvVar1 + -8);
                      if (0x1f < (ulonglong)
                                 ((longlong)pvVar1 +
                                 (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                    goto LAB_14c335c94;
                  }
                }
                else {
                  pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                  pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_40,(AssertionResult *)&local_e8,"lc2.hasImpactOn(5)"
                                      ,"false","true");
                  if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                  }
                  pAVar5 = (AssertHelper *)
                           testing::internal::AssertHelper::AssertHelper
                                     ((AssertHelper *)&local_d0,kFatalFailure,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                      ,0x37,(char *)pbVar4);
                  testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
                  if (0xf < uStack_28) {
                    pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
                    uVar8 = uStack_28 + 1;
                    pvVar7 = pvVar1;
                    if (0xfff < uVar8) {
                      uVar8 = uStack_28 + 0x28;
                      pvVar7 = *(void **)((longlong)pvVar1 + -8);
                      if (0x1f < (ulonglong)
                                 ((longlong)pvVar1 +
                                 (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                    goto LAB_14c335c94;
                  }
                }
              }
              else {
                pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
                pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_40,(AssertionResult *)&local_e8,"lc2.hasImpactOn(4)",
                                    "false","true");
                if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                }
                pAVar5 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   ((AssertHelper *)&local_d0,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                    ,0x36,(char *)pbVar4);
                testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
                if (0xf < uStack_28) {
                  pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
                  uVar8 = uStack_28 + 1;
                  pvVar7 = pvVar1;
                  if (0xfff < uVar8) {
                    uVar8 = uStack_28 + 0x28;
                    pvVar7 = *(void **)((longlong)pvVar1 + -8);
                    if (0x1f < (ulonglong)
                               ((longlong)pvVar1 +
                               (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                  }
                  goto LAB_14c335c94;
                }
              }
            }
            else {
              pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
              pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_40,(AssertionResult *)&local_e8,"lc2.hasImpactOn(1)",
                                  "false","true");
              if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar4->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar5 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)&local_d0,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                  ,0x35,(char *)pbVar4);
              testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
              if (0xf < uStack_28) {
                pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
                uVar8 = uStack_28 + 1;
                pvVar7 = pvVar1;
                if (0xfff < uVar8) {
                  uVar8 = uStack_28 + 0x28;
                  pvVar7 = *(void **)((longlong)pvVar1 + -8);
                  if (0x1f < (ulonglong)
                             ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))
                     ) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                goto LAB_14c335c94;
              }
            }
          }
          else {
            pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
            pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_40,(AssertionResult *)&local_e8,"lc2.hasImpactOn(0)","true",
                                "false");
            if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
              pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar4->_Mypair)._Myval2._Bx._Ptr;
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_d0,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                                ,0x34,(char *)pbVar4);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
            if (0xf < uStack_28) {
              pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
              uVar8 = uStack_28 + 1;
              pvVar7 = pvVar1;
              if (0xfff < uVar8) {
                pvVar7 = *(void **)((longlong)pvVar1 + -8);
                uVar8 = uStack_28 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
LAB_14c335c94:
              ::operator_delete(pvVar7,uVar8);
            }
          }
          local_40._Buf[0] = '\0';
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (local_d8._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar6 = (undefined8 *)
                     ((longlong)&(local_d8._Myval2)->field_0x0 +
                     (longlong)*(int *)(*(longlong *)local_d8._Myval2 + 4));
            (**(code **)*puVar6)(puVar6,1);
          }
          uVar8 = local_e8.sz;
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_e8.sz !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_e8.sz);
            ::operator_delete((void *)uVar8,0x20);
          }
LAB_14c335ce4:
          if (local_c8.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
            (**(code **)(*(longlong *)local_c8.lods._Mypair._Myval1 + 0x10))
                      (local_c8.lods._Mypair._Myval1,local_c8.lods._Mypair._Myval2._Myfirst,
                       ((longlong)local_c8.lods._Mypair._Myval2._Myend -
                        (longlong)local_c8.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
            local_c8.lods._Mypair._Myval2._Myend = (ushort *)0x0;
            local_c8.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
            local_c8.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
          }
          if (local_a8.lods._Mypair._Myval2._Myfirst == (ushort *)0x0) {
            return;
          }
          (**(code **)(*(longlong *)local_a8.lods._Mypair._Myval1 + 0x10))
                    (local_a8.lods._Mypair._Myval1,local_a8.lods._Mypair._Myval2._Myfirst,
                     ((longlong)local_a8.lods._Mypair._Myval2._Myend -
                      (longlong)local_a8.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
          return;
        }
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_40,(AssertionResult *)&local_e8,"lc1.hasImpactOn(9)","false",
                            "true");
        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar4->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_d0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                            ,0x31,(char *)pbVar4);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
        if (uStack_28 < 0x10) goto joined_r0x00014c3361e4;
        pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
        uVar8 = uStack_28 + 1;
        pvVar7 = pvVar1;
        if (0xfff < uVar8) {
          uVar8 = uStack_28 + 0x28;
          pvVar7 = *(void **)((longlong)pvVar1 + -8);
          if (0x1f < (ulonglong)
                     ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      else {
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_40,(AssertionResult *)&local_e8,"lc1.hasImpactOn(8)","true",
                            "false");
        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar4->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_d0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                            ,0x30,(char *)pbVar4);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
        if (uStack_28 < 0x10) goto joined_r0x00014c3361e4;
        pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
        uVar8 = uStack_28 + 1;
        pvVar7 = pvVar1;
        if (0xfff < uVar8) {
          uVar8 = uStack_28 + 0x28;
          pvVar7 = *(void **)((longlong)pvVar1 + -8);
          if (0x1f < (ulonglong)
                     ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
    }
    else {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
      pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_40,(AssertionResult *)&local_e8,"lc1.hasImpactOn(7)","true","false"
                         );
      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar4->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_d0,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                          ,0x2f,(char *)pbVar4);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
      if (uStack_28 < 0x10) goto joined_r0x00014c3361e4;
      pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
      uVar8 = uStack_28 + 1;
      pvVar7 = pvVar1;
      if (0xfff < uVar8) {
        uVar8 = uStack_28 + 0x28;
        pvVar7 = *(void **)((longlong)pvVar1 + -8);
        if (0x1f < (ulonglong)
                   ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  else {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_d8);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40
                        ,(AssertionResult *)&local_e8,"lc1.hasImpactOn(1)","true","false");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_d0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                        ,0x2e,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d0);
    if (uStack_28 < 0x10) goto joined_r0x00014c3361e4;
    pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete(pvVar7,uVar8);
joined_r0x00014c3361e4:
  local_40._Buf[0] = '\0';
  local_30 = ___xmm_000000000000000f0000000000000000;
  uStack_28 = _UNK_15076add8;
  if (local_d8._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    local_40._Buf[0] = '\0';
    puVar6 = (undefined8 *)
             ((longlong)&(local_d8._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_d8._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  uVar8 = local_e8.sz;
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_e8.sz !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_e8.sz);
    ::operator_delete((void *)uVar8,0x20);
  }
  if (local_a8.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_a8.lods._Mypair._Myval1 + 0x10))
              (local_a8.lods._Mypair._Myval1,local_a8.lods._Mypair._Myval2._Myfirst,
               ((longlong)local_a8.lods._Mypair._Myval2._Myend -
                (longlong)local_a8.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c336200

void * __thiscall
LODConstraint_HasImpactOn_Test::_scalar_deleting_destructor_
          (LODConstraint_HasImpactOn_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c336240

Test * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_HasImpactOn_Test>::CreateTest
          (TestFactoryImpl<LODConstraint_HasImpactOn_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7LODConstraint_HasImpactOn_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c336280

void * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_HasImpactOn_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODConstraint_HasImpactOn_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODConstraint_HasImpactOn_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c3362c0

void __thiscall LODConstraint_ClampTo_Test::TestBody(LODConstraint_ClampTo_Test *this)

{
  longlong *plVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  AssertHelper local_res10;
  Message local_res18 [2];
  AssertionResult local_38;
  LODConstraint local_28;
  
  dna::LODConstraint::LODConstraint(&local_28,0,7,(MemoryResource *)0x0);
  local_res18[0].ss_._Mypair._Myval2._0_4_ = 8;
  local_res10.data_._0_2_ = dna::LODConstraint::getLODCount(&local_28);
  if ((ushort)local_res10.data_ == 8) {
    testing::AssertionSuccess(&local_38);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,int>
              (&local_38,"lc1.getLODCount()","8",(ushort *)&local_res10,(int *)local_res18);
  }
  uVar2._Mypair._Myval2 = local_38.message_._Mypair._Myval2;
  if (local_38.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message(local_res18);
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
    iVar6 = 0x4d;
  }
  else {
    if (local_38.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    dna::LODConstraint::clampTo(&local_28,2);
    local_res18[0].ss_._Mypair._Myval2._0_4_ = 2;
    local_res10.data_._0_2_ = dna::LODConstraint::getLODCount(&local_28);
    if ((ushort)local_res10.data_ == 2) {
      testing::AssertionSuccess(&local_38);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,int>
                (&local_38,"lc1.getLODCount()","2",(ushort *)&local_res10,(int *)local_res18);
    }
    if (local_38.success_ != false) goto LAB_14c33645b;
    pMVar3 = (Message *)testing::Message::Message(local_res18);
    if (local_38.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)local_38.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_38.message_._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)local_38.message_._Mypair._Myval2;
        iVar6 = 0x4f;
        goto LAB_14c336410;
      }
    }
    iVar6 = 0x4f;
  }
LAB_14c336410:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                       ,iVar6,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  plVar1 = (longlong *)
           CONCAT44(local_res18[0].ss_._Mypair._Myval2._4_4_,
                    local_res18[0].ss_._Mypair._Myval2._0_4_);
  if (plVar1 != (longlong *)0x0) {
    puVar5 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_14c33645b:
  if (local_38.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38.message_._Mypair._Myval2);
    ::operator_delete((void *)local_38.message_._Mypair._Myval2,0x20);
  }
  if (local_28.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_28.lods._Mypair._Myval1 + 0x10))
              (local_28.lods._Mypair._Myval1,local_28.lods._Mypair._Myval2._Myfirst,
               ((longlong)local_28.lods._Mypair._Myval2._Myend -
                (longlong)local_28.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c3364b0

void * __thiscall
LODConstraint_ClampTo_Test::_scalar_deleting_destructor_
          (LODConstraint_ClampTo_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c3364f0

Test * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_ClampTo_Test>::CreateTest
          (TestFactoryImpl<LODConstraint_ClampTo_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7LODConstraint_ClampTo_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c336530

void * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_ClampTo_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODConstraint_ClampTo_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODConstraint_ClampTo_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c336570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall LODConstraint_ApplyTo_Test::TestBody(LODConstraint_ApplyTo_Test *this)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  ushort *_Buf2;
  Message *pMVar4;
  AssertHelper *this_00;
  ushort *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int *piVar11;
  ushort *puVar12;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar13;
  undefined1 auStackY_138 [32];
  ArrayView<unsigned_short_const_> local_108;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_f8;
  LODConstraint local_d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_b8;
  AssertHelper local_98;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_90;
  ushort local_88 [4];
  ushort local_80 [8];
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  _Bxty local_50;
  ulonglong local_38;
  ushort local_30 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar11 <
       `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
           PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_80[0] = 10;
  local_80[1] = 0x14;
  local_80[6] = 0x46;
  local_80[2] = 0x1e;
  local_80[3] = 0x28;
  local_80[4] = 0x32;
  local_80[5] = 0x3c;
  local_f8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,0xe,8);
  puVar5 = local_80;
  local_f8._Mypair._Myval2._Myend = local_f8._Mypair._Myval2._Myfirst + 7;
  local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *local_f8._Mypair._Myval2._Mylast = uVar1;
    local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Mylast + 1;
  } while (puVar5 != local_80 + 7);
  if ((*piVar11 <
       `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
           PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_88[0] = 0x14;
  local_88[1] = 0x28;
  local_88[2] = 0x3c;
  local_b8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  _Buf2 = (ushort *)
          (**(code **)((longlong)
                       `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr + 8))
                    (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                      ::__l2::dmr,6);
  puVar5 = local_88;
  puVar12 = _Buf2;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar12 = uVar1;
    puVar12 = puVar12 + 1;
  } while (puVar5 != local_88 + 3);
  local_30[2] = 5;
  local_108.ptr = local_30;
  local_108.sz = (ulong64)&DAT_00000003;
  local_30[0] = 1;
  local_30[1] = 3;
  local_b8._Mypair._Myval2._Myfirst = _Buf2;
  local_b8._Mypair._Myval2._Mylast = puVar12;
  local_b8._Mypair._Myval2._Myend = _Buf2 + 3;
  dna::LODConstraint::LODConstraint(&local_d8,&local_108,(MemoryResource *)0x0);
  dna::LODConstraint::applyTo(&local_d8,&local_f8);
  if (((((longlong)puVar12 - (longlong)_Buf2 ^
        (longlong)local_f8._Mypair._Myval2._Mylast - (longlong)local_f8._Mypair._Myval2._Myfirst) &
       0xfffffffffffffffeU) == 0) &&
     (iVar3 = memcmp(local_f8._Mypair._Myval2._Myfirst,_Buf2,
                     (longlong)local_f8._Mypair._Myval2._Mylast -
                     (longlong)local_f8._Mypair._Myval2._Myfirst), iVar3 == 0)) {
    testing::AssertionSuccess((AssertionResult *)&local_108);
    puVar5 = _Buf2 + 3;
    PVar13 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
             &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  }
  else {
    testing::
    PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               &local_b8);
    testing::
    PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
               &local_f8);
    testing::internal::EqFailure
              ((AssertionResult *)&local_108,"unconstrainedLODs","expected",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,false);
    if (0xf < uStack_58) {
      pvVar2 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
      uVar10 = uStack_58 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_58 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c3367eb;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_70._Buf[0] = '\0';
    local_60 = ___xmm_000000000000000f0000000000000000;
    uStack_58 = _UNK_15076add8;
    _Buf2 = local_b8._Mypair._Myval2._Myfirst;
    puVar5 = local_b8._Mypair._Myval2._Myend;
    PVar13 = local_b8._Mypair._Myval1;
    if (0xf < local_38) {
      uVar10 = local_38 + 1;
      uVar7 = local_50._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_50._Ptr + -8);
        uVar10 = local_38 + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar7)) {
LAB_14c3367eb:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
      _Buf2 = local_b8._Mypair._Myval2._Myfirst;
      puVar5 = local_b8._Mypair._Myval2._Myend;
      PVar13 = local_b8._Mypair._Myval1;
    }
  }
  if ((char)local_108.ptr == '\0') {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_90);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_108.sz ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_108.sz;
      if (0xf < (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                   *)local_108.sz)->_Myval2)._Myres) {
        pcVar8 = (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                    *)local_108.sz)->_Myval2)._Bx._Ptr;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_98,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODConstraint.cpp"
                         ,0x5b,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_98);
    if (local_90._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)&(local_90._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_90._Myval2 + 4));
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  uVar10 = local_108.sz;
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_108.sz !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_108.sz);
    ::operator_delete((void *)uVar10,0x20);
  }
  if (local_d8.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_d8.lods._Mypair._Myval1 + 0x10))
              (local_d8.lods._Mypair._Myval1,local_d8.lods._Mypair._Myval2._Myfirst,
               ((longlong)local_d8.lods._Mypair._Myval2._Myend -
                (longlong)local_d8.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_d8.lods._Mypair._Myval2._Myend = (ushort *)0x0;
    local_d8.lods._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_d8.lods._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (_Buf2 != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)PVar13 + 0x10))
              (PVar13,_Buf2,((longlong)puVar5 - (longlong)_Buf2 >> 1) * 2,8);
  }
  if (local_f8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_f8._Mypair._Myval1 + 0x10))
              (local_f8._Mypair._Myval1,local_f8._Mypair._Myval2._Myfirst,
               ((longlong)local_f8._Mypair._Myval2._Myend -
                (longlong)local_f8._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c3369e0

void * __thiscall
LODConstraint_ApplyTo_Test::_scalar_deleting_destructor_
          (LODConstraint_ApplyTo_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c336a20

Test * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_ApplyTo_Test>::CreateTest
          (TestFactoryImpl<LODConstraint_ApplyTo_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7LODConstraint_ApplyTo_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c336a60

void * __thiscall
testing::internal::TestFactoryImpl<LODConstraint_ApplyTo_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODConstraint_ApplyTo_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODConstraint_ApplyTo_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c336aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_3,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                   *param_4)

{
  ushort *_Buf1;
  ushort *_Buf2;
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  ulonglong _Size;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  _Buf1 = (param_3->_Mypair)._Myval2._Myfirst;
  _Buf2 = (param_4->_Mypair)._Myval2._Myfirst;
  _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Buf1;
  if (((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)_Buf2 ^ _Size) &
       0xfffffffffffffffe) == 0) && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c336bc8;
    }
    ::operator_delete(pvVar3,uVar5);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar5 = local_40 + 1;
    uVar4 = local_58._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_58._Ptr + -8);
      uVar5 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
LAB_14c336bc8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c336c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_3,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                   *param_4)

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
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c336cf8;
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
LAB_14c336cf8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c336d40

void __cdecl
testing::internal::
DefaultPrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (WrapPrinterType<0> param_1,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_2,basic_ostream<char,std::char_traits<char>_> *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  puVar1 = (param_2->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (puVar1 != (param_2->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_3,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_3," ...");
          goto LAB_14c336dad;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c336dad:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// FormatForComparisonFailureMessage<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c336df0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_1,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                   *param_2)

{
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c336e10

void __cdecl
testing::internal::
PrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  puVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (puVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c336e7d;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c336e7d:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c336ec0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::
PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_1)

{
  char *pcVar1;
  ushort *puVar2;
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
  puVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (puVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar3 != 0) {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_118,',');
        if (lVar3 == 0x20) {
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_118," ...");
          goto LAB_14c336fc9;
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,*puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (puVar2 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar3 != 0) {
LAB_14c336fc9:
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

// UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_> @ 14c337100

void __cdecl
testing::internal::
UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  puVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (puVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c33716d;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c33716d:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// ~LODConstraint @ 14c3371b0

void __thiscall dna::LODConstraint::~LODConstraint(LODConstraint *this)

{
  ushort *puVar1;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar2;
  
  puVar1 = (this->lods)._Mypair._Myval2._Myfirst;
  if (puVar1 != (ushort *)0x0) {
    PVar2 = (this->lods)._Mypair._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,puVar1,
               ((longlong)(this->lods)._Mypair._Myval2._Myend - (longlong)puVar1 >> 1) * 2,8);
    (this->lods)._Mypair._Myval2._Myfirst = (ushort *)0x0;
    (this->lods)._Mypair._Myval2._Mylast = (ushort *)0x0;
    (this->lods)._Mypair._Myval2._Myend = (ushort *)0x0;
  }
  return;
}

