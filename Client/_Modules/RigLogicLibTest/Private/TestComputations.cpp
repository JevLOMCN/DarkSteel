// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 210

// test_info_'' @ 141379b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_ConjugateQuat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_ConjugateQuat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x55);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x55);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x55;
  ComputationsTest_ConjugateQuat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","ConjugateQuat",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141379da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_CrossProduct_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_CrossProduct_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x20);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x20);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x20;
  ComputationsTest_CrossProduct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","CrossProduct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141379fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_DeterminantMat2_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_DeterminantMat2_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x99);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x99);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x99;
  ComputationsTest_DeterminantMat2_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","DeterminantMat2",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_DeterminantMat3_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_DeterminantMat3_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x9f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x9f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x9f;
  ComputationsTest_DeterminantMat3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","DeterminantMat3",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137a3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_DeterminantMat4_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_DeterminantMat4_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xa7);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xa7);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xa7;
  ComputationsTest_DeterminantMat4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","DeterminantMat4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137a5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_DeterminantMat5_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_DeterminantMat5_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xb0);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xb0);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xb0;
  ComputationsTest_DeterminantMat5_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","DeterminantMat5",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137a7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_DotProduct_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_DotProduct_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x27);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x27);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x27;
  ComputationsTest_DotProduct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","DotProduct",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137aa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseLUMat1_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseLUMat1_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xc5);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xc5);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xc5;
  ComputationsTest_InverseLUMat1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseLUMat1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137ac10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseLUMat4_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseLUMat4_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xed);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xed);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xed;
  ComputationsTest_InverseLUMat4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseLUMat4",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137ae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseLUMat7_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseLUMat7_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x112);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x112);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x112;
  ComputationsTest_InverseLUMat7_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseLUMat7",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137b030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseMat1_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseMat1_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xba);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xba);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xba;
  ComputationsTest_InverseMat1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseMat1",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137b240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseMat3_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseMat3_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xd0);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xd0);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xd0;
  ComputationsTest_InverseMat3_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseMat3",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137b450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseMat4_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseMat4_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xda);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xda);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xda;
  ComputationsTest_InverseMat4_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseMat4",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137b660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseMat7_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseMat7_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x100);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x100);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x100;
  ComputationsTest_InverseMat7_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseMat7",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137b870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_InverseQuat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_InverseQuat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x5e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x5e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x5e;
  ComputationsTest_InverseQuat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","InverseQuat",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137ba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_LengthQuat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_LengthQuat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x39);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x39);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x39;
  ComputationsTest_LengthQuat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","LengthQuat",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137bc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_LengthVec_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_LengthVec_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x34);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x34);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x34;
  ComputationsTest_LengthVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","LengthVec",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137bea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_Lerp_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_Lerp_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x67);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x67);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x67;
  ComputationsTest_Lerp_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","Lerp",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137c0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_NegateMat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_NegateMat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x14);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x14);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x14;
  ComputationsTest_NegateMat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","NegateMat",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137c2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_NegateQuat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_NegateQuat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xe);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0xe);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0xe;
  ComputationsTest_NegateQuat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","NegateQuat",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137c4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_NegateVec_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_NegateVec_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 8;
  ComputationsTest_NegateVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","NegateVec",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137c6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_NormalizeQuat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_NormalizeQuat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x4c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x4c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x4c;
  ComputationsTest_NormalizeQuat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","NormalizeQuat",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_NormalizeVec_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_NormalizeVec_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x3e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x3e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x3e;
  ComputationsTest_NormalizeVec_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","NormalizeVec",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137cb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_QuatDotProduct_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_QuatDotProduct_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x2e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x2e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x2e;
  ComputationsTest_QuatDotProduct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","QuatDotProduct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137cd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_SlerpFallbackToLerp_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VComputationsTest_SlerpFallbackToLerp_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x7b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x7b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x7b;
  ComputationsTest_SlerpFallbackToLerp_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","SlerpFallbackToLerp",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_Slerp_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_Slerp_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x71);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x71);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x71;
  ComputationsTest_Slerp_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","Slerp",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137d130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_TraceMat_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_TraceMat_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x124);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x124);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x124;
  ComputationsTest_TraceMat_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","TraceMat",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137d340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_TransposeNonSquare_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VComputationsTest_TransposeNonSquare_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x8f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x8f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x8f;
  ComputationsTest_TransposeNonSquare_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","TransposeNonSquare",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14137d550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ComputationsTest_TransposeSquare_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VComputationsTest_TransposeSquare_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x85);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,0x85);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x78;
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
  pcVar6[0x78] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000078;
  uStack_40 = _UNK_1528962f8;
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
  *(local_58._Ptr + 0x78) = pcVar6[0x78];
  local_38 = 0x85;
  ComputationsTest_TransposeSquare_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ComputationsTest","TransposeSquare",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c5a8f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_InverseLUMat7_Test::TestBody(ComputationsTest_InverseLUMat7_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  mat<7,7,float> *pmVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStackY_3c8 [32];
  AssertionResult local_388;
  AssertHelper local_378;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_370;
  mat<7,7,float> local_368;
  mat<7,7,float> local_298;
  mat<7,7,float> local_1c8;
  mat<7,7,float> local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_298.values[0].values._0_8_ = ___xmm_3ecccccd3e99999a3e4ccccd3f19999a;
  local_298.values[0].values._8_8_ = _UNK_152896468;
  local_298.values[0].values._16_8_ = ___xmm_3e4ccccd3f4ccccd3f3333333f000000;
  local_298.values._24_8_ = _UNK_152896428;
  local_298.values[1].values._4_8_ = ___xmm_3ecccccd3e99999a3f0000003f333333;
  local_298.values[1].values._12_8_ = _UNK_152896478;
  local_298.values[1].values._20_8_ = ___xmm_3f0000003e99999a3f19999a3dcccccd;
  local_298.values[2].values._0_8_ = _UNK_1528964a8;
  local_298.values[2].values._8_8_ = ___xmm_3ecccccd3f19999a3e4ccccd3f333333;
  local_298.values[2].values._16_8_ = _UNK_152896488;
  local_298.values._80_8_ = ___xmm_3e4ccccd3e99999a3ecccccd3dcccccd;
  local_298.values[3].values._4_8_ = _UNK_1528963f8;
  local_298.values[3].values._12_8_ = ___xmm_3f3333333f0000003dcccccd3f19999a;
  local_298.values[3].values._20_8_ = _UNK_152896518;
  local_298.values[4].values._0_8_ = ___xmm_3dcccccd3f19999a3ecccccd3f000000;
  local_298.values[4].values._8_8_ = _UNK_1528963e8;
  local_298.values[4].values._16_8_ = ___xmm_3f3333333e99999a3f4ccccd3e4ccccd;
  local_298.values._136_8_ = _UNK_152896508;
  local_298.values[5].values._4_8_ = ___xmm_3f4ccccd3f0000003ecccccd3dcccccd;
  local_298.values[5].values._12_8_ = _UNK_152896538;
  local_298.values[5].values._20_8_ = ___xmm_3f19999a3f4ccccd3e4ccccd3e99999a;
  local_298.values[6].values._0_8_ = _UNK_1528964c8;
  local_298.values[6].values._8_8_ = ___xmm_3e4ccccd3e99999a3f3333333dcccccd;
  local_298.values[6].values._16_8_ = _UNK_152896408;
  local_298.values[6].values[6] = 0.4;
  local_368.values[0].values._0_8_ = ___xmm_3ecccccd3e99999a3e4ccccd3f19999a;
  local_368.values[0].values._8_8_ = _UNK_152896468;
  local_368.values[0].values._16_8_ = ___xmm_3e4ccccd3f4ccccd3f3333333f000000;
  local_368.values._24_8_ = _UNK_152896428;
  local_368.values[1].values._4_8_ = ___xmm_3ecccccd3e99999a3f0000003f333333;
  local_368.values[1].values._12_8_ = _UNK_152896478;
  local_368.values[1].values._20_8_ = ___xmm_3f0000003e99999a3f19999a3dcccccd;
  local_368.values[2].values._0_8_ = _UNK_1528964a8;
  local_368.values[2].values._8_8_ = ___xmm_3ecccccd3f19999a3e4ccccd3f333333;
  local_368.values[2].values._16_8_ = _UNK_152896488;
  local_368.values._80_8_ = ___xmm_3e4ccccd3e99999a3ecccccd3dcccccd;
  local_368.values[3].values._4_8_ = _UNK_1528963f8;
  local_368.values[3].values._12_8_ = ___xmm_3f3333333f0000003dcccccd3f19999a;
  local_368.values[3].values._20_8_ = _UNK_152896518;
  local_368.values[4].values._0_8_ = ___xmm_3dcccccd3f19999a3ecccccd3f000000;
  local_368.values[4].values._8_8_ = _UNK_1528963e8;
  local_368.values[4].values._16_8_ = ___xmm_3f3333333e99999a3f4ccccd3e4ccccd;
  local_368.values._136_8_ = _UNK_152896508;
  local_368.values[5].values._4_8_ = ___xmm_3f4ccccd3f0000003ecccccd3dcccccd;
  local_368.values[5].values._12_8_ = _UNK_152896538;
  local_368.values[5].values._20_8_ = ___xmm_3f19999a3f4ccccd3e4ccccd3e99999a;
  local_368.values[6].values._0_8_ = _UNK_1528964c8;
  local_368.values[6].values._8_8_ = ___xmm_3e4ccccd3e99999a3f3333333dcccccd;
  local_368.values[6].values._16_8_ = _UNK_152896408;
  local_368.values[6].values[6] = 0.4;
  pmVar3 = tdm::lu::inverse<7,float>(&local_f8,&local_368);
  tdm::operator*<7,7,7,float>(&local_1c8,&local_298,pmVar3);
  memset(&local_368,0,0xc4);
  dVar1 = __real_3f1a36e2e0000000;
  uVar9 = 0;
  local_368.values[0].values[0] = 1.0;
  local_368.values[1].values[1] = 1.0;
  local_368.values[2].values[2] = 1.0;
  local_368.values[3].values[3] = 1.0;
  local_368.values[4].values[4] = 1.0;
  local_368.values[5].values[5] = 1.0;
  local_368.values[6].values[6] = 1.0;
  do {
    uVar8 = 0;
    uVar7 = uVar9;
    do {
      testing::internal::DoubleNearPredFormat
                (&local_388,"identity[y][x]","expected[y][x]","0.0001f",
                 (double)*(float *)((longlong)local_1c8.values[0].values + uVar7),
                 (double)*(float *)((longlong)local_368.values[0].values + uVar7),dVar1);
      uVar2._Mypair._Myval2 = local_388.message_._Mypair._Myval2;
      if (local_388.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_370);
        if (local_388.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_388.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_388.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_388.message_._Mypair._Myval2;
          }
        }
        this_00 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_378,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                             ,0x11f,pcVar5);
        testing::internal::AssertHelper::operator=(this_00,pMVar4);
        testing::internal::AssertHelper::~AssertHelper(&local_378);
        if (local_370._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar6 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)local_370._Mypair._Myval2 + 4) +
                   (longlong)local_370._Mypair._Myval2);
          (**(code **)*puVar6)(puVar6,1);
        }
        if (local_388.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_388.message_._Mypair._Myval2);
        ::operator_delete((void *)local_388.message_._Mypair._Myval2,0x20);
        return;
      }
      if (local_388.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_388.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 4;
    } while (uVar8 < 7);
    uVar9 = uVar9 + 0x1c;
    if (0xc3 < uVar9) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5a9290

void * __thiscall
ComputationsTest_InverseLUMat7_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseLUMat7_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a92d0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseLUMat7_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseLUMat7_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseLUMat7_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a9310

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseLUMat7_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseLUMat7_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseLUMat7_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a9350

void __thiscall ComputationsTest_TraceMat_Test::TestBody(ComputationsTest_TraceMat_Test *this)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x129,pcVar2);
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

// `scalar_deleting_destructor' @ 14c5a9410

void * __thiscall
ComputationsTest_TraceMat_Test::_scalar_deleting_destructor_
          (ComputationsTest_TraceMat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a9450

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_TraceMat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_TraceMat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_TraceMat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a9490

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_TraceMat_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_TraceMat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_TraceMat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a94d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_NegateVec_Test::TestBody(ComputationsTest_NegateVec_Test *this)

{
  undefined8 uVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined1 auStackY_88 [32];
  AssertionResult local_58;
  vec<4,int> local_48;
  vec<4,int> local_38;
  ulonglong local_28;
  
  uVar1 = _UNK_152896688;
  pbVar5 = ___xmm_fffffffdffffffff0000000500000002;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48.values[0] = -___xmm_0000000300000001fffffffbfffffffe;
  local_48.values[1] = -_UNK_152896374;
  local_48.values[2] = -_UNK_152896378;
  local_48.values[3] = -_UNK_15289637c;
  local_38.values._0_8_ = ___xmm_fffffffdffffffff0000000500000002;
  local_38.values._8_8_ = _UNK_152896688;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_58,"-v","tdm::vec4<int>(2, 5, -1, -3)",&local_48,&local_38);
  uVar2._Mypair._Myval2 = local_58.message_._Mypair._Myval2;
  if (local_58.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_48);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_38,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,10,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_38);
    pbVar5 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_48.values[1],local_48.values[0]);
  }
  else {
    if (local_58.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_58.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_48.values[0] = -___xmm_0000000300000001fffffffbfffffffe;
    local_48.values[1] = -_UNK_152896374;
    local_48.values[2] = -_UNK_152896378;
    local_48.values[3] = -_UNK_15289637c;
    local_38.values._0_8_ = pbVar5;
    local_38.values._8_8_ = uVar1;
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_58,"tdm::negate(v)","tdm::vec4<int>(2, 5, -1, -3)",&local_48,&local_38);
    if (local_58.success_ != false) goto LAB_14c5a967a;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_38);
    if (local_58.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_58.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_58.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_58.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_48,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0xb,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_48);
    pbVar5 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             local_38.values._0_8_;
  }
  if (pbVar5 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar7 = (undefined8 *)
             ((longlong)&pbVar5->field_0x0 + (longlong)*(int *)(*(longlong *)pbVar5 + 4));
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_14c5a967a:
  if (local_58.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_58.message_._Mypair._Myval2);
    ::operator_delete((void *)local_58.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a96c0

void * __thiscall
ComputationsTest_NegateVec_Test::_scalar_deleting_destructor_
          (ComputationsTest_NegateVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a9700

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NegateVec_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_NegateVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_NegateVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a9740

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NegateVec_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_NegateVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_NegateVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a9780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_NegateQuat_Test::TestBody(ComputationsTest_NegateQuat_Test *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_48;
  quat<float> local_38;
  quat<float> local_28 [2];
  
  uVar2 = _UNK_152896498;
  uVar1 = ___xmm_3f0000003dcccccdbe99999abe4ccccd;
  local_38._0_8_ = ___xmm_3f0000003dcccccdbe99999abe4ccccd;
  local_38._8_8_ = _UNK_152896498;
  local_28[0]._0_8_ = ___xmm_3f0000003dcccccdbe99999abe4ccccd;
  local_28[0]._8_8_ = _UNK_152896498;
  testing::internal::EqHelper::Compare<tdm::quat<float>,tdm::quat<float>,0>
            (&local_48,"-q","tdm::quat<float>(-0.2f, -0.3f, 0.1f, 0.5f)",local_28,&local_38);
  uVar3._Mypair._Myval2 = local_48.message_._Mypair._Myval2;
  if (local_48.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    iVar7 = 0x10;
  }
  else {
    if (local_48.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_48.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    local_28[0]._0_8_ = uVar1;
    local_28[0]._8_8_ = uVar2;
    local_38._0_8_ = uVar1;
    local_38._8_8_ = uVar2;
    testing::internal::EqHelper::Compare<tdm::quat<float>,tdm::quat<float>,0>
              (&local_48,"tdm::negate(q)","tdm::quat<float>(-0.2f, -0.3f, 0.1f, 0.5f)",&local_38,
               local_28);
    if (local_48.success_ != false) goto LAB_14c5a98d3;
    pMVar4 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_48.message_._Mypair._Myval2;
        iVar7 = 0x11;
        goto LAB_14c5a9888;
      }
    }
    iVar7 = 0x11;
  }
LAB_14c5a9888:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
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
LAB_14c5a98d3:
  if (local_48.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_48.message_._Mypair._Myval2);
    ::operator_delete((void *)local_48.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a9910

void * __thiscall
ComputationsTest_NegateQuat_Test::_scalar_deleting_destructor_
          (ComputationsTest_NegateQuat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a9950

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NegateQuat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_NegateQuat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_NegateQuat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a9990

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NegateQuat_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_NegateQuat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_NegateQuat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a99d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_NegateMat_Test::TestBody(ComputationsTest_NegateMat_Test *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  vec<4,int> *pvVar6;
  int *piVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStackY_148 [32];
  AssertionResult local_118;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_108;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_100;
  int local_f8 [8];
  int local_d8 [2];
  int aiStack_d0 [2];
  int local_c8 [2];
  int aiStack_c0 [2];
  vec<4,int> local_b8;
  mat<4,4,int> local_a8;
  mat<4,4,int> local_68;
  ulonglong local_28;
  
  uVar4 = _UNK_152896378;
  uVar3 = ___xmm_0000000300000001fffffffbfffffffe;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  lVar13 = 4;
  local_a8.values[0].values._0_8_ = ___xmm_0000000300000001fffffffbfffffffe;
  local_a8.values[0].values._8_8_ = _UNK_152896378;
  local_a8.values[1].values._0_8_ = ___xmm_0000000300000001fffffffbfffffffe;
  local_a8.values[1].values._8_8_ = _UNK_152896378;
  lVar10 = 4;
  local_a8.values[2].values._0_8_ = ___xmm_0000000300000001fffffffbfffffffe;
  local_a8.values[2].values._8_8_ = _UNK_152896378;
  local_a8.values[3].values._0_8_ = ___xmm_0000000300000001fffffffbfffffffe;
  local_a8.values[3].values._8_8_ = _UNK_152896378;
  pvVar6 = local_a8.values;
  do {
    iVar14 = ((vec<4,int> *)pvVar6->values)->values[1];
    iVar1 = ((vec<4,int> *)pvVar6->values)->values[2];
    iVar2 = ((vec<4,int> *)pvVar6->values)->values[3];
    pvVar6->values[0] = -((vec<4,int> *)pvVar6->values)->values[0];
    pvVar6->values[1] = -iVar14;
    pvVar6->values[2] = -iVar1;
    pvVar6->values[3] = -iVar2;
    lVar10 = lVar10 + -1;
    pvVar6 = pvVar6 + 1;
  } while (lVar10 != 0);
  local_b8.values._0_8_ = ___xmm_fffffffdffffffff0000000500000002;
  local_b8.values._8_8_ = _UNK_152896688;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_118,"nm[0]","expected",local_a8.values,&local_b8);
  uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
  if (local_118.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_108);
    if (local_118.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_118.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_118.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_100,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0x19,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_100);
    if (local_108._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)local_108._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_118.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_118.message_._Mypair._Myval2);
    ::operator_delete((void *)local_118.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_118.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_118.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
  }
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_118,"nm[1]","expected",local_a8.values + 1,&local_b8);
  uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
  if (local_118.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_108);
    if (local_118.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_118.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_118.message_._Mypair._Myval2;
      }
    }
    iVar14 = 0x1a;
LAB_14c5a9d26:
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_100,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,iVar14,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_100);
    local_100._Mypair._Myval2 = local_108._Mypair._Myval2;
  }
  else {
    if (local_118.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_118.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_118,"nm[2]","expected",local_a8.values + 2,&local_b8);
    uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
    if (local_118.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_108);
      if (local_118.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_118.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_118.message_._Mypair._Myval2;
          iVar14 = 0x1b;
          goto LAB_14c5a9d26;
        }
      }
      iVar14 = 0x1b;
      goto LAB_14c5a9d26;
    }
    if (local_118.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_118.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_118,"nm[3]","expected",local_a8.values + 3,&local_b8);
    uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
    if (local_118.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_108);
      if (local_118.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_118.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_118.message_._Mypair._Myval2;
          iVar14 = 0x1c;
          goto LAB_14c5a9d26;
        }
      }
      iVar14 = 0x1c;
      goto LAB_14c5a9d26;
    }
    if (local_118.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_118.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    local_f8._0_8_ = uVar3;
    local_f8._8_8_ = uVar4;
    local_f8._16_8_ = uVar3;
    local_f8._24_8_ = uVar4;
    local_d8 = (int  [2])uVar3;
    aiStack_d0 = (int  [2])uVar4;
    local_c8 = (int  [2])uVar3;
    aiStack_c0 = (int  [2])uVar4;
    piVar7 = local_f8;
    do {
      *piVar7 = -*piVar7;
      piVar7[1] = -piVar7[1];
      piVar7[2] = -piVar7[2];
      piVar7[3] = -piVar7[3];
      lVar13 = lVar13 + -1;
      piVar7 = piVar7 + 4;
    } while (lVar13 != 0);
    local_68.values[0].values[0] = local_f8[0];
    local_68.values[0].values[1] = local_f8[1];
    local_68.values[0].values[2] = local_f8[2];
    local_68.values[0].values[3] = local_f8[3];
    local_68.values[1].values[0] = local_f8[4];
    local_68.values[1].values[1] = local_f8[5];
    local_68.values[1].values[2] = local_f8[6];
    local_68.values[1].values[3] = local_f8[7];
    local_68.values[2].values[0] = local_d8[0];
    local_68.values[2].values[1] = local_d8[1];
    local_68.values[2].values[2] = aiStack_d0[0];
    local_68.values[2].values[3] = aiStack_d0[1];
    local_68.values[3].values[0] = local_c8[0];
    local_68.values[3].values[1] = local_c8[1];
    local_68.values[3].values[2] = aiStack_c0[0];
    local_68.values[3].values[3] = aiStack_c0[1];
    testing::internal::CmpHelperEQ<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
              (&local_118,"nm","tdm::negate(m)",&local_a8,&local_68);
    if (local_118.success_ != false) goto LAB_14c5a9d74;
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_100);
    if (local_118.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_118.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_118.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_108,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0x1d,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_108);
  }
  if (local_100._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar12 = (undefined8 *)
              ((longlong)
               &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                local_100._Mypair._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_100._Mypair._Myval2 + 4));
    (**(code **)*puVar12)(puVar12,1);
  }
LAB_14c5a9d74:
  if (local_118.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_118.message_._Mypair._Myval2);
    ::operator_delete((void *)local_118.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a9e70

void * __thiscall
ComputationsTest_NegateMat_Test::_scalar_deleting_destructor_
          (ComputationsTest_NegateMat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a9eb0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NegateMat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_NegateMat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_NegateMat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a9ef0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NegateMat_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_NegateMat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_NegateMat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a9f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ComputationsTest_CrossProduct_Test::TestBody(ComputationsTest_CrossProduct_Test *this)

{
  longlong *plVar1;
  Message *pMVar2;
  AssertHelper *this_00;
  char *pcVar3;
  undefined8 *puVar4;
  undefined1 auStackY_78 [32];
  AssertionResult local_48;
  AssertHelper local_38;
  vec<3,int> local_30;
  vec<3,int> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_20.values[0] = -3;
  local_20.values[1] = 6;
  local_20.values[2] = -3;
  local_30.values[0] = -3;
  local_30.values[1] = 6;
  local_30.values[2] = -3;
  testing::internal::EqHelper::Compare<tdm::vec<3,int>,tdm::vec<3,int>,0>
            (&local_48,"res","tdm::vec3<int>(-3, 6, -3)",&local_20,&local_30);
  if (local_48.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_30);
    if (local_48.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_48.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_48.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_48.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_38,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x24,pcVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_38);
    plVar1 = (longlong *)CONCAT44(local_30.values[1],local_30.values[0]);
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar4)(puVar4,1);
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

// `scalar_deleting_destructor' @ 14c5aa060

void * __thiscall
ComputationsTest_CrossProduct_Test::_scalar_deleting_destructor_
          (ComputationsTest_CrossProduct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aa0a0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_CrossProduct_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_CrossProduct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_CrossProduct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aa0e0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_CrossProduct_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_CrossProduct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_CrossProduct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aa120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_DotProduct_Test::TestBody(ComputationsTest_DotProduct_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  Message *pMVar6;
  AssertHelper *this_00;
  ulonglong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  undefined1 auStackY_b8 [32];
  Message local_88;
  AssertionResult local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  _Bxty local_30;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_70 = ___xmm_00000008000000070000000600000005;
  local_60 = ___xmm_00000004000000030000000200000001;
  if (__isa_available < 2) {
    uVar7 = 0;
    do {
      *(int *)(local_60 + uVar7) = *(int *)(local_60 + uVar7) * *(int *)(local_70 + uVar7);
      uVar7 = uVar7 + 4;
    } while (uVar7 < 0x10);
  }
  else {
    local_60 = pmulld(___xmm_00000008000000070000000600000005,
                      ___xmm_00000004000000030000000200000001);
  }
  local_88.ss_._Mypair._Myval2._0_4_ = 0x46;
  iVar3 = local_60._12_4_ + local_60._0_4_ + local_60._4_4_ + local_60._8_4_;
  local_60._0_4_ = iVar3;
  if (iVar3 == 0x46) {
    testing::AssertionSuccess(&local_80);
  }
  else {
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_88,(int *)local_60);
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,(int *)local_60,(int *)&local_88);
    testing::internal::EqFailure(&local_80,"res","70",pbVar5,pbVar4,false);
    if (0xf < uStack_38) {
      pvVar2 = (void *)CONCAT71(local_50._1_7_,local_50._Buf[0]);
      uVar12 = uStack_38 + 1;
      pvVar8 = pvVar2;
      if (0xfff < uVar12) {
        pvVar8 = *(void **)((longlong)pvVar2 + -8);
        uVar12 = uStack_38 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8))) goto LAB_14c5aa28c;
      }
      ::operator_delete(pvVar8,uVar12);
    }
    local_50._Buf[0] = '\0';
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (0xf < local_18) {
      uVar12 = local_18 + 1;
      uVar9 = local_30._Ptr;
      if (0xfff < uVar12) {
        uVar9 = *(undefined8 *)(local_30._Ptr + -8);
        uVar12 = local_18 + 0x28;
        if ((char *)0x1f < local_30._Ptr + (-8 - uVar9)) {
LAB_14c5aa28c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar9,uVar12);
    }
  }
  if (local_80.success_ == false) {
    pMVar6 = (Message *)testing::Message::Message(&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar10 = *(char **)local_80.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)local_60,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x2b,pcVar10);
    testing::internal::AssertHelper::operator=(this_00,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_60);
    plVar1 = (longlong *)
             CONCAT44(local_88.ss_._Mypair._Myval2._4_4_,local_88.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar11 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  if (local_80.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80.message_._Mypair._Myval2);
    ::operator_delete((void *)local_80.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5aa370

void * __thiscall
ComputationsTest_DotProduct_Test::_scalar_deleting_destructor_
          (ComputationsTest_DotProduct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aa3b0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DotProduct_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_DotProduct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_DotProduct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aa3f0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DotProduct_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_DotProduct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_DotProduct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aa430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_QuatDotProduct_Test::TestBody(ComputationsTest_QuatDotProduct_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::internal::DoubleNearPredFormat
            (&local_18,"tdm::dot(q1, q2)","-0.39f","0.0001f",__real_bfd8f5c2a0000000,
             ___xmm_3f1a36e2e0000000bfd8f5c280000000,_UNK_1528964f8);
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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x31,pcVar2);
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

// `scalar_deleting_destructor' @ 14c5aa520

void * __thiscall
ComputationsTest_QuatDotProduct_Test::_scalar_deleting_destructor_
          (ComputationsTest_QuatDotProduct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aa560

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_QuatDotProduct_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_QuatDotProduct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_QuatDotProduct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aa5a0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_QuatDotProduct_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_QuatDotProduct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_QuatDotProduct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aa5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_LengthVec_Test::TestBody(ComputationsTest_LengthVec_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_28 [2];
  
  testing::internal::DoubleNearPredFormat
            (local_28,"tdm::length(v)","1.3685f","0.0001f",
             (double)SQRT(_UNK_152896544 * _UNK_152896544 +
                          ___xmm_3f8000003df5c28fbf47ae143f000000 *
                          ___xmm_3f8000003df5c28fbf47ae143f000000 + _UNK_152896548 * _UNK_152896548
                          + _UNK_15289654c * _UNK_15289654c),___xmm_3f1a36e2e00000003ff5e56040000000
             ,_UNK_1528964e8);
  if (local_28[0].success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28[0].message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)local_28[0].message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
        pcVar2 = *(char **)local_28[0].message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res10,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x36,pcVar2);
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
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5aa710

void * __thiscall
ComputationsTest_LengthVec_Test::_scalar_deleting_destructor_
          (ComputationsTest_LengthVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aa750

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_LengthVec_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_LengthVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_LengthVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aa790

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_LengthVec_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_LengthVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_LengthVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aa7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_LengthQuat_Test::TestBody(ComputationsTest_LengthQuat_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  char *pcVar2;
  undefined8 *puVar3;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_18;
  
  testing::internal::DoubleNearPredFormat
            (&local_18,"tdm::length(q)","0.45f","0.0001f",__real_3fdccccce0000000,
             ___xmm_3f1a36e2e00000003fdcccccc0000000,_UNK_1528964d8);
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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x3b,pcVar2);
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

// `scalar_deleting_destructor' @ 14c5aa8c0

void * __thiscall
ComputationsTest_LengthQuat_Test::_scalar_deleting_destructor_
          (ComputationsTest_LengthQuat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aa900

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_LengthQuat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_LengthQuat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_LengthQuat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aa940

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_LengthQuat_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_LengthQuat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_LengthQuat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aa980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_NormalizeVec_Test::TestBody(ComputationsTest_NormalizeVec_Test *this)

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
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  AssertionResult local_38 [3];
  
  dVar1 = __real_3f1a36e2e0000000;
  auVar9._12_4_ = _UNK_15289655c * _UNK_15289655c;
  auVar9._4_4_ = auVar9._12_4_;
  auVar9._0_4_ = auVar9._12_4_;
  auVar9._8_4_ = auVar9._12_4_;
  fVar7 = SQRT(_UNK_152896554 * _UNK_152896554 +
               ___xmm_3f800000be4ccccdbf0000003f000000 * ___xmm_3f800000be4ccccdbf0000003f000000 +
               _UNK_152896558 * _UNK_152896558 + auVar9._12_4_);
  auVar10._4_4_ = fVar7;
  auVar10._0_4_ = fVar7;
  auVar10._8_4_ = fVar7;
  auVar10._12_4_ = fVar7;
  auVar10 = rcpps(auVar9,auVar10);
  fVar8 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  fVar11 = _UNK_152896554 * ((fVar11 + fVar11) - fVar11 * fVar11 * fVar7);
  fVar12 = _UNK_152896558 * ((fVar12 + fVar12) - fVar12 * fVar12 * fVar7);
  fVar13 = _UNK_15289655c * ((fVar13 + fVar13) - fVar13 * fVar13 * fVar7);
  testing::internal::DoubleNearPredFormat
            (local_38,"normalized[0]","0.4029f","0.0001f",
             (double)(___xmm_3f800000be4ccccdbf0000003f000000 *
                     ((fVar8 + fVar8) - fVar8 * fVar8 * fVar7)),__real_3fd9c91d20000000,
             __real_3f1a36e2e0000000);
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
    iVar6 = 0x41;
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
              (local_38,"normalized[1]","-0.4029f","0.0001f",(double)fVar11,__real_bfd9c91d20000000,
               dVar1);
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
          iVar6 = 0x42;
          goto LAB_14c5aaea1;
        }
      }
      iVar6 = 0x42;
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
                (local_38,"normalized[2]","-0.1611f","0.0001f",(double)fVar12,
                 __real_bfc49eecc0000000,dVar1);
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
            iVar6 = 0x43;
            goto LAB_14c5aaea1;
          }
        }
        iVar6 = 0x43;
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
                  (local_38,"normalized[3]","0.8058f","0.0001f",(double)fVar13,
                   __real_3fe9c91d20000000,dVar1);
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
              iVar6 = 0x44;
              goto LAB_14c5aaea1;
            }
          }
          iVar6 = 0x44;
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
                    (local_38,"v[0]","0.5f","0.0001f",___xmm_3fe00000000000003fe0000000000000,
                     _UNK_150689678,dVar1);
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
                iVar6 = 0x46;
                goto LAB_14c5aaea1;
              }
            }
            iVar6 = 0x46;
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
                      (local_38,"v[1]","-0.5f","0.0001f",___xmm_bfe0000000000000bfe0000000000000,
                       _UNK_150689738,dVar1);
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
                  iVar6 = 0x47;
                  goto LAB_14c5aaea1;
                }
              }
              iVar6 = 0x47;
            }
            else {
              if (local_38[0].message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_38[0].message_._Mypair._Myval2);
                ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
              }
              testing::internal::DoubleNearPredFormat
                        (local_38,"v[2]","-0.2f","0.0001f",___xmm_bfc99999a0000000bfc99999a0000000,
                         _UNK_152896618,dVar1);
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
                    iVar6 = 0x48;
                    goto LAB_14c5aaea1;
                  }
                }
                iVar6 = 0x48;
              }
              else {
                if (local_38[0].message_._Mypair._Myval2 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_38[0].message_._Mypair._Myval2);
                  ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
                }
                testing::internal::DoubleNearPredFormat
                          (local_38,"v[3]","1.0f","0.0001f",___xmm_3ff00000000000003ff0000000000000,
                           _UNK_150689688,dVar1);
                if (local_38[0].success_ != false) goto LAB_14c5aaeec;
                pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
                if (local_38[0].message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar4 = "";
                }
                else {
                  pcVar4 = (char *)local_38[0].message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
                    pcVar4 = *(char **)local_38[0].message_._Mypair._Myval2;
                    iVar6 = 0x49;
                    goto LAB_14c5aaea1;
                  }
                }
                iVar6 = 0x49;
              }
            }
          }
        }
      }
    }
  }
LAB_14c5aaea1:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
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
LAB_14c5aaeec:
  if (local_38[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_38[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_38[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5aaf30

void * __thiscall
ComputationsTest_NormalizeVec_Test::_scalar_deleting_destructor_
          (ComputationsTest_NormalizeVec_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aaf70

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NormalizeVec_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_NormalizeVec_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_NormalizeVec_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aafb0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NormalizeVec_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_NormalizeVec_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_NormalizeVec_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aaff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_NormalizeQuat_Test::TestBody(ComputationsTest_NormalizeQuat_Test *this)

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
            (local_28,"normalized.x","0.2222f","0.0001f",___xmm_3fcc710cc00000003fcc71c700000000,
             _UNK_1528965a8,__real_3f1a36e2e0000000);
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
    iVar6 = 0x4f;
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
              (local_28,"normalized.y","-0.4444f","0.0001f",___xmm_bfdc710cc0000000bfdc71c700000000,
               _UNK_152896638,dVar1);
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
          iVar6 = 0x50;
          goto LAB_14c5ab222;
        }
      }
      iVar6 = 0x50;
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
                (local_28,"normalized.z","0.6666f","0.0001f",___xmm_3fe554c9800000003fe5555540000000
                 ,_UNK_1528965c8,dVar1);
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
            iVar6 = 0x51;
            goto LAB_14c5ab222;
          }
        }
        iVar6 = 0x51;
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
                  (local_28,"normalized.w","0.5555f","0.0001f",
                   ___xmm_3fe1c6a7e00000003fe1c71c60000000,_UNK_1528965b8,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5ab26d;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x52;
            goto LAB_14c5ab222;
          }
        }
        iVar6 = 0x52;
      }
    }
  }
LAB_14c5ab222:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
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
LAB_14c5ab26d:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ab2b0

void * __thiscall
ComputationsTest_NormalizeQuat_Test::_scalar_deleting_destructor_
          (ComputationsTest_NormalizeQuat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ab2f0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NormalizeQuat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_NormalizeQuat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_NormalizeQuat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ab330

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_NormalizeQuat_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_NormalizeQuat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_NormalizeQuat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ab370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_ConjugateQuat_Test::TestBody(ComputationsTest_ConjugateQuat_Test *this)

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
  AssertionResult local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = ___xmm_3e800000be99999a3e4ccccdbdcccccd;
  uStack_10 = _UNK_152896438;
  testing::AssertionSuccess(&local_28);
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar3 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    iVar5 = 0x58;
  }
  else {
    if (local_28.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_28.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_28);
    uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
    if (local_28.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (local_28.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)local_28.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
          pcVar3 = *(char **)local_28.message_._Mypair._Myval2;
          iVar5 = 0x59;
          goto LAB_14c5ab527;
        }
      }
      iVar5 = 0x59;
    }
    else {
      if (local_28.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_28.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      testing::AssertionSuccess(&local_28);
      uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
      if (local_28.success_ == false) {
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_28.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_28.message_._Mypair._Myval2;
            iVar5 = 0x5a;
            goto LAB_14c5ab527;
          }
        }
        iVar5 = 0x5a;
      }
      else {
        if (local_28.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_28.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        local_res10.data_._0_4_ = 0x3e800000;
        testing::internal::EqHelper::Compare<float,float,0>
                  (&local_28,"conj.w","0.25f",(float *)((longlong)&uStack_10 + 4),
                   (float *)&local_res10);
        if (local_28.success_ != false) goto LAB_14c5ab572;
        pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)local_28.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
            pcVar3 = *(char **)local_28.message_._Mypair._Myval2;
            iVar5 = 0x5b;
            goto LAB_14c5ab527;
          }
        }
        iVar5 = 0x5b;
      }
    }
  }
LAB_14c5ab527:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
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
LAB_14c5ab572:
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ab5b0

void * __thiscall
ComputationsTest_ConjugateQuat_Test::_scalar_deleting_destructor_
          (ComputationsTest_ConjugateQuat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ab5f0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_ConjugateQuat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_ConjugateQuat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_ConjugateQuat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ab630

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_ConjugateQuat_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_ConjugateQuat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_ConjugateQuat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ab670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_InverseQuat_Test::TestBody(ComputationsTest_InverseQuat_Test *this)

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
            (local_28,"inv.x","-0.49382716049382713f","0.0001f",
             ___xmm_bfdf9add40000000bfdf9add00000000,_UNK_152896648,__real_3f1a36e2e0000000);
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
    iVar6 = 0x61;
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
              (local_28,"inv.y","0.9876543209876543f","0.0001f",
               ___xmm_3fef9add400000003fef9add00000000,_UNK_1528965d8,dVar1);
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
          iVar6 = 0x62;
          goto LAB_14c5ab8a2;
        }
      }
      iVar6 = 0x62;
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
                (local_28,"inv.z","-1.4814814814814814f","0.0001f",
                 ___xmm_bff7b425e0000000bff7b425c0000000,_UNK_152896668,dVar1);
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
            iVar6 = 99;
            goto LAB_14c5ab8a2;
          }
        }
        iVar6 = 99;
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
                  (local_28,"inv.w","1.2345679012345678f","0.0001f",
                   ___xmm_3ff3c0ca400000003ff3c0ca20000000,_UNK_1528965e8,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5ab8ed;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 100;
            goto LAB_14c5ab8a2;
          }
        }
        iVar6 = 100;
      }
    }
  }
LAB_14c5ab8a2:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
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
LAB_14c5ab8ed:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ab930

void * __thiscall
ComputationsTest_InverseQuat_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseQuat_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ab970

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseQuat_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseQuat_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseQuat_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ab9b0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseQuat_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseQuat_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseQuat_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ab9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_Lerp_Test::TestBody(ComputationsTest_Lerp_Test *this)

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
            (local_28,"lerped.x","0.01999f","0.0001f",___xmm_3f947842400000003f947ae140000000,
             _UNK_152896568,__real_3f1a36e2e0000000);
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
    iVar6 = 0x6b;
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
              (local_28,"lerped.y","0.03999f","0.0001f",___xmm_3fa47991c00000003fa47ae140000000,
               _UNK_152896578,dVar1);
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
          iVar6 = 0x6c;
          goto LAB_14c5abc22;
        }
      }
      iVar6 = 0x6c;
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
                (local_28,"lerped.z","0.06f","0.0001f",___xmm_3faeb851e00000003faeb85200000000,
                 _UNK_152896588,dVar1);
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
            iVar6 = 0x6d;
            goto LAB_14c5abc22;
          }
        }
        iVar6 = 0x6d;
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
                  (local_28,"lerped.w","-0.2f","0.0001f",___xmm_bfc99999a0000000bfc99999c0000000,
                   _UNK_152896628,dVar1);
        if (local_28[0].success_ != false) goto LAB_14c5abc6d;
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_28[0].message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_28[0].message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_28[0].message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_28[0].message_._Mypair._Myval2;
            iVar6 = 0x6e;
            goto LAB_14c5abc22;
          }
        }
        iVar6 = 0x6e;
      }
    }
  }
LAB_14c5abc22:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
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
LAB_14c5abc6d:
  if (local_28[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28[0].message_._Mypair._Myval2);
    ::operator_delete((void *)local_28[0].message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5abcb0

void * __thiscall
ComputationsTest_Lerp_Test::_scalar_deleting_destructor_
          (ComputationsTest_Lerp_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5abcf0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_Lerp_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_Lerp_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_Lerp_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5abd30

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_Lerp_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_Lerp_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_Lerp_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5abd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_Slerp_Test::TestBody(ComputationsTest_Slerp_Test *this)

{
  double dVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  char *pcVar4;
  undefined8 *puVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  int iVar7;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  quat<float> local_48;
  bool local_38 [8];
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uStack_30;
  quat<float> local_28 [2];
  
  local_28[0]._0_8_ = ___xmm_bf0000003e99999a3e4ccccd3dcccccd;
  local_28[0]._8_8_ = _UNK_152896608;
  local_38 = (bool  [8])___xmm_3e800000be99999abe4ccccdbdcccccd;
  uStack_30._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_152896448;
  tdm::slerp<float>(&local_48,local_28,(quat<float> *)local_38,__real_3ecccccd);
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)local_38,"slerped.x","0.12467f","0.0001f",(double)local_48.x,
             __real_3fbfea5f80000000,__real_3f1a36e2e0000000);
  uVar6._Mypair._Myval2 = uStack_30._Mypair._Myval2;
  if (local_38[0] == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
    if (uStack_30._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)uStack_30._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_30._Mypair._Myval2 + 0x18)) {
        pcVar4 = *(char **)uStack_30._Mypair._Myval2;
      }
    }
    iVar7 = 0x75;
  }
  else {
    if (uStack_30._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 uStack_30._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              ((AssertionResult *)local_38,"slerped.y","0.24934f","0.0001f",(double)local_48.y,
               __real_3fcfea5f80000000,dVar1);
    uVar6._Mypair._Myval2 = uStack_30._Mypair._Myval2;
    if (local_38[0] == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (uStack_30._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)uStack_30._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)uStack_30._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)uStack_30._Mypair._Myval2;
          iVar7 = 0x76;
          goto LAB_14c5ac061;
        }
      }
      iVar7 = 0x76;
    }
    else {
      if (uStack_30._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   uStack_30._Mypair._Myval2);
        ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                ((AssertionResult *)local_38,"slerped.z","0.37402f","0.0001f",(double)local_48.z,
                 __real_3fd7eff1a0000000,dVar1);
      uVar6._Mypair._Myval2 = uStack_30._Mypair._Myval2;
      if (local_38[0] != false) {
        if (uStack_30._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uStack_30._Mypair._Myval2);
          ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  ((AssertionResult *)&local_48,"slerped.w","-0.4943f","0.0001f",(double)local_48.w,
                   __real_bfdfa29c80000000,dVar1);
        if (local_48.x._0_1_ == '\0') {
          pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
          pcVar4 = (char *)CONCAT44(local_48.w,local_48.z);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          else if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
            pcVar4 = *(char **)pcVar4;
          }
          pAVar3 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_res10,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                              ,0x78,pcVar4);
          testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
          testing::internal::AssertHelper::~AssertHelper(&local_res10);
          if (local_res18[0]._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar5 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
                     (longlong)local_res18[0]._Mypair._Myval2);
            (**(code **)*puVar5)(puVar5,1);
          }
          uVar6._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 CONCAT44(local_48.w,local_48.z);
        }
        else {
          uVar6._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 CONCAT44(local_48.w,local_48.z);
        }
        goto LAB_14c5ac0b0;
      }
      pMVar2 = (Message *)testing::Message::Message((Message *)local_res18);
      if (uStack_30._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)uStack_30._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)uStack_30._Mypair._Myval2 + 0x18)) {
          pcVar4 = *(char **)uStack_30._Mypair._Myval2;
          iVar7 = 0x77;
          goto LAB_14c5ac061;
        }
      }
      iVar7 = 0x77;
    }
  }
LAB_14c5ac061:
  pAVar3 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,iVar7,pcVar4);
  testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  uVar6._Mypair._Myval2 = uStack_30._Mypair._Myval2;
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar5)(puVar5,1);
    uVar6._Mypair._Myval2 = uStack_30._Mypair._Myval2;
  }
LAB_14c5ac0b0:
  if (uVar6._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uVar6._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ac0f0

void * __thiscall
ComputationsTest_Slerp_Test::_scalar_deleting_destructor_
          (ComputationsTest_Slerp_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ac130

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_Slerp_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_Slerp_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_Slerp_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ac170

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_Slerp_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_Slerp_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_Slerp_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ac1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_SlerpFallbackToLerp_Test::TestBody(ComputationsTest_SlerpFallbackToLerp_Test *this)

{
  double dVar1;
  double dVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar7;
  int iVar8;
  AssertHelper local_res10;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res18 [2];
  quat<float> local_58;
  bool local_48 [8];
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uStack_40;
  quat<float> local_38 [3];
  
  local_38[0]._0_8_ = ___xmm_3f0000003f0000003f0000003f000000;
  local_38[0]._8_8_ = _UNK_150689628;
  local_48 = (bool  [8])___xmm_3f4000003f4000003f4000003f400000;
  uStack_40._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_152896528;
  tdm::slerp<float>(&local_58,local_38,(quat<float> *)local_48,__real_3ecccccd);
  dVar2 = __real_3fe3333340000000;
  dVar1 = __real_3f1a36e2e0000000;
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)local_48,"slerped.x","0.60f","0.0001f",(double)local_58.x,
             __real_3fe3333340000000,__real_3f1a36e2e0000000);
  uVar7._Mypair._Myval2 = uStack_40._Mypair._Myval2;
  if (local_48[0] == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
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
    iVar8 = 0x7f;
  }
  else {
    if (uStack_40._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 uStack_40._Mypair._Myval2);
      ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
    }
    testing::internal::DoubleNearPredFormat
              ((AssertionResult *)local_48,"slerped.y","0.60f","0.0001f",(double)local_58.y,dVar2,
               dVar1);
    uVar7._Mypair._Myval2 = uStack_40._Mypair._Myval2;
    if (local_48[0] == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (uStack_40._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)uStack_40._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)uStack_40._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)uStack_40._Mypair._Myval2;
          iVar8 = 0x80;
          goto LAB_14c5ac48f;
        }
      }
      iVar8 = 0x80;
    }
    else {
      if (uStack_40._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   uStack_40._Mypair._Myval2);
        ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
      }
      testing::internal::DoubleNearPredFormat
                ((AssertionResult *)local_48,"slerped.z","0.60f","0.0001f",(double)local_58.z,dVar2,
                 dVar1);
      uVar7._Mypair._Myval2 = uStack_40._Mypair._Myval2;
      if (local_48[0] != false) {
        if (uStack_40._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uStack_40._Mypair._Myval2);
          ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
        }
        testing::internal::DoubleNearPredFormat
                  ((AssertionResult *)&local_58,"slerped.w","0.60f","0.0001f",(double)local_58.w,
                   dVar2,dVar1);
        if (local_58.x._0_1_ == '\0') {
          pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
          pcVar5 = (char *)CONCAT44(local_58.w,local_58.z);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = "";
          }
          else if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
            pcVar5 = *(char **)pcVar5;
          }
          pAVar4 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_res10,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                              ,0x82,pcVar5);
          testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
          testing::internal::AssertHelper::~AssertHelper(&local_res10);
          if (local_res18[0]._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar6 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
                     (longlong)local_res18[0]._Mypair._Myval2);
            (**(code **)*puVar6)(puVar6,1);
          }
          uVar7._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 CONCAT44(local_58.w,local_58.z);
        }
        else {
          uVar7._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 CONCAT44(local_58.w,local_58.z);
        }
        goto LAB_14c5ac4de;
      }
      pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
      if (uStack_40._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)uStack_40._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)uStack_40._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)uStack_40._Mypair._Myval2;
          iVar8 = 0x81;
          goto LAB_14c5ac48f;
        }
      }
      iVar8 = 0x81;
    }
  }
LAB_14c5ac48f:
  pAVar4 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     (&local_res10,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                      ,iVar8,pcVar5);
  testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  uVar7._Mypair._Myval2 = uStack_40._Mypair._Myval2;
  if (local_res18[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res18[0]._Mypair._Myval2 + 4) +
             (longlong)local_res18[0]._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
    uVar7._Mypair._Myval2 = uStack_40._Mypair._Myval2;
  }
LAB_14c5ac4de:
  if (uVar7._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uVar7._Mypair._Myval2);
    ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ac520

void * __thiscall
ComputationsTest_SlerpFallbackToLerp_Test::_scalar_deleting_destructor_
          (ComputationsTest_SlerpFallbackToLerp_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ac560

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_SlerpFallbackToLerp_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_SlerpFallbackToLerp_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_SlerpFallbackToLerp_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ac5a0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_SlerpFallbackToLerp_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_SlerpFallbackToLerp_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_SlerpFallbackToLerp_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ac5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_TransposeSquare_Test::TestBody(ComputationsTest_TransposeSquare_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 *puVar6;
  vec<4,int> *pvVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStackY_f8 [32];
  AssertionResult local_c8;
  AssertHelper local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  vec<4,int> local_68;
  vec<4,int> local_58;
  vec<4,int> local_48;
  vec<4,int> local_38;
  vec<4,int> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = ___xmm_00000004000000030000000200000001;
  uStack_a0 = _UNK_150631e38;
  local_98 = ___xmm_00000004000000030000000200000001;
  uStack_90 = _UNK_150631e38;
  lVar8 = 4;
  local_88 = ___xmm_00000004000000030000000200000001;
  uStack_80 = _UNK_150631e38;
  local_78 = ___xmm_00000004000000030000000200000001;
  uStack_70 = _UNK_150631e38;
  local_58.values[0] = 0;
  local_58.values[1] = 0;
  local_58.values[2] = 0;
  local_58.values[3] = 0;
  local_48.values[0] = 0;
  local_48.values[1] = 0;
  local_48.values[2] = 0;
  local_48.values[3] = 0;
  local_38.values[0] = 0;
  local_38.values[1] = 0;
  local_38.values[2] = 0;
  local_38.values[3] = 0;
  local_28.values[0] = 0;
  local_28.values[1] = 0;
  local_28.values[2] = 0;
  local_28.values[3] = 0;
  piVar4 = (int *)&local_88;
  pvVar7 = &local_58;
  do {
    local_68.values[0] = piVar4[-8];
    local_68.values[1] = piVar4[-4];
    local_68.values[2] = *piVar4;
    local_68.values[3] = piVar4[4];
    *(undefined8 *)pvVar7->values = local_68.values._0_8_;
    *(undefined8 *)(pvVar7->values + 2) = local_68.values._8_8_;
    lVar8 = lVar8 + -1;
    piVar4 = piVar4 + 1;
    pvVar7 = pvVar7 + 1;
  } while (lVar8 != 0);
  local_68.values._0_8_ = ___xmm_00000001000000010000000100000001;
  local_68.values._8_8_ = _UNK_150631da8;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_c8,"transposed[0]","tdm::vec4<int>(1, 1, 1, 1)",&local_58,&local_68);
  uVar1._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
  if (local_c8.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)local_b8);
    if (local_c8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_c8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_c8.message_._Mypair._Myval2;
      }
    }
    iVar9 = 0x89;
LAB_14c5ac8bb:
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_68,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,iVar9,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_68);
  }
  else {
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_68.values._0_8_ = ___xmm_00000002000000020000000200000002;
    local_68.values[2] = _UNK_15066df68;
    local_68.values[3] = _UNK_15066df6c;
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_c8,"transposed[1]","tdm::vec4<int>(2, 2, 2, 2)",&local_48,&local_68);
    uVar1._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_b8);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_c8.message_._Mypair._Myval2;
          iVar9 = 0x8a;
          goto LAB_14c5ac8bb;
        }
      }
      iVar9 = 0x8a;
      goto LAB_14c5ac8bb;
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_68.values._0_8_ = ___xmm_00000003000000030000000300000003;
    local_68.values[2] = _UNK_150ae9808;
    local_68.values[3] = _UNK_150ae980c;
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_c8,"transposed[2]","tdm::vec4<int>(3, 3, 3, 3)",&local_38,&local_68);
    uVar1._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)local_b8);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_c8.message_._Mypair._Myval2;
          iVar9 = 0x8b;
          goto LAB_14c5ac8bb;
        }
      }
      iVar9 = 0x8b;
      goto LAB_14c5ac8bb;
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_68.values._0_8_ = ___xmm_00000004000000040000000400000004;
    local_68.values[2] = _UNK_150b50dd8;
    local_68.values[3] = _UNK_150b50ddc;
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_c8,"transposed[3]","tdm::vec4<int>(4, 4, 4, 4)",&local_28,&local_68);
    if (local_c8.success_ != false) goto LAB_14c5ac906;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_68);
    if (local_c8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_c8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_c8.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (local_b8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0x8c,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(local_b8);
    local_b8[0].data_ = (AssertHelperData *)local_68.values._0_8_;
  }
  if (local_b8[0].data_ != (AssertHelperData *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)&(local_b8[0].data_)->type +
             (longlong)*(int *)(*(longlong *)local_b8[0].data_ + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5ac906:
  if (local_c8.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_c8.message_._Mypair._Myval2);
    ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ac950

void * __thiscall
ComputationsTest_TransposeSquare_Test::_scalar_deleting_destructor_
          (ComputationsTest_TransposeSquare_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ac990

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_TransposeSquare_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_TransposeSquare_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_TransposeSquare_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ac9d0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_TransposeSquare_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_TransposeSquare_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_TransposeSquare_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5aca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_TransposeNonSquare_Test::TestBody(ComputationsTest_TransposeNonSquare_Test *this)

{
  AssertHelperData *pAVar1;
  undefined8 uVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 *puVar8;
  vec<4,int> *pvVar9;
  longlong lVar10;
  undefined1 auStackY_b8 [32];
  AssertionResult local_88;
  AssertHelper local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  vec<4,int> local_50;
  vec<4,int> local_40;
  vec<4,int> local_30;
  ulonglong local_20;
  
  uVar2 = _UNK_150631e38;
  pAVar1 = ___xmm_00000004000000030000000200000001;
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_70 = ___xmm_00000002000000020000000100000001;
  uStack_68 = _UNK_15071d298;
  lVar10 = 2;
  local_40.values[0] = 0;
  local_40.values[1] = 0;
  local_40.values[2] = 0;
  local_40.values[3] = 0;
  local_30.values[0] = 0;
  local_30.values[1] = 0;
  local_30.values[2] = 0;
  local_30.values[3] = 0;
  local_60 = ___xmm_00000004000000040000000300000003;
  uStack_58 = _UNK_1528963c8;
  piVar6 = (int *)&local_60;
  pvVar9 = &local_40;
  do {
    local_50.values[0] = piVar6[-4];
    local_50.values[1] = piVar6[-2];
    local_50.values[2] = *piVar6;
    local_50.values[3] = piVar6[2];
    *(undefined8 *)pvVar9->values = local_50.values._0_8_;
    *(undefined8 *)(pvVar9->values + 2) = local_50.values._8_8_;
    lVar10 = lVar10 + -1;
    piVar6 = piVar6 + 1;
    pvVar9 = pvVar9 + 1;
  } while (lVar10 != 0);
  local_50.values._0_8_ = ___xmm_00000004000000030000000200000001;
  local_50.values._8_8_ = _UNK_150631e38;
  testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
            (&local_88,"transposed[0]","tdm::vec4<int>(1, 2, 3, 4)",&local_40,&local_50);
  uVar3._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_50,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0x95,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_50);
  }
  else {
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    local_50.values._0_8_ = pAVar1;
    local_50.values._8_8_ = uVar2;
    testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
              (&local_88,"transposed[1]","tdm::vec4<int>(1, 2, 3, 4)",&local_30,&local_50);
    if (local_88.success_ != false) goto LAB_14c5acc0d;
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_50);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_78,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0x96,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_78);
    local_78.data_ = (AssertHelperData *)local_50.values._0_8_;
  }
  if (local_78.data_ != (AssertHelperData *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)&(local_78.data_)->type +
             (longlong)*(int *)(*(longlong *)local_78.data_ + 4));
    (**(code **)*puVar8)(puVar8,1);
  }
LAB_14c5acc0d:
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5acc60

void * __thiscall
ComputationsTest_TransposeNonSquare_Test::_scalar_deleting_destructor_
          (ComputationsTest_TransposeNonSquare_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5acca0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_TransposeNonSquare_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_TransposeNonSquare_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_TransposeNonSquare_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5acce0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_TransposeNonSquare_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_TransposeNonSquare_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_TransposeNonSquare_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5acd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_DeterminantMat2_Test::TestBody(ComputationsTest_DeterminantMat2_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  Message *pMVar6;
  AssertHelper *this_00;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined1 auStackY_a8 [32];
  Message local_78;
  AssertHelper local_70;
  vec<2,int> local_68;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uStack_60;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.values = ___xmm_00000004000000030000000200000001;
  uStack_60._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_150631e38;
  local_70.data_._0_4_ = tdm::impl::determinant<2,int>((mat<2,2,int> *)&local_68,2);
  local_78.ss_._Mypair._Myval2._0_4_ = 0xfffffffe;
  if ((int)local_70.data_ == -2) {
    testing::AssertionSuccess((AssertionResult *)&local_68);
  }
  else {
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,(int *)&local_78,(int *)&local_70);
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,(int *)&local_70,(int *)&local_78);
    testing::internal::EqFailure((AssertionResult *)&local_68,"res","-2",pbVar5,pbVar4,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar11 = uStack_40 + 1;
      pvVar7 = pvVar2;
      if (0xfff < uVar11) {
        pvVar7 = *(void **)((longlong)pvVar2 + -8);
        uVar11 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7))) goto LAB_14c5ace3b;
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
LAB_14c5ace3b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar8,uVar11);
    }
  }
  if (local_68.values[0]._0_1_ == false) {
    pMVar6 = (Message *)testing::Message::Message(&local_78);
    if (uStack_60._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)uStack_60._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_60._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)uStack_60._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0x9c,pcVar9);
    testing::internal::AssertHelper::operator=(this_00,pMVar6);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    plVar1 = (longlong *)
             CONCAT44(local_78.ss_._Mypair._Myval2._4_4_,local_78.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar10 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  uVar3._Mypair._Myval2 = uStack_60._Mypair._Myval2;
  if (uStack_60._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_60._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5acf20

void * __thiscall
ComputationsTest_DeterminantMat2_Test::_scalar_deleting_destructor_
          (ComputationsTest_DeterminantMat2_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5acf60

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat2_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_DeterminantMat2_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_DeterminantMat2_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5acfa0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat2_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_DeterminantMat2_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_DeterminantMat2_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5acfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_DeterminantMat3_Test::TestBody(ComputationsTest_DeterminantMat3_Test *this)

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
  undefined1 auStackY_a8 [32];
  Message local_78;
  AssertHelper local_70;
  AssertionResult local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  _Bxty local_30;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_58._Ptr = ___xmm_0000000200000001fffffffd00000002;
  local_58._8_8_ = _UNK_152896348;
  local_38 = 5;
  local_48 = ___xmm_0000000400000001ffffffff00000000;
  uStack_40 = _UNK_1528963b8;
  local_70.data_._0_4_ = tdm::impl::determinant<3,int>((mat<3,3,int> *)&local_58,3);
  local_78.ss_._Mypair._Myval2._0_4_ = 0x31;
  if ((int)local_70.data_ == 0x31) {
    testing::AssertionSuccess(&local_68);
  }
  else {
    pbVar3 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,(int *)&local_78,(int *)&local_70);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30
                        ,(int *)&local_70,(int *)&local_78);
    testing::internal::EqFailure(&local_68,"res","49",pbVar4,pbVar3,false);
    if (0xf < uStack_18) {
      pvVar2 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
      uVar10 = uStack_18 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_18 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5ad10f;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_30._Buf[0] = '\0';
    local_20 = ___xmm_000000000000000f0000000000000000;
    uStack_18 = _UNK_15076add8;
    if (0xf < uStack_40) {
      uVar10 = uStack_40 + 1;
      uVar7 = local_58._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_58._Ptr + -8);
        uVar10 = uStack_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar7)) {
LAB_14c5ad10f:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_68.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message(&local_78);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0xa4,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    plVar1 = (longlong *)
             CONCAT44(local_78.ss_._Mypair._Myval2._4_4_,local_78.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
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

// `scalar_deleting_destructor' @ 14c5ad1f0

void * __thiscall
ComputationsTest_DeterminantMat3_Test::_scalar_deleting_destructor_
          (ComputationsTest_DeterminantMat3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ad230

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat3_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_DeterminantMat3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_DeterminantMat3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ad270

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat3_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_DeterminantMat3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_DeterminantMat3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ad2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_DeterminantMat4_Test::TestBody(ComputationsTest_DeterminantMat4_Test *this)

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
  Message local_98;
  AssertHelper local_90;
  AssertionResult local_88;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_58._Ptr = ___xmm_00000002000000020000000300000004;
  local_58._8_8_ = _UNK_152896358;
  local_48 = ___xmm_00000003fffffffd0000000100000000;
  uStack_40 = _UNK_1528963a8;
  local_38 = ___xmm_0000000300000003ffffffff00000000;
  uStack_30 = _UNK_152896398;
  local_28 = ___xmm_00000001000000010000000300000000;
  uStack_20 = _UNK_152896308;
  local_90.data_._0_4_ = tdm::impl::determinant<4,int>((mat<4,4,int> *)&local_58,4);
  local_98.ss_._Mypair._Myval2._0_4_ = 0xffffff10;
  if ((int)local_90.data_ == -0xf0) {
    testing::AssertionSuccess(&local_88);
  }
  else {
    pbVar3 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,(int *)&local_98,(int *)&local_90);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78
                        ,(int *)&local_90,(int *)&local_98);
    testing::internal::EqFailure(&local_88,"res","-240",pbVar4,pbVar3,false);
    if (0xf < uStack_60) {
      pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar10 = uStack_60 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5ad3f4;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < uStack_40) {
      uVar10 = uStack_40 + 1;
      uVar7 = local_58._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_58._Ptr + -8);
        uVar10 = uStack_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar7)) {
LAB_14c5ad3f4:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_88.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message(&local_98);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_90,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0xad,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_90);
    plVar1 = (longlong *)
             CONCAT44(local_98.ss_._Mypair._Myval2._4_4_,local_98.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ad4e0

void * __thiscall
ComputationsTest_DeterminantMat4_Test::_scalar_deleting_destructor_
          (ComputationsTest_DeterminantMat4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ad520

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat4_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_DeterminantMat4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_DeterminantMat4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ad560

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_DeterminantMat4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_DeterminantMat4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ad5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_DeterminantMat5_Test::TestBody(ComputationsTest_DeterminantMat5_Test *this)

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
  undefined1 auStackY_118 [32];
  Message local_e8;
  AssertHelper local_e0;
  AssertionResult local_d8;
  mat<5,5,int> local_c8;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c8.values[0].values._0_8_ = ___xmm_00000003000000030000000200000001;
  local_c8.values[0].values._8_8_ = _UNK_152896388;
  local_c8.values._16_8_ = ___xmm_00000001000000020000000300000005;
  local_c8.values[1].values._4_8_ = _UNK_152896318;
  local_c8.values[1].values._12_8_ = ___xmm_00000002000000010000000200000002;
  local_c8.values[2].values._0_8_ = _UNK_152896328;
  local_c8.values[2].values._8_8_ = ___xmm_ffffffff000000050000000400000003;
  local_c8.values._56_8_ = _UNK_152896698;
  local_c8.values[3].values._4_8_ = ___xmm_0000000200000001fffffff800000000;
  local_c8.values[3].values._12_8_ = _UNK_152896338;
  local_c8.values[4].values._0_8_ = ___xmm_00000003000000010000000200000007;
  local_c8.values[4].values._8_8_ = _UNK_152896368;
  local_c8.values[4].values[4] = 2;
  local_e0.data_._0_4_ = tdm::impl::determinant<5,int>(&local_c8,5);
  local_e8.ss_._Mypair._Myval2._0_4_ = 0xffffff20;
  if ((int)local_e0.data_ == -0xe0) {
    testing::AssertionSuccess(&local_d8);
  }
  else {
    pbVar3 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,(int *)&local_e8,(int *)&local_e0);
    pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,(int *)&local_e0,(int *)&local_e8);
    testing::internal::EqFailure(&local_d8,"res","-224",pbVar4,pbVar3,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c5ad711;
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
LAB_14c5ad711:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  if (local_d8.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message(&local_e8);
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
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_e0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                         ,0xb7,pcVar8);
    testing::internal::AssertHelper::operator=(this_00,pMVar5);
    testing::internal::AssertHelper::~AssertHelper(&local_e0);
    plVar1 = (longlong *)
             CONCAT44(local_e8.ss_._Mypair._Myval2._4_4_,local_e8.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (local_d8.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_d8.message_._Mypair._Myval2);
    ::operator_delete((void *)local_d8.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ad800

void * __thiscall
ComputationsTest_DeterminantMat5_Test::_scalar_deleting_destructor_
          (ComputationsTest_DeterminantMat5_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ad840

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat5_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_DeterminantMat5_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_DeterminantMat5_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ad880

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_DeterminantMat5_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_DeterminantMat5_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_DeterminantMat5_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ad8c0

void __thiscall ComputationsTest_InverseMat1_Test::TestBody(ComputationsTest_InverseMat1_Test *this)

{
  longlong *plVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  AssertHelper local_res10;
  Message local_res18 [2];
  AssertionResult local_38 [2];
  
  dVar2 = __real_3f1a36e2e0000000;
  uVar7 = 0;
  local_res18[0].ss_._Mypair._Myval2._0_4_ = __real_3e4ccccd;
  local_res10.data_._0_4_ = 0x3e4ccccd;
  while (testing::internal::DoubleNearPredFormat
                   (local_38,"mi[y][x]","expected[y][x]","0.0001f",
                    (double)*(float *)((longlong)&local_res18[0].ss_._Mypair._Myval2 + uVar7),
                    (double)*(float *)((longlong)&local_res10.data_ + uVar7),dVar2),
        uVar3._Mypair._Myval2 = local_38[0].message_._Mypair._Myval2, local_38[0].success_ != false)
  {
    if (local_38[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_38[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    uVar7 = uVar7 + 4;
    if (3 < uVar7) {
      return;
    }
  }
  pMVar4 = (Message *)testing::Message::Message(local_res18);
  if (local_38[0].message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)local_38[0].message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_38[0].message_._Mypair._Myval2 + 0x18)) {
      pcVar5 = *(char **)local_38[0].message_._Mypair._Myval2;
    }
  }
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                       ,0xc0,pcVar5);
  testing::internal::AssertHelper::operator=(this_00,pMVar4);
  testing::internal::AssertHelper::~AssertHelper(&local_res10);
  plVar1 = (longlong *)
           CONCAT44(local_res18[0].ss_._Mypair._Myval2._4_4_,
                    local_res18[0].ss_._Mypair._Myval2._0_4_);
  if (plVar1 != (longlong *)0x0) {
    puVar6 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
    (**(code **)*puVar6)(puVar6,1);
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

// `scalar_deleting_destructor' @ 14c5ada60

void * __thiscall
ComputationsTest_InverseMat1_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseMat1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5adaa0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat1_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseMat1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseMat1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5adae0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat1_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseMat1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseMat1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5adb20

void __thiscall
ComputationsTest_InverseLUMat1_Test::TestBody(ComputationsTest_InverseLUMat1_Test *this)

{
  longlong *plVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  ulonglong uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  char *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  AssertHelper local_res10;
  Message local_res18 [2];
  AssertionResult local_48 [2];
  
  dVar2 = __real_3f1a36e2e0000000;
  uVar4 = 0;
  uVar8 = 0;
  local_res10.data_ = (AssertHelperData *)0x0;
  local_res18[0].ss_._Mypair._Myval2._0_4_ = __real_40a00000;
  while( true ) {
    fVar9 = (float)(*(uint *)((longlong)&local_res18[0].ss_._Mypair._Myval2 + uVar4) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (fVar9 == 0.0) break;
    *(float *)((longlong)&local_res18[-1].ss_._Mypair._Myval2 + uVar4) = __real_3f800000 / fVar9;
    uVar4 = uVar4 + 4;
    if (3 < uVar4) {
      fVar9 = __real_40a00000;
      if (__real_40a00000 == 0.0) {
        fVar9 = __real_1e3ce508;
      }
      local_res10.data_ =
           (AssertHelperData *)CONCAT44((int)((ulonglong)local_res10.data_ >> 0x20),1.0 / fVar9);
LAB_14c5adbf5:
      local_res18[0].ss_._Mypair._Myval2._0_4_ = 0.2;
      while (testing::internal::DoubleNearPredFormat
                       (local_48,"mi[y][x]","expected[y][x]","0.0001f",
                        (double)*(float *)((longlong)&local_res18[-1].ss_._Mypair._Myval2 + uVar8),
                        (double)*(float *)((longlong)&local_res18[0].ss_._Mypair._Myval2 + uVar8),
                        dVar2), uVar3._Mypair._Myval2 = local_48[0].message_._Mypair._Myval2,
            local_48[0].success_ != false) {
        if (local_48[0].message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_48[0].message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        uVar8 = uVar8 + 4;
        if (3 < uVar8) {
          return;
        }
      }
      pMVar5 = (Message *)testing::Message::Message(local_res18);
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
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_res10,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                           ,0xcb,pcVar6);
      testing::internal::AssertHelper::operator=(this_00,pMVar5);
      testing::internal::AssertHelper::~AssertHelper(&local_res10);
      plVar1 = (longlong *)
               CONCAT44(local_res18[0].ss_._Mypair._Myval2._4_4_,
                        local_res18[0].ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar7 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
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
  }
  local_res10.data_ = local_res10.data_ & 0xffffffff00000000;
  goto LAB_14c5adbf5;
}

// `scalar_deleting_destructor' @ 14c5add60

void * __thiscall
ComputationsTest_InverseLUMat1_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseLUMat1_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5adda0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseLUMat1_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseLUMat1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseLUMat1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5adde0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseLUMat1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseLUMat1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseLUMat1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ade20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_InverseMat3_Test::TestBody(ComputationsTest_InverseMat3_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  int iVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStackY_e8 [32];
  AssertionResult local_b8;
  AssertHelper local_a8;
  mat<3,3,int> local_a0;
  mat<3,3,int> local_78;
  vec<3,int> local_50;
  undefined1 local_40 [12];
  vec<3,int> vStack_34;
  vec<3,int> vStack_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar7 = 0;
  local_a0.values[2].values[2] = 0;
  local_a0.values[0].values._0_8_ = ___xmm_00000000000000030000000200000001;
  local_a0.values._8_8_ = _UNK_151e591c8;
  local_a0.values[1].values._4_8_ = ___xmm_00000006000000050000000400000001;
  local_a0.values[2].values._0_8_ = _UNK_1528963d8;
  iVar2 = tdm::impl::determinant<3,int>(&local_a0,3);
  if (iVar2 == 0) {
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    local_40._8_4_ = 0;
    register0x0000120c = 0;
    vStack_34.values[1] = 0;
    vStack_34.values[2] = 0;
    vStack_28.values[0] = 0;
    vStack_28.values[1] = 0;
    vStack_28.values[2] = 0;
  }
  else {
    tdm::impl::adjoint<3,int>(&local_78,&local_a0);
    local_a0.values[0].values[0] = 0;
    local_a0.values[0].values[1] = 0;
    local_a0.values[0].values[2] = 0;
    local_a0.values[1].values[0] = 0;
    local_a0.values[2].values[2] = 0;
    local_a0.values[1].values[1] = 0;
    local_a0.values[1].values[2] = 0;
    local_a0.values[2].values[0] = 0;
    local_a0.values[2].values[1] = 0;
    do {
      *(int *)((longlong)local_a0.values[0].values + uVar7) =
           *(int *)((longlong)local_78.values[0].values + uVar7) / iVar2;
      *(int *)((longlong)local_a0.values[0].values + uVar7 + 4) =
           *(int *)((longlong)local_78.values[0].values + uVar7 + 4) / iVar2;
      *(int *)((longlong)local_a0.values[0].values + uVar7 + 8) =
           *(int *)((longlong)local_78.values[0].values + uVar7 + 8) / iVar2;
      uVar7 = uVar7 + 0xc;
    } while (uVar7 < 0x24);
    vStack_34.values[1] = local_a0.values[1].values[1];
    vStack_34.values[2] = local_a0.values[1].values[2];
    vStack_28.values[0] = local_a0.values[2].values[0];
    vStack_28.values[1] = local_a0.values[2].values[1];
    vStack_28.values[2] = local_a0.values[2].values[2];
    local_40._0_8_ = local_a0.values[0].values._0_8_;
    unique0x100005de = local_a0.values._8_8_;
  }
  local_50.values[0] = -0x18;
  local_50.values[1] = 0x12;
  local_50.values[2] = 5;
  testing::internal::EqHelper::Compare<tdm::vec<3,int>,tdm::vec<3,int>,0>
            (&local_b8,"mi[0]","tdm::vec3<int>(-24, 18, 5)",(vec<3,int> *)local_40,&local_50);
  uVar1._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
  if (local_b8.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_a8);
    if (local_b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_b8.message_._Mypair._Myval2;
      }
    }
    iVar2 = 0xd5;
LAB_14c5ae0af:
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_50,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,iVar2,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_50);
  }
  else {
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_50.values[0] = 0x14;
    local_50.values[1] = -0xf;
    local_50.values[2] = -4;
    testing::internal::EqHelper::Compare<tdm::vec<3,int>,tdm::vec<3,int>,0>
              (&local_b8,"mi[1]","tdm::vec3<int>(20, -15, -4)",&vStack_34,&local_50);
    uVar1._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_a8);
      if (local_b8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)local_b8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
          pcVar5 = *(char **)local_b8.message_._Mypair._Myval2;
          iVar2 = 0xd6;
          goto LAB_14c5ae0af;
        }
      }
      iVar2 = 0xd6;
      goto LAB_14c5ae0af;
    }
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_50.values[0] = -5;
    local_50.values[1] = 4;
    local_50.values[2] = 1;
    testing::internal::EqHelper::Compare<tdm::vec<3,int>,tdm::vec<3,int>,0>
              (&local_b8,"mi[2]","tdm::vec3<int>(-5, 4, 1)",&vStack_28,&local_50);
    if (local_b8.success_ != false) goto LAB_14c5ae0fa;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_50);
    if (local_b8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)local_b8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
        pcVar5 = *(char **)local_b8.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                        ,0xd7,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_a8);
    local_a8.data_ = (AssertHelperData *)CONCAT44(local_50.values[1],local_50.values[0]);
  }
  if (local_a8.data_ != (AssertHelperData *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)&(local_a8.data_)->type +
             (longlong)*(int *)(*(longlong *)local_a8.data_ + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_14c5ae0fa:
  if (local_b8.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_b8.message_._Mypair._Myval2);
    ::operator_delete((void *)local_b8.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ae140

void * __thiscall
ComputationsTest_InverseMat3_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseMat3_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ae180

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat3_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseMat3_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseMat3_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ae1c0

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat3_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseMat3_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseMat3_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ae200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_InverseMat4_Test::TestBody(ComputationsTest_InverseMat4_Test *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  Message *pMVar7;
  AssertHelper *this_00;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auStackY_148 [32];
  AssertionResult local_108;
  AssertHelper local_f8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_f0;
  mat<4,4,float> local_e8;
  mat<4,4,float> local_a8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_e8.values[0].values._0_8_ = ___xmm_3ecccccd3e99999a3e4ccccd3f19999a;
  local_e8.values[0].values._8_8_ = _UNK_152896468;
  local_e8.values[1].values._0_8_ = ___xmm_3e99999a3f0000003f3333333e4ccccd;
  local_e8.values[1].values._8_8_ = _UNK_152896458;
  local_e8.values[2].values._0_8_ = ___xmm_3e4ccccd3f3333333f0000003e99999a;
  local_e8.values[2].values._8_8_ = _UNK_152896418;
  local_e8.values[3].values._0_8_ = ___xmm_3f19999a3e4ccccd3e99999a3ecccccd;
  local_e8.values[3].values._8_8_ = _UNK_1528964b8;
  fVar13 = tdm::impl::determinant<4,float>(&local_e8,4);
  auVar16 = ZEXT816(0);
  if (fVar13 == 0.0) {
    auVar14 = ZEXT812(0);
    local_e8.values[0].values[0] = auVar14._0_4_;
    local_e8.values[0].values[1] = auVar14._4_4_;
    local_e8.values[0].values[2] = auVar14._8_4_;
    local_e8.values[0].values[3] = 0.0;
    local_e8.values[1].values[0] = auVar14._0_4_;
    local_e8.values[1].values[1] = auVar14._4_4_;
    local_e8.values[1].values[2] = auVar14._8_4_;
    local_e8.values[1].values[3] = 0.0;
    local_e8.values[2].values[0] = auVar14._0_4_;
    local_e8.values[2].values[1] = auVar14._4_4_;
    local_e8.values[2].values[2] = auVar14._8_4_;
    local_e8.values[2].values[3] = 0.0;
    local_e8.values[3].values[0] = auVar14._0_4_;
    local_e8.values[3].values[1] = auVar14._4_4_;
    local_e8.values[3].values[2] = auVar14._8_4_;
    local_e8.values[3].values[3] = 0.0;
  }
  else {
    tdm::impl::adjoint<4,float>(&local_a8,&local_e8);
    uVar12 = 0;
    auVar1._4_4_ = fVar13;
    auVar1._0_4_ = fVar13;
    auVar1._8_4_ = fVar13;
    auVar1._12_4_ = fVar13;
    auVar16 = rcpps(auVar16,auVar1);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    fVar15 = auVar16._0_4_;
    fVar17 = auVar16._4_4_;
    fVar18 = auVar16._8_4_;
    fVar19 = auVar16._12_4_;
    do {
      fVar2 = *(float *)((longlong)local_a8.values[0].values + uVar12 + 4);
      fVar3 = *(float *)((longlong)local_a8.values[0].values + uVar12 + 8);
      fVar4 = *(float *)((longlong)local_a8.values[0].values + uVar12 + 0xc);
      *(float *)((longlong)&local_68 + uVar12) =
           *(float *)((longlong)local_a8.values[0].values + uVar12) *
           ((fVar15 + fVar15) - fVar15 * fVar15 * fVar13);
      *(float *)((longlong)&local_68 + uVar12 + 4) =
           fVar2 * ((fVar17 + fVar17) - fVar17 * fVar17 * fVar13);
      *(float *)((longlong)&uStack_60 + uVar12) =
           fVar3 * ((fVar18 + fVar18) - fVar18 * fVar18 * fVar13);
      *(float *)((longlong)&uStack_60 + uVar12 + 4) =
           fVar4 * ((fVar19 + fVar19) - fVar19 * fVar19 * fVar13);
      uVar12 = uVar12 + 0x10;
    } while (uVar12 < 0x40);
    local_e8.values[0].values[2] = (float)(undefined4)uStack_60;
    local_e8.values[0].values[3] = (float)uStack_60._4_4_;
    local_e8.values[0].values[0] = (float)(undefined4)local_68;
    local_e8.values[0].values[1] = (float)local_68._4_4_;
    local_e8.values[1].values[2] = (float)(undefined4)uStack_50;
    local_e8.values[1].values[3] = (float)uStack_50._4_4_;
    local_e8.values[1].values[0] = (float)(undefined4)local_58;
    local_e8.values[1].values[1] = (float)local_58._4_4_;
    local_e8.values[2].values[2] = (float)(undefined4)uStack_40;
    local_e8.values[2].values[3] = (float)uStack_40._4_4_;
    local_e8.values[2].values[0] = (float)(undefined4)local_48;
    local_e8.values[2].values[1] = (float)local_48._4_4_;
    local_e8.values[3].values[2] = (float)(undefined4)uStack_30;
    local_e8.values[3].values[3] = (float)uStack_30._4_4_;
    local_e8.values[3].values[0] = (float)(undefined4)local_38;
    local_e8.values[3].values[1] = (float)local_38._4_4_;
  }
  dVar5 = __real_3f1a36e2e0000000;
  uVar12 = 0;
  local_68 = ___xmm_c02ce8a7bff703b03fb3a5e3407dc0ec;
  uStack_60 = _UNK_152896678;
  local_58 = ___xmm_bff703b0c033a5e3407703b03fb3a5e3;
  uStack_50 = _UNK_152896658;
  local_48 = ___xmm_3fb3a5e3407703b0c033a5e3bff703b0;
  uStack_40 = _UNK_152896598;
  local_38 = ___xmm_407dc0ec3fb3a5e3bff703b0c02ce8a7;
  uStack_30 = _UNK_1528965f8;
  do {
    uVar10 = 0;
    uVar11 = uVar12;
    do {
      testing::internal::DoubleNearPredFormat
                (&local_108,"mi[y][x]","expected[y][x]","0.0001f",
                 (double)*(float *)((longlong)local_e8.values[0].values + uVar11),
                 (double)*(float *)((longlong)&local_68 + uVar11),dVar5);
      uVar6._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
      if (local_108.success_ == false) {
        pMVar7 = (Message *)testing::Message::Message((Message *)&local_f0);
        if (local_108.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)local_108.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
            pcVar8 = *(char **)local_108.message_._Mypair._Myval2;
          }
        }
        this_00 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_f8,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                             ,0xe8,pcVar8);
        testing::internal::AssertHelper::operator=(this_00,pMVar7);
        testing::internal::AssertHelper::~AssertHelper(&local_f8);
        if (local_f0._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)&(local_f0._Myval2)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_f0._Myval2 + 4));
          (**(code **)*puVar9)(puVar9,1);
        }
        if (local_108.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108.message_._Mypair._Myval2);
        ::operator_delete((void *)local_108.message_._Mypair._Myval2,0x20);
        return;
      }
      if (local_108.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 4;
    } while (uVar10 < 4);
    uVar12 = uVar12 + 0x10;
    if (0x3f < uVar12) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5ae4b0

void * __thiscall
ComputationsTest_InverseMat4_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseMat4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ae4f0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat4_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseMat4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseMat4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ae530

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat4_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseMat4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseMat4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ae570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ComputationsTest_InverseLUMat4_Test::TestBody(ComputationsTest_InverseLUMat4_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  AssertionResult local_b8;
  mat<4,4,float> local_a8;
  mat<4,4,float> local_68;
  
  local_a8.values[0].values._0_8_ = ___xmm_3ecccccd3e99999a3e4ccccd3f19999a;
  local_a8.values[0].values._8_8_ = _UNK_152896468;
  local_a8.values[1].values._0_8_ = ___xmm_3e99999a3f0000003f3333333e4ccccd;
  local_a8.values[1].values._8_8_ = _UNK_152896458;
  local_a8.values[2].values._0_8_ = ___xmm_3e4ccccd3f3333333f0000003e99999a;
  local_a8.values[2].values._8_8_ = _UNK_152896418;
  local_a8.values[3].values._0_8_ = ___xmm_3f19999a3e4ccccd3e99999a3ecccccd;
  local_a8.values[3].values._8_8_ = _UNK_1528964b8;
  tdm::lu::inverse<4,float>(&local_68,&local_a8);
  dVar1 = __real_3f1a36e2e0000000;
  uVar7 = 0;
  local_a8.values[0].values[0] = ___xmm_c02ce8a7bff703b03fb3a5e3407dc0ec;
  local_a8.values[0].values[1] = _UNK_152896674;
  local_a8.values[0].values[2] = _UNK_152896678;
  local_a8.values[0].values[3] = _UNK_15289667c;
  local_a8.values[1].values[0] = ___xmm_bff703b0c033a5e3407703b03fb3a5e3;
  local_a8.values[1].values[1] = _UNK_152896654;
  local_a8.values[1].values[2] = _UNK_152896658;
  local_a8.values[1].values[3] = _UNK_15289665c;
  local_a8.values[2].values[0] = ___xmm_3fb3a5e3407703b0c033a5e3bff703b0;
  local_a8.values[2].values[1] = _UNK_152896594;
  local_a8.values[2].values[2] = _UNK_152896598;
  local_a8.values[2].values[3] = _UNK_15289659c;
  local_a8.values[3].values[0] = ___xmm_407dc0ec3fb3a5e3bff703b0c02ce8a7;
  local_a8.values[3].values[1] = _UNK_1528965f4;
  local_a8.values[3].values[2] = _UNK_1528965f8;
  local_a8.values[3].values[3] = _UNK_1528965fc;
  do {
    uVar8 = 0;
    uVar6 = uVar7;
    do {
      testing::internal::DoubleNearPredFormat
                (&local_b8,"mi[y][x]","expected[y][x]","0.0001f",
                 (double)*(float *)((longlong)local_68.values[0].values + uVar6),
                 (double)*(float *)((longlong)local_a8.values[0].values + uVar6),dVar1);
      uVar2._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
      if (local_b8.success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
        if (local_b8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)local_b8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
            pcVar4 = *(char **)local_b8.message_._Mypair._Myval2;
          }
        }
        this_00 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_res10,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                             ,0xfb,pcVar4);
        testing::internal::AssertHelper::operator=(this_00,pMVar3);
        testing::internal::AssertHelper::~AssertHelper(&local_res10);
        if (local_res18[0]._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar5 = (undefined8 *)
                   ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
                   (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
          (**(code **)*puVar5)(puVar5,1);
        }
        if (local_b8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_b8.message_._Mypair._Myval2,0x20);
        return;
      }
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + 4;
    } while (uVar8 < 4);
    uVar7 = uVar7 + 0x10;
    if (0x3f < uVar7) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5ae780

void * __thiscall
ComputationsTest_InverseLUMat4_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseLUMat4_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ae7c0

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseLUMat4_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseLUMat4_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseLUMat4_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ae800

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseLUMat4_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseLUMat4_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseLUMat4_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ae840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ComputationsTest_InverseMat7_Test::TestBody(ComputationsTest_InverseMat7_Test *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  mat<7,7,float> *pmVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  char *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStackY_2f8 [32];
  AssertionResult local_2b8;
  AssertHelper local_2a8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_2a0;
  mat<7,7,float> local_298;
  mat<7,7,float> local_1c8;
  mat<7,7,float> local_f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_298.values[0].values._0_8_ = ___xmm_3ecccccd3e99999a3e4ccccd3f19999a;
  local_298.values[0].values._8_8_ = _UNK_152896468;
  local_298.values[0].values._16_8_ = ___xmm_3e4ccccd3f4ccccd3f3333333f000000;
  local_298.values._24_8_ = _UNK_152896428;
  local_298.values[1].values._4_8_ = ___xmm_3ecccccd3e99999a3f0000003f333333;
  local_298.values[1].values._12_8_ = _UNK_152896478;
  local_298.values[1].values._20_8_ = ___xmm_3f0000003e99999a3f19999a3dcccccd;
  local_298.values[2].values._0_8_ = _UNK_1528964a8;
  local_298.values[2].values._8_8_ = ___xmm_3ecccccd3f19999a3e4ccccd3f333333;
  local_298.values[2].values._16_8_ = _UNK_152896488;
  local_298.values._80_8_ = ___xmm_3e4ccccd3e99999a3ecccccd3dcccccd;
  local_298.values[3].values._4_8_ = _UNK_1528963f8;
  local_298.values[3].values._12_8_ = ___xmm_3f3333333f0000003dcccccd3f19999a;
  local_298.values[3].values._20_8_ = _UNK_152896518;
  local_298.values[4].values._0_8_ = ___xmm_3dcccccd3f19999a3ecccccd3f000000;
  local_298.values[4].values._8_8_ = _UNK_1528963e8;
  local_298.values[4].values._16_8_ = ___xmm_3f3333333e99999a3f4ccccd3e4ccccd;
  local_298.values._136_8_ = _UNK_152896508;
  local_298.values[5].values._4_8_ = ___xmm_3f4ccccd3f0000003ecccccd3dcccccd;
  local_298.values[5].values._12_8_ = _UNK_152896538;
  local_298.values[5].values._20_8_ = ___xmm_3f19999a3f4ccccd3e4ccccd3e99999a;
  local_298.values[6].values._0_8_ = _UNK_1528964c8;
  local_298.values[6].values._8_8_ = ___xmm_3e4ccccd3e99999a3f3333333dcccccd;
  local_298.values[6].values._16_8_ = _UNK_152896408;
  local_298.values[6].values[6] = 0.4;
  pmVar3 = tdm::inverse<7,float>(&local_1c8,&local_298);
  tdm::operator*<7,7,7,float>(&local_f8,&local_298,pmVar3);
  memset(&local_1c8,0,0xc4);
  dVar1 = __real_3f1a36e2e0000000;
  uVar9 = 0;
  local_1c8.values[0].values[0] = 1.0;
  local_1c8.values[1].values[1] = 1.0;
  local_1c8.values[2].values[2] = 1.0;
  local_1c8.values[3].values[3] = 1.0;
  local_1c8.values[4].values[4] = 1.0;
  local_1c8.values[5].values[5] = 1.0;
  local_1c8.values[6].values[6] = 1.0;
  do {
    uVar8 = 0;
    uVar7 = uVar9;
    do {
      testing::internal::DoubleNearPredFormat
                (&local_2b8,"identity[y][x]","expected[y][x]","0.0001f",
                 (double)*(float *)((longlong)local_f8.values[0].values + uVar7),
                 (double)*(float *)((longlong)local_1c8.values[0].values + uVar7),dVar1);
      uVar2._Mypair._Myval2 = local_2b8.message_._Mypair._Myval2;
      if (local_2b8.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_2a0);
        if (local_2b8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)local_2b8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_2b8.message_._Mypair._Myval2 + 0x18)) {
            pcVar5 = *(char **)local_2b8.message_._Mypair._Myval2;
          }
        }
        this_00 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_2a8,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestComputations.cpp"
                             ,0x10d,pcVar5);
        testing::internal::AssertHelper::operator=(this_00,pMVar4);
        testing::internal::AssertHelper::~AssertHelper(&local_2a8);
        if (local_2a0._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar6 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)local_2a0._Mypair._Myval2 + 4) +
                   (longlong)local_2a0._Mypair._Myval2);
          (**(code **)*puVar6)(puVar6,1);
        }
        if (local_2b8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_2b8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_2b8.message_._Mypair._Myval2,0x20);
        return;
      }
      if (local_2b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_2b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 4;
    } while (uVar8 < 7);
    uVar9 = uVar9 + 0x1c;
    if (0xc3 < uVar9) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5aeb10

void * __thiscall
ComputationsTest_InverseMat7_Test::_scalar_deleting_destructor_
          (ComputationsTest_InverseMat7_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5aeb50

Test * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat7_Test>::CreateTest
          (TestFactoryImpl<ComputationsTest_InverseMat7_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ComputationsTest_InverseMat7_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5aeb90

void * __thiscall
testing::internal::TestFactoryImpl<ComputationsTest_InverseMat7_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ComputationsTest_InverseMat7_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ComputationsTest_InverseMat7_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// mat<4,4,int>_> @ 14c5aebd0

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,tdm::mat<4,4,int>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,mat<4,4,int> *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x40,param_1);
  return param_1;
}

// quat<float>_> @ 14c5aec00

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,tdm::quat<float>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,quat<float> *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x10,param_1);
  return param_1;
}

// vec<3,int>_> @ 14c5aec30

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,tdm::vec<3,int>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,vec<3,int> *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0xc,param_1);
  return param_1;
}

// vec<4,int>_> @ 14c5aec60

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,tdm::vec<4,int>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,vec<4,int> *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x10,param_1);
  return param_1;
}

// operator*<7,7,7,float> @ 14c5aec90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<7,7,float> * __cdecl
tdm::operator*<7,7,7,float>
          (mat<7,7,float> *__return_storage_ptr__,mat<7,7,float> *param_1,mat<7,7,float> *param_2)

{
  undefined8 uVar1;
  vec<7,float> *pvVar2;
  vec<7,float> *pvVar3;
  longlong lVar4;
  vec<7,float> *pvVar5;
  vec<7,float> *pvVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_118 [60];
  float fStack_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_118;
  memset(__return_storage_ptr__,0,0xc4);
  lVar7 = 7;
  pvVar6 = __return_storage_ptr__->values;
  do {
    local_c0._4_4_ = 0.0;
    lVar4 = 0;
    local_c0._0_4_ = 0.0;
    local_d0 = 0;
    fVar9 = 0.0;
    uStack_c8._4_4_ = 0.0;
    uStack_c8._0_4_ = 0.0;
    local_d0._4_4_ = 0.0;
    pvVar5 = param_2->values;
    fVar10 = local_d0._4_4_;
    do {
      fVar8 = *(float *)((longlong)pvVar6 +
                        (longlong)param_1 + (lVar4 * 4 - (longlong)__return_storage_ptr__));
      if (fVar8 == 0.0) {
        fVar8 = 0.0;
      }
      pvVar2 = (vec<7,float> *)pvVar5->values;
      lVar4 = lVar4 + 1;
      uVar1 = *(undefined8 *)(((vec<7,float> *)pvVar5->values)->values + 4);
      fVar10 = fVar10 + ((vec<7,float> *)pvVar5->values)->values[1] * fVar8;
      uStack_c8._0_4_ = (float)uStack_c8 + ((vec<7,float> *)pvVar5->values)->values[2] * fVar8;
      pvVar3 = (vec<7,float> *)pvVar5->values;
      uStack_c8._4_4_ = uStack_c8._4_4_ + ((vec<7,float> *)pvVar5->values)->values[3] * fVar8;
      pvVar5 = pvVar5 + 1;
      fStack_dc = (float)((ulonglong)uVar1 >> 0x20);
      fVar9 = fVar9 + pvVar3->values[6] * fVar8;
      local_c0._4_4_ = local_c0._4_4_ + fStack_dc * fVar8;
      local_d0 = CONCAT44(fVar10,(float)local_d0 + pvVar2->values[0] * fVar8);
      local_c0._0_4_ = (float)local_c0 + (float)uVar1 * fVar8;
    } while (lVar4 != 7);
    *(undefined8 *)((vec<7,float> *)pvVar6->values)->values = local_d0;
    *(undefined8 *)(((vec<7,float> *)pvVar6->values)->values + 2) = uStack_c8;
    *(undefined8 *)(((vec<7,float> *)pvVar6->values)->values + 4) = local_c0;
    ((vec<7,float> *)pvVar6->values)->values[6] = fVar9;
    pvVar6 = pvVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return __return_storage_ptr__;
}

// CmpHelperEQ<tdm::mat<4,4,int>,tdm::mat<4,4,int>_> @ 14c5aef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,mat<4,4,int> *param_3
          ,mat<4,4,int> *param_4)

{
  void *pvVar1;
  bool bVar2;
  int *piVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  longlong lVar9;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar2 = true;
  piVar3 = param_4->values[0].values + 1;
  lVar9 = 4;
  do {
    if ((((bVar2) &&
         (*(int *)(((longlong)param_3 - (longlong)param_4) + -4 + (longlong)piVar3) ==
          ((vec<4,int> *)(piVar3 + -1))->values[0])) &&
        (*(int *)(((longlong)param_3 - (longlong)param_4) + (longlong)piVar3) == *piVar3)) &&
       ((*(int *)((longlong)piVar3 + -(longlong)param_4 + 4 + (longlong)param_3) == piVar3[1] &&
        (*(int *)((longlong)piVar3 + -(longlong)param_4 + 8 + (longlong)param_3) == piVar3[2])))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    piVar3 = piVar3 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (bVar2) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar4 = FormatForComparisonFailureMessage<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar5 = FormatForComparisonFailureMessage<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar5,pbVar4,false);
    if (0xf < uStack_70) {
      pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
      uVar8 = uStack_70 + 1;
      pvVar6 = pvVar1;
      if (0xfff < uVar8) {
        pvVar6 = *(void **)((longlong)pvVar1 + -8);
        uVar8 = uStack_70 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) goto LAB_14c5af07b;
      }
      ::operator_delete(pvVar6,uVar8);
    }
    local_88._Buf[0] = '\0';
    local_78 = ___xmm_000000000000000f0000000000000000;
    uStack_70 = _UNK_15076add8;
    if (0xf < local_50) {
      uVar8 = local_50 + 1;
      uVar7 = local_68._Ptr;
      if (0xfff < uVar8) {
        uVar7 = *(undefined8 *)(local_68._Ptr + -8);
        uVar8 = local_50 + 0x28;
        if ((char *)0x1f < local_68._Ptr + (-8 - uVar7)) {
LAB_14c5af07b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar8);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<tdm::quat<float>,tdm::quat<float>_> @ 14c5af0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<tdm::quat<float>,tdm::quat<float>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,quat<float> *param_3,
          quat<float> *param_4)

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
  if ((((param_4->x == param_3->x) && (param_4->y == param_3->y)) && (param_4->z == param_3->z)) &&
     (param_4->w == param_3->w)) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af1f8;
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
LAB_14c5af1f8:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<tdm::vec<3,int>,tdm::vec<3,int>_> @ 14c5af240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<tdm::vec<3,int>,tdm::vec<3,int>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,vec<3,int> *param_3,
          vec<3,int> *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_3->values[0] == param_4->values[0]) && (param_3->values[1] == param_4->values[1])) &&
     (param_3->values[2] == param_4->values[2])) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
    if (0xf < uStack_68) {
      pvVar1 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
      uVar6 = uStack_68 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_68 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af36e;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_80._Buf[0] = '\0';
    local_70 = ___xmm_000000000000000f0000000000000000;
    uStack_68 = _UNK_15076add8;
    if (0xf < local_48) {
      uVar6 = local_48 + 1;
      uVar5 = local_60._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_60._Ptr + -8);
        uVar6 = local_48 + 0x28;
        if ((char *)0x1f < local_60._Ptr + (-8 - uVar5)) {
LAB_14c5af36e:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<tdm::vec<4,int>,tdm::vec<4,int>_> @ 14c5af3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<tdm::vec<4,int>,tdm::vec<4,int>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,vec<4,int> *param_3,
          vec<4,int> *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((((param_3->values[0] == param_4->values[0]) && (param_3->values[1] == param_4->values[1])) &&
      (param_3->values[2] == param_4->values[2])) && (param_3->values[3] == param_4->values[3])) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
    if (0xf < uStack_68) {
      pvVar1 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
      uVar6 = uStack_68 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_68 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af4f4;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_80._Buf[0] = '\0';
    local_70 = ___xmm_000000000000000f0000000000000000;
    uStack_68 = _UNK_15076add8;
    if (0xf < local_48) {
      uVar6 = local_48 + 1;
      uVar5 = local_60._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_60._Ptr + -8);
        uVar6 = local_48 + 0x28;
        if ((char *)0x1f < local_60._Ptr + (-8 - uVar5)) {
LAB_14c5af4f4:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<tdm::mat<4,4,int>,tdm::mat<4,4,int>_> @ 14c5af540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,mat<4,4,int> *param_3
          ,mat<4,4,int> *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af631;
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
LAB_14c5af631:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<tdm::quat<float>,tdm::quat<float>_> @ 14c5af680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<tdm::quat<float>,tdm::quat<float>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,quat<float> *param_3,
          quat<float> *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af771;
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
LAB_14c5af771:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<tdm::vec<3,int>,tdm::vec<3,int>_> @ 14c5af7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<tdm::vec<3,int>,tdm::vec<3,int>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,vec<3,int> *param_3,
          vec<3,int> *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af8b1;
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
LAB_14c5af8b1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<tdm::vec<4,int>,tdm::vec<4,int>_> @ 14c5af900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<tdm::vec<4,int>,tdm::vec<4,int>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,vec<4,int> *param_3,
          vec<4,int> *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5af9f1;
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
LAB_14c5af9f1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// Compare<tdm::quat<float>,tdm::quat<float>,0> @ 14c5afa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<tdm::quat<float>,tdm::quat<float>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,quat<float> *param_3,
          quat<float> *param_4)

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
  if ((((param_4->x == param_3->x) && (param_4->y == param_3->y)) && (param_4->z == param_3->z)) &&
     (param_4->w == param_3->w)) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5afb78;
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
LAB_14c5afb78:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// Compare<tdm::vec<3,int>,tdm::vec<3,int>,0> @ 14c5afbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<tdm::vec<3,int>,tdm::vec<3,int>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,vec<3,int> *param_3,
          vec<3,int> *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_3->values[0] == param_4->values[0]) && (param_3->values[1] == param_4->values[1])) &&
     (param_3->values[2] == param_4->values[2])) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
    if (0xf < uStack_68) {
      pvVar1 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
      uVar6 = uStack_68 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_68 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5afce8;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_80._Buf[0] = '\0';
    local_70 = ___xmm_000000000000000f0000000000000000;
    uStack_68 = _UNK_15076add8;
    if (0xf < local_48) {
      uVar6 = local_48 + 1;
      uVar5 = local_60._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_60._Ptr + -8);
        uVar6 = local_48 + 0x28;
        if ((char *)0x1f < local_60._Ptr + (-8 - uVar5)) {
LAB_14c5afce8:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// Compare<tdm::vec<4,int>,tdm::vec<4,int>,0> @ 14c5afd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<tdm::vec<4,int>,tdm::vec<4,int>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,vec<4,int> *param_3,
          vec<4,int> *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStackY_b8 [32];
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((((param_3->values[0] == param_4->values[0]) && (param_3->values[1] == param_4->values[1])) &&
      (param_3->values[2] == param_4->values[2])) && (param_3->values[3] == param_4->values[3])) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80
                        ,param_3,param_4);
    EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
    if (0xf < uStack_68) {
      pvVar1 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
      uVar6 = uStack_68 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar6) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar6 = uStack_68 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5afe61;
      }
      ::operator_delete(pvVar4,uVar6);
    }
    local_80._Buf[0] = '\0';
    local_70 = ___xmm_000000000000000f0000000000000000;
    uStack_68 = _UNK_15076add8;
    if (0xf < local_48) {
      uVar6 = local_48 + 1;
      uVar5 = local_60._Ptr;
      if (0xfff < uVar6) {
        uVar5 = *(undefined8 *)(local_60._Ptr + -8);
        uVar6 = local_48 + 0x28;
        if ((char *)0x1f < local_60._Ptr + (-8 - uVar5)) {
LAB_14c5afe61:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<tdm::mat<4,4,int>_> @ 14c5afeb0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<tdm::mat<4,4,int>_>
          (mat<4,4,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x40,param_2);
  return;
}

// DefaultPrintNonContainerTo<tdm::quat<float>_> @ 14c5afed0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<tdm::quat<float>_>
          (quat<float> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// DefaultPrintNonContainerTo<tdm::vec<3,int>_> @ 14c5afef0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<tdm::vec<3,int>_>
          (vec<3,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0xc,param_2);
  return;
}

// DefaultPrintNonContainerTo<tdm::vec<4,int>_> @ 14c5aff10

void __cdecl
testing_internal::DefaultPrintNonContainerTo<tdm::vec<4,int>_>
          (vec<4,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// DefaultPrintTo<tdm::mat<4,4,int>_> @ 14c5aff30

void __cdecl
testing::internal::DefaultPrintTo<tdm::mat<4,4,int>_>
          (WrapPrinterType<3> param_1,mat<4,4,int> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x40,param_3);
  return;
}

// DefaultPrintTo<tdm::quat<float>_> @ 14c5aff50

void __cdecl
testing::internal::DefaultPrintTo<tdm::quat<float>_>
          (WrapPrinterType<3> param_1,quat<float> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x10,param_3);
  return;
}

// DefaultPrintTo<tdm::vec<3,int>_> @ 14c5aff70

void __cdecl
testing::internal::DefaultPrintTo<tdm::vec<3,int>_>
          (WrapPrinterType<3> param_1,vec<3,int> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0xc,param_3);
  return;
}

// DefaultPrintTo<tdm::vec<4,int>_> @ 14c5aff90

void __cdecl
testing::internal::DefaultPrintTo<tdm::vec<4,int>_>
          (WrapPrinterType<3> param_1,vec<4,int> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x10,param_3);
  return;
}

// FormatForComparisonFailureMessage<tdm::mat<4,4,int>,tdm::mat<4,4,int>_> @ 14c5affb0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<tdm::mat<4,4,int>,tdm::mat<4,4,int>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          mat<4,4,int> *param_1,mat<4,4,int> *param_2)

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
            ((uchar *)param_1,0x40,(basic_ostream<char,std::char_traits<char>_> *)local_118);
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

// FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_> @ 14c5b0160

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<tdm::quat<float>,tdm::quat<float>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          quat<float> *param_1,quat<float> *param_2)

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

// FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_> @ 14c5b0310

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<tdm::vec<3,int>,tdm::vec<3,int>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vec<3,int> *param_1,vec<3,int> *param_2)

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
            ((uchar *)param_1,0xc,(basic_ostream<char,std::char_traits<char>_> *)local_118);
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

// FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_> @ 14c5b04c0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<tdm::vec<4,int>,tdm::vec<4,int>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vec<4,int> *param_1,vec<4,int> *param_2)

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

// PrintTo<tdm::mat<4,4,int>_> @ 14c5b0670

void __cdecl
testing::internal::PrintTo<tdm::mat<4,4,int>_>
          (mat<4,4,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x40,param_2);
  return;
}

// PrintTo<tdm::quat<float>_> @ 14c5b0690

void __cdecl
testing::internal::PrintTo<tdm::quat<float>_>
          (quat<float> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// PrintTo<tdm::vec<3,int>_> @ 14c5b06b0

void __cdecl
testing::internal::PrintTo<tdm::vec<3,int>_>
          (vec<3,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0xc,param_2);
  return;
}

// PrintTo<tdm::vec<4,int>_> @ 14c5b06d0

void __cdecl
testing::internal::PrintTo<tdm::vec<4,int>_>
          (vec<4,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// PrintToString<tdm::mat<4,4,int>_> @ 14c5b06f0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<tdm::mat<4,4,int>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          mat<4,4,int> *param_1)

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
            ((uchar *)param_1,0x40,(basic_ostream<char,std::char_traits<char>_> *)local_118);
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

// PrintToString<tdm::quat<float>_> @ 14c5b08a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<tdm::quat<float>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          quat<float> *param_1)

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

// PrintToString<tdm::vec<3,int>_> @ 14c5b0a50

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<tdm::vec<3,int>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vec<3,int> *param_1)

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
            ((uchar *)param_1,0xc,(basic_ostream<char,std::char_traits<char>_> *)local_118);
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

// PrintToString<tdm::vec<4,int>_> @ 14c5b0c00

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<tdm::vec<4,int>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vec<4,int> *param_1)

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

// UniversalPrint<tdm::mat<4,4,int>_> @ 14c5b0db0

void __cdecl
testing::internal::UniversalPrint<tdm::mat<4,4,int>_>
          (mat<4,4,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x40,param_2);
  return;
}

// UniversalPrint<tdm::quat<float>_> @ 14c5b0dd0

void __cdecl
testing::internal::UniversalPrint<tdm::quat<float>_>
          (quat<float> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// UniversalPrint<tdm::vec<3,int>_> @ 14c5b0df0

void __cdecl
testing::internal::UniversalPrint<tdm::vec<3,int>_>
          (vec<3,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0xc,param_2);
  return;
}

// UniversalPrint<tdm::vec<4,int>_> @ 14c5b0e10

void __cdecl
testing::internal::UniversalPrint<tdm::vec<4,int>_>
          (vec<4,int> *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// __builtin_array_init_helper<tdm::vec<1,float>_> @ 14c5b0e30

void __cdecl __builtin_array_init_helper<tdm::vec<1,float>_>(vec<1,float> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 4);
    return;
  }
  return;
}

// __builtin_array_init_helper<tdm::vec<2,int>_> @ 14c5b0e50

void __cdecl __builtin_array_init_helper<tdm::vec<2,int>_>(vec<2,int> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 8);
    return;
  }
  return;
}

// __builtin_array_init_helper<tdm::vec<3,int>_> @ 14c5b0e70

void __cdecl __builtin_array_init_helper<tdm::vec<3,int>_>(vec<3,int> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 0xc);
    return;
  }
  return;
}

// __builtin_array_init_helper<tdm::vec<4,int>_> @ 14c5b0e90

void __cdecl __builtin_array_init_helper<tdm::vec<4,int>_>(vec<4,int> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 << 4);
    return;
  }
  return;
}

// __builtin_array_init_helper<tdm::vec<5,int>_> @ 14c5b0eb0

void __cdecl __builtin_array_init_helper<tdm::vec<5,int>_>(vec<5,int> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 0x14);
    return;
  }
  return;
}

// __builtin_array_init_helper<tdm::vec<7,float>_> @ 14c5b0ed0

void __cdecl __builtin_array_init_helper<tdm::vec<7,float>_>(vec<7,float> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 0x1c);
    return;
  }
  return;
}

// adjoint<3,int> @ 14c5b0ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<3,3,int> * __cdecl
tdm::impl::adjoint<3,int>(mat<3,3,int> *__return_storage_ptr__,mat<3,3,int> *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  vec<3,int> *pvVar4;
  longlong lVar5;
  vec<3,int> *pvVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  int *local_c8;
  mat<3,3,int> *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  int local_88 [10];
  mat<3,3,int> local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98 = 0;
  local_88[8] = 0;
  piVar3 = (int *)&local_b8;
  uVar15 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_c0 = __return_storage_ptr__;
  do {
    uVar9 = 0;
    local_c8 = piVar3;
    do {
      uVar14 = 0;
      piVar11 = local_88;
      lVar10 = 0;
      piVar13 = param_1->values[0].values + 2;
      do {
        lVar5 = 0;
        if (uVar14 != uVar15) {
          if (uVar9 == 0) {
LAB_14c5b0f9d:
            local_88[lVar10 + lVar5] = piVar13[-1];
            lVar1 = lVar5 + 1;
            if (lVar1 == 2) {
              piVar11 = piVar11 + 3;
              lVar10 = lVar10 + 3;
            }
            lVar5 = 0;
            if (lVar1 != 2) {
              lVar5 = lVar1;
            }
            if (uVar9 == 2) goto LAB_14c5b0fe4;
          }
          else {
            lVar5 = 1;
            *piVar11 = ((vec<3,int> *)(piVar13 + -2))->values[0];
            if (uVar9 != 1) goto LAB_14c5b0f9d;
          }
          local_88[lVar10 + lVar5] = *piVar13;
          if (lVar5 == 1) {
            piVar11 = piVar11 + 3;
            lVar10 = lVar10 + 3;
          }
        }
LAB_14c5b0fe4:
        uVar14 = uVar14 + 1;
        piVar13 = piVar13 + 3;
      } while (uVar14 < 3);
      iVar7 = 0;
      local_60.values[2].values[2] = 0;
      uVar14 = 0;
      iVar8 = 1;
      local_60.values[0].values[0] = 0;
      local_60.values[0].values[1] = 0;
      local_60.values[0].values[2] = 0;
      local_60.values[1].values[0] = 0;
      local_60.values[1].values[1] = 0;
      local_60.values[1].values[2] = 0;
      local_60.values[2].values[0] = 0;
      local_60.values[2].values[1] = 0;
      do {
        uVar12 = 0;
        piVar11 = local_88 + 1;
        pvVar6 = local_60.values;
        pvVar4 = local_60.values;
        do {
          if (uVar12 != 0) {
            if (uVar14 != 0) {
              pvVar4 = pvVar4 + 1;
              ((vec<3,int> *)pvVar6->values)->values[0] = piVar11[-1];
              pvVar6 = pvVar6 + 1;
              if (uVar14 == 1) goto LAB_14c5b1063;
            }
            pvVar6 = pvVar6 + 1;
            ((vec<3,int> *)pvVar4->values)->values[0] = *piVar11;
            pvVar4 = pvVar4 + 1;
          }
LAB_14c5b1063:
          uVar12 = uVar12 + 1;
          piVar11 = piVar11 + 3;
        } while (uVar12 < 2);
        iVar2 = determinant<3,int>(&local_60,1);
        piVar11 = local_88 + uVar14;
        uVar14 = uVar14 + 1;
        iVar2 = iVar2 * *piVar11 * iVar8;
        iVar8 = -iVar8;
        iVar7 = iVar7 + iVar2;
      } while (uVar14 < 2);
      iVar8 = -iVar7;
      if (((int)uVar9 + (int)uVar15 & 1U) == 0) {
        iVar8 = iVar7;
      }
      uVar9 = uVar9 + 1;
      *piVar3 = iVar8;
      piVar3 = piVar3 + 3;
    } while (uVar9 < 3);
    uVar15 = uVar15 + 1;
    piVar3 = local_c8 + 1;
    if (2 < uVar15) {
      *(undefined8 *)local_c0->values[0].values = local_b8;
      *(undefined8 *)(local_c0->values[0].values + 2) = uStack_b0;
      *(undefined8 *)(local_c0->values[1].values + 1) = local_a8;
      *(undefined8 *)local_c0->values[2].values = uStack_a0;
      local_c0->values[2].values[2] = local_98;
      return local_c0;
    }
  } while( true );
}

// adjoint<4,float> @ 14c5b1130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<4,4,float> * __cdecl
tdm::impl::adjoint<4,float>(mat<4,4,float> *__return_storage_ptr__,mat<4,4,float> *param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1c8 [40];
  mat<4,4,float> *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158 [16];
  mat<4,4,float> local_118;
  ulonglong local_d8;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pfVar18 = (float *)&local_198;
  local_198 = 0;
  uStack_190 = 0;
  uVar12 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158[0] = 0.0;
  local_158[1] = 0.0;
  local_158[2] = 0.0;
  local_158[3] = 0.0;
  local_158[4] = 0.0;
  local_158[5] = 0.0;
  local_158[6] = 0.0;
  local_158[7] = 0.0;
  local_158[8] = 0.0;
  local_158[9] = 0.0;
  local_158[10] = 0.0;
  local_158[0xb] = 0.0;
  local_158[0xc] = 0.0;
  local_158[0xd] = 0.0;
  local_158[0xe] = 0.0;
  local_158[0xf] = 0.0;
  local_1a0 = __return_storage_ptr__;
  do {
    uVar13 = 0;
    pfVar19 = pfVar18;
    do {
      uVar17 = 0;
      pfVar15 = local_158;
      lVar14 = 0;
      pfVar16 = param_1->values[0].values + 2;
      do {
        lVar11 = 0;
        if (uVar17 != uVar12) {
          if (uVar13 == 0) {
LAB_14c5b122f:
            local_158[lVar11 + lVar14] = pfVar16[-1];
            lVar1 = lVar11 + 1;
            if (lVar1 == 3) {
              pfVar15 = pfVar15 + 4;
              lVar14 = lVar14 + 4;
            }
            lVar11 = 0;
            if (lVar1 != 3) {
              lVar11 = lVar1;
            }
            if (uVar13 != 2) goto LAB_14c5b125d;
          }
          else {
            lVar11 = 1;
            *pfVar15 = ((vec<4,float> *)(pfVar16 + -2))->values[0];
            if (uVar13 != 1) goto LAB_14c5b122f;
LAB_14c5b125d:
            local_158[lVar11 + lVar14] = *pfVar16;
            lVar1 = lVar11 + 1;
            if (lVar1 == 3) {
              pfVar15 = pfVar15 + 4;
              lVar14 = lVar14 + 4;
            }
            lVar11 = 0;
            if (lVar1 != 3) {
              lVar11 = lVar1;
            }
            if (uVar13 == 3) goto LAB_14c5b12a4;
          }
          local_158[lVar11 + lVar14] = pfVar16[1];
          if (lVar11 == 2) {
            pfVar15 = pfVar15 + 4;
            lVar14 = lVar14 + 4;
          }
        }
LAB_14c5b12a4:
        uVar17 = uVar17 + 1;
        pfVar16 = pfVar16 + 4;
      } while (uVar17 < 4);
      fVar8 = local_158[10];
      fVar7 = local_158[9];
      fVar6 = local_158[8];
      fVar5 = local_158[6];
      iVar9 = -1;
      if (((char)uVar12 + (char)uVar13 & 1U) == 0) {
        iVar9 = 1;
      }
      fVar4 = local_158[5];
      fVar22 = 0.0;
      fVar3 = local_158[4];
      uVar17 = 0;
      local_118.values[0].values[0] = 0.0;
      local_118.values[0].values[1] = 0.0;
      local_118.values[0].values[2] = 0.0;
      local_118.values[0].values[3] = 0.0;
      local_118.values[1].values[0] = 0.0;
      local_118.values[1].values[1] = 0.0;
      local_118.values[1].values[2] = 0.0;
      local_118.values[1].values[3] = 0.0;
      local_118.values[2].values[0] = 0.0;
      local_118.values[2].values[1] = 0.0;
      local_118.values[2].values[2] = 0.0;
      local_118.values[2].values[3] = 0.0;
      local_118.values[3].values[0] = 0.0;
      local_118.values[3].values[1] = 0.0;
      local_118.values[3].values[2] = 0.0;
      local_118.values[3].values[3] = 0.0;
      fVar21 = __real_3f800000;
      do {
        uVar10 = 0;
        lVar14 = 0;
        if (uVar17 == 0) {
LAB_14c5b1328:
          lVar11 = lVar14 + 1;
          local_118.values[0].values[lVar14] = fVar4;
          uVar10 = (ulonglong)(lVar11 == 2);
          lVar14 = 0;
          if (lVar11 != 2) {
            lVar14 = lVar11;
          }
          if (uVar17 != 2) goto LAB_14c5b134a;
        }
        else {
          lVar14 = 1;
          local_118.values[0].values[0] = fVar3;
          if (uVar17 != 1) goto LAB_14c5b1328;
LAB_14c5b134a:
          local_118.values[uVar10].values[lVar14] = fVar5;
          if (lVar14 == 1) {
            uVar10 = uVar10 + 1;
          }
        }
        lVar14 = 0;
        if (uVar17 == 0) {
LAB_14c5b1379:
          local_118.values[uVar10].values[lVar14] = fVar7;
          lVar11 = lVar14 + 1;
          if (lVar11 == 2) {
            uVar10 = uVar10 + 1;
          }
          lVar14 = 0;
          if (lVar11 != 2) {
            lVar14 = lVar11;
          }
          if (uVar17 != 2) goto LAB_14c5b13a1;
        }
        else {
          lVar14 = 1;
          local_118.values[uVar10].values[0] = fVar6;
          if (uVar17 != 1) goto LAB_14c5b1379;
LAB_14c5b13a1:
          local_118.values[uVar10].values[lVar14] = fVar8;
        }
        fVar20 = determinant<4,float>(&local_118,2);
        pfVar15 = local_158 + uVar17;
        uVar17 = uVar17 + 1;
        fVar22 = fVar22 + fVar20 * fVar21 * *pfVar15;
        fVar21 = (float)((uint)fVar21 ^ uVar2);
      } while (uVar17 < 3);
      uVar13 = uVar13 + 1;
      *pfVar19 = fVar22 * (float)iVar9;
      pfVar19 = pfVar19 + 4;
    } while (uVar13 < 4);
    uVar12 = uVar12 + 1;
    pfVar18 = pfVar18 + 1;
    if (3 < uVar12) {
      *(undefined8 *)local_1a0->values[0].values = local_198;
      *(undefined8 *)(local_1a0->values[0].values + 2) = uStack_190;
      *(undefined8 *)local_1a0->values[1].values = local_188;
      *(undefined8 *)(local_1a0->values[1].values + 2) = uStack_180;
      *(undefined8 *)local_1a0->values[2].values = local_178;
      *(undefined8 *)(local_1a0->values[2].values + 2) = uStack_170;
      *(undefined8 *)local_1a0->values[3].values = local_168;
      *(undefined8 *)(local_1a0->values[3].values + 2) = uStack_160;
      return local_1a0;
    }
  } while( true );
}

// adjoint<7,float> @ 14c5b14b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<7,7,float> * __cdecl
tdm::impl::adjoint<7,float>(mat<7,7,float> *__return_storage_ptr__,mat<7,7,float> *param_1)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  vec<7,float> *pvVar11;
  float *pfVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_328 [48];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float local_228 [52];
  mat<7,7,float> local_158;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_328;
  memset(&local_2f8,0,0xc4);
  memset(local_228,0,0xc4);
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar2 = __real_3f800000;
  pfVar15 = (float *)&local_2f8;
  uVar7 = 0;
  do {
    uVar8 = 0;
    pfVar6 = pfVar15;
    do {
      uVar13 = 0;
      pfVar10 = local_228;
      lVar9 = 0;
      pfVar12 = param_1->values[0].values + 2;
      do {
        lVar5 = 0;
        if (uVar13 != uVar7) {
          if (uVar8 == 0) {
LAB_14c5b1591:
            lVar1 = lVar9 + lVar5;
            lVar5 = lVar5 + 1;
            local_228[lVar1] = pfVar12[-1];
            if (uVar8 != 2) goto LAB_14c5b15a9;
LAB_14c5b15d9:
            local_228[lVar9 + lVar5] = pfVar12[1];
            lVar1 = lVar5 + 1;
            if (lVar1 == 6) {
              pfVar10 = pfVar10 + 7;
              lVar9 = lVar9 + 7;
            }
            lVar5 = 0;
            if (lVar1 != 6) {
              lVar5 = lVar1;
            }
            if (uVar8 != 4) goto LAB_14c5b160a;
LAB_14c5b163b:
            local_228[lVar9 + lVar5] = pfVar12[3];
            lVar1 = lVar5 + 1;
            if (lVar1 == 6) {
              pfVar10 = pfVar10 + 7;
              lVar9 = lVar9 + 7;
            }
            lVar5 = 0;
            if (lVar1 != 6) {
              lVar5 = lVar1;
            }
            if (uVar8 == 6) goto LAB_14c5b1689;
          }
          else {
            lVar5 = 1;
            *pfVar10 = ((vec<7,float> *)(pfVar12 + -2))->values[0];
            if (uVar8 != 1) goto LAB_14c5b1591;
LAB_14c5b15a9:
            local_228[lVar9 + lVar5] = *pfVar12;
            lVar1 = lVar5 + 1;
            if (lVar1 == 6) {
              pfVar10 = pfVar10 + 7;
              lVar9 = lVar9 + 7;
            }
            lVar5 = 0;
            if (lVar1 != 6) {
              lVar5 = lVar1;
            }
            if (uVar8 != 3) goto LAB_14c5b15d9;
LAB_14c5b160a:
            local_228[lVar9 + lVar5] = pfVar12[2];
            lVar1 = lVar5 + 1;
            if (lVar1 == 6) {
              pfVar10 = pfVar10 + 7;
              lVar9 = lVar9 + 7;
            }
            lVar5 = 0;
            if (lVar1 != 6) {
              lVar5 = lVar1;
            }
            if (uVar8 != 5) goto LAB_14c5b163b;
          }
          local_228[lVar9 + lVar5] = pfVar12[4];
          if (lVar5 == 5) {
            pfVar10 = pfVar10 + 7;
            lVar9 = lVar9 + 7;
          }
        }
LAB_14c5b1689:
        uVar13 = uVar13 + 1;
        pfVar12 = pfVar12 + 7;
      } while (uVar13 < 7);
      fVar18 = 0.0;
      iVar4 = -1;
      if (((char)uVar7 + (char)uVar8 & 1U) == 0) {
        iVar4 = 1;
      }
      memset(&local_158,0,0xc4);
      uVar13 = 0;
      fVar17 = fVar2;
      do {
        uVar14 = 0;
        pfVar12 = local_228 + 1;
        lVar9 = 0;
        pvVar11 = local_158.values;
        do {
          lVar5 = 0;
          if (uVar14 != 0) {
            if (uVar13 == 0) {
LAB_14c5b170f:
              lVar1 = lVar9 + lVar5;
              lVar5 = lVar5 + 1;
              local_158.values[0].values[lVar1] = *pfVar12;
              if (uVar13 != 2) goto LAB_14c5b1726;
LAB_14c5b1757:
              local_158.values[0].values[lVar9 + lVar5] = pfVar12[2];
              lVar1 = lVar5 + 1;
              if (lVar1 == 5) {
                pvVar11 = pvVar11 + 1;
                lVar9 = lVar9 + 7;
              }
              lVar5 = 0;
              if (lVar1 != 5) {
                lVar5 = lVar1;
              }
              if (uVar13 != 4) goto LAB_14c5b1788;
            }
            else {
              lVar5 = 1;
              pvVar11->values[0] = pfVar12[-1];
              if (uVar13 != 1) goto LAB_14c5b170f;
LAB_14c5b1726:
              local_158.values[0].values[lVar9 + lVar5] = pfVar12[1];
              lVar1 = lVar5 + 1;
              if (lVar1 == 5) {
                pvVar11 = pvVar11 + 1;
                lVar9 = lVar9 + 7;
              }
              lVar5 = 0;
              if (lVar1 != 5) {
                lVar5 = lVar1;
              }
              if (uVar13 != 3) goto LAB_14c5b1757;
LAB_14c5b1788:
              local_158.values[0].values[lVar9 + lVar5] = pfVar12[3];
              lVar1 = lVar5 + 1;
              if (lVar1 == 5) {
                pvVar11 = pvVar11 + 1;
                lVar9 = lVar9 + 7;
              }
              lVar5 = 0;
              if (lVar1 != 5) {
                lVar5 = lVar1;
              }
              if (uVar13 == 5) goto LAB_14c5b17d6;
            }
            local_158.values[0].values[lVar9 + lVar5] = pfVar12[4];
            if (lVar5 == 4) {
              pvVar11 = pvVar11 + 1;
              lVar9 = lVar9 + 7;
            }
          }
LAB_14c5b17d6:
          uVar14 = uVar14 + 1;
          pfVar12 = pfVar12 + 7;
        } while (uVar14 < 6);
        fVar16 = determinant<7,float>(&local_158,5);
        pfVar12 = local_228 + uVar13;
        uVar13 = uVar13 + 1;
        fVar18 = fVar18 + fVar16 * fVar17 * *pfVar12;
        fVar17 = (float)((uint)fVar17 ^ uVar3);
      } while (uVar13 < 6);
      uVar8 = uVar8 + 1;
      *pfVar6 = fVar18 * (float)iVar4;
      pfVar6 = pfVar6 + 7;
    } while (uVar8 < 7);
    uVar7 = uVar7 + 1;
    pfVar15 = pfVar15 + 1;
    if (6 < uVar7) {
      *(undefined8 *)__return_storage_ptr__->values[0].values = local_2f8;
      *(undefined8 *)(__return_storage_ptr__->values[0].values + 2) = uStack_2f0;
      *(undefined8 *)(__return_storage_ptr__->values[0].values + 4) = local_2e8;
      *(undefined8 *)(__return_storage_ptr__->values[0].values + 6) = uStack_2e0;
      *(undefined8 *)(__return_storage_ptr__->values[1].values + 1) = local_2d8;
      *(undefined8 *)(__return_storage_ptr__->values[1].values + 3) = uStack_2d0;
      *(undefined8 *)(__return_storage_ptr__->values[1].values + 5) = local_2c8;
      *(undefined8 *)__return_storage_ptr__->values[2].values = uStack_2c0;
      *(undefined8 *)(__return_storage_ptr__->values[2].values + 2) = local_2b8;
      *(undefined8 *)(__return_storage_ptr__->values[2].values + 4) = uStack_2b0;
      *(undefined8 *)(__return_storage_ptr__->values[2].values + 6) = local_2a8;
      *(undefined8 *)(__return_storage_ptr__->values[3].values + 1) = uStack_2a0;
      *(undefined8 *)(__return_storage_ptr__->values[3].values + 3) = local_298;
      *(undefined8 *)(__return_storage_ptr__->values[3].values + 5) = uStack_290;
      *(undefined8 *)__return_storage_ptr__->values[4].values = local_288;
      *(undefined8 *)(__return_storage_ptr__->values[4].values + 2) = uStack_280;
      *(undefined8 *)(__return_storage_ptr__->values[4].values + 4) = local_278;
      *(undefined8 *)(__return_storage_ptr__->values[4].values + 6) = uStack_270;
      *(undefined8 *)(__return_storage_ptr__->values[5].values + 1) = local_268;
      *(undefined8 *)(__return_storage_ptr__->values[5].values + 3) = uStack_260;
      *(undefined8 *)(__return_storage_ptr__->values[5].values + 5) = local_258;
      *(undefined8 *)__return_storage_ptr__->values[6].values = uStack_250;
      *(undefined8 *)(__return_storage_ptr__->values[6].values + 2) = local_248;
      *(undefined8 *)(__return_storage_ptr__->values[6].values + 4) = uStack_240;
      __return_storage_ptr__->values[6].values[6] = local_238;
      return __return_storage_ptr__;
    }
  } while( true );
}

// decompose<4,float> @ 14c5b1930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl tdm::lu::decompose<4,float>(mat<4,4,float> *param_1,vec<4,unsigned___int64> *param_2)

{
  vec<4,float> *pvVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  ulonglong uVar8;
  float *pfVar9;
  vec<4,float> *pvVar10;
  vec<4,float> *pvVar11;
  vec<4,float> *pvVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  vec<4,float> *pvVar18;
  ulonglong uVar19;
  vec<4,float> *pvVar20;
  vec<4,float> *pvVar21;
  vec<4,float> *pvVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_68 [4];
  ulonglong local_58;
  
  fVar7 = __real_1e3ce508;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_3f800000;
  pfVar13 = local_68;
  local_58 = __security_cookie.value ^ (ulonglong)local_68;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_68[2] = 0.0;
  local_68[3] = 0.0;
  uVar8 = 0;
  do {
    fVar23 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar8) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    fVar25 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar8 + 4) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar24 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar8 + 0xc) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar25 <= fVar23) {
      fVar25 = fVar23;
    }
    fVar23 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar8 + 8) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar25 <= fVar23) {
      fVar25 = fVar23;
    }
    if (fVar25 <= fVar24) {
      fVar25 = fVar24;
    }
    if (fVar25 == 0.0) {
      return false;
    }
    uVar8 = uVar8 + 0x10;
    *pfVar13 = __real_3f800000 / fVar25;
    pfVar13 = pfVar13 + 1;
  } while (uVar8 < 0x40);
  uVar8 = 0;
  pvVar18 = param_1->values;
  pvVar21 = param_1->values;
  pvVar22 = param_1->values;
LAB_14c5b1a10:
  do {
    uVar19 = 0;
    if (uVar8 != 0) {
      pfVar13 = param_1->values[0].values + 2;
      pvVar20 = pvVar18;
      do {
        fVar23 = ((vec<4,float> *)pvVar20->values)->values[0];
        uVar16 = 0;
        if (3 < uVar19) {
          pvVar11 = pvVar18 + 2;
          lVar14 = (uVar19 - 4 >> 2) + 1;
          uVar16 = lVar14 * 4;
          pfVar9 = pfVar13;
          do {
            pvVar12 = pvVar11 + -2;
            pvVar10 = (vec<4,float> *)(pfVar9 + -2);
            pvVar1 = pvVar11 + -1;
            pfVar15 = pfVar9 + -1;
            fVar25 = *pfVar9;
            pfVar4 = pvVar11->values;
            pfVar2 = pvVar11[1].values;
            pfVar3 = pfVar9 + 1;
            pvVar11 = pvVar11 + 4;
            pfVar9 = pfVar9 + 4;
            fVar23 = (((fVar23 - pvVar12->values[0] * pvVar10->values[0]) -
                      pvVar1->values[0] * *pfVar15) - fVar25 * *pfVar4) - *pfVar2 * *pfVar3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (uVar16 < uVar19) {
          pfVar9 = param_1->values[uVar19].values + uVar16;
          pfVar15 = param_1->values[uVar16].values + uVar8;
          lVar14 = uVar19 - uVar16;
          do {
            fVar25 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            fVar24 = *pfVar15;
            pfVar15 = pfVar15 + 4;
            fVar23 = fVar23 - fVar25 * fVar24;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        ((vec<4,float> *)pvVar20->values)->values[0] = fVar23;
        uVar19 = uVar19 + 1;
        pvVar20 = pvVar20 + 1;
        pfVar13 = pfVar13 + 4;
      } while (uVar19 < uVar8);
    }
    uVar17 = 0;
    fVar23 = 0.0;
    uVar19 = uVar8;
    pvVar20 = pvVar21;
    pvVar11 = pvVar22;
    do {
      fVar25 = ((vec<4,float> *)pvVar20->values)->values[0];
      pvVar12 = pvVar18;
      pvVar10 = pvVar11;
      for (uVar16 = uVar8; uVar16 != 0; uVar16 = uVar16 - 1) {
        pfVar13 = pvVar10->values;
        pvVar10 = (vec<4,float> *)(pvVar10->values + 1);
        pfVar9 = pvVar12->values;
        pvVar12 = pvVar12 + 1;
        fVar25 = fVar25 - *pfVar13 * *pfVar9;
      }
      ((vec<4,float> *)pvVar20->values)->values[0] = fVar25;
      fVar25 = (float)((uint)fVar25 & uVar6) * local_68[uVar19];
      if (fVar23 <= fVar25) {
        uVar17 = uVar19;
        fVar23 = fVar25;
      }
      uVar19 = uVar19 + 1;
      pvVar11 = pvVar11 + 1;
      pvVar20 = pvVar20 + 1;
    } while (uVar19 < 4);
    if (uVar8 != uVar17) {
      fVar23 = param_1->values[uVar17].values[0];
      param_1->values[uVar17].values[0] = pvVar22->values[0];
      fVar25 = pvVar22->values[1];
      pvVar22->values[0] = fVar23;
      fVar23 = param_1->values[uVar17].values[1];
      param_1->values[uVar17].values[1] = fVar25;
      pvVar22->values[1] = fVar23;
      fVar23 = param_1->values[uVar17].values[2];
      param_1->values[uVar17].values[2] = pvVar22->values[2];
      pvVar22->values[2] = fVar23;
      fVar23 = param_1->values[uVar17].values[3];
      param_1->values[uVar17].values[3] = pvVar22->values[3];
      local_68[uVar17] = *(float *)((longlong)pvVar18 + ((longlong)local_68 - (longlong)param_1));
      pvVar22->values[3] = fVar23;
    }
    param_2->values[uVar8] = uVar17;
    fVar23 = pvVar21->values[0];
    if (pvVar21->values[0] == 0.0) {
      pvVar21->values[0] = 1e-20;
      fVar23 = fVar7;
    }
    if (uVar8 != 3) {
      uVar19 = uVar8 + 1;
      fVar23 = fVar5 / fVar23;
      if (uVar19 < 4) {
        if (3 < 4 - uVar19) {
          lVar14 = (-uVar19 >> 2) + 1;
          uVar19 = uVar19 + lVar14 * 4;
          pfVar13 = (float *)((longlong)param_1 * -3 + 0x30 + (longlong)pvVar18 * 4 + uVar8 * 4);
          do {
            pfVar13[-8] = fVar23 * pfVar13[-8];
            pfVar13[-4] = fVar23 * pfVar13[-4];
            *pfVar13 = fVar23 * *pfVar13;
            pfVar13[4] = fVar23 * pfVar13[4];
            lVar14 = lVar14 + -1;
            pfVar13 = pfVar13 + 0x10;
          } while (lVar14 != 0);
          if (3 < uVar19) goto LAB_14c5b1c9f;
        }
        lVar14 = 4 - uVar19;
        pfVar13 = param_1->values[uVar19].values + uVar8;
        do {
          *pfVar13 = fVar23 * *pfVar13;
          lVar14 = lVar14 + -1;
          pfVar13 = pfVar13 + 4;
        } while (lVar14 != 0);
        uVar8 = uVar8 + 1;
        pvVar22 = pvVar22 + 1;
        pvVar18 = (vec<4,float> *)(pvVar18->values + 1);
        pvVar21 = (vec<4,float> *)(pvVar21[1].values + 1);
        goto LAB_14c5b1a10;
      }
    }
LAB_14c5b1c9f:
    uVar8 = uVar8 + 1;
    pvVar22 = pvVar22 + 1;
    pvVar18 = (vec<4,float> *)(pvVar18->values + 1);
    pvVar21 = (vec<4,float> *)(pvVar21[1].values + 1);
    if (3 < uVar8) {
      return true;
    }
  } while( true );
}

// decompose<7,float> @ 14c5b1d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl tdm::lu::decompose<7,float>(mat<7,7,float> *param_1,vec<7,unsigned___int64> *param_2)

{
  mat<7,7,float> *pmVar1;
  vec<7,float> *pvVar2;
  vec<7,float> *pvVar3;
  vec<7,float> *pvVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  ulonglong uVar12;
  float *pfVar13;
  vec<7,float> *pvVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  ulong64 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  vec<7,float> *pvVar23;
  ulonglong uVar24;
  longlong lVar25;
  vec<7,float> *pvVar26;
  vec<7,float> *pvVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float afStack_c0 [10];
  undefined1 local_98 [16];
  float local_88 [8];
  ulonglong local_68;
  
  fVar11 = __real_1e3ce508;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_3f800000;
  local_68 = __security_cookie.value ^ (ulonglong)local_98;
  uVar12 = 0;
  local_88[4] = 0.0;
  local_88[5] = 0.0;
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_88[2] = 0.0;
  local_88[3] = 0.0;
  local_88[6] = 0.0;
  pfVar15 = local_88;
  do {
    fVar28 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    fVar30 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12 + 4) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar29 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12 + 0xc) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar30 <= fVar28) {
      fVar30 = fVar28;
    }
    fVar28 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12 + 8) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar30 <= fVar28) {
      fVar30 = fVar28;
    }
    fVar28 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12 + 0x10) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar30 <= fVar29) {
      fVar30 = fVar29;
    }
    fVar29 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12 + 0x14) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar30 <= fVar28) {
      fVar30 = fVar28;
    }
    fVar28 = (float)(*(uint *)((longlong)param_1->values[0].values + uVar12 + 0x18) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar30 <= fVar29) {
      fVar30 = fVar29;
    }
    if (fVar30 <= fVar28) {
      fVar30 = fVar28;
    }
    if (fVar30 == 0.0) {
      return false;
    }
    uVar12 = uVar12 + 0x1c;
    *pfVar15 = __real_3f800000 / fVar30;
    pfVar15 = pfVar15 + 1;
  } while (uVar12 < 0xc4);
  uVar12 = 0;
  uVar24 = 0;
  lVar25 = 0;
  pvVar26 = param_1->values + 2;
  pvVar27 = param_1->values;
  do {
    uVar20 = 0;
    if (uVar12 != 0) {
      lVar19 = 0;
      pfVar15 = param_1->values[0].values + 2;
      pvVar23 = pvVar26 + -2;
      do {
        fVar28 = ((vec<7,float> *)pvVar23->values)->values[0];
        uVar22 = 0;
        if (3 < uVar20) {
          lVar16 = (uVar20 - 4 >> 2) + 1;
          uVar22 = lVar16 * 4;
          pfVar13 = pfVar15;
          pvVar14 = pvVar26;
          do {
            pmVar1 = (mat<7,7,float> *)(pvVar14 + -2);
            pvVar2 = (vec<7,float> *)(pfVar13 + -2);
            pvVar3 = pvVar14 + -1;
            pfVar17 = pfVar13 + -1;
            pfVar7 = pvVar14->values;
            fVar30 = *pfVar13;
            pvVar4 = pvVar14 + 1;
            pfVar5 = pfVar13 + 1;
            pvVar14 = pvVar14 + 4;
            pfVar13 = pfVar13 + 4;
            fVar28 = (((fVar28 - pmVar1->values[0].values[0] * pvVar2->values[0]) -
                      pvVar3->values[0] * *pfVar17) - *pfVar7 * fVar30) -
                     pvVar4->values[0] * *pfVar5;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (uVar22 < uVar20) {
          pfVar13 = param_1->values[0].values + lVar19 + uVar22;
          pfVar17 = param_1->values[uVar22].values + uVar12;
          lVar16 = uVar20 - uVar22;
          do {
            fVar30 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            fVar29 = *pfVar17;
            pfVar17 = pfVar17 + 7;
            fVar28 = fVar28 - fVar30 * fVar29;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        ((vec<7,float> *)pvVar23->values)->values[0] = fVar28;
        uVar20 = uVar20 + 1;
        pvVar23 = pvVar23 + 1;
        pfVar15 = pfVar15 + 7;
        lVar19 = lVar19 + 7;
      } while (uVar20 < uVar12);
    }
    uVar18 = 0;
    pfVar15 = (float *)((longlong)param_1->values[0].values + lVar25 + 8);
    fVar28 = 0.0;
    uVar20 = uVar24;
    uVar22 = uVar12;
    pvVar23 = pvVar27;
    do {
      fVar30 = ((vec<7,float> *)pvVar23->values)->values[0];
      uVar21 = 0;
      if (3 < uVar12) {
        lVar19 = (uVar12 - 4 >> 2) + 1;
        uVar21 = lVar19 * 4;
        pfVar13 = pfVar15;
        pvVar14 = pvVar26;
        do {
          pmVar1 = (mat<7,7,float> *)(pvVar14 + -2);
          pfVar17 = pfVar13 + -2;
          pvVar2 = pvVar14 + -1;
          pfVar5 = pfVar13 + -1;
          pfVar8 = pvVar14->values;
          fVar29 = *pfVar13;
          pvVar3 = pvVar14 + 1;
          pfVar7 = pfVar13 + 1;
          pvVar14 = pvVar14 + 4;
          pfVar13 = pfVar13 + 4;
          fVar30 = (((fVar30 - pmVar1->values[0].values[0] * *pfVar17) - pvVar2->values[0] * *pfVar5
                    ) - *pfVar8 * fVar29) - pvVar3->values[0] * *pfVar7;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (uVar21 < uVar12) {
        pfVar13 = param_1->values[0].values + uVar20 + uVar21;
        pfVar17 = param_1->values[uVar21].values + uVar12;
        lVar19 = uVar12 - uVar21;
        do {
          fVar29 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          fVar6 = *pfVar17;
          pfVar17 = pfVar17 + 7;
          fVar30 = fVar30 - fVar29 * fVar6;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      ((vec<7,float> *)pvVar23->values)->values[0] = fVar30;
      fVar30 = (float)((uint)fVar30 & uVar10) * local_88[uVar22];
      if (fVar28 <= fVar30) {
        uVar18 = uVar22;
        fVar28 = fVar30;
      }
      uVar22 = uVar22 + 1;
      pfVar15 = pfVar15 + 7;
      uVar20 = uVar20 + 7;
      pvVar23 = pvVar23 + 1;
    } while (uVar22 < 7);
    if (uVar12 != uVar18) {
      fVar28 = param_1->values[uVar18].values[0];
      param_1->values[uVar18].values[0] = *(float *)((longlong)param_1->values[0].values + lVar25);
      fVar30 = *(float *)((longlong)param_1->values[0].values + lVar25 + 4);
      *(float *)((longlong)param_1->values[0].values + lVar25) = fVar28;
      fVar28 = param_1->values[uVar18].values[1];
      param_1->values[uVar18].values[1] = fVar30;
      fVar30 = *(float *)((longlong)param_1->values[0].values + lVar25 + 8);
      *(float *)((longlong)param_1->values[0].values + lVar25 + 4) = fVar28;
      fVar28 = param_1->values[uVar18].values[2];
      param_1->values[uVar18].values[2] = fVar30;
      fVar30 = *(float *)((longlong)param_1->values[0].values + lVar25 + 0xc);
      *(float *)((longlong)param_1->values[0].values + lVar25 + 8) = fVar28;
      fVar28 = param_1->values[uVar18].values[3];
      param_1->values[uVar18].values[3] = fVar30;
      fVar30 = *(float *)((longlong)param_1->values[0].values + lVar25 + 0x10);
      *(float *)((longlong)param_1->values[0].values + lVar25 + 0xc) = fVar28;
      fVar28 = param_1->values[uVar18].values[4];
      param_1->values[uVar18].values[4] = fVar30;
      fVar30 = *(float *)((longlong)param_1->values[0].values + lVar25 + 0x14);
      *(float *)((longlong)param_1->values[0].values + lVar25 + 0x10) = fVar28;
      fVar28 = param_1->values[uVar18].values[5];
      param_1->values[uVar18].values[5] = fVar30;
      fVar30 = *(float *)((longlong)param_1->values[0].values + lVar25 + 0x18);
      *(float *)((longlong)param_1->values[0].values + lVar25 + 0x14) = fVar28;
      fVar28 = param_1->values[uVar18].values[6];
      param_1->values[uVar18].values[6] = fVar30;
      *(float *)((longlong)param_1->values[0].values + lVar25 + 0x18) = fVar28;
      local_88[uVar18] = *(float *)(((longlong)afStack_c0 - (longlong)param_1) + (longlong)pvVar26);
    }
    param_2->values[uVar12] = uVar18;
    fVar28 = pvVar27->values[0];
    if (pvVar27->values[0] == 0.0) {
      pvVar27->values[0] = 1e-20;
      fVar28 = fVar11;
    }
    if (uVar12 != 6) {
      uVar20 = uVar12 + 1;
      fVar28 = fVar9 / fVar28;
      if (uVar20 < 7) {
        if (3 < 7 - uVar20) {
          lVar19 = (3 - uVar20 >> 2) + 1;
          uVar20 = uVar20 + lVar19 * 4;
          pfVar15 = param_1->values[3].values + uVar12 + uVar24;
          do {
            pfVar15[-0xe] = fVar28 * pfVar15[-0xe];
            pfVar15[-7] = fVar28 * pfVar15[-7];
            *pfVar15 = fVar28 * *pfVar15;
            pfVar15[7] = fVar28 * pfVar15[7];
            lVar19 = lVar19 + -1;
            pfVar15 = pfVar15 + 0x1c;
          } while (lVar19 != 0);
          if (6 < uVar20) goto LAB_14c5b219a;
        }
        lVar19 = 7 - uVar20;
        pfVar15 = param_1->values[uVar20].values + uVar12;
        do {
          *pfVar15 = fVar28 * *pfVar15;
          lVar19 = lVar19 + -1;
          pfVar15 = pfVar15 + 7;
        } while (lVar19 != 0);
      }
    }
LAB_14c5b219a:
    uVar12 = uVar12 + 1;
    uVar24 = uVar24 + 7;
    pvVar26 = (vec<7,float> *)(pvVar26->values + 1);
    lVar25 = lVar25 + 0x1c;
    pvVar27 = (vec<7,float> *)(pvVar27[1].values + 1);
    if (0x30 < uVar24) {
      return true;
    }
  } while( true );
}

// determinant<1,float> @ 14c5b2210

float __cdecl tdm::impl::determinant<1,float>(mat<1,1,float> *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  mat<1,1,float> *pmVar9;
  ulonglong uVar10;
  mat<1,1,float> *pmVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  mat<1,1,float> local_res10 [6];
  
  uVar3 = __xmm_80000000800000008000000080000000;
  if (param_2 == 1) {
    return param_1->values[0].values[0];
  }
  uVar5 = 0;
  fVar15 = 0.0;
  local_res10[0].values[0].values[0] = (vec<1,float>  [1])(vec<1,float>)0x0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
    fVar14 = __real_3f800000;
    do {
      lVar7 = 0;
      pmVar11 = param_1 + 2;
      uVar6 = 0;
      do {
        uVar4 = 0;
        uVar8 = 0;
        if (param_2 < 4) {
LAB_14c5b237e:
          pmVar9 = param_1 + uVar8 + uVar6;
          do {
            if ((uVar6 != 0) && (uVar8 != uVar5)) {
              lVar2 = uVar4 + lVar7;
              uVar4 = uVar4 + 1;
              local_res10[lVar2].values[0].values[0] = pmVar9->values[0].values[0];
              if (uVar4 == uVar1) {
                uVar4 = 0;
                lVar7 = lVar7 + 1;
              }
            }
            uVar8 = uVar8 + 1;
            pmVar9 = pmVar9 + 1;
          } while (uVar8 < param_2);
        }
        else {
          uVar10 = 2;
          pmVar9 = pmVar11;
          do {
            if (uVar6 != 0) {
              if (uVar8 != uVar5) {
                lVar2 = uVar4 + lVar7;
                uVar4 = uVar4 + 1;
                local_res10[lVar2].values[0].values[0] = pmVar9[-2].values[0].values[0];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar7 = lVar7 + 1;
                }
              }
              if (uVar10 - 1 != uVar5) {
                lVar2 = uVar4 + lVar7;
                uVar4 = uVar4 + 1;
                local_res10[lVar2].values[0].values[0] = pmVar9[-1].values[0].values[0];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar7 = lVar7 + 1;
                }
              }
              if (uVar10 != uVar5) {
                lVar2 = uVar4 + lVar7;
                uVar4 = uVar4 + 1;
                local_res10[lVar2].values[0].values[0] = pmVar9->values[0].values[0];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar7 = lVar7 + 1;
                }
              }
              if (uVar10 + 1 != uVar5) {
                lVar2 = uVar4 + lVar7;
                uVar4 = uVar4 + 1;
                local_res10[lVar2].values[0].values[0] = pmVar9[1].values[0].values[0];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar7 = lVar7 + 1;
                }
              }
            }
            uVar8 = uVar8 + 4;
            pmVar9 = pmVar9 + 4;
            uVar10 = uVar10 + 4;
          } while (uVar8 < param_2 - 3);
          if (uVar8 < param_2) goto LAB_14c5b237e;
        }
        uVar6 = uVar6 + 1;
        pmVar11 = pmVar11 + 1;
      } while (uVar6 < param_2);
      fVar13 = fVar14 * param_1[uVar5].values[0].values[0];
      fVar12 = determinant<1,float>(local_res10,uVar1);
      uVar5 = uVar5 + 1;
      fVar14 = (float)((uint)fVar14 ^ uVar3);
      fVar15 = fVar15 + fVar12 * fVar13;
    } while (uVar5 < param_2);
  }
  return fVar15;
}

// determinant<2,int> @ 14c5b2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl tdm::impl::determinant<2,int>(mat<2,2,int> *param_1,ulong64 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  mat<2,2,int> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_2 == 1) {
    iVar9 = param_1->values[0].values[0];
  }
  else {
    uVar4 = 0;
    iVar9 = 0;
    iVar10 = 1;
    local_48.values[0].values[0] = 0;
    local_48.values[0].values[1] = 0;
    local_48.values[1].values[0] = 0;
    local_48.values[1].values[1] = 0;
    if (param_2 != 0) {
      do {
        lVar7 = 0;
        uVar8 = 0;
        do {
          uVar3 = 0;
          uVar5 = 0;
          do {
            uVar6 = uVar5;
            if ((uVar8 != 0) && (uVar3 != uVar4)) {
              uVar6 = uVar5 + 1;
              local_48.values[lVar7].values[uVar5] = param_1->values[uVar8].values[uVar3];
              if (uVar6 == param_2 - 1) {
                uVar6 = 0;
                lVar7 = lVar7 + 1;
              }
            }
            uVar3 = uVar3 + 1;
            uVar5 = uVar6;
          } while (uVar3 < param_2);
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_2);
        iVar2 = param_1->values[0].values[uVar4];
        iVar1 = determinant<2,int>(&local_48,param_2 - 1);
        uVar4 = uVar4 + 1;
        iVar2 = iVar1 * iVar2 * iVar10;
        iVar10 = -iVar10;
        iVar9 = iVar9 + iVar2;
      } while (uVar4 < param_2);
    }
  }
  return iVar9;
}

// determinant<3,int> @ 14c5b2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl tdm::impl::determinant<3,int>(mat<3,3,int> *param_1,ulong64 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  mat<3,3,int> local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_2 == 1) {
    iVar11 = param_1->values[0].values[0];
  }
  else {
    iVar11 = 0;
    uVar6 = 0;
    local_58.values[2].values[2] = 0;
    iVar12 = 1;
    local_58.values[0].values[0] = 0;
    local_58.values[0].values[1] = 0;
    local_58.values[0].values[2] = 0;
    local_58.values[1].values[0] = 0;
    local_58.values[1].values[1] = 0;
    local_58.values[1].values[2] = 0;
    local_58.values[2].values[0] = 0;
    local_58.values[2].values[1] = 0;
    if (param_2 != 0) {
      do {
        lVar9 = 0;
        uVar10 = 0;
        lVar5 = 0;
        do {
          uVar7 = 0;
          lVar8 = lVar9 * 3;
          uVar4 = 0;
          do {
            if ((uVar10 != 0) && (uVar4 != uVar6)) {
              lVar1 = lVar8 + uVar7;
              uVar7 = uVar7 + 1;
              local_58.values[0].values[lVar1] = param_1->values[0].values[lVar5 + uVar4];
              if (uVar7 == param_2 - 1) {
                uVar7 = 0;
                lVar9 = lVar9 + 1;
                lVar8 = lVar8 + 3;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_2);
          uVar10 = uVar10 + 1;
          lVar5 = lVar5 + 3;
        } while (uVar10 < param_2);
        iVar3 = param_1->values[0].values[uVar6];
        iVar2 = determinant<3,int>(&local_58,param_2 - 1);
        uVar6 = uVar6 + 1;
        iVar3 = iVar2 * iVar3 * iVar12;
        iVar12 = -iVar12;
        iVar11 = iVar11 + iVar3;
      } while (uVar6 < param_2);
    }
  }
  return iVar11;
}

// determinant<4,int> @ 14c5b26c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl tdm::impl::determinant<4,int>(mat<4,4,int> *param_1,ulong64 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  mat<4,4,int> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 == 1) {
    iVar9 = param_1->values[0].values[0];
  }
  else {
    uVar4 = 0;
    iVar9 = 0;
    iVar10 = 1;
    local_78.values[0].values[0] = 0;
    local_78.values[0].values[1] = 0;
    local_78.values[0].values[2] = 0;
    local_78.values[0].values[3] = 0;
    local_78.values[1].values[0] = 0;
    local_78.values[1].values[1] = 0;
    local_78.values[1].values[2] = 0;
    local_78.values[1].values[3] = 0;
    local_78.values[2].values[0] = 0;
    local_78.values[2].values[1] = 0;
    local_78.values[2].values[2] = 0;
    local_78.values[2].values[3] = 0;
    local_78.values[3].values[0] = 0;
    local_78.values[3].values[1] = 0;
    local_78.values[3].values[2] = 0;
    local_78.values[3].values[3] = 0;
    if (param_2 != 0) {
      do {
        lVar7 = 0;
        uVar8 = 0;
        do {
          uVar3 = 0;
          uVar5 = 0;
          do {
            uVar6 = uVar5;
            if ((uVar8 != 0) && (uVar3 != uVar4)) {
              uVar6 = uVar5 + 1;
              local_78.values[lVar7].values[uVar5] = param_1->values[uVar8].values[uVar3];
              if (uVar6 == param_2 - 1) {
                uVar6 = 0;
                lVar7 = lVar7 + 1;
              }
            }
            uVar3 = uVar3 + 1;
            uVar5 = uVar6;
          } while (uVar3 < param_2);
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_2);
        iVar2 = param_1->values[0].values[uVar4];
        iVar1 = determinant<4,int>(&local_78,param_2 - 1);
        uVar4 = uVar4 + 1;
        iVar2 = iVar1 * iVar2 * iVar10;
        iVar10 = -iVar10;
        iVar9 = iVar9 + iVar2;
      } while (uVar4 < param_2);
    }
  }
  return iVar9;
}

// determinant<4,float> @ 14c5b2800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl tdm::impl::determinant<4,float>(mat<4,4,float> *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  uint uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [48];
  mat<4,4,float> local_a8;
  ulonglong local_68;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == 1) {
    fVar12 = param_1->values[0].values[0];
  }
  else {
    uVar5 = 0;
    fVar12 = 0.0;
    local_a8.values[0].values[0] = 0.0;
    local_a8.values[0].values[1] = 0.0;
    local_a8.values[0].values[2] = 0.0;
    local_a8.values[0].values[3] = 0.0;
    local_a8.values[1].values[0] = 0.0;
    local_a8.values[1].values[1] = 0.0;
    local_a8.values[1].values[2] = 0.0;
    local_a8.values[1].values[3] = 0.0;
    local_a8.values[2].values[0] = 0.0;
    local_a8.values[2].values[1] = 0.0;
    local_a8.values[2].values[2] = 0.0;
    local_a8.values[2].values[3] = 0.0;
    local_a8.values[3].values[0] = 0.0;
    local_a8.values[3].values[1] = 0.0;
    local_a8.values[3].values[2] = 0.0;
    local_a8.values[3].values[3] = 0.0;
    if (param_2 != 0) {
      uVar1 = param_2 - 1;
      fVar11 = __real_3f800000;
      do {
        lVar6 = 0;
        uVar8 = 0;
        do {
          uVar4 = 0;
          uVar7 = 0;
          if (param_2 < 4) goto LAB_14c5b2981;
          do {
            if (uVar8 != 0) {
              uVar3 = uVar4;
              if (uVar7 != uVar5) {
                uVar3 = uVar4 + 1;
                local_a8.values[lVar6].values[uVar4] = param_1->values[uVar8].values[uVar7];
                if (uVar3 == uVar1) {
                  uVar3 = 0;
                  lVar6 = lVar6 + 1;
                }
              }
              uVar4 = uVar3;
              if (uVar7 + 1 != uVar5) {
                uVar4 = uVar3 + 1;
                local_a8.values[lVar6].values[uVar3] = param_1->values[uVar8].values[uVar7 + 1];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar6 = lVar6 + 1;
                }
              }
              uVar3 = uVar4;
              if (uVar7 + 2 != uVar5) {
                uVar3 = uVar4 + 1;
                local_a8.values[lVar6].values[uVar4] = param_1->values[uVar8].values[uVar7 + 2];
                if (uVar3 == uVar1) {
                  uVar3 = 0;
                  lVar6 = lVar6 + 1;
                }
              }
              uVar4 = uVar3;
              if (uVar7 + 3 != uVar5) {
                uVar4 = uVar3 + 1;
                local_a8.values[lVar6].values[uVar3] = param_1->values[uVar8].values[uVar7 + 3];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar6 = lVar6 + 1;
                }
              }
            }
            uVar7 = uVar7 + 4;
          } while (uVar7 < param_2 - 3);
          for (; uVar7 < param_2; uVar7 = uVar7 + 1) {
LAB_14c5b2981:
            uVar3 = uVar4;
            if ((uVar8 != 0) && (uVar7 != uVar5)) {
              uVar3 = uVar4 + 1;
              local_a8.values[lVar6].values[uVar4] = param_1->values[uVar8].values[uVar7];
              if (uVar3 == uVar1) {
                uVar3 = 0;
                lVar6 = lVar6 + 1;
              }
            }
            uVar4 = uVar3;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_2);
        fVar10 = fVar11 * param_1->values[0].values[uVar5];
        fVar9 = determinant<4,float>(&local_a8,uVar1);
        uVar5 = uVar5 + 1;
        fVar11 = (float)((uint)fVar11 ^ uVar2);
        fVar12 = fVar12 + fVar9 * fVar10;
      } while (uVar5 < param_2);
    }
  }
  return fVar12;
}

// determinant<5,int> @ 14c5b2a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl tdm::impl::determinant<5,int>(mat<5,5,int> *param_1,ulong64 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_c8 [32];
  mat<5,5,int> local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_2 == 1) {
    iVar11 = param_1->values[0].values[0];
  }
  else {
    iVar11 = 0;
    uVar6 = 0;
    local_a8.values[4].values[4] = 0;
    iVar12 = 1;
    local_a8.values[0].values[0] = 0;
    local_a8.values[0].values[1] = 0;
    local_a8.values[0].values[2] = 0;
    local_a8.values[0].values[3] = 0;
    local_a8.values[0].values[4] = 0;
    local_a8.values[1].values[0] = 0;
    local_a8.values[1].values[1] = 0;
    local_a8.values[1].values[2] = 0;
    local_a8.values[1].values[3] = 0;
    local_a8.values[1].values[4] = 0;
    local_a8.values[2].values[0] = 0;
    local_a8.values[2].values[1] = 0;
    local_a8.values[2].values[2] = 0;
    local_a8.values[2].values[3] = 0;
    local_a8.values[2].values[4] = 0;
    local_a8.values[3].values[0] = 0;
    local_a8.values[3].values[1] = 0;
    local_a8.values[3].values[2] = 0;
    local_a8.values[3].values[3] = 0;
    local_a8.values[3].values[4] = 0;
    local_a8.values[4].values[0] = 0;
    local_a8.values[4].values[1] = 0;
    local_a8.values[4].values[2] = 0;
    local_a8.values[4].values[3] = 0;
    if (param_2 != 0) {
      do {
        lVar9 = 0;
        uVar10 = 0;
        lVar5 = 0;
        do {
          uVar7 = 0;
          lVar8 = lVar9 * 5;
          uVar4 = 0;
          do {
            if ((uVar10 != 0) && (uVar4 != uVar6)) {
              lVar1 = lVar8 + uVar7;
              uVar7 = uVar7 + 1;
              local_a8.values[0].values[lVar1] = param_1->values[0].values[lVar5 + uVar4];
              if (uVar7 == param_2 - 1) {
                uVar7 = 0;
                lVar9 = lVar9 + 1;
                lVar8 = lVar8 + 5;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_2);
          uVar10 = uVar10 + 1;
          lVar5 = lVar5 + 5;
        } while (uVar10 < param_2);
        iVar3 = param_1->values[0].values[uVar6];
        iVar2 = determinant<5,int>(&local_a8,param_2 - 1);
        uVar6 = uVar6 + 1;
        iVar3 = iVar2 * iVar3 * iVar12;
        iVar12 = -iVar12;
        iVar11 = iVar11 + iVar3;
      } while (uVar6 < param_2);
    }
  }
  return iVar11;
}

// determinant<7,float> @ 14c5b2bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl tdm::impl::determinant<7,float>(mat<7,7,float> *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_178 [48];
  mat<7,7,float> local_148;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_2 == 1) {
    fVar14 = param_1->values[0].values[0];
  }
  else {
    fVar14 = 0.0;
    memset(&local_148,0,0xc4);
    uVar3 = __xmm_80000000800000008000000080000000;
    uVar5 = 0;
    if (param_2 != 0) {
      uVar1 = param_2 - 1;
      fVar13 = __real_3f800000;
      do {
        lVar9 = 0;
        uVar10 = 0;
        lVar6 = 0;
        do {
          uVar4 = 0;
          uVar7 = 0;
          if (param_2 < 4) {
LAB_14c5b2d65:
            lVar8 = lVar9 * 7;
            do {
              if ((uVar10 != 0) && (uVar7 != uVar5)) {
                lVar2 = lVar8 + uVar4;
                uVar4 = uVar4 + 1;
                local_148.values[0].values[lVar2] = param_1->values[0].values[lVar6 + uVar7];
                if (uVar4 == uVar1) {
                  uVar4 = 0;
                  lVar9 = lVar9 + 1;
                  lVar8 = lVar8 + 7;
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_2);
          }
          else {
            lVar8 = lVar9 * 7;
            do {
              if (uVar10 != 0) {
                if (uVar7 != uVar5) {
                  lVar2 = lVar8 + uVar4;
                  uVar4 = uVar4 + 1;
                  local_148.values[0].values[lVar2] = param_1->values[0].values[lVar6 + uVar7];
                  if (uVar4 == uVar1) {
                    uVar4 = 0;
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 7;
                  }
                }
                if (uVar7 + 1 != uVar5) {
                  lVar2 = lVar8 + uVar4;
                  uVar4 = uVar4 + 1;
                  local_148.values[0].values[lVar2] = param_1->values[0].values[lVar6 + uVar7 + 1];
                  if (uVar4 == uVar1) {
                    uVar4 = 0;
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 7;
                  }
                }
                if (uVar7 + 2 != uVar5) {
                  lVar2 = lVar8 + uVar4;
                  uVar4 = uVar4 + 1;
                  local_148.values[0].values[lVar2] = param_1->values[0].values[lVar6 + uVar7 + 2];
                  if (uVar4 == uVar1) {
                    uVar4 = 0;
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 7;
                  }
                }
                if (uVar7 + 3 != uVar5) {
                  lVar2 = lVar8 + uVar4;
                  uVar4 = uVar4 + 1;
                  local_148.values[0].values[lVar2] = param_1->values[0].values[lVar6 + uVar7 + 3];
                  if (uVar4 == uVar1) {
                    uVar4 = 0;
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + 7;
                  }
                }
              }
              uVar7 = uVar7 + 4;
            } while (uVar7 < param_2 - 3);
            if (uVar7 < param_2) goto LAB_14c5b2d65;
          }
          uVar10 = uVar10 + 1;
          lVar6 = lVar6 + 7;
        } while (uVar10 < param_2);
        fVar12 = fVar13 * param_1->values[0].values[uVar5];
        fVar11 = determinant<7,float>(&local_148,uVar1);
        uVar5 = uVar5 + 1;
        fVar13 = (float)((uint)fVar13 ^ uVar3);
        fVar14 = fVar14 + fVar11 * fVar12;
      } while (uVar5 < param_2);
    }
  }
  return fVar14;
}

// inverse<4,float> @ 14c5b2e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<4,4,float> * __cdecl
tdm::lu::inverse<4,float>(mat<4,4,float> *__return_storage_ptr__,mat<4,4,float> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  vec<4,float> *pvVar19;
  float fVar20;
  undefined1 auStack_d8 [48];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  vec<4,unsigned___int64> local_68;
  float local_48 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68.values[0] = 0;
  local_68.values[1] = 0;
  local_68.values[2] = 0;
  local_68.values[3] = 0;
  bVar9 = decompose<4,float>(param_1,&local_68);
  if (bVar9) {
    uVar15 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    do {
      lVar18 = 0;
      local_48[0] = 0.0;
      local_48[1] = 0.0;
      local_48[2] = 0.0;
      local_48[3] = 0.0;
      *(undefined4 *)((longlong)local_48 + uVar15) = 0x3f800000;
      uVar13 = 0;
      lVar17 = (longlong)&local_68 + -(longlong)param_1 + 0x1c;
      pvVar19 = param_1->values;
      do {
        fVar20 = local_48[local_68.values[uVar13]];
        local_48[local_68.values[uVar13]] = local_48[uVar13];
        if (lVar18 == 0) {
          if (fVar20 != 0.0) {
            lVar18 = uVar13 + 1;
          }
        }
        else {
          uVar11 = lVar18 - 1;
          if (uVar11 < uVar13) {
            if (3 < uVar13 - uVar11) {
              pfVar16 = param_1->values[uVar13].values + lVar18 + 1;
              lVar10 = ((uVar13 - uVar11) - 4 >> 2) + 1;
              uVar11 = uVar11 + lVar10 * 4;
              do {
                pfVar4 = (float *)(lVar17 + -4 + (longlong)pfVar16);
                pfVar14 = pfVar16 + -2;
                pfVar3 = (float *)(lVar17 + (longlong)pfVar16);
                pfVar1 = pfVar16 + -1;
                pfVar5 = (float *)(lVar17 + 4 + (longlong)pfVar16);
                fVar8 = *pfVar16;
                pfVar6 = (float *)(lVar17 + 8 + (longlong)pfVar16);
                pfVar2 = pfVar16 + 1;
                pfVar16 = pfVar16 + 4;
                fVar20 = (((fVar20 - *pfVar4 * *pfVar14) - *pfVar3 * *pfVar1) - *pfVar5 * fVar8) -
                         *pfVar6 * *pfVar2;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            for (; uVar11 < uVar13; uVar11 = uVar11 + 1) {
              fVar20 = fVar20 - ((vec<4,float> *)pvVar19->values)->values[uVar11] * local_48[uVar11]
              ;
            }
          }
        }
        local_48[uVar13] = fVar20;
        lVar17 = lVar17 + -0x10;
        uVar13 = uVar13 + 1;
        pvVar19 = pvVar19 + 1;
      } while (uVar13 < 4);
      uVar13 = 4;
      pfVar16 = param_1->values[3].values + 3;
      lVar17 = 0xc;
      lVar18 = (longlong)&uStack_80 + -(longlong)param_1 + 4;
      do {
        fVar20 = *(float *)((longlong)local_48 + lVar17);
        if (uVar13 < 4) {
          uVar11 = uVar13;
          if (3 < 4 - uVar13) {
            pfVar14 = param_1->values[0].values + lVar17 + uVar13 + 2;
            lVar10 = (-uVar13 >> 2) + 1;
            uVar11 = uVar13 + lVar10 * 4;
            do {
              pfVar5 = (float *)(lVar18 + -4 + (longlong)pfVar14);
              pfVar1 = pfVar14 + -2;
              pfVar4 = (float *)(lVar18 + (longlong)pfVar14);
              pfVar2 = pfVar14 + -1;
              pfVar6 = (float *)(lVar18 + 4 + (longlong)pfVar14);
              fVar8 = *pfVar14;
              pfVar7 = (float *)(lVar18 + 8 + (longlong)pfVar14);
              pfVar3 = pfVar14 + 1;
              pfVar14 = pfVar14 + 4;
              fVar20 = (((fVar20 - *pfVar5 * *pfVar1) - *pfVar4 * *pfVar2) - *pfVar6 * fVar8) -
                       *pfVar7 * *pfVar3;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            if (3 < uVar11) goto LAB_14c5b30c1;
          }
          do {
            uVar12 = uVar11 + 1;
            fVar20 = fVar20 - param_1->values[uVar13 - 1].values[uVar11] * local_48[uVar11];
            uVar11 = uVar12;
          } while (uVar12 < 4);
        }
LAB_14c5b30c1:
        fVar8 = *pfVar16;
        uVar13 = uVar13 - 1;
        pfVar16 = pfVar16 + -5;
        lVar17 = lVar17 + -4;
        lVar18 = lVar18 + 0x10;
        local_48[uVar13] = fVar20 / fVar8;
      } while (uVar13 != 0);
      *(float *)((longlong)&local_a8 + uVar15) = local_48[0];
      *(float *)((longlong)&local_98 + uVar15) = local_48[1];
      *(float *)((longlong)&local_88 + uVar15) = local_48[2];
      *(float *)((longlong)&local_78 + uVar15) = local_48[3];
      uVar15 = uVar15 + 4;
    } while (uVar15 < 0x10);
    *(undefined8 *)__return_storage_ptr__->values[0].values = local_a8;
    *(undefined8 *)(__return_storage_ptr__->values[0].values + 2) = uStack_a0;
    *(undefined8 *)__return_storage_ptr__->values[1].values = local_98;
    *(undefined8 *)(__return_storage_ptr__->values[1].values + 2) = uStack_90;
    *(undefined8 *)__return_storage_ptr__->values[2].values = local_88;
    *(undefined8 *)(__return_storage_ptr__->values[2].values + 2) = uStack_80;
    *(undefined8 *)__return_storage_ptr__->values[3].values = local_78;
    *(undefined8 *)(__return_storage_ptr__->values[3].values + 2) = uStack_70;
  }
  else {
    __return_storage_ptr__->values[0].values[0] = 0.0;
    __return_storage_ptr__->values[0].values[1] = 0.0;
    __return_storage_ptr__->values[0].values[2] = 0.0;
    __return_storage_ptr__->values[0].values[3] = 0.0;
    __return_storage_ptr__->values[1].values[0] = 0.0;
    __return_storage_ptr__->values[1].values[1] = 0.0;
    __return_storage_ptr__->values[1].values[2] = 0.0;
    __return_storage_ptr__->values[1].values[3] = 0.0;
    __return_storage_ptr__->values[2].values[0] = 0.0;
    __return_storage_ptr__->values[2].values[1] = 0.0;
    __return_storage_ptr__->values[2].values[2] = 0.0;
    __return_storage_ptr__->values[2].values[3] = 0.0;
    __return_storage_ptr__->values[3].values[0] = 0.0;
    __return_storage_ptr__->values[3].values[1] = 0.0;
    __return_storage_ptr__->values[3].values[2] = 0.0;
    __return_storage_ptr__->values[3].values[3] = 0.0;
  }
  return __return_storage_ptr__;
}

// inverse<7,float> @ 14c5b3180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<7,7,float> * __cdecl
tdm::lu::inverse<7,float>(mat<7,7,float> *__return_storage_ptr__,mat<7,7,float> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  float *pfVar16;
  undefined1 *puVar17;
  longlong lVar18;
  vec<7,float> *pvVar19;
  ulonglong uVar20;
  float *pfVar21;
  float fVar22;
  undefined1 auStack_198 [40];
  vec<7,unsigned___int64> local_170;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  undefined1 auStack_6c [4];
  float local_68 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_170.values[0] = 0;
  local_170.values[1] = 0;
  local_170.values[6] = 0;
  local_170.values[2] = 0;
  local_170.values[3] = 0;
  local_170.values[4] = 0;
  local_170.values[5] = 0;
  bVar9 = decompose<7,float>(param_1,&local_170);
  if (bVar9) {
    memset(&local_138,0,0xc4);
    uVar15 = 0;
    do {
      lVar18 = 0;
      local_68[4] = 0.0;
      local_68[5] = 0.0;
      uVar13 = 0;
      local_68[6] = 0.0;
      local_68[0] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = 0.0;
      *(undefined4 *)((longlong)local_68 + uVar15) = 0x3f800000;
      uVar20 = 0;
      puVar17 = auStack_6c + -(longlong)param_1;
      pvVar19 = param_1->values;
      do {
        fVar22 = local_68[local_170.values[uVar13]];
        local_68[local_170.values[uVar13]] = local_68[uVar13];
        if (lVar18 == 0) {
          if (fVar22 != 0.0) {
            lVar18 = uVar13 + 1;
          }
        }
        else {
          uVar12 = lVar18 - 1;
          if (uVar12 < uVar13) {
            if (3 < uVar13 - uVar12) {
              pfVar16 = param_1->values[0].values + uVar20 + lVar18 + 1;
              lVar10 = ((uVar13 - uVar12) - 4 >> 2) + 1;
              uVar12 = uVar12 + lVar10 * 4;
              do {
                pfVar3 = (float *)(puVar17 + -4 + (longlong)pfVar16);
                pfVar21 = pfVar16 + -2;
                pfVar2 = (float *)(puVar17 + (longlong)pfVar16);
                pfVar14 = pfVar16 + -1;
                pfVar4 = (float *)(puVar17 + 4 + (longlong)pfVar16);
                fVar8 = *pfVar16;
                pfVar5 = (float *)(puVar17 + 8 + (longlong)pfVar16);
                pfVar1 = pfVar16 + 1;
                pfVar16 = pfVar16 + 4;
                fVar22 = (((fVar22 - *pfVar3 * *pfVar21) - *pfVar2 * *pfVar14) - *pfVar4 * fVar8) -
                         *pfVar5 * *pfVar1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            for (; uVar12 < uVar13; uVar12 = uVar12 + 1) {
              fVar22 = fVar22 - local_68[uVar12] * ((vec<7,float> *)pvVar19->values)->values[uVar12]
              ;
            }
          }
        }
        local_68[uVar13] = fVar22;
        uVar20 = uVar20 + 7;
        uVar13 = uVar13 + 1;
        puVar17 = puVar17 + -0x1c;
        pvVar19 = pvVar19 + 1;
      } while (uVar20 < 0x31);
      lVar10 = 0x2a;
      pfVar16 = local_68 + 6;
      uVar13 = 7;
      pfVar21 = param_1->values[6].values + 6;
      lVar18 = (longlong)&local_118 + -(longlong)param_1 + 4;
      do {
        fVar22 = *pfVar16;
        if (uVar13 < 7) {
          uVar20 = uVar13;
          if (3 < 7 - uVar13) {
            pfVar14 = param_1->values[0].values + lVar10 + uVar13 + 2;
            lVar11 = (3 - uVar13 >> 2) + 1;
            uVar20 = uVar13 + lVar11 * 4;
            do {
              pfVar5 = (float *)((longlong)pfVar14 + lVar18 + -4);
              pfVar1 = pfVar14 + -2;
              pfVar4 = (float *)((longlong)pfVar14 + lVar18);
              pfVar2 = pfVar14 + -1;
              pfVar6 = (float *)(lVar18 + 4 + (longlong)pfVar14);
              fVar8 = *pfVar14;
              pfVar7 = (float *)(lVar18 + 8 + (longlong)pfVar14);
              pfVar3 = pfVar14 + 1;
              pfVar14 = pfVar14 + 4;
              fVar22 = (((fVar22 - *pfVar5 * *pfVar1) - *pfVar4 * *pfVar2) - *pfVar6 * fVar8) -
                       *pfVar7 * *pfVar3;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            if (6 < uVar20) goto LAB_14c5b341e;
          }
          do {
            uVar12 = uVar20 + 1;
            fVar22 = fVar22 - local_68[uVar20] * param_1->values[uVar13 - 1].values[uVar20];
            uVar20 = uVar12;
          } while (uVar12 < 7);
        }
LAB_14c5b341e:
        fVar8 = *pfVar21;
        uVar13 = uVar13 - 1;
        pfVar21 = pfVar21 + -8;
        pfVar16 = pfVar16 + -1;
        lVar10 = lVar10 + -7;
        lVar18 = lVar18 + 0x1c;
        local_68[uVar13] = fVar22 / fVar8;
      } while (uVar13 != 0);
      *(float *)((longlong)&local_138 + uVar15) = local_68[0];
      *(float *)((longlong)&uStack_120 + uVar15 + 4) = local_68[1];
      *(float *)((longlong)&uStack_100 + uVar15) = local_68[2];
      *(float *)((longlong)&local_e8 + uVar15 + 4) = local_68[3];
      *(float *)((longlong)&local_c8 + uVar15) = local_68[4];
      *(float *)((longlong)&uStack_b0 + uVar15 + 4) = local_68[5];
      *(float *)((longlong)&uStack_90 + uVar15) = local_68[6];
      uVar15 = uVar15 + 4;
    } while (uVar15 < 0x1c);
    *(undefined8 *)__return_storage_ptr__->values[0].values = local_138;
    *(undefined8 *)(__return_storage_ptr__->values[0].values + 2) = uStack_130;
    *(undefined8 *)(__return_storage_ptr__->values[0].values + 4) = local_128;
    *(undefined8 *)(__return_storage_ptr__->values[0].values + 6) = uStack_120;
    *(undefined8 *)(__return_storage_ptr__->values[1].values + 1) = local_118;
    *(undefined8 *)(__return_storage_ptr__->values[1].values + 3) = uStack_110;
    *(undefined8 *)(__return_storage_ptr__->values[1].values + 5) = local_108;
    *(undefined8 *)__return_storage_ptr__->values[2].values = uStack_100;
    *(undefined8 *)(__return_storage_ptr__->values[2].values + 2) = local_f8;
    *(undefined8 *)(__return_storage_ptr__->values[2].values + 4) = uStack_f0;
    *(undefined8 *)(__return_storage_ptr__->values[2].values + 6) = local_e8;
    *(undefined8 *)(__return_storage_ptr__->values[3].values + 1) = uStack_e0;
    *(undefined8 *)(__return_storage_ptr__->values[3].values + 3) = local_d8;
    *(undefined8 *)(__return_storage_ptr__->values[3].values + 5) = uStack_d0;
    *(undefined8 *)__return_storage_ptr__->values[4].values = local_c8;
    *(undefined8 *)(__return_storage_ptr__->values[4].values + 2) = uStack_c0;
    *(undefined8 *)(__return_storage_ptr__->values[4].values + 4) = local_b8;
    *(undefined8 *)(__return_storage_ptr__->values[4].values + 6) = uStack_b0;
    *(undefined8 *)(__return_storage_ptr__->values[5].values + 1) = local_a8;
    *(undefined8 *)(__return_storage_ptr__->values[5].values + 3) = uStack_a0;
    *(undefined8 *)(__return_storage_ptr__->values[5].values + 5) = local_98;
    *(undefined8 *)__return_storage_ptr__->values[6].values = uStack_90;
    *(undefined8 *)(__return_storage_ptr__->values[6].values + 2) = local_88;
    *(undefined8 *)(__return_storage_ptr__->values[6].values + 4) = uStack_80;
    __return_storage_ptr__->values[6].values[6] = local_78;
  }
  else {
    memset(__return_storage_ptr__,0,0xc4);
  }
  return __return_storage_ptr__;
}

// inverse<7,float> @ 14c5b3570

mat<7,7,float> * __cdecl
tdm::inverse<7,float>(mat<7,7,float> *__return_storage_ptr__,mat<7,7,float> *param_1)

{
  float fVar1;
  mat<7,7,float> local_1b8 [2];
  
  fVar1 = impl::determinant<7,float>(param_1,7);
  if (fVar1 == 0.0) {
    memset(__return_storage_ptr__,0,0xc4);
  }
  else {
    impl::adjoint<7,float>(local_1b8,param_1);
    fVar1 = __real_3f800000 / fVar1;
    *(ulonglong *)__return_storage_ptr__->values[0].values =
         CONCAT44(local_1b8[0].values[0].values[1] * fVar1,local_1b8[0].values[0].values[0] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[0].values + 2) =
         CONCAT44(local_1b8[0].values[0].values[3] * fVar1,local_1b8[0].values[0].values[2] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[0].values + 4) =
         CONCAT44(local_1b8[0].values[0].values[5] * fVar1,local_1b8[0].values[0].values[4] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[0].values + 6) =
         CONCAT44(local_1b8[0].values[1].values[0] * fVar1,local_1b8[0].values[0].values[6] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[1].values + 1) =
         CONCAT44(local_1b8[0].values[1].values[2] * fVar1,local_1b8[0].values[1].values[1] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[1].values + 3) =
         CONCAT44(local_1b8[0].values[1].values[4] * fVar1,local_1b8[0].values[1].values[3] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[1].values + 5) =
         CONCAT44(local_1b8[0].values[1].values[6] * fVar1,local_1b8[0].values[1].values[5] * fVar1)
    ;
    *(ulonglong *)__return_storage_ptr__->values[2].values =
         CONCAT44(local_1b8[0].values[2].values[1] * fVar1,local_1b8[0].values[2].values[0] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[2].values + 2) =
         CONCAT44(local_1b8[0].values[2].values[3] * fVar1,local_1b8[0].values[2].values[2] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[2].values + 4) =
         CONCAT44(local_1b8[0].values[2].values[5] * fVar1,local_1b8[0].values[2].values[4] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[2].values + 6) =
         CONCAT44(local_1b8[0].values[3].values[0] * fVar1,local_1b8[0].values[2].values[6] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[3].values + 1) =
         CONCAT44(local_1b8[0].values[3].values[2] * fVar1,local_1b8[0].values[3].values[1] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[3].values + 3) =
         CONCAT44(local_1b8[0].values[3].values[4] * fVar1,local_1b8[0].values[3].values[3] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[3].values + 5) =
         CONCAT44(local_1b8[0].values[3].values[6] * fVar1,local_1b8[0].values[3].values[5] * fVar1)
    ;
    *(ulonglong *)__return_storage_ptr__->values[4].values =
         CONCAT44(local_1b8[0].values[4].values[1] * fVar1,local_1b8[0].values[4].values[0] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[4].values + 2) =
         CONCAT44(local_1b8[0].values[4].values[3] * fVar1,local_1b8[0].values[4].values[2] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[4].values + 4) =
         CONCAT44(local_1b8[0].values[4].values[5] * fVar1,local_1b8[0].values[4].values[4] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[4].values + 6) =
         CONCAT44(local_1b8[0].values[5].values[0] * fVar1,local_1b8[0].values[4].values[6] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[5].values + 1) =
         CONCAT44(local_1b8[0].values[5].values[2] * fVar1,local_1b8[0].values[5].values[1] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[5].values + 3) =
         CONCAT44(local_1b8[0].values[5].values[4] * fVar1,local_1b8[0].values[5].values[3] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[5].values + 5) =
         CONCAT44(local_1b8[0].values[5].values[6] * fVar1,local_1b8[0].values[5].values[5] * fVar1)
    ;
    *(ulonglong *)__return_storage_ptr__->values[6].values =
         CONCAT44(local_1b8[0].values[6].values[1] * fVar1,local_1b8[0].values[6].values[0] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[6].values + 2) =
         CONCAT44(local_1b8[0].values[6].values[3] * fVar1,local_1b8[0].values[6].values[2] * fVar1)
    ;
    *(ulonglong *)(__return_storage_ptr__->values[6].values + 4) =
         CONCAT44(local_1b8[0].values[6].values[5] * fVar1,local_1b8[0].values[6].values[4] * fVar1)
    ;
    __return_storage_ptr__->values[6].values[6] = local_1b8[0].values[6].values[6] * fVar1;
  }
  return __return_storage_ptr__;
}

// slerp<float> @ 14c5b3730

quat<float> * __cdecl
tdm::slerp<float>(quat<float> *__return_storage_ptr__,quat<float> *param_1,quat<float> *param_2,
                 float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar1 = __real_3f800000;
  fVar2 = param_2->x;
  fVar3 = param_2->y;
  fVar4 = param_2->z;
  fVar5 = param_2->w;
  fVar7 = param_1->w * param_2->w + param_1->z * param_2->z +
          param_1->y * param_2->y + param_1->x * param_2->x;
  if (fVar7 < 0.0) {
    fVar2 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
    fVar3 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
    fVar5 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
    fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
  }
  fVar8 = __real_3f800000 - param_3;
  if (fVar7 <= __real_3f7ffffe) {
    fVar7 = acosf(fVar7);
    fVar6 = sinf(fVar7);
    fVar8 = sinf(fVar7 * fVar8);
    fVar8 = fVar8 * (fVar1 / fVar6);
    fVar7 = sinf(fVar7 * param_3);
    param_3 = fVar7 * (fVar1 / fVar6);
  }
  fVar1 = param_1->y;
  fVar7 = param_1->z;
  fVar6 = param_1->w;
  __return_storage_ptr__->x = param_1->x * fVar8 + fVar2 * param_3;
  __return_storage_ptr__->y = fVar1 * fVar8 + fVar3 * param_3;
  __return_storage_ptr__->z = fVar7 * fVar8 + fVar4 * param_3;
  __return_storage_ptr__->w = fVar6 * fVar8 + fVar5 * param_3;
  return __return_storage_ptr__;
}

// vec<1,float> @ 14c5b3900

vec<1,float> * __thiscall tdm::vec<1,float>::vec<1,float>(vec<1,float> *this)

{
  this->values[0] = 0.0;
  return this;
}

// vec<3,int> @ 14c5b3910

vec<3,int> * __thiscall tdm::vec<3,int>::vec<3,int>(vec<3,int> *this)

{
  this->values[0] = 0;
  this->values[1] = 0;
  this->values[2] = 0;
  return this;
}

// vec<7,float> @ 14c5b3930

vec<7,float> * __thiscall tdm::vec<7,float>::vec<7,float>(vec<7,float> *this)

{
  this->values[0] = 0.0;
  this->values[1] = 0.0;
  this->values[2] = 0.0;
  this->values[3] = 0.0;
  this->values[4] = 0.0;
  this->values[5] = 0.0;
  this->values[6] = 0.0;
  return this;
}

