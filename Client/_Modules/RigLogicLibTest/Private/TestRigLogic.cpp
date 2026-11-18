// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 40

// test_info_'' @ 141377210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'RigLogicTest_AccessJointVariableAttributeIndices_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  char *pcVar5;
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
              ___7__TestFactoryImpl_VRigLogicTest_AccessJointVariableAttributeIndices_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                      ,0x34);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x34);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
  *(undefined8 *)pcVar5 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar5 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar5 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar5 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar5 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar5 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar5 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar5 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar5 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar5 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar5 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar5 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar5 + 0x68) = uVar1;
  *(undefined8 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar5 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
  uVar1 = *(undefined8 *)(pcVar5 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar5;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar5 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar5 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar5 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar5 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar5 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar5 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar5 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x34;
  RigLogicTest_AccessJointVariableAttributeIndices_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RigLogicTest","AccessJointVariableAttributeIndices",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RigLogicTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141377420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'RigLogicTest_DumpStateThenRestore_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  char *pcVar5;
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
              &___7__TestFactoryImpl_VRigLogicTest_DumpStateThenRestore_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                      ,0x42);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x42);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
  *(undefined8 *)pcVar5 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar5 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar5 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar5 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar5 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar5 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar5 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar5 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar5 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar5 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar5 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar5 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar5 + 0x68) = uVar1;
  *(undefined8 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar5 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
  uVar1 = *(undefined8 *)(pcVar5 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar5;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar5 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar5 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar5 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar5 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar5 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar5 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar5 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x42;
  RigLogicTest_DumpStateThenRestore_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RigLogicTest","DumpStateThenRestore",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RigLogicTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141377630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'RigLogicTest_EvaluateRigInstance_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  char *pcVar5;
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
              &___7__TestFactoryImpl_VRigLogicTest_EvaluateRigInstance_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                      ,0x24);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x24);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
  *(undefined8 *)pcVar5 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar5 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar5 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar5 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar5 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar5 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar5 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar5 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar5 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar5 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar5 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar5 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar5 + 0x68) = uVar1;
  *(undefined8 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar5 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
  uVar1 = *(undefined8 *)(pcVar5 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar5;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar5 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar5 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar5 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar5 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar5 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar5 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar5 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x24;
  RigLogicTest_EvaluateRigInstance_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RigLogicTest","EvaluateRigInstance",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RigLogicTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141377840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'RigLogicTest_JointOutputBufferInitialized_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  char *pcVar5;
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
              ___7__TestFactoryImpl_VRigLogicTest_JointOutputBufferInitialized_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                      ,0x67);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x67);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
  *(undefined8 *)pcVar5 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar5 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar5 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar5 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar5 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar5 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar5 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar5 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar5 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar5 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar5 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar5 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar5 + 0x68) = uVar1;
  *(undefined8 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar5 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
  uVar1 = *(undefined8 *)(pcVar5 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar5;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar5 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar5 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar5 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar5 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar5 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar5 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar5 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar5 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x67;
  RigLogicTest_JointOutputBufferInitialized_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RigLogicTest","JointOutputBufferInitialized",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RigLogicTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// `scalar_deleting_destructor' @ 14c5a27c0

void * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_DumpStateThenRestore_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RigLogicTest_DumpStateThenRestore_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<RigLogicTest_DumpStateThenRestore_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a2800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RigLogicTest_JointOutputBufferInitialized_Test::TestBody
          (RigLogicTest_JointOutputBufferInitialized_Test *this)

{
  float *pfVar1;
  longlong *plVar2;
  void *pvVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  RigLogic *pRVar7;
  RigInstance *pRVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  Message *pMVar11;
  AssertHelper *pAVar12;
  void *pvVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar18;
  ulonglong uVar19;
  undefined1 auStackY_128 [32];
  AssertHelper local_f8;
  Configuration local_f0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_d8;
  AssertionResult local_d0;
  AssertionResult local_c0;
  longlong local_b0;
  ulonglong local_a8;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  _Bxty local_80;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f0.calculationType = SSE;
  local_f0.loadJoints = true;
  local_f0.loadBlendShapes = true;
  local_f0.loadAnimatedMaps = true;
  local_f0.loadMachineLearnedBehavior = true;
  local_f0.loadRBFBehavior = true;
  local_f0.loadTwistSwingBehavior = true;
  local_f0.translationType = Vector;
  local_f0.rotationOrder = XYZ;
  local_f0.scaleType = Vector;
  local_f0.translationPruningThreshold = 0.0;
  local_f0.rotationPruningThreshold = 0.0;
  local_f0.scalePruningThreshold = 0.0;
  local_f0.rotationType = Quaternions;
  pRVar7 = rl4::RigLogic::create(*(Reader **)&this->field_0x20,&local_f0,(MemoryResource *)0x0);
  pRVar8 = rl4::RigInstance::create(pRVar7,(MemoryResource *)0x0);
  (**(code **)((longlong)*pRVar8 + 0xb8))(pRVar8,&local_b0);
  uVar6 = _UNK_15076add8;
  uVar5 = ___xmm_000000000000000f0000000000000000;
  fVar4 = __real_3f800000;
  uVar19 = 0;
  if (local_a8 != 0) {
    do {
      pfVar1 = (float *)(local_b0 + uVar19 * 4);
      if (uVar19 % 10 == 6) {
        local_f8.data_._0_4_ = 0x3f800000;
        if (fVar4 == *pfVar1) {
          testing::AssertionSuccess(&local_d0);
        }
        else {
          pbVar9 = testing::internal::FormatForComparisonFailureMessage<float,float>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_80,(float *)&local_f8,pfVar1);
          pbVar10 = testing::internal::FormatForComparisonFailureMessage<float,float>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_a0,pfVar1,(float *)&local_f8);
          testing::internal::EqFailure(&local_d0,"jointOutputs[i]","1.0f",pbVar10,pbVar9,false);
          if (0xf < uStack_88) {
            pvVar3 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
            uVar17 = uStack_88 + 1;
            pvVar13 = pvVar3;
            if (0xfff < uVar17) {
              pvVar13 = *(void **)((longlong)pvVar3 + -8);
              uVar17 = uStack_88 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))
              goto LAB_14c5a2aff;
            }
            ::operator_delete(pvVar13,uVar17);
          }
          local_a0._Buf[0] = '\0';
          local_90 = uVar5;
          uStack_88 = uVar6;
          if (0xf < local_68) {
            uVar17 = local_68 + 1;
            uVar14 = local_80._Ptr;
            if (0xfff < uVar17) {
              uVar14 = *(undefined8 *)(local_80._Ptr + -8);
              uVar17 = local_68 + 0x28;
              if ((char *)0x1f < local_80._Ptr + (-8 - uVar14)) {
LAB_14c5a2aff:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar14,uVar17);
          }
        }
        uVar18._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar11 = (Message *)testing::Message::Message((Message *)&local_d8);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar15 = "";
          }
          else {
            pcVar15 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar15 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar12 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_f8,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x71,pcVar15);
          testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
          testing::internal::AssertHelper::~AssertHelper(&local_f8);
          uVar18._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          if (local_d8._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar16 = (undefined8 *)
                      ((longlong)&(local_d8._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_d8._Myval2 + 4));
            (**(code **)*puVar16)(puVar16,1);
            uVar18._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          }
LAB_14c5a2c36:
          if (uVar18._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       uVar18._Mypair._Myval2);
            ::operator_delete((void *)uVar18._Mypair._Myval2,0x20);
          }
          break;
        }
      }
      else {
        local_f8.data_._0_4_ = 0;
        if (*pfVar1 == 0.0) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          pbVar9 = testing::internal::FormatForComparisonFailureMessage<float,float>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_80,(float *)&local_f8,pfVar1);
          pbVar10 = testing::internal::FormatForComparisonFailureMessage<float,float>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_a0,pfVar1,(float *)&local_f8);
          testing::internal::EqFailure(&local_c0,"jointOutputs[i]","0.0f",pbVar10,pbVar9,false);
          if (0xf < uStack_88) {
            pvVar3 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
            uVar17 = uStack_88 + 1;
            pvVar13 = pvVar3;
            if (0xfff < uVar17) {
              pvVar13 = *(void **)((longlong)pvVar3 + -8);
              uVar17 = uStack_88 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))
              goto LAB_14c5a2b9d;
            }
            ::operator_delete(pvVar13,uVar17);
          }
          local_a0._Buf[0] = '\0';
          local_90 = uVar5;
          uStack_88 = uVar6;
          if (0xf < local_68) {
            uVar17 = local_68 + 1;
            uVar14 = local_80._Ptr;
            if (0xfff < uVar17) {
              uVar14 = *(undefined8 *)(local_80._Ptr + -8);
              uVar17 = local_68 + 0x28;
              if ((char *)0x1f < local_80._Ptr + (-8 - uVar14)) {
LAB_14c5a2b9d:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar14,uVar17);
          }
        }
        uVar18._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar11 = (Message *)testing::Message::Message((Message *)&local_f8);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar15 = "";
          }
          else {
            pcVar15 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar15 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar12 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              ((AssertHelper *)&local_d8,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x73,pcVar15);
          testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_d8);
          plVar2 = (longlong *)CONCAT44(local_f8.data_._4_4_,local_f8.data_._0_4_);
          uVar18._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          if (plVar2 != (longlong *)0x0) {
            puVar16 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar16)(puVar16,1);
            uVar18._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c5a2c36;
        }
      }
      if (uVar18._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   uVar18._Mypair._Myval2);
        ::operator_delete((void *)uVar18._Mypair._Myval2,0x20);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < local_a8);
  }
  rl4::RigInstance::destroy(pRVar8);
  if (pRVar7 != (RigLogic *)0x0) {
    rl4::RigLogic::destroy(pRVar7);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a2cb0

void * __thiscall
RigLogicTest_JointOutputBufferInitialized_Test::_scalar_deleting_destructor_
          (RigLogicTest_JointOutputBufferInitialized_Test *this,uint param_1)

{
  _anon_967C45C2::RigLogicTest::~RigLogicTest((RigLogicTest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// CreateTest @ 14c5a2cf0

Test * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_JointOutputBufferInitialized_Test>::CreateTest
          (TestFactoryImpl<RigLogicTest_JointOutputBufferInitialized_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[2]._padding_ = 0;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[3]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7RigLogicTest_JointOutputBufferInitialized_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a2d50

void * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_JointOutputBufferInitialized_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RigLogicTest_JointOutputBufferInitialized_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<RigLogicTest_JointOutputBufferInitialized_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c5a2d90

void __thiscall _anon_967C45C2::RigLogicTest::SetUp(RigLogicTest *this)

{
  MemoryStream *pMVar1;
  BinaryStreamReader *pBVar2;
  RigLogic *pRVar3;
  RigInstance *pRVar4;
  MemoryStream *pMVar5;
  BinaryStreamReader *pBVar6;
  RigLogic *pRVar7;
  RigInstance *pRVar8;
  undefined1 *puVar9;
  char *pcVar10;
  ulong64 uVar11;
  Configuration local_38;
  vector<char,std::allocator<char>_> local_20;
  
  rltests::raw::getBytes(&local_20);
  pMVar5 = trio::MemoryStream::create((MemoryResource *)0x0);
  pMVar1 = (this->stream).ptr;
  (this->stream).ptr = pMVar5;
  if (pMVar1 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar1);
  }
  (**(code **)(*(longlong *)&((this->stream).ptr)->field_0x18 + 8))();
  puVar9 = &((this->stream).ptr)->field_0x20;
  (**(code **)(*(longlong *)puVar9 + 8))(puVar9,0);
  pBVar6 = dna::BinaryStreamReader::create
                     ((BoundedIOStream *)(this->stream).ptr,All,Preserve,0,(MemoryResource *)0x0);
  pBVar2 = (this->reader).ptr;
  (this->reader).ptr = pBVar6;
  if (pBVar2 != (BinaryStreamReader *)0x0) {
    dna::BinaryStreamReader::destroy(pBVar2);
  }
  (**(code **)(*(longlong *)(this->reader).ptr + 0xe0))();
  local_38.calculationType = SSE;
  local_38.loadJoints = true;
  local_38.loadBlendShapes = true;
  local_38.loadAnimatedMaps = true;
  local_38.loadMachineLearnedBehavior = true;
  local_38.loadRBFBehavior = true;
  local_38.loadTwistSwingBehavior = true;
  local_38.translationType = Vector;
  local_38.rotationType = EulerAngles;
  local_38.rotationOrder = XYZ;
  local_38.scaleType = Vector;
  local_38.translationPruningThreshold = 0.0;
  local_38.rotationPruningThreshold = 0.0;
  local_38.scalePruningThreshold = 0.0;
  pRVar7 = rl4::RigLogic::create((Reader *)(this->reader).ptr,&local_38,(MemoryResource *)0x0);
  pRVar3 = (this->rigLogic).ptr;
  (this->rigLogic).ptr = pRVar7;
  if (pRVar3 != (RigLogic *)0x0) {
    rl4::RigLogic::destroy(pRVar3);
  }
  pRVar8 = rl4::RigInstance::create((this->rigLogic).ptr,(MemoryResource *)&this->memRes);
  pRVar4 = (this->rigInstance).ptr;
  (this->rigInstance).ptr = pRVar8;
  if (pRVar4 != (RigInstance *)0x0) {
    rl4::RigInstance::destroy(pRVar4);
  }
  if (local_20._Mypair._Myval2._Myfirst != (char *)0x0) {
    uVar11 = (longlong)local_20._Mypair._Myval2._Myend - (longlong)local_20._Mypair._Myval2._Myfirst
    ;
    pcVar10 = local_20._Mypair._Myval2._Myfirst;
    if (0xfff < uVar11) {
      pcVar10 = *(char **)(local_20._Mypair._Myval2._Myfirst + -8);
      uVar11 = uVar11 + 0x27;
      if ((char *)0x1f < local_20._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar10)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar10,uVar11);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a2ef0

void * __thiscall
_anon_967C45C2::RigLogicTest::_scalar_deleting_destructor_(RigLogicTest *this,uint param_1)

{
  ~RigLogicTest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// TestBody @ 14c5a2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RigLogicTest_EvaluateRigInstance_Test::TestBody(RigLogicTest_EvaluateRigInstance_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  longlong lVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  int iVar8;
  undefined1 auStackY_c8 [32];
  ushort local_98 [4];
  AssertHelper local_90;
  AssertionResult local_88;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68 = ___xmm_4080000040400000400000003f800000;
  uStack_60 = _UNK_15076c058;
  local_48 = 0x41100000;
  local_58 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_50 = _UNK_152894998;
  (**(code **)(**(longlong **)&this->field_0x30 + 0x28))(*(longlong **)&this->field_0x30,&local_68);
  (**(code **)(**(longlong **)&this->field_0x28 + 0x88))
            (*(longlong **)&this->field_0x28,*(undefined8 *)&this->field_0x30);
  local_40 = ___xmm_4080000040400000400000003f800000;
  uStack_38 = _UNK_15076c058;
  local_20 = 0x41100000;
  local_30 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_28 = _UNK_152894998;
  (**(code **)(**(longlong **)&this->field_0x30 + 0x50))(*(longlong **)&this->field_0x30,&local_40);
  (**(code **)(**(longlong **)&this->field_0x28 + 0xe0))
            (*(longlong **)&this->field_0x28,*(undefined8 *)&this->field_0x30);
  local_98[0] = (**(code **)(*(longlong *)
                              ((longlong)
                               *(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 8) +
                              *(longlong *)&this->field_0x20 + 8) + 0x50))();
  pbVar7 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
           (ulonglong)local_98[0];
  lVar2 = (**(code **)(**(longlong **)&this->field_0x30 + 0xb8))
                    (*(longlong **)&this->field_0x30,local_78);
  local_90.data_ = *(AssertHelperData **)(lVar2 + 8);
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_90.data_ ==
      pbVar7) {
    testing::AssertionSuccess(&local_88);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_short>
              (&local_88,"rigInstance->getJointOutputs().size()","reader->getJointRowCount()",
               (ulong64 *)&local_90,local_98);
  }
  uVar1._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_90);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    iVar8 = 0x2f;
LAB_14c5a3244:
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_78,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                        ,iVar8,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_78);
    local_78[0]._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_90.data_;
  }
  else {
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_98[0] = (**(code **)(*(longlong *)
                                ((longlong)
                                 *(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4) +
                                *(longlong *)&this->field_0x20 + 8) + 0xd0))();
    pbVar7 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             (ulonglong)local_98[0];
    lVar2 = (**(code **)(**(longlong **)&this->field_0x30 + 0xc0))
                      (*(longlong **)&this->field_0x30,local_78);
    local_90.data_ = *(AssertHelperData **)(lVar2 + 8);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_90.data_ ==
        pbVar7) {
      testing::AssertionSuccess(&local_88);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_short>
                (&local_88,"rigInstance->getBlendShapeOutputs().size()",
                 "reader->getBlendShapeChannelCount()",(ulong64 *)&local_90,local_98);
    }
    uVar1._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
    if (local_88.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_90);
      if (local_88.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_88.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_88.message_._Mypair._Myval2;
          iVar8 = 0x30;
          goto LAB_14c5a3244;
        }
      }
      iVar8 = 0x30;
      goto LAB_14c5a3244;
    }
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_98[0] = (**(code **)(*(longlong *)
                                ((longlong)
                                 *(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4) +
                                *(longlong *)&this->field_0x20 + 8) + 0xf0))();
    pbVar7 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             (ulonglong)local_98[0];
    lVar2 = (**(code **)(**(longlong **)&this->field_0x30 + 200))
                      (*(longlong **)&this->field_0x30,local_78);
    local_90.data_ = *(AssertHelperData **)(lVar2 + 8);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_90.data_ ==
        pbVar7) {
      testing::AssertionSuccess(&local_88);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_short>
                (&local_88,"rigInstance->getAnimatedMapOutputs().size()",
                 "reader->getAnimatedMapCount()",(ulong64 *)&local_90,local_98);
    }
    if (local_88.success_ != false) goto LAB_14c5a328f;
    pMVar3 = (Message *)testing::Message::Message((Message *)local_78);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_90,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                        ,0x31,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_90);
  }
  if (local_78[0]._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)&(local_78[0]._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_78[0]._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5a328f:
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a32e0

void * __thiscall
RigLogicTest_EvaluateRigInstance_Test::_scalar_deleting_destructor_
          (RigLogicTest_EvaluateRigInstance_Test *this,uint param_1)

{
  _anon_967C45C2::RigLogicTest::~RigLogicTest((RigLogicTest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// CreateTest @ 14c5a3320

Test * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_EvaluateRigInstance_Test>::CreateTest
          (TestFactoryImpl<RigLogicTest_EvaluateRigInstance_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[2]._padding_ = 0;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[3]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7RigLogicTest_EvaluateRigInstance_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a3380

void * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_EvaluateRigInstance_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RigLogicTest_EvaluateRigInstance_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<RigLogicTest_EvaluateRigInstance_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a33c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RigLogicTest_AccessJointVariableAttributeIndices_Test::TestBody
          (RigLogicTest_AccessJointVariableAttributeIndices_Test *this)

{
  ushort *puVar1;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  short sVar7;
  ushort uVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  ushort *puVar16;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var18;
  ushort uVar19;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  AssertHelper local_c0;
  AssertionResult local_b8;
  AssertionResult local_a8;
  void *local_98;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_90;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar19 = 0;
  sVar7 = (**(code **)(**(longlong **)&this->field_0x28 + 0x18))();
  uVar6 = _UNK_15076add8;
  uVar5 = ___xmm_000000000000000f0000000000000000;
  if (sVar7 != 0) {
    do {
      (**(code **)(**(longlong **)&this->field_0x28 + 0x50))
                (*(longlong **)&this->field_0x28,&local_98,uVar19);
      pvVar3 = ((rltests::decoded::jointVariableIndices._Mypair._Myval2._Myfirst)->_Mypair)._Myval2.
               _Myfirst;
      local_c0.data_ = (AssertHelperData *)local_90;
      puVar16 = pvVar3[uVar19]._Mypair._Myval2._Myfirst;
      _Var18._Myval2 =
           (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
           ((longlong)pvVar3[uVar19]._Mypair._Myval2._Mylast - (longlong)puVar16 >> 1);
      local_c8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )_Var18._Myval2;
      if (local_90 == _Var18._Myval2) {
        testing::AssertionSuccess(&local_a8);
      }
      else {
        testing::PrintToString<unsigned___int64>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                   (ulong64 *)&local_c8);
        testing::PrintToString<unsigned___int64>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                   (ulong64 *)&local_c0);
        testing::internal::EqFailure
                  (&local_a8,"actual.size()","expected.size()",
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                   false);
        if (0xf < uStack_70) {
          pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
          uVar15 = uStack_70 + 1;
          pvVar11 = pvVar4;
          if (0xfff < uVar15) {
            pvVar11 = *(void **)((longlong)pvVar4 + -8);
            uVar15 = uStack_70 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))) goto LAB_14c5a3633;
          }
          ::operator_delete(pvVar11,uVar15);
        }
        local_88._Buf[0] = '\0';
        local_78 = uVar5;
        uStack_70 = uVar6;
        if (0xf < local_50) {
          uVar15 = local_50 + 1;
          uVar12 = local_68._Ptr;
          if (0xfff < uVar15) {
            uVar12 = *(undefined8 *)(local_68._Ptr + -8);
            uVar15 = local_50 + 0x28;
            if ((char *)0x1f < local_68._Ptr + (-8 - uVar12)) {
LAB_14c5a3633:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar12,uVar15);
        }
      }
      uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
      if (local_a8.success_ == false) {
        pMVar9 = (Message *)testing::Message::Message((Message *)&local_c8);
        if (local_a8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar13 = "";
        }
        else {
          pcVar13 = (char *)local_a8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_a8.message_._Mypair._Myval2 + 0x18)) {
            pcVar13 = *(char **)local_a8.message_._Mypair._Myval2;
          }
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_c0,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                             ,0x38,pcVar13);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
        testing::internal::AssertHelper::~AssertHelper(&local_c0);
        uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
        if (local_c8._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar14 = (undefined8 *)
                    ((longlong)local_c8._Mypair._Myval2 +
                    (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
          (**(code **)*puVar14)(puVar14,1);
          uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
        }
LAB_14c5a3745:
        if (uVar17._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   uVar17._Mypair._Myval2);
        ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
        return;
      }
      if (local_a8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_a8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
      }
      puVar1 = puVar16 + (longlong)_Var18._Myval2;
      for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
        pbVar2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((longlong)local_98 + (longlong)local_90 * 2);
        local_c0.data_ = (AssertHelperData *)pbVar2;
        local_c8._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )__std_find_trivial_2(local_98,pbVar2,*puVar16);
        if (local_c8._Mypair._Myval2 ==
            (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
             )pbVar2) {
          testing::internal::CmpHelperOpFailure<unsigned_short_const_*,unsigned_short_const_*>
                    (&local_b8,"std::find(actual.begin(), actual.end(), attrIndex)","actual.end()",
                     (ushort **)&local_c8,(ushort **)&local_c0,"!=");
        }
        else {
          testing::AssertionSuccess(&local_b8);
        }
        uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
        if (local_b8.success_ == false) {
          pMVar9 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_b8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar13 = "";
          }
          else {
            pcVar13 = (char *)local_b8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
              pcVar13 = *(char **)local_b8.message_._Mypair._Myval2;
            }
          }
          pAVar10 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_c0,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                               ,0x3d,pcVar13);
          testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
          testing::internal::AssertHelper::~AssertHelper(&local_c0);
          uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
          if (local_c8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar14 = (undefined8 *)
                      ((longlong)local_c8._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
            (**(code **)*puVar14)(puVar14,1);
            uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
          }
          goto LAB_14c5a3745;
        }
        if (local_b8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
        }
      }
      uVar19 = uVar19 + 1;
      uVar8 = (**(code **)(**(longlong **)&this->field_0x28 + 0x18))();
    } while (uVar19 < uVar8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a37b0

void * __thiscall
RigLogicTest_AccessJointVariableAttributeIndices_Test::_scalar_deleting_destructor_
          (RigLogicTest_AccessJointVariableAttributeIndices_Test *this,uint param_1)

{
  _anon_967C45C2::RigLogicTest::~RigLogicTest((RigLogicTest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// CreateTest @ 14c5a37f0

Test * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_AccessJointVariableAttributeIndices_Test>::
CreateTest(TestFactoryImpl<RigLogicTest_AccessJointVariableAttributeIndices_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[2]._padding_ = 0;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[3]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7RigLogicTest_AccessJointVariableAttributeIndices_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a3850

void * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_AccessJointVariableAttributeIndices_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RigLogicTest_AccessJointVariableAttributeIndices_Test> *this,uint param_1
          )

{
  *this = (TestFactoryImpl<RigLogicTest_AccessJointVariableAttributeIndices_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a3890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RigLogicTest_DumpStateThenRestore_Test::TestBody(RigLogicTest_DumpStateThenRestore_Test *this)

{
  short sVar1;
  ushort uVar2;
  MemoryStream *pMVar3;
  RigLogic *pRVar4;
  RigInstance *pRVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ushort uVar10;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar11;
  undefined1 auStackY_128 [32];
  AssertHelper local_f8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_f0;
  AssertionResult local_e8;
  AssertionResult local_d8;
  AssertionResult local_c8;
  ArrayView<float_const_> local_b8;
  ArrayView<float_const_> local_a8;
  ArrayView<float_const_> local_98;
  ArrayView<float_const_> local_88;
  ArrayView<float_const_> local_78;
  ArrayView<float_const_> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_58 = ___xmm_4080000040400000400000003f800000;
  uStack_50 = _UNK_15076c058;
  local_38 = 0x41100000;
  local_48 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_40 = _UNK_152894998;
  pMVar3 = trio::MemoryStream::create((MemoryResource *)0x0);
  (**(code **)(**(longlong **)&this->field_0x28 + 8))(*(longlong **)&this->field_0x28,pMVar3);
  (**(code **)(*(longlong *)&pMVar3->field_0x20 + 8))(&pMVar3->field_0x20,0);
  pRVar4 = rl4::RigLogic::restore((BoundedIOStream *)pMVar3,(MemoryResource *)&this->field_0x10);
  pRVar5 = rl4::RigInstance::create(pRVar4,(MemoryResource *)&this->field_0x10);
  uVar10 = 0;
  sVar1 = (**(code **)(**(longlong **)&this->field_0x28 + 0x18))();
  if (sVar1 != 0) {
    do {
      (**(code **)(**(longlong **)&this->field_0x30 + 0xd8))(*(longlong **)&this->field_0x30,uVar10)
      ;
      (**(code **)(**(longlong **)&this->field_0x30 + 0x28))
                (*(longlong **)&this->field_0x30,&local_58);
      (**(code **)(**(longlong **)&this->field_0x28 + 0x88))
                (*(longlong **)&this->field_0x28,*(undefined8 *)&this->field_0x30);
      (**(code **)(**(longlong **)&this->field_0x28 + 0xe0))
                (*(longlong **)&this->field_0x28,*(undefined8 *)&this->field_0x30);
      (**(code **)((longlong)*pRVar5 + 0xd8))(pRVar5,uVar10);
      (**(code **)((longlong)*pRVar5 + 0x28))(pRVar5,&local_58);
      (**(code **)((longlong)*pRVar4 + 0x88))(pRVar4,pRVar5);
      (**(code **)((longlong)*pRVar4 + 0xe0))(pRVar4,pRVar5);
      (**(code **)(**(longlong **)&this->field_0x30 + 0xb8))
                (*(longlong **)&this->field_0x30,&local_a8);
      (**(code **)(**(longlong **)&this->field_0x30 + 0xc0))
                (*(longlong **)&this->field_0x30,&local_88);
      (**(code **)(**(longlong **)&this->field_0x30 + 200))
                (*(longlong **)&this->field_0x30,&local_68);
      (**(code **)((longlong)*pRVar5 + 0xb8))(pRVar5,&local_b8);
      (**(code **)((longlong)*pRVar5 + 0xc0))(pRVar5,&local_98);
      (**(code **)((longlong)*pRVar5 + 200))(pRVar5,&local_78);
      testing::internal::CmpHelperEQ<av::ArrayView<float_const_>,av::ArrayView<float_const_>_>
                (&local_c8,"origJointOutputs","cloneJointOutputs",&local_a8,&local_b8);
      uVar11._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
      if (local_c8.success_ == false) {
        pMVar6 = (Message *)testing::Message::Message((Message *)&local_f8);
        if (local_c8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)local_c8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
            pcVar8 = *(char **)local_c8.message_._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_f0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                            ,0x5e,pcVar8);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_f0);
        uVar11._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
        if (local_f8.data_ != (AssertHelperData *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)&(local_f8.data_)->type +
                   (longlong)*(int *)(*(longlong *)local_f8.data_ + 4));
          (**(code **)*puVar9)(puVar9,1);
          uVar11._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
        }
LAB_14c5a3be0:
        if (uVar11._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uVar11._Mypair._Myval2);
          ::operator_delete((void *)uVar11._Mypair._Myval2,0x20);
        }
        goto LAB_14c5a3b28;
      }
      if (local_c8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar11._Mypair._Myval2,0x20);
      }
      testing::internal::CmpHelperEQ<av::ArrayView<float_const_>,av::ArrayView<float_const_>_>
                (&local_d8,"origBlendShapeOutputs","cloneBlendShapeOutputs",&local_88,&local_98);
      uVar11._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
      if (local_d8.success_ == false) {
        pMVar6 = (Message *)testing::Message::Message((Message *)&local_f8);
        if (local_d8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)local_d8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
            pcVar8 = *(char **)local_d8.message_._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_f0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                            ,0x5f,pcVar8);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_f0);
        uVar11._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
        if (local_f8.data_ != (AssertHelperData *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)&(local_f8.data_)->type +
                   (longlong)*(int *)(*(longlong *)local_f8.data_ + 4));
          (**(code **)*puVar9)(puVar9,1);
          uVar11._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
        }
        goto LAB_14c5a3be0;
      }
      if (local_d8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_d8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar11._Mypair._Myval2,0x20);
      }
      testing::internal::CmpHelperEQ<av::ArrayView<float_const_>,av::ArrayView<float_const_>_>
                (&local_e8,"origAnimatedMapOutputs","cloneAnimatedMapOutputs",&local_68,&local_78);
      uVar11._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
      if (local_e8.success_ == false) {
        pMVar6 = (Message *)testing::Message::Message((Message *)&local_f0);
        if (local_e8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)local_e8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
            pcVar8 = *(char **)local_e8.message_._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_f8,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\riglogic\\TestRigLogic.cpp"
                            ,0x60,pcVar8);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
        testing::internal::AssertHelper::~AssertHelper(&local_f8);
        uVar11._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
        if (local_f0._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)local_f0._Mypair._Myval2 + 4) +
                   (longlong)local_f0._Mypair._Myval2);
          (**(code **)*puVar9)(puVar9,1);
          uVar11._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
        }
        goto LAB_14c5a3be0;
      }
      if (local_e8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar11._Mypair._Myval2,0x20);
      }
      uVar10 = uVar10 + 1;
      uVar2 = (**(code **)(**(longlong **)&this->field_0x28 + 0x18))();
    } while (uVar10 < uVar2);
  }
  rl4::RigInstance::destroy(pRVar5);
  rl4::RigLogic::destroy(pRVar4);
LAB_14c5a3b28:
  if (pMVar3 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar3);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a3d20

void * __thiscall
RigLogicTest_DumpStateThenRestore_Test::_scalar_deleting_destructor_
          (RigLogicTest_DumpStateThenRestore_Test *this,uint param_1)

{
  _anon_967C45C2::RigLogicTest::~RigLogicTest((RigLogicTest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// CreateTest @ 14c5a3d60

Test * __thiscall
testing::internal::TestFactoryImpl<RigLogicTest_DumpStateThenRestore_Test>::CreateTest
          (TestFactoryImpl<RigLogicTest_DumpStateThenRestore_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[2]._padding_ = 0;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[3]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7RigLogicTest_DumpStateThenRestore_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// CmpHelperNE<unsigned_short_const_*,unsigned_short_const_*> @ 14c5a3dc0

AssertionResult * __cdecl
testing::internal::CmpHelperNE<unsigned_short_const_*,unsigned_short_const_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,ushort **param_3,
          ushort **param_4)

{
  if (*param_3 != *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperOpFailure<unsigned_short_const_*,unsigned_short_const_*>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
  return __return_storage_ptr__;
}

// CmpHelperOpFailure<unsigned_short_const_*,unsigned_short_const_*> @ 14c5a3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperOpFailure<unsigned_short_const_*,unsigned_short_const_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,ushort **param_3,
          ushort **param_4,char *param_5)

{
  void *pvVar1;
  AssertionResult *pAVar2;
  Message *pMVar3;
  undefined8 *puVar4;
  void *pvVar5;
  char *pcVar6;
  ulong64 uVar7;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b0;
  ushort **local_a8;
  AssertionResult local_a0;
  _Bxty local_90;
  undefined8 local_80;
  ulonglong uStack_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = param_4;
  local_b0._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )param_3;
  pAVar2 = AssertionFailure(&local_a0);
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,"Expected: (");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4) +
             (longlong)local_c0._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
  pcVar6 = "(null)";
  if (param_1 != (char *)0x0) {
    pcVar6 = param_1;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,pcVar6);
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_c0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_b8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,") ");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4) +
             (longlong)local_b8._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_b8);
  pcVar6 = "(null)";
  if (param_5 != (char *)0x0) {
    pcVar6 = param_5;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,pcVar6);
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_b8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10," (");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
  pcVar6 = "(null)";
  if (param_2 != (char *)0x0) {
    pcVar6 = param_2;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,pcVar6);
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_c8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,"), actual: ");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  PrintToString<unsigned_short_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
             (ushort **)local_b0._Mypair._Myval2);
  pAVar2 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_70);
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_b0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10," vs ");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_b0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)local_b0._Mypair._Myval2 +
                (longlong)*(int *)(*(ushort **)local_b0._Mypair._Myval2 + 2)))
              ((undefined8 *)
               ((longlong)local_b0._Mypair._Myval2 +
               (longlong)*(int *)(*(ushort **)local_b0._Mypair._Myval2 + 2)),1);
  }
  PrintToString<unsigned_short_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,local_a8);
  pAVar2 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_90);
  AssertionResult::AssertionResult(__return_storage_ptr__,pAVar2);
  if (0xf < uStack_78) {
    pvVar1 = (void *)CONCAT71(local_90._1_7_,local_90._Buf[0]);
    uVar7 = uStack_78 + 1;
    pvVar5 = pvVar1;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uStack_78 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c5a415e;
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_90._Buf[0] = '\0';
  local_80 = ___xmm_000000000000000f0000000000000000;
  uStack_78 = _UNK_15076add8;
  if (0xf < uStack_58) {
    pvVar1 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
    uVar7 = uStack_58 + 1;
    pvVar5 = pvVar1;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uStack_58 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
LAB_14c5a415e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_70._Buf[0] = '\0';
  local_60 = ___xmm_000000000000000f0000000000000000;
  uStack_58 = _UNK_15076add8;
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<unsigned_short_const_> @ 14c5a41e0

void __cdecl
testing::internal::DefaultPrintTo<unsigned_short_const_>
          (WrapPrinterType<1> param_1,ushort *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (ushort *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c5a41f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// FormatForComparisonFailureMessage<unsigned_short_const_*,unsigned_short_const_*> @ 14c5a4210

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<unsigned_short_const_*,unsigned_short_const_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ushort **param_1,ushort **param_2)

{
  PrintToString<unsigned_short_const_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<unsigned_short_const_*> @ 14c5a4230

void __cdecl
testing::internal::PrintTo<unsigned_short_const_*>
          (ushort **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (ushort *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c5a424a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintToString<unsigned_short_const_*> @ 14c5a4260

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<unsigned_short_const_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ushort **param_1)

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
  if (*param_1 == (ushort *)0x0) {
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,"NULL");
  }
  else {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
  }
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

// UniversalPrint<unsigned_short_const_*> @ 14c5a4420

void __cdecl
testing::internal::UniversalPrint<unsigned_short_const_*>
          (ushort **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (ushort *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c5a443a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// makeScoped<rl4::RigInstance,rl4::RigLogic_*> @ 14c5a4450

ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_> __cdecl
pma::makeScoped<rl4::RigInstance,rl4::RigLogic_*>(RigLogic **param_1)

{
  RigInstance *pRVar1;
  undefined8 *in_RDX;
  
  pRVar1 = rl4::RigInstance::create((RigLogic *)*in_RDX,(MemoryResource *)0x0);
  *param_1 = (RigLogic *)pRVar1;
  return (ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_>)
         (RigInstance *)param_1;
}

// makeScoped<rl4::RigInstance,rl4::RigLogic_*,pma::AlignedMemoryResource_*> @ 14c5a4480

ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_> __cdecl
pma::makeScoped<rl4::RigInstance,rl4::RigLogic_*,pma::AlignedMemoryResource_*>
          (RigLogic **param_1,AlignedMemoryResource **param_2)

{
  RigInstance *pRVar1;
  undefined8 *in_R8;
  
  pRVar1 = rl4::RigInstance::create((RigLogic *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (RigLogic *)pRVar1;
  return (ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_>)
         (RigInstance *)param_1;
}

// makeScoped<rl4::RigInstance,pma::FactoryCreate<rl4::RigInstance,rl4::RigInstance>,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>,rl4::RigLogic_*,pma::AlignedMemoryResource_*,rl4::RigInstance> @ 14c5a44b0

ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_> __cdecl
pma::
makeScoped<rl4::RigInstance,pma::FactoryCreate<rl4::RigInstance,rl4::RigInstance>,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>,rl4::RigLogic_*,pma::AlignedMemoryResource_*,rl4::RigInstance>
          (RigLogic **param_1,AlignedMemoryResource **param_2)

{
  RigInstance *pRVar1;
  undefined8 *in_R8;
  
  pRVar1 = rl4::RigInstance::create((RigLogic *)*param_2,(MemoryResource *)*in_R8);
  *param_1 = (RigLogic *)pRVar1;
  return (ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_>)
         (RigInstance *)param_1;
}

// makeScoped<rl4::RigInstance,pma::FactoryCreate<rl4::RigInstance,rl4::RigInstance>,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>,rl4::RigLogic_*,rl4::RigInstance> @ 14c5a44e0

ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_> __cdecl
pma::
makeScoped<rl4::RigInstance,pma::FactoryCreate<rl4::RigInstance,rl4::RigInstance>,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>,rl4::RigLogic_*,rl4::RigInstance>
          (RigLogic **param_1)

{
  RigInstance *pRVar1;
  undefined8 *in_RDX;
  
  pRVar1 = rl4::RigInstance::create((RigLogic *)*in_RDX,(MemoryResource *)0x0);
  *param_1 = (RigLogic *)pRVar1;
  return (ScopedPtr<rl4::RigInstance,pma::FactoryDestroy<rl4::RigInstance,rl4::RigInstance>_>)
         (RigInstance *)param_1;
}

// makeScoped<rl4::RigLogic,dna::BinaryStreamReader_*> @ 14c5a4510

ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_> __cdecl
pma::makeScoped<rl4::RigLogic,dna::BinaryStreamReader_*>(BinaryStreamReader **param_1)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_RDX;
  Configuration local_28;
  
  local_28.calculationType = SSE;
  local_28.loadJoints = true;
  local_28.loadBlendShapes = true;
  local_28.loadAnimatedMaps = true;
  local_28.loadMachineLearnedBehavior = true;
  local_28.loadRBFBehavior = true;
  local_28.loadTwistSwingBehavior = true;
  local_28.translationType = Vector;
  local_28.rotationType = EulerAngles;
  local_28.rotationOrder = XYZ;
  local_28.scaleType = Vector;
  local_28.translationPruningThreshold = 0.0;
  local_28.rotationPruningThreshold = 0.0;
  local_28.scalePruningThreshold = 0.0;
  pBVar1 = (BinaryStreamReader *)
           rl4::RigLogic::create((Reader *)*in_RDX,&local_28,(MemoryResource *)0x0);
  *param_1 = pBVar1;
  return (ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_>)
         (RigLogic *)param_1;
}

// makeScoped<rl4::RigLogic,dna::BinaryStreamReader_*,rl4::Configuration_&> @ 14c5a4570

ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_> __cdecl
pma::makeScoped<rl4::RigLogic,dna::BinaryStreamReader_*,rl4::Configuration_&>
          (BinaryStreamReader **param_1,Configuration *param_2)

{
  BinaryStreamReader *pBVar1;
  Configuration *in_R8;
  
  pBVar1 = (BinaryStreamReader *)
           rl4::RigLogic::create(*(Reader **)param_2,in_R8,(MemoryResource *)0x0);
  *param_1 = pBVar1;
  return (ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_>)
         (RigLogic *)param_1;
}

// makeScoped<rl4::RigLogic,pma::FactoryCreate<rl4::RigLogic,rl4::RigLogic>,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>,dna::BinaryStreamReader_*,rl4::Configuration_&,rl4::RigLogic> @ 14c5a45a0

ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_> __cdecl
pma::
makeScoped<rl4::RigLogic,pma::FactoryCreate<rl4::RigLogic,rl4::RigLogic>,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>,dna::BinaryStreamReader_*,rl4::Configuration_&,rl4::RigLogic>
          (BinaryStreamReader **param_1,Configuration *param_2)

{
  BinaryStreamReader *pBVar1;
  Configuration *in_R8;
  
  pBVar1 = (BinaryStreamReader *)
           rl4::RigLogic::create(*(Reader **)param_2,in_R8,(MemoryResource *)0x0);
  *param_1 = pBVar1;
  return (ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_>)
         (RigLogic *)param_1;
}

// makeScoped<rl4::RigLogic,pma::FactoryCreate<rl4::RigLogic,rl4::RigLogic>,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>,dna::BinaryStreamReader_*,rl4::RigLogic> @ 14c5a45d0

ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_> __cdecl
pma::
makeScoped<rl4::RigLogic,pma::FactoryCreate<rl4::RigLogic,rl4::RigLogic>,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>,dna::BinaryStreamReader_*,rl4::RigLogic>
          (BinaryStreamReader **param_1)

{
  BinaryStreamReader *pBVar1;
  undefined8 *in_RDX;
  Configuration local_28;
  
  local_28.calculationType = SSE;
  local_28.loadJoints = true;
  local_28.loadBlendShapes = true;
  local_28.loadAnimatedMaps = true;
  local_28.loadMachineLearnedBehavior = true;
  local_28.loadRBFBehavior = true;
  local_28.loadTwistSwingBehavior = true;
  local_28.translationType = Vector;
  local_28.rotationType = EulerAngles;
  local_28.rotationOrder = XYZ;
  local_28.scaleType = Vector;
  local_28.translationPruningThreshold = 0.0;
  local_28.rotationPruningThreshold = 0.0;
  local_28.scalePruningThreshold = 0.0;
  pBVar1 = (BinaryStreamReader *)
           rl4::RigLogic::create((Reader *)*in_RDX,&local_28,(MemoryResource *)0x0);
  *param_1 = pBVar1;
  return (ScopedPtr<rl4::RigLogic,pma::FactoryDestroy<rl4::RigLogic,rl4::RigLogic>_>)
         (RigLogic *)param_1;
}

// ~RigLogicTest @ 14c5a4630

void __thiscall _anon_967C45C2::RigLogicTest::~RigLogicTest(RigLogicTest *this)

{
  RigInstance *pRVar1;
  RigLogic *pRVar2;
  BinaryStreamReader *pBVar3;
  MemoryStream *pMVar4;
  
  pRVar1 = (this->rigInstance).ptr;
  if (pRVar1 != (RigInstance *)0x0) {
    rl4::RigInstance::destroy(pRVar1);
    (this->rigInstance).ptr = (RigInstance *)0x0;
  }
  pRVar2 = (this->rigLogic).ptr;
  if (pRVar2 != (RigLogic *)0x0) {
    rl4::RigLogic::destroy(pRVar2);
    (this->rigLogic).ptr = (RigLogic *)0x0;
  }
  pBVar3 = (this->reader).ptr;
  if (pBVar3 != (BinaryStreamReader *)0x0) {
    dna::BinaryStreamReader::destroy(pBVar3);
    (this->reader).ptr = (BinaryStreamReader *)0x0;
  }
  pMVar4 = (this->stream).ptr;
  if (pMVar4 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar4);
    (this->stream).ptr = (MemoryStream *)0x0;
  }
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->memRes);
  testing::Test::~Test((Test *)this);
  return;
}

// GetSetUpCaseOrSuite @ 14c5a46b0

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::GetSetUpCaseOrSuite
          (char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c5a4750

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<`anonymous_namespace'::RigLogicTest>::GetTearDownCaseOrSuite
          (char *param_1,int param_2)

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

