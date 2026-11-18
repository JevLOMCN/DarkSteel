// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 244

// test_info_'' @ 1413a46f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'T256Test_AbsScalar_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VT256Test_AbsScalar_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x2e0);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x2e0);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x72;
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
  *(undefined2 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar6[0x72] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000072;
  uStack_40 = _UNK_15289f8b8;
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
  *(undefined2 *)(local_58._Ptr + 0x70) = *(undefined2 *)(pcVar6 + 0x70);
  *(local_58._Ptr + 0x72) = pcVar6[0x72];
  local_38 = 0x2e0;
  T256Test_AbsScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("T256Test","AbsScalar",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413a4900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'T256Test_AndNotScalar_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VT256Test_AndNotScalar_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x2e7);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x2e7);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x72;
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
  *(undefined2 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar6[0x72] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000072;
  uStack_40 = _UNK_15289f8b8;
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
  *(undefined2 *)(local_58._Ptr + 0x70) = *(undefined2 *)(pcVar6 + 0x70);
  *(local_58._Ptr + 0x72) = pcVar6[0x72];
  local_38 = 0x2e7;
  T256Test_AndNotScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("T256Test","AndNotScalar",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413a4b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'T256Test_RsqrtScalar_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VT256Test_RsqrtScalar_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x301);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x301);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x72;
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
  *(undefined2 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar6[0x72] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000072;
  uStack_40 = _UNK_15289f8b8;
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
  *(undefined2 *)(local_58._Ptr + 0x70) = *(undefined2 *)(pcVar6 + 0x70);
  *(local_58._Ptr + 0x72) = pcVar6[0x72];
  local_38 = 0x301;
  T256Test_RsqrtScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("T256Test","RsqrtScalar",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413a4d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'T256Test_TransposeSquareScalar_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VT256Test_TransposeSquareScalar_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x2c1);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                      ,0x2c1);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x72;
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
  *(undefined2 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar6[0x72] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000072;
  uStack_40 = _UNK_15289f8b8;
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
  *(undefined2 *)(local_58._Ptr + 0x70) = *(undefined2 *)(pcVar6 + 0x70);
  *(local_58._Ptr + 0x72) = pcVar6[0x72];
  local_38 = 0x2c1;
  T256Test_TransposeSquareScalar_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("T256Test","TransposeSquareScalar",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_AlignedLoadStore_registered_'' @ 1413a4f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_AlignedLoadStore_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x24d;
  gtest_T256Test_AlignedLoadStore_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_AlignedLoadStore_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","AlignedLoadStore",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a5143;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a5143:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_BitwiseAND_registered_'' @ 1413a5190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_BitwiseAND_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x1aa;
  gtest_T256Test_BitwiseAND_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseAND_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","BitwiseAND",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a53a3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a53a3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_BitwiseNOT_registered_'' @ 1413a53f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_BitwiseNOT_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x220;
  gtest_T256Test_BitwiseNOT_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseNOT_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","BitwiseNOT",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a5603;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a5603:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_BitwiseOR_registered_'' @ 1413a5650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_BitwiseOR_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x20c;
  gtest_T256Test_BitwiseOR_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseOR_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","BitwiseOR",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a5863;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a5863:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_BitwiseXOR_registered_'' @ 1413a58b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_BitwiseXOR_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x216;
  gtest_T256Test_BitwiseXOR_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseXOR_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","BitwiseXOR",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a5ac3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a5ac3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_CheckSize_registered_'' @ 1413a5b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_CheckSize_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x4a;
  gtest_T256Test_CheckSize_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CheckSize_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","CheckSize",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a5d23;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a5d23:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_CompoundAssignmentAdd_registered_'' @ 1413a5d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_CompoundAssignmentAdd_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x279;
  gtest_T256Test_CompoundAssignmentAdd_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentAdd_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","CompoundAssignmentAdd",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a5f83;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a5f83:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_CompoundAssignmentDiv_registered_'' @ 1413a5fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_CompoundAssignmentDiv_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x291;
  gtest_T256Test_CompoundAssignmentDiv_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentDiv_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","CompoundAssignmentDiv",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a61e3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a61e3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_CompoundAssignmentMul_registered_'' @ 1413a6230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_CompoundAssignmentMul_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x289;
  gtest_T256Test_CompoundAssignmentMul_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentMul_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","CompoundAssignmentMul",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a6443;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a6443:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_CompoundAssignmentSub_registered_'' @ 1413a6490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_CompoundAssignmentSub_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x281;
  gtest_T256Test_CompoundAssignmentSub_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentSub_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","CompoundAssignmentSub",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a66a3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a66a3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_ConstructFromArgs_registered_'' @ 1413a66f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_ConstructFromArgs_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x237;
  gtest_T256Test_ConstructFromArgs_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_ConstructFromArgs_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","ConstructFromArgs",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a6903;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a6903:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_ConstructFromSingleValue_registered_'' @ 1413a6950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_ConstructFromSingleValue_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x23d;
  gtest_T256Test_ConstructFromSingleValue_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_ConstructFromSingleValue_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","ConstructFromSingleValue",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a6b63;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a6b63:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_Equality_registered_'' @ 1413a6bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_Equality_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x4e;
  gtest_T256Test_Equality_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_Equality_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","Equality",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a6dc3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a6dc3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_FromAlignedSource_registered_'' @ 1413a6e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_FromAlignedSource_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x243;
  gtest_T256Test_FromAlignedSource_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_FromAlignedSource_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","FromAlignedSource",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a7023;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a7023:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_FromUnalignedSource_registered_'' @ 1413a7070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_FromUnalignedSource_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 600;
  gtest_T256Test_FromUnalignedSource_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_FromUnalignedSource_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","FromUnalignedSource",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a7283;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a7283:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_GreaterThanOrEqual_registered_'' @ 1413a72d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_GreaterThanOrEqual_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x184;
  gtest_T256Test_GreaterThanOrEqual_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_GreaterThanOrEqual_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","GreaterThanOrEqual",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a74e3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a74e3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_GreaterThan_registered_'' @ 1413a7530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_GreaterThan_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x15e;
  gtest_T256Test_GreaterThan_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_GreaterThan_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","GreaterThan",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a7743;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a7743:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_Inequality_registered_'' @ 1413a7790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_Inequality_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0xb0;
  gtest_T256Test_Inequality_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_Inequality_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","Inequality",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a79a3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a79a3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_LessThanOrEqual_registered_'' @ 1413a79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_LessThanOrEqual_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x138;
  gtest_T256Test_LessThanOrEqual_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_LessThanOrEqual_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","LessThanOrEqual",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a7c03;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a7c03:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_LessThan_registered_'' @ 1413a7c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_LessThan_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x112;
  gtest_T256Test_LessThan_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_LessThan_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","LessThan",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a7e63;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a7e63:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_LoadSingleValue_registered_'' @ 1413a7eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_LoadSingleValue_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x26d;
  gtest_T256Test_LoadSingleValue_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_LoadSingleValue_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","LoadSingleValue",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a80c3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a80c3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_OperatorAdd_registered_'' @ 1413a8110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_OperatorAdd_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x29d;
  gtest_T256Test_OperatorAdd_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorAdd_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","OperatorAdd",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a8323;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a8323:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_OperatorDiv_registered_'' @ 1413a8370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_OperatorDiv_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x2b5;
  gtest_T256Test_OperatorDiv_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorDiv_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","OperatorDiv",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a8583;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a8583:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_OperatorMul_registered_'' @ 1413a85d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_OperatorMul_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x2ad;
  gtest_T256Test_OperatorMul_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorMul_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","OperatorMul",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a87e3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a87e3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_OperatorSub_registered_'' @ 1413a8830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_OperatorSub_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x2a5;
  gtest_T256Test_OperatorSub_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorSub_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","OperatorSub",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a8a43;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a8a43:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_Sum_registered_'' @ 1413a8a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_Sum_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x274;
  gtest_T256Test_Sum_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_Sum_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","Sum",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a8ca3;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a8ca3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `dynamic_initializer_for_'gtest_T256Test_UnalignedLoadStore_registered_'' @ 1413a8cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_T256Test_UnalignedLoadStore_registered___(void)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_78;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pvVar1 = testing::internal::
           GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                     (&local_78);
  local_30 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_28 = 0x72;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_20 = 0x7f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  *(undefined2 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_2_;
  pcVar2[0x72] = '\0';
  local_60._8_8_ = 0;
  local_38 = pcVar2;
  local_60._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_50 = ___xmm_000000000000007f0000000000000072;
  uStack_48 = _UNK_15289f8b8;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_60._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_60._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_60._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_60._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_60._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_60._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_60._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_60._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_60._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_60._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_60._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_60._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_60._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_60._Ptr + 0x68) = uVar3;
  *(undefined2 *)(local_60._Ptr + 0x70) = *(undefined2 *)(pcVar2 + 0x70);
  *(local_60._Ptr + 0x72) = pcVar2[0x72];
  local_40 = 0x262;
  gtest_T256Test_UnalignedLoadStore_registered_ =
       testing::internal::
       TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_UnalignedLoadStore_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_60,"T256Test","UnalignedLoadStore",0,pvVar1);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    uVar3 = local_60._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_60._Ptr + -8);
      uVar4 = uStack_48 + 0x28;
      if ((char *)0x1f < local_60._Ptr + (-8 - uVar3)) goto LAB_1413a8f03;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_60._Ptr = local_60._Ptr & 0xffffffffffffff00;
  local_50 = ___xmm_000000000000000f0000000000000000;
  uStack_48 = _UNK_15076add8;
  operator_delete(pcVar2,0x80);
  pbVar5 = local_78._Mypair._Myval2._Myfirst;
  if (local_78._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != local_78._Mypair._Myval2._Mylast; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_78._Mypair._Myval2._Myend - (longlong)local_78._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_78._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_78._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_78._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413a8f03:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// CreateTest @ 14c6338d0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_OperatorMul_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c633910

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c633950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c6339d4) */
/* WARNING: Removing unreachable block (ram,0x00014c633a27) */
/* WARNING: Removing unreachable block (ram,0x00014c633a2a) */
/* WARNING: Removing unreachable block (ram,0x00014c633a6b) */
/* WARNING: Removing unreachable block (ram,0x00014c633a7f) */
/* WARNING: Removing unreachable block (ram,0x00014c633a94) */
/* WARNING: Removing unreachable block (ram,0x00014c633aae) */
/* WARNING: Removing unreachable block (ram,0x00014c633ab3) */
/* WARNING: Removing unreachable block (ram,0x00014c633ad0) */
/* WARNING: Removing unreachable block (ram,0x00014c633ae4) */
/* WARNING: Removing unreachable block (ram,0x00014c633aee) */
/* WARNING: Removing unreachable block (ram,0x00014c633b03) */

void __thiscall
T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c633b30

void * __thiscall
T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c633b70

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_OperatorSub_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c633bb0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c633bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c633c78) */
/* WARNING: Removing unreachable block (ram,0x00014c633ccb) */
/* WARNING: Removing unreachable block (ram,0x00014c633cce) */
/* WARNING: Removing unreachable block (ram,0x00014c633d0f) */
/* WARNING: Removing unreachable block (ram,0x00014c633d23) */
/* WARNING: Removing unreachable block (ram,0x00014c633d38) */
/* WARNING: Removing unreachable block (ram,0x00014c633d52) */
/* WARNING: Removing unreachable block (ram,0x00014c633d57) */
/* WARNING: Removing unreachable block (ram,0x00014c633d74) */
/* WARNING: Removing unreachable block (ram,0x00014c633d88) */
/* WARNING: Removing unreachable block (ram,0x00014c633d92) */
/* WARNING: Removing unreachable block (ram,0x00014c633da7) */

void __thiscall
T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c633dd0

void * __thiscall
T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c633e10

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_OperatorAdd_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c633e50

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c633e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStackY_c8 [32];
  AssertionResult local_88;
  AssertHelper local_78;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  dVar1 = __real_3f1a36e2e0000000;
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar6 = 0;
  local_68 = ___xmm_40800000404000003fc0000040800000;
  uStack_60 = _UNK_15289f8e8;
  local_58 = ___xmm_40800000404000003fc0000040800000;
  uStack_50 = _UNK_15289f8e8;
  local_48 = ___xmm_40800000404000003fc0000040800000;
  uStack_40 = _UNK_15289f8e8;
  local_38 = ___xmm_40800000404000003fc0000040800000;
  uStack_30 = _UNK_15289f8e8;
  while (testing::internal::DoubleNearPredFormat
                   (&local_88,"result[i]","expected[i]","0.0001f",
                    (double)*(float *)((longlong)&local_48 + uVar6),
                    (double)*(float *)((longlong)&local_68 + uVar6),dVar1),
        uVar2._Mypair._Myval2 = local_88.message_._Mypair._Myval2, local_88.success_ != false) {
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    uVar6 = uVar6 + 4;
    if (0x1f < uVar6) {
      return;
    }
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_70);
  if (local_88.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)local_88.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
      pcVar4 = *(char **)local_88.message_._Mypair._Myval2;
    }
  }
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_78,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                       ,0x29a,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_78);
  if (local_70._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_70._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_70._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  if (local_88.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             local_88.message_._Mypair._Myval2);
  ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  return;
}

// `scalar_deleting_destructor' @ 14c634030

void * __thiscall
T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c634070

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_CompoundAssignmentDiv_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6340b0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6340f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c634178) */
/* WARNING: Removing unreachable block (ram,0x00014c6341cb) */
/* WARNING: Removing unreachable block (ram,0x00014c6341ce) */
/* WARNING: Removing unreachable block (ram,0x00014c63420f) */
/* WARNING: Removing unreachable block (ram,0x00014c634223) */
/* WARNING: Removing unreachable block (ram,0x00014c634238) */
/* WARNING: Removing unreachable block (ram,0x00014c634252) */
/* WARNING: Removing unreachable block (ram,0x00014c634257) */
/* WARNING: Removing unreachable block (ram,0x00014c634274) */
/* WARNING: Removing unreachable block (ram,0x00014c634288) */
/* WARNING: Removing unreachable block (ram,0x00014c634292) */
/* WARNING: Removing unreachable block (ram,0x00014c6342a7) */

void __thiscall
T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c6342d0

void * __thiscall
T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c634310

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_CompoundAssignmentMul_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c634350

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c634390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c634414) */
/* WARNING: Removing unreachable block (ram,0x00014c634467) */
/* WARNING: Removing unreachable block (ram,0x00014c63446a) */
/* WARNING: Removing unreachable block (ram,0x00014c6344ab) */
/* WARNING: Removing unreachable block (ram,0x00014c6344bf) */
/* WARNING: Removing unreachable block (ram,0x00014c6344d4) */
/* WARNING: Removing unreachable block (ram,0x00014c6344ee) */
/* WARNING: Removing unreachable block (ram,0x00014c6344f3) */
/* WARNING: Removing unreachable block (ram,0x00014c634510) */
/* WARNING: Removing unreachable block (ram,0x00014c634524) */
/* WARNING: Removing unreachable block (ram,0x00014c63452e) */
/* WARNING: Removing unreachable block (ram,0x00014c634543) */

void __thiscall
T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c634570

void * __thiscall
T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6345b0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_CompoundAssignmentSub_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6345f0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c634630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c6346b8) */
/* WARNING: Removing unreachable block (ram,0x00014c63470b) */
/* WARNING: Removing unreachable block (ram,0x00014c63470e) */
/* WARNING: Removing unreachable block (ram,0x00014c63474f) */
/* WARNING: Removing unreachable block (ram,0x00014c634763) */
/* WARNING: Removing unreachable block (ram,0x00014c634778) */
/* WARNING: Removing unreachable block (ram,0x00014c634792) */
/* WARNING: Removing unreachable block (ram,0x00014c634797) */
/* WARNING: Removing unreachable block (ram,0x00014c6347b4) */
/* WARNING: Removing unreachable block (ram,0x00014c6347c8) */
/* WARNING: Removing unreachable block (ram,0x00014c6347d2) */
/* WARNING: Removing unreachable block (ram,0x00014c6347e7) */

void __thiscall
T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c634810

void * __thiscall
T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c634850

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_CompoundAssignmentAdd_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c634890

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6348d0

void __thiscall
T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x276,pcVar2);
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

// `scalar_deleting_destructor' @ 14c634990

void * __thiscall
T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::_scalar_deleting_destructor_
          (T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,uint param_1
          )

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6349d0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::CreateTest
          (TestFactoryImpl<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7__T256Test_Sum_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c634a10

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c634a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c634ad2) */
/* WARNING: Removing unreachable block (ram,0x00014c634b25) */
/* WARNING: Removing unreachable block (ram,0x00014c634b28) */
/* WARNING: Removing unreachable block (ram,0x00014c634b69) */
/* WARNING: Removing unreachable block (ram,0x00014c634b7d) */
/* WARNING: Removing unreachable block (ram,0x00014c634b92) */
/* WARNING: Removing unreachable block (ram,0x00014c634bac) */
/* WARNING: Removing unreachable block (ram,0x00014c634bb1) */
/* WARNING: Removing unreachable block (ram,0x00014c634bce) */
/* WARNING: Removing unreachable block (ram,0x00014c634be2) */
/* WARNING: Removing unreachable block (ram,0x00014c634bec) */
/* WARNING: Removing unreachable block (ram,0x00014c634c01) */

void __thiscall
T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c634c30

void * __thiscall
T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c634c70

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_LoadSingleValue_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c634cb0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c634cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *this_00;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined1 auStackY_108 [32];
  AssertionResult local_d8;
  AssertHelper local_c8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  _Bxty local_90;
  undefined8 local_80;
  ulonglong uStack_78;
  _Bxty local_70;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar14 = 0;
  local_b8 = ___xmm_4080000040400000400000003f800000;
  uStack_b0 = _UNK_15076c058;
  local_a8 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_a0 = _UNK_152894998;
  local_50 = ___xmm_4080000040400000400000003f800000;
  uStack_48 = _UNK_15076c058;
  local_40 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_38 = _UNK_152894998;
  do {
    pfVar15 = (float *)((longlong)&local_b8 + uVar14);
    pfVar13 = (float *)((longlong)&local_50 + uVar14);
    if (*pfVar15 == *pfVar13) {
      testing::AssertionSuccess(&local_d8);
    }
    else {
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_70,pfVar15,pfVar13);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_90,pfVar13,pfVar15);
      testing::internal::EqFailure(&local_d8,"result[i]","expected[i]",pbVar6,pbVar5,false);
      if (0xf < uStack_78) {
        pvVar1 = (void *)CONCAT71(local_90._1_7_,local_90._Buf[0]);
        uVar12 = uStack_78 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_78 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c634e69;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_90._Buf[0] = '\0';
      local_80 = uVar2;
      uStack_78 = uVar3;
      if (0xf < local_58) {
        uVar12 = local_58 + 1;
        uVar9 = local_70._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_70._Ptr + -8);
          uVar12 = local_58 + 0x28;
          if ((char *)0x1f < local_70._Ptr + (-8 - uVar9)) {
LAB_14c634e69:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar4._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_c0);
      if (local_d8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_d8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_d8.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_c8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                           ,0x26a,pcVar10);
      testing::internal::AssertHelper::operator=(this_00,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_c8);
      if (local_c0._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_c0._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_c0._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_d8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_d8.message_._Mypair._Myval2,0x20);
      return;
    }
    if (local_d8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 4;
    if (0x1f < uVar14) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c634f60

void * __thiscall
T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c634fa0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_UnalignedLoadStore_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c634fe0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c635020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *this_00;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined1 auStackY_f8 [32];
  AssertionResult local_c8;
  AssertHelper local_b8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar14 = 0;
  local_a8 = ___xmm_4080000040400000400000003f800000;
  uStack_a0 = _UNK_15076c058;
  local_98 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_90 = _UNK_152894998;
  local_48 = ___xmm_4080000040400000400000003f800000;
  uStack_40 = _UNK_15076c058;
  local_38 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_30 = _UNK_152894998;
  do {
    pfVar15 = (float *)((longlong)&local_a8 + uVar14);
    pfVar13 = (float *)((longlong)&local_48 + uVar14);
    if (*pfVar15 == *pfVar13) {
      testing::AssertionSuccess(&local_c8);
    }
    else {
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_68,pfVar15,pfVar13);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_88,pfVar13,pfVar15);
      testing::internal::EqFailure(&local_c8,"result[i]","expected[i]",pbVar6,pbVar5,false);
      if (0xf < uStack_70) {
        pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
        uVar12 = uStack_70 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_70 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c635199;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_88._Buf[0] = '\0';
      local_78 = uVar2;
      uStack_70 = uVar3;
      if (0xf < local_50) {
        uVar12 = local_50 + 1;
        uVar9 = local_68._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_68._Ptr + -8);
          uVar12 = local_50 + 0x28;
          if ((char *)0x1f < local_68._Ptr + (-8 - uVar9)) {
LAB_14c635199:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_b0);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_c8.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_b8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                           ,0x25f,pcVar10);
      testing::internal::AssertHelper::operator=(this_00,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_b8);
      if (local_b0._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_b0._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_b0._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
      return;
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 4;
    if (0x1f < uVar14) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c635290

void * __thiscall
T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6352d0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_FromUnalignedSource_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c635310

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c635350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this
          )

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *this_00;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined1 auStackY_118 [32];
  AssertionResult local_e8;
  AssertHelper local_d8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_28;
  
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar14 = 0;
  local_c8 = ___xmm_4080000040400000400000003f800000;
  uStack_c0 = _UNK_15076c058;
  local_b8 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_b0 = _UNK_152894998;
  local_58 = ___xmm_4080000040400000400000003f800000;
  uStack_50 = _UNK_15076c058;
  local_48 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_40 = _UNK_152894998;
  do {
    pfVar15 = (float *)((longlong)&local_c8 + uVar14);
    pfVar13 = (float *)((longlong)&local_58 + uVar14);
    if (*pfVar15 == *pfVar13) {
      testing::AssertionSuccess(&local_e8);
    }
    else {
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,pfVar15,pfVar13);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_98,pfVar13,pfVar15);
      testing::internal::EqFailure(&local_e8,"result[i]","expected[i]",pbVar6,pbVar5,false);
      if (0xf < uStack_80) {
        pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        uVar12 = uStack_80 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_80 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c6354ce;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_98._Buf[0] = '\0';
      local_88 = uVar2;
      uStack_80 = uVar3;
      if (0xf < local_60) {
        uVar12 = local_60 + 1;
        uVar9 = local_78._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_78._Ptr + -8);
          uVar12 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar9)) {
LAB_14c6354ce:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar4._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
    if (local_e8.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_d0);
      if (local_e8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_e8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_e8.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_d8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                           ,0x255,pcVar10);
      testing::internal::AssertHelper::operator=(this_00,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_d8);
      if (local_d0._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_d0._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_d0._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_e8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
      return;
    }
    if (local_e8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 4;
    if (0x1f < uVar14) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c6355c0

void * __thiscall
T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this
          ,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c635600

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_AlignedLoadStore_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c635640

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c635680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *this_00;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined1 auStackY_108 [32];
  AssertionResult local_d8;
  AssertHelper local_c8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_28;
  
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar14 = 0;
  local_b8 = ___xmm_4080000040400000400000003f800000;
  uStack_b0 = _UNK_15076c058;
  local_a8 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_a0 = _UNK_152894998;
  local_58 = ___xmm_4080000040400000400000003f800000;
  uStack_50 = _UNK_15076c058;
  local_48 = ___xmm_4100000040e0000040c0000040a00000;
  uStack_40 = _UNK_152894998;
  do {
    pfVar15 = (float *)((longlong)&local_b8 + uVar14);
    pfVar13 = (float *)((longlong)&local_58 + uVar14);
    if (*pfVar15 == *pfVar13) {
      testing::AssertionSuccess(&local_d8);
    }
    else {
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,pfVar15,pfVar13);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_98,pfVar13,pfVar15);
      testing::internal::EqFailure(&local_d8,"result[i]","expected[i]",pbVar6,pbVar5,false);
      if (0xf < uStack_80) {
        pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        uVar12 = uStack_80 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_80 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c6357f9;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_98._Buf[0] = '\0';
      local_88 = uVar2;
      uStack_80 = uVar3;
      if (0xf < local_60) {
        uVar12 = local_60 + 1;
        uVar9 = local_78._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_78._Ptr + -8);
          uVar12 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar9)) {
LAB_14c6357f9:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar4._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_c0);
      if (local_d8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_d8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_d8.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_c8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                           ,0x24a,pcVar10);
      testing::internal::AssertHelper::operator=(this_00,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_c8);
      if (local_c0._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_c0._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_c0._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_d8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_d8.message_._Mypair._Myval2,0x20);
      return;
    }
    if (local_d8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 4;
    if (0x1f < uVar14) {
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c6358f0

void * __thiscall
T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c635930

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_FromAlignedSource_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c635970

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6359b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c635a34) */
/* WARNING: Removing unreachable block (ram,0x00014c635a87) */
/* WARNING: Removing unreachable block (ram,0x00014c635a8a) */
/* WARNING: Removing unreachable block (ram,0x00014c635acb) */
/* WARNING: Removing unreachable block (ram,0x00014c635adf) */
/* WARNING: Removing unreachable block (ram,0x00014c635af4) */
/* WARNING: Removing unreachable block (ram,0x00014c635b0e) */
/* WARNING: Removing unreachable block (ram,0x00014c635b13) */
/* WARNING: Removing unreachable block (ram,0x00014c635b30) */
/* WARNING: Removing unreachable block (ram,0x00014c635b44) */
/* WARNING: Removing unreachable block (ram,0x00014c635b4e) */
/* WARNING: Removing unreachable block (ram,0x00014c635b63) */

void __thiscall
T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
TestBody(T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
         *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c635b90

void * __thiscall
T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c635bd0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_ConstructFromSingleValue_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c635c10

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c635c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c635cd8) */
/* WARNING: Removing unreachable block (ram,0x00014c635d2b) */
/* WARNING: Removing unreachable block (ram,0x00014c635d2e) */
/* WARNING: Removing unreachable block (ram,0x00014c635d6f) */
/* WARNING: Removing unreachable block (ram,0x00014c635d83) */
/* WARNING: Removing unreachable block (ram,0x00014c635d98) */
/* WARNING: Removing unreachable block (ram,0x00014c635db2) */
/* WARNING: Removing unreachable block (ram,0x00014c635db7) */
/* WARNING: Removing unreachable block (ram,0x00014c635dd4) */
/* WARNING: Removing unreachable block (ram,0x00014c635de8) */
/* WARNING: Removing unreachable block (ram,0x00014c635df2) */
/* WARNING: Removing unreachable block (ram,0x00014c635e07) */

void __thiscall
T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c635e30

void * __thiscall
T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c635e70

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_ConstructFromArgs_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c635eb0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c635ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c63612a) */
/* WARNING: Removing unreachable block (ram,0x00014c636170) */
/* WARNING: Removing unreachable block (ram,0x00014c636173) */
/* WARNING: Removing unreachable block (ram,0x00014c6361b3) */
/* WARNING: Removing unreachable block (ram,0x00014c6361c6) */
/* WARNING: Removing unreachable block (ram,0x00014c6361db) */
/* WARNING: Removing unreachable block (ram,0x00014c6361f1) */
/* WARNING: Removing unreachable block (ram,0x00014c6361f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  AssertHelper *this_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [16];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_e8;
  AssertionResult local_e0 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c0 = 0xffffffffffffffff;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  local_e0[0]._4_4_ = 0xffffffff;
  local_a0._Ptr = (char *)0x0;
  local_a0._8_8_ = 0;
  local_f8._8_4_ = 0xffffffff;
  local_f8._0_8_ = 0xffffffffffffffff;
  local_f8._12_4_ = 0xffffffff;
  local_b8 = 0xffffffffffffffff;
  if (local_f8._8_8_ != auVar7._8_8_) {
    local_e0[0].success_ = false;
    local_e0[0]._1_3_ = 0xffffff;
    local_e0[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_e8);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0
                        ,local_e0,"equal(~v1, v2)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)local_f8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x233,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_f8);
    if (0xf < uStack_88) {
      uVar6 = uStack_88 + 1;
      uVar4 = local_a0._Ptr;
      if (0xfff < uVar6) {
        uVar4 = *(undefined8 *)(local_a0._Ptr + -8);
        uVar6 = uStack_88 + 0x28;
        if ((char *)0x1f < local_a0._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar6);
    }
    local_a0._Ptr = local_a0._Ptr & 0xffffffffffffff00;
    local_90 = ___xmm_000000000000000f0000000000000000;
    uStack_88 = _UNK_15076add8;
    if (local_e8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_e8._Mypair._Myval2 + 4) +
               (longlong)local_e8._Mypair._Myval2);
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar1._Mypair._Myval2 = local_e0[0].message_._Mypair._Myval2;
    if (local_e0[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e0[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c636360

void * __thiscall
T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6363a0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_BitwiseNOT_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6363e0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c636420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *this_00;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auStackY_98 [32];
  AssertionResult local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  AssertHelper local_48;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_40;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_68._4_4_ = 0x40000000;
  local_58 = 0x40a00000;
  uStack_54 = 0x40c00000;
  local_50 = 0x40e00000;
  lVar8 = 0x4000000000000000 - ___xmm_40800000404000004000000000000000;
  if (lVar8 == 0) {
    lVar8 = 0x4080000040400000 - _UNK_1528a0288;
  }
  lVar5 = 0x40c0000040a00000 - ___xmm_0000000040e0000040c0000040a00000;
  if (lVar5 == 0) {
    lVar5 = 0x40e00000 - _UNK_1528849e8;
  }
  if ((lVar8 != 0) || (lVar5 != 0)) {
    local_68.success_ = false;
    local_68._1_3_ = 0;
    local_68.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_40);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_68,"equal(v1 ^ v2, v12)","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x21d,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if (0xf < uStack_20) {
      pvVar1 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
      uVar9 = uStack_20 + 1;
      pvVar6 = pvVar1;
      if (0xfff < uVar9) {
        pvVar6 = *(void **)((longlong)pvVar1 + -8);
        uVar9 = uStack_20 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar6,uVar9);
    }
    local_38._Buf[0] = '\0';
    local_28 = ___xmm_000000000000000f0000000000000000;
    uStack_20 = _UNK_15076add8;
    if (local_40._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_40._Mypair._Myval2 + 4) +
               (longlong)local_40._Mypair._Myval2);
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_68.message_._Mypair._Myval2;
    if (local_68.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_68.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c636620

void * __thiscall
T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c636660

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_BitwiseXOR_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6366a0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6366e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *this_00;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auStackY_98 [32];
  AssertionResult local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  AssertHelper local_48;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_40;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_68._4_4_ = 0x40000000;
  local_58 = 0x40a00000;
  uStack_54 = 0x40c00000;
  local_50 = 0x40e00000;
  uStack_4c = 0x41000000;
  lVar8 = (longlong)&DAT_400000003f800000 - ___xmm_4080000040400000400000003f800000;
  if (lVar8 == 0) {
    lVar8 = 0x4080000040400000 - _UNK_15076c058;
  }
  lVar5 = 0x40c0000040a00000 - ___xmm_4100000040e0000040c0000040a00000;
  if (lVar5 == 0) {
    lVar5 = 0x4100000040e00000 - _UNK_152894998;
  }
  if ((lVar8 != 0) || (lVar5 != 0)) {
    local_68.success_ = false;
    local_68._1_3_ = 0x3f8000;
    local_68.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_40);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_68,"equal(v1 | v2, v12)","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_48,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x213,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_48);
    if (0xf < uStack_20) {
      pvVar1 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
      uVar9 = uStack_20 + 1;
      pvVar6 = pvVar1;
      if (0xfff < uVar9) {
        pvVar6 = *(void **)((longlong)pvVar1 + -8);
        uVar9 = uStack_20 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar6,uVar9);
    }
    local_38._Buf[0] = '\0';
    local_28 = ___xmm_000000000000000f0000000000000000;
    uStack_20 = _UNK_15076add8;
    if (local_40._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_40._Mypair._Myval2 + 4) +
               (longlong)local_40._Mypair._Myval2);
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_68.message_._Mypair._Myval2;
    if (local_68.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_68.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c6368e0

void * __thiscall
T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c636920

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_BitwiseOR_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c636960

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6369a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c63767c) */
/* WARNING: Removing unreachable block (ram,0x00014c6376c2) */
/* WARNING: Removing unreachable block (ram,0x00014c6376c5) */
/* WARNING: Removing unreachable block (ram,0x00014c637705) */
/* WARNING: Removing unreachable block (ram,0x00014c637718) */
/* WARNING: Removing unreachable block (ram,0x00014c63772d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  T256<trimd::scalar::T128<float>_> *pTVar7;
  Message *pMVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  AssertHelper *pAVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulong64 uVar19;
  undefined1 auStackY_228 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1f8;
  AssertionResult local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  T256<trimd::scalar::T128<float>_> local_1d0;
  T256<trimd::scalar::T128<float>_> local_1b0;
  T256<trimd::scalar::T128<float>_> local_190;
  T256<trimd::scalar::T128<float>_> local_170;
  T256<trimd::scalar::T128<float>_> local_150;
  T256<trimd::scalar::T128<float>_> local_130;
  T256<trimd::scalar::T128<float>_> local_110;
  T256<trimd::scalar::T128<float>_> local_f0;
  _Bxty local_d0;
  undefined8 local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  
  lVar5 = _UNK_1528a02d8;
  lVar12 = ___xmm_41000000000000000000000000000000;
  lVar4 = _UNK_15140dc98;
  lVar17 = ___xmm_00000000404000000000000000000000;
  lVar3 = _UNK_150a07f48;
  lVar11 = ___xmm_00000000000000000000000040a00000;
  lVar2 = _UNK_15094b768;
  lVar18 = ___xmm_40800000000000000000000000000000;
  lVar1 = _UNK_15076ace8;
  lVar16 = ___xmm_00000000000000004000000000000000;
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1b0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_1b0.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_190.data1.data._Elems[0] = 0.0;
  local_1b0.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_1b0.data2.data._Elems._8_8_ = _UNK_152894998;
  local_190.data1.data._Elems[1] = -NAN;
  local_190.data2.data._Elems = (array<float,4>)ZEXT416(0);
  local_190.data1.data._Elems[2] = 0.0;
  local_190.data1.data._Elems[3] = 0.0;
  local_170.data1.data._Elems[0] = 0.0;
  local_170.data1.data._Elems[1] = 0.0;
  local_170.data1.data._Elems[2] = -NAN;
  local_170.data2.data._Elems = (array<float,4>)ZEXT416(0);
  local_170.data1.data._Elems[3] = 0.0;
  local_150.data1.data._Elems[0] = 0.0;
  local_150.data1.data._Elems[1] = 0.0;
  local_150.data1.data._Elems[2] = 0.0;
  local_150.data2.data._Elems = (array<float,4>)ZEXT416(0);
  local_150.data1.data._Elems[3] = -NAN;
  local_130.data1.data._Elems[0] = 0.0;
  local_130.data1.data._Elems[1] = 0.0;
  local_130.data1.data._Elems[2] = 0.0;
  local_130.data1.data._Elems[3] = 0.0;
  local_130.data2.data._Elems = (array<float,4>)ZEXT416(0xffffffff);
  local_110.data1.data._Elems[0] = 0.0;
  local_110.data1.data._Elems[1] = 0.0;
  local_110.data1.data._Elems[2] = 0.0;
  local_110.data1.data._Elems[3] = 0.0;
  local_110.data2.data._Elems[0] = 0.0;
  local_110.data2.data._Elems[1] = -NAN;
  local_110.data2.data._Elems[2] = 0.0;
  local_110.data2.data._Elems[3] = 0.0;
  local_f0.data1.data._Elems[0] = 0.0;
  local_f0.data1.data._Elems[1] = 0.0;
  local_f0.data2.data._Elems._0_12_ = ZEXT412(0xffffffff) << 0x40;
  local_f0.data2.data._Elems[3] = 0.0;
  local_f0.data1.data._Elems[2] = 0.0;
  local_f0.data1.data._Elems[3] = 0.0;
  local_d0._Ptr = (char *)0x0;
  local_d0._8_8_ = 0;
  local_1d0.data1.data._Elems._0_12_ = ZEXT812(0);
  local_1d0.data1.data._Elems[3] = -NAN;
  local_c0 = 0;
  uStack_b8 = 0xffffffff00000000;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1f0._0_4_ = 0x3f800000;
  local_1f0._4_4_ = 0;
  local_1f0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  lVar15 = 0x3f800000 - ___xmm_0000000000000000000000003f800000;
  if (lVar15 == 0) {
    lVar15 = -_UNK_1506894f8;
  }
  if (lVar15 == 0) {
    pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                       (&local_1d0,&local_1b0,&local_190);
    lVar16 = *(longlong *)(pTVar7->data1).data._Elems - lVar16;
    if (lVar16 == 0) {
      lVar16 = *(longlong *)((pTVar7->data1).data._Elems + 2) - lVar1;
    }
    lVar15 = *(longlong *)(pTVar7->data2).data._Elems;
    if (lVar15 == 0) {
      lVar15 = *(longlong *)((pTVar7->data2).data._Elems + 2);
    }
    if ((lVar16 == 0) && (lVar15 == 0)) {
      pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                         (&local_190,&local_1b0,&local_170);
      lVar17 = *(longlong *)(pTVar7->data1).data._Elems - lVar17;
      if (lVar17 == 0) {
        lVar17 = *(longlong *)((pTVar7->data1).data._Elems + 2) - lVar4;
      }
      lVar15 = *(longlong *)(pTVar7->data2).data._Elems;
      if (lVar15 == 0) {
        lVar15 = *(longlong *)((pTVar7->data2).data._Elems + 2);
      }
      if ((lVar17 == 0) && (lVar15 == 0)) {
        pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                           (&local_170,&local_1b0,&local_150);
        lVar18 = *(longlong *)(pTVar7->data1).data._Elems - lVar18;
        if (lVar18 == 0) {
          lVar18 = *(longlong *)((pTVar7->data1).data._Elems + 2) - lVar2;
        }
        lVar15 = *(longlong *)(pTVar7->data2).data._Elems;
        if (lVar15 == 0) {
          lVar15 = *(longlong *)((pTVar7->data2).data._Elems + 2);
        }
        if ((lVar18 == 0) && (lVar15 == 0)) {
          pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                             (&local_150,&local_1b0,&local_130);
          lVar15 = *(longlong *)(pTVar7->data1).data._Elems;
          if (lVar15 == 0) {
            lVar15 = *(longlong *)((pTVar7->data1).data._Elems + 2);
          }
          lVar11 = *(longlong *)(pTVar7->data2).data._Elems - lVar11;
          if (lVar11 == 0) {
            lVar11 = *(longlong *)((pTVar7->data2).data._Elems + 2) - lVar3;
          }
          if ((lVar15 == 0) && (lVar11 == 0)) {
            pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                               (&local_130,&local_1b0,&local_110);
            lVar15 = *(longlong *)(pTVar7->data1).data._Elems;
            if (lVar15 == 0) {
              lVar15 = *(longlong *)((pTVar7->data1).data._Elems + 2);
            }
            lVar16 = *(longlong *)(pTVar7->data2).data._Elems -
                     ___xmm_000000000000000040c0000000000000;
            if (lVar16 == 0) {
              lVar16 = *(longlong *)((pTVar7->data2).data._Elems + 2) - _UNK_1528a0258;
            }
            if ((lVar15 == 0) && (lVar16 == 0)) {
              pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                                 (&local_110,&local_1b0,&local_f0);
              lVar15 = *(longlong *)(pTVar7->data1).data._Elems;
              if (lVar15 == 0) {
                lVar15 = *(longlong *)((pTVar7->data1).data._Elems + 2);
              }
              lVar16 = *(longlong *)(pTVar7->data2).data._Elems -
                       ___xmm_0000000040e000000000000000000000;
              if (lVar16 == 0) {
                lVar16 = *(longlong *)((pTVar7->data2).data._Elems + 2) - _UNK_1528a0268;
              }
              if ((lVar15 == 0) && (lVar16 == 0)) {
                pTVar7 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                                   (&local_f0,&local_1b0,
                                    (T256<trimd::scalar::T128<float>_> *)&local_d0);
                lVar15 = *(longlong *)(pTVar7->data1).data._Elems;
                if (lVar15 == 0) {
                  lVar15 = *(longlong *)((pTVar7->data1).data._Elems + 2);
                }
                lVar12 = *(longlong *)(pTVar7->data2).data._Elems - lVar12;
                if (lVar12 == 0) {
                  lVar12 = *(longlong *)((pTVar7->data2).data._Elems + 2) - lVar5;
                }
                if ((lVar15 == 0) && (lVar12 == 0)) {
                  return;
                }
                local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
                local_1f0.message_._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
                pMVar8 = (Message *)testing::Message::Message((Message *)&local_1d0);
                pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_d0,&local_1f0,"equal(v & m9, vm9)","false","true");
                if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
                  pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (pbVar9->_Mypair)._Myval2._Bx._Ptr;
                }
                pAVar10 = (AssertHelper *)
                          testing::internal::AssertHelper::AssertHelper
                                    ((AssertHelper *)&local_1f8,kFatalFailure,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                     ,0x209,(char *)pbVar9);
                testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
                testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1f8);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_d0);
                local_1f8._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                        )local_1d0.data1.data._Elems._0_8_;
                goto LAB_14c63775e;
              }
              local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
              local_1f0.message_._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
              pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_d0,&local_1f0,"equal(v & m8, vm8)","false","true");
              if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
                pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar9->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar10 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  ((AssertHelper *)&local_1d0,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                   ,0x208,(char *)pbVar9);
              testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
              if (0xf < uStack_b8) {
                uVar19 = uStack_b8 + 1;
                uVar13 = local_d0._Ptr;
                if (0xfff < uVar19) {
                  uVar19 = uStack_b8 + 0x28;
                  uVar13 = *(char **)(local_d0._Ptr + -8);
                  if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))
                     ) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                goto LAB_14c637743;
              }
            }
            else {
              local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
              local_1f0.message_._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
              pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_d0,&local_1f0,"equal(v & m7, vm7)","false","true");
              if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
                pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar9->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar10 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  ((AssertHelper *)&local_1d0,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                   ,0x207,(char *)pbVar9);
              testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
              if (0xf < uStack_b8) {
                uVar19 = uStack_b8 + 1;
                uVar13 = local_d0._Ptr;
                if (0xfff < uVar19) {
                  uVar19 = uStack_b8 + 0x28;
                  uVar13 = *(char **)(local_d0._Ptr + -8);
                  if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))
                     ) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                goto LAB_14c637743;
              }
            }
          }
          else {
            local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
            local_1f0.message_._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
            pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
            pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_d0,&local_1f0,"equal(v & m6, vm6)","false","true");
            if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
              pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar9->_Mypair)._Myval2._Bx._Ptr;
            }
            pAVar10 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                ((AssertHelper *)&local_1d0,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                 ,0x206,(char *)pbVar9);
            testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
            if (0xf < uStack_b8) {
              uVar19 = uStack_b8 + 1;
              uVar13 = local_d0._Ptr;
              if (0xfff < uVar19) {
                uVar19 = uStack_b8 + 0x28;
                uVar13 = *(char **)(local_d0._Ptr + -8);
                if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              goto LAB_14c637743;
            }
          }
        }
        else {
          local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
          local_1f0.message_._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
          pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
          pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_d0,&local_1f0,"equal(v & m5, vm5)","false","true");
          if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
            pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar9->_Mypair)._Myval2._Bx._Ptr;
          }
          pAVar10 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              ((AssertHelper *)&local_1d0,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                               ,0x205,(char *)pbVar9);
          testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
          if (0xf < uStack_b8) {
            uVar19 = uStack_b8 + 1;
            uVar13 = local_d0._Ptr;
            if (0xfff < uVar19) {
              uVar19 = uStack_b8 + 0x28;
              uVar13 = *(char **)(local_d0._Ptr + -8);
              if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            goto LAB_14c637743;
          }
        }
      }
      else {
        local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
        local_1f0.message_._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
        pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_d0,&local_1f0,"equal(v & m4, vm4)","false","true");
        if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
          pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar9->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            ((AssertHelper *)&local_1d0,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                             ,0x204,(char *)pbVar9);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
        if (0xf < uStack_b8) {
          uVar19 = uStack_b8 + 1;
          uVar13 = local_d0._Ptr;
          if (0xfff < uVar19) {
            uVar19 = uStack_b8 + 0x28;
            uVar13 = *(char **)(local_d0._Ptr + -8);
            if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          goto LAB_14c637743;
        }
      }
    }
    else {
      local_1f0._0_4_ = local_1f0._0_4_ & 0xffffff00;
      local_1f0.message_._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
      pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_d0,&local_1f0,"equal(v & m3, vm3)","false","true");
      if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
        pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar9->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar10 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          ((AssertHelper *)&local_1d0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                           ,0x203,(char *)pbVar9);
      testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
      if (0xf < uStack_b8) {
        uVar19 = uStack_b8 + 1;
        uVar13 = local_d0._Ptr;
        if (0xfff < uVar19) {
          uVar19 = uStack_b8 + 0x28;
          uVar13 = *(char **)(local_d0._Ptr + -8);
          if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        goto LAB_14c637743;
      }
    }
  }
  else {
    local_1f0._0_4_ = 0x3f800000;
    local_1f0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_1f8);
    pbVar9 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0
                        ,&local_1f0,"equal(v & m2, vm2)","false","true");
    if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar9->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1d0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x202,(char *)pbVar9);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1d0);
    if (0xf < uStack_b8) {
      uVar19 = uStack_b8 + 1;
      uVar13 = local_d0._Ptr;
      if (0xfff < uVar19) {
        uVar13 = *(undefined8 *)(local_d0._Ptr + -8);
        uVar19 = uStack_b8 + 0x28;
        if ((char *)0x1f < local_d0._Ptr + (-8 - uVar13)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
LAB_14c637743:
      ::operator_delete((void *)uVar13,uVar19);
    }
  }
  local_c0 = ___xmm_000000000000000f0000000000000000;
  uStack_b8 = _UNK_15076add8;
  local_d0._Ptr = local_d0._Ptr & 0xffffffffffffff00;
LAB_14c63775e:
  if (local_1f8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar14 = (undefined8 *)
              ((longlong)local_1f8._Mypair._Myval2 +
              (longlong)*(int *)(*(longlong *)local_1f8._Mypair._Myval2 + 4));
    (**(code **)*puVar14)(puVar14,1);
  }
  uVar6._Mypair._Myval2 = local_1f0.message_._Mypair._Myval2;
  if (local_1f0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_1f0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c637800

void * __thiscall
T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c637840

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_BitwiseAND_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c637880

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6378c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c637bef) */
/* WARNING: Removing unreachable block (ram,0x00014c637c31) */
/* WARNING: Removing unreachable block (ram,0x00014c637c34) */
/* WARNING: Removing unreachable block (ram,0x00014c637c76) */
/* WARNING: Removing unreachable block (ram,0x00014c637c8d) */
/* WARNING: Removing unreachable block (ram,0x00014c637ca6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  AssertHelper *pAVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [16];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_98;
  AssertionResult local_90 [2];
  undefined8 local_70;
  undefined8 local_68;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_70 = 0;
  local_68 = 0;
  auVar10._8_4_ = 0xffffffff;
  auVar10._0_8_ = 0xffffffffffffffff;
  auVar10._12_4_ = 0xffffffff;
  local_a8._8_4_ = 0xffffffff;
  local_a8._0_8_ = 0xffffffffffffffff;
  local_a8._12_4_ = 0xffffffff;
  local_50._Ptr = (char *)0xffffffffffffffff;
  local_50._8_8_ = 0xffffffffffffffff;
  lVar8 = ___xmm_ffffffffffffffffffffffffffffffff + 1;
  if (lVar8 == 0) {
    lVar8 = _UNK_15060db28 + 1;
  }
  lVar5 = ___xmm_ffffffffffffffffffffffffffffffff + 1;
  if (lVar5 == 0) {
    lVar5 = _UNK_15060db28 - auVar10._8_8_;
  }
  if ((lVar8 == 0) && (lVar5 == 0)) {
    local_70 = 0xffffffffffffffff;
    auVar11._8_4_ = 0xffffffff;
    auVar11._0_8_ = 0xffffffffffffffff;
    auVar11._12_4_ = 0xffffffff;
    local_68 = 0xffffffffffffffff;
    if (auVar11._8_8_ == local_a8._8_8_) {
      return;
    }
    local_90[0].success_ = false;
    local_90[0]._1_7_ = 0;
    local_90[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_a8 = auVar11;
    pMVar2 = (Message *)testing::Message::Message((Message *)local_a8);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_90,"equal(v1 >= v4, m14)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_98,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0x1a7,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_98);
    if (0xf < uStack_38) {
      uVar9 = uStack_38 + 1;
      uVar6 = local_50._Ptr;
      if (0xfff < uVar9) {
        uVar6 = *(undefined8 *)(local_50._Ptr + -8);
        uVar9 = uStack_38 + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar9);
    }
    local_98._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._0_8_;
  }
  else {
    local_90[0].success_ = false;
    local_90[0]._1_7_ = 0xffffffffffffff;
    local_90[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_98);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_90,"equal(v1 >= v2, m12)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0x1a5,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_a8);
    if (0xf < uStack_38) {
      uVar9 = uStack_38 + 1;
      uVar6 = local_50._Ptr;
      if (0xfff < uVar9) {
        uVar6 = *(undefined8 *)(local_50._Ptr + -8);
        uVar9 = uStack_38 + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar9);
    }
  }
  local_50._Ptr = local_50._Ptr & 0xffffffffffffff00;
  local_40 = ___xmm_000000000000000f0000000000000000;
  uStack_38 = _UNK_15076add8;
  if (local_98._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar7 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_98._Myval2 + 4) + (longlong)local_98._Myval2);
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar1._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
  if (local_90[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c637e10

void * __thiscall
T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c637e50

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &
         ___7__T256Test_GreaterThanOrEqual_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c637e90

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c637ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c6381eb) */
/* WARNING: Removing unreachable block (ram,0x00014c63822d) */
/* WARNING: Removing unreachable block (ram,0x00014c638230) */
/* WARNING: Removing unreachable block (ram,0x00014c638272) */
/* WARNING: Removing unreachable block (ram,0x00014c638289) */
/* WARNING: Removing unreachable block (ram,0x00014c6382a2) */
/* WARNING: Removing unreachable block (ram,0x00014c6382b8) */
/* WARNING: Removing unreachable block (ram,0x00014c6382fa) */
/* WARNING: Removing unreachable block (ram,0x00014c6382fd) */
/* WARNING: Removing unreachable block (ram,0x00014c63833b) */
/* WARNING: Removing unreachable block (ram,0x00014c63834e) */
/* WARNING: Removing unreachable block (ram,0x00014c638363) */
/* WARNING: Removing unreachable block (ram,0x00014c638379) */
/* WARNING: Removing unreachable block (ram,0x00014c63837e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  AssertHelper *this_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [16];
  AssertHelper local_98;
  AssertionResult local_90 [2];
  undefined8 local_70;
  undefined8 local_68;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_50._Ptr = (char *)0xffffffffffffffff;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  local_50._8_8_ = 0xffffffffffffffff;
  local_a8._8_8_ = auVar8._8_8_;
  local_70 = 0xffffffffffffffff;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  local_68 = 0xffffffffffffffff;
  if (auVar7._8_8_ != local_a8._8_8_) {
    local_90[0].success_ = false;
    local_90[0]._1_7_ = 0;
    local_90[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_a8 = auVar7;
    pMVar2 = (Message *)testing::Message::Message((Message *)local_a8);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_90,"equal(v1 > v4, m14)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_98,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x181,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_98);
    if (0xf < uStack_38) {
      uVar6 = uStack_38 + 1;
      uVar4 = local_50._Ptr;
      if (0xfff < uVar6) {
        uVar4 = *(undefined8 *)(local_50._Ptr + -8);
        uVar6 = uStack_38 + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar6);
    }
    local_50._Ptr = local_50._Ptr & 0xffffffffffffff00;
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if ((_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
         )local_a8._0_8_ !=
        (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
         )0x0) {
      puVar5 = (undefined8 *)
               ((longlong)(longlong *)local_a8._0_8_ +
               (longlong)*(int *)(*(longlong *)local_a8._0_8_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar1._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
    if (local_90[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_90[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c638400

void * __thiscall
T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c638440

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_GreaterThan_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c638480

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6384c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c638720) */
/* WARNING: Removing unreachable block (ram,0x00014c638762) */
/* WARNING: Removing unreachable block (ram,0x00014c638765) */
/* WARNING: Removing unreachable block (ram,0x00014c6387a3) */
/* WARNING: Removing unreachable block (ram,0x00014c6387b6) */
/* WARNING: Removing unreachable block (ram,0x00014c6387cb) */
/* WARNING: Removing unreachable block (ram,0x00014c6387e1) */
/* WARNING: Removing unreachable block (ram,0x00014c6387e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  AssertHelper *pAVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [16];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_98;
  AssertionResult local_90 [2];
  undefined8 local_70;
  undefined8 local_68;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  auVar10._8_4_ = 0xffffffff;
  auVar10._0_8_ = 0xffffffffffffffff;
  auVar10._12_4_ = 0xffffffff;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  local_50._Ptr = (char *)0x0;
  local_50._8_8_ = 0;
  local_a8._8_8_ = auVar11._8_8_;
  uVar6 = local_a8._8_8_;
  local_a8 = ZEXT816(0);
  lVar8 = ___xmm_ffffffffffffffffffffffffffffffff + 1;
  if (lVar8 == 0) {
    lVar8 = _UNK_15060db28 + 1;
  }
  lVar5 = ___xmm_ffffffffffffffffffffffffffffffff + 1;
  if (lVar5 == 0) {
    lVar5 = _UNK_15060db28 - auVar10._8_8_;
  }
  if ((lVar8 == 0) && (lVar5 == 0)) {
    local_a8._8_4_ = 0xffffffff;
    local_a8._0_8_ = 0xffffffffffffffff;
    local_a8._12_4_ = 0xffffffff;
    if (local_a8._8_8_ == uVar6) {
      return;
    }
    local_90[0].success_ = false;
    local_90[0]._1_7_ = 0xffffffffffffff;
    local_90[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_98);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_90,"equal(v1 <= v3, m13)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0x15a,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_a8);
    if (uStack_38 < 0x10) goto LAB_14c638982;
    uVar9 = uStack_38 + 1;
    uVar6 = local_50._Ptr;
    if (0xfff < uVar9) {
      uVar9 = uStack_38 + 0x28;
      uVar6 = *(char **)(local_50._Ptr + -8);
      if ((char *)0x1f < local_50._Ptr + (-8 - (longlong)*(char **)(local_50._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    local_90[0].success_ = false;
    local_90[0]._1_7_ = 0xffffffffffffff;
    local_90[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_98);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_90,"equal(v1 <= v2, m12)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0x159,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_a8);
    if (uStack_38 < 0x10) goto LAB_14c638982;
    uVar9 = uStack_38 + 1;
    uVar6 = local_50._Ptr;
    if (0xfff < uVar9) {
      uVar6 = *(undefined8 *)(local_50._Ptr + -8);
      uVar9 = uStack_38 + 0x28;
      if ((char *)0x1f < local_50._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete((void *)uVar6,uVar9);
LAB_14c638982:
  local_50._Ptr = local_50._Ptr & 0xffffffffffffff00;
  local_40 = ___xmm_000000000000000f0000000000000000;
  uStack_38 = _UNK_15076add8;
  if (local_98._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar7 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_98._Mypair._Myval2 + 4) +
             (longlong)local_98._Mypair._Myval2);
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar1._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
  if (local_90[0].message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_90[0].message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c638a10

void * __thiscall
T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c638a50

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_LessThanOrEqual_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c638a90

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c638ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c638d1c) */
/* WARNING: Removing unreachable block (ram,0x00014c638d5e) */
/* WARNING: Removing unreachable block (ram,0x00014c638d61) */
/* WARNING: Removing unreachable block (ram,0x00014c638d9f) */
/* WARNING: Removing unreachable block (ram,0x00014c638db2) */
/* WARNING: Removing unreachable block (ram,0x00014c638dc7) */
/* WARNING: Removing unreachable block (ram,0x00014c638ddd) */
/* WARNING: Removing unreachable block (ram,0x00014c638de2) */
/* WARNING: Removing unreachable block (ram,0x00014c638eb8) */
/* WARNING: Removing unreachable block (ram,0x00014c638efa) */
/* WARNING: Removing unreachable block (ram,0x00014c638efd) */
/* WARNING: Removing unreachable block (ram,0x00014c638f3b) */
/* WARNING: Removing unreachable block (ram,0x00014c638f4e) */
/* WARNING: Removing unreachable block (ram,0x00014c638f63) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  AssertHelper *this_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [16];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_98;
  AssertionResult local_90 [2];
  undefined8 local_70;
  undefined8 local_68;
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  auVar8._8_4_ = 0xffffffff;
  auVar8._0_8_ = 0xffffffffffffffff;
  auVar8._12_4_ = 0xffffffff;
  local_50._Ptr = (char *)0x0;
  local_50._8_8_ = 0;
  local_a8._8_8_ = auVar8._8_8_;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  if (auVar7._8_8_ != local_a8._8_8_) {
    local_90[0].success_ = false;
    local_90[0]._1_7_ = 0xffffffffffffff;
    local_90[0].message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_a8 = auVar7;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_98);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50
                        ,local_90,"equal(v1 < v3, m13)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)local_a8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x134,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_a8);
    if (0xf < uStack_38) {
      uVar6 = uStack_38 + 1;
      uVar4 = local_50._Ptr;
      if (0xfff < uVar6) {
        uVar4 = *(undefined8 *)(local_50._Ptr + -8);
        uVar6 = uStack_38 + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar6);
    }
    local_50._Ptr = local_50._Ptr & 0xffffffffffffff00;
    local_40 = ___xmm_000000000000000f0000000000000000;
    uStack_38 = _UNK_15076add8;
    if (local_98._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_98._Mypair._Myval2 + 4) +
               (longlong)local_98._Mypair._Myval2);
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar1._Mypair._Myval2 = local_90[0].message_._Mypair._Myval2;
    if (local_90[0].message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_90[0].message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c639000

void * __thiscall
T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c639040

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_LessThan_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c639080

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6390c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c639e51) */
/* WARNING: Removing unreachable block (ram,0x00014c639e9a) */
/* WARNING: Removing unreachable block (ram,0x00014c639e9d) */
/* WARNING: Removing unreachable block (ram,0x00014c639ee0) */
/* WARNING: Removing unreachable block (ram,0x00014c639ef6) */
/* WARNING: Removing unreachable block (ram,0x00014c639f0b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  T256<trimd::scalar::T128<float>_> *pTVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *pAVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulong64 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStackY_338 [32];
  undefined1 local_308 [16];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_2f8;
  AssertionResult local_2f0;
  undefined8 local_2e0;
  undefined8 local_2d8;
  T256<trimd::scalar::T128<float>_> local_2d0;
  T256<trimd::scalar::T128<float>_> local_2b0;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_270;
  undefined4 uStack_26c;
  longlong local_268;
  longlong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  longlong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  longlong local_210;
  longlong local_208;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1d0;
  longlong local_1c8;
  T256<trimd::scalar::T128<float>_> local_1b0;
  T256<trimd::scalar::T128<float>_> local_190;
  T256<trimd::scalar::T128<float>_> local_170;
  T256<trimd::scalar::T128<float>_> local_150;
  T256<trimd::scalar::T128<float>_> local_130;
  T256<trimd::scalar::T128<float>_> local_110;
  T256<trimd::scalar::T128<float>_> local_f0;
  T256<trimd::scalar::T128<float>_> local_d0;
  _Bxty local_b0;
  undefined8 local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_1b0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003fc00000;
  local_1b0.data1.data._Elems._8_8_ = _UNK_1528a0298;
  local_2b0.data1.data._Elems[0] = 0.0;
  local_2b0.data1.data._Elems[1] = 0.0;
  local_190.data1.data._Elems._0_8_ = ___xmm_4080000040400000402000003f800000;
  local_190.data1.data._Elems._8_8_ = _UNK_1528a02a8;
  local_2b0.data1.data._Elems[2] = 0.0;
  local_2b0.data1.data._Elems[3] = 0.0;
  local_170.data1.data._Elems._0_8_ = ___xmm_4080000040600000400000003f800000;
  local_170.data1.data._Elems._8_8_ = _UNK_1528a02b8;
  local_290 = 0xffffffff;
  local_150.data1.data._Elems._0_8_ = ___xmm_4090000040400000400000003f800000;
  local_150.data1.data._Elems._8_8_ = _UNK_1528a02c8;
  uStack_28c = 0;
  uStack_288 = 0;
  local_130.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040b00000;
  local_130.data2.data._Elems._8_8_ = _UNK_1528a02e8;
  uStack_284 = 0;
  local_110.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040d0000040a00000;
  local_110.data2.data._Elems._8_8_ = _UNK_1528a02f8;
  local_270 = 0;
  local_f0.data2.data._Elems._0_8_ = ___xmm_4100000040f0000040c0000040a00000;
  local_f0.data2.data._Elems._8_8_ = _UNK_1528a0308;
  uStack_26c = 0xffffffff;
  local_d0.data2.data._Elems._0_8_ = ___xmm_4108000040e0000040c0000040a00000;
  local_d0.data2.data._Elems._8_8_ = _UNK_1528a0318;
  local_268 = 0;
  local_2d0.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_2d0.data2.data._Elems._8_8_ = _UNK_152894998;
  local_250 = 0;
  local_1b0.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_1b0.data2.data._Elems._8_8_ = _UNK_152894998;
  local_248 = 0xffffffff;
  local_190.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_190.data2.data._Elems._8_8_ = _UNK_152894998;
  uStack_244 = 0;
  local_170.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_170.data2.data._Elems._8_8_ = _UNK_152894998;
  local_150.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_150.data2.data._Elems._8_8_ = _UNK_152894998;
  local_2d0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_2d0.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_130.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_130.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_110.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_110.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_f0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_f0.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_d0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_d0.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_230 = 0;
  local_228 = 0;
  uStack_224 = 0xffffffff;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0xffffffff;
  local_210 = 0;
  local_208 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_b0._Ptr = (char *)0x0;
  local_b0._8_8_ = 0;
  local_2f0._0_8_ = 0;
  local_2f0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_308 = auVar11;
  pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                     (&local_2b0,&local_2d0,&local_1b0);
  lVar6 = *(longlong *)(pTVar2->data1).data._Elems - CONCAT44(uStack_28c,local_290);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - CONCAT44(uStack_284,uStack_288);
  }
  lVar9 = *(longlong *)(pTVar2->data2).data._Elems;
  if (lVar9 == 0) {
    lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2);
  }
  if ((lVar6 == 0) && (lVar9 == 0)) {
    pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                       (&local_1b0,&local_2d0,&local_190);
    lVar6 = *(longlong *)(pTVar2->data1).data._Elems - CONCAT44(uStack_26c,local_270);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_268;
    }
    lVar9 = *(longlong *)(pTVar2->data2).data._Elems;
    if (lVar9 == 0) {
      lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2);
    }
    if ((lVar6 == 0) && (lVar9 == 0)) {
      pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                         (&local_190,&local_2d0,&local_170);
      lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_250;
      if (lVar6 == 0) {
        lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - CONCAT44(uStack_244,local_248);
      }
      lVar9 = *(longlong *)(pTVar2->data2).data._Elems;
      if (lVar9 == 0) {
        lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2);
      }
      if ((lVar6 == 0) && (lVar9 == 0)) {
        pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                           (&local_170,&local_2d0,&local_150);
        lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_230;
        if (lVar6 == 0) {
          lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - CONCAT44(uStack_224,local_228);
        }
        lVar9 = *(longlong *)(pTVar2->data2).data._Elems;
        if (lVar9 == 0) {
          lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2);
        }
        if ((lVar6 == 0) && (lVar9 == 0)) {
          pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                             (&local_150,&local_2d0,&local_130);
          lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_210;
          if (lVar6 == 0) {
            lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_208;
          }
          lVar9 = *(longlong *)(pTVar2->data2).data._Elems + -0xffffffff;
          if (lVar9 == 0) {
            lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2);
          }
          if ((lVar6 == 0) && (lVar9 == 0)) {
            pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                               (&local_130,&local_2d0,&local_110);
            lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_1f0;
            if (lVar6 == 0) {
              lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_1e8;
            }
            lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 0x100000000;
            if (lVar9 == 0) {
              lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2);
            }
            if ((lVar6 == 0) && (lVar9 == 0)) {
              pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                                 (&local_110,&local_2d0,&local_f0);
              lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_1d0;
              if (lVar6 == 0) {
                lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_1c8;
              }
              lVar9 = *(longlong *)(pTVar2->data2).data._Elems;
              if (lVar9 == 0) {
                lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) + -0xffffffff;
              }
              if ((lVar6 == 0) && (lVar9 == 0)) {
                pTVar2 = trimd::fallback::operator!=<trimd::scalar::T128<float>_>
                                   (&local_f0,&local_2d0,&local_d0);
                lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_b0._0_8_;
                if (lVar6 == 0) {
                  lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_b0._8_8_;
                }
                lVar9 = *(longlong *)(pTVar2->data2).data._Elems;
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar11._8_8_;
                }
                if ((lVar6 == 0) && (lVar9 == 0)) {
                  return;
                }
                local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
                local_2f0.message_._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
                pMVar3 = (Message *)testing::Message::Message((Message *)local_308);
                pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_b0,&local_2f0,"equal(v1 != v10, m110)","false","true")
                ;
                if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                }
                pAVar5 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   ((AssertHelper *)&local_2f8,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                    ,0x10f,(char *)pbVar4);
                testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_2f8);
                if (0xf < uStack_98) {
                  uVar10 = uStack_98 + 1;
                  uVar7 = local_b0._Ptr;
                  if (0xfff < uVar10) {
                    uVar7 = *(undefined8 *)(local_b0._Ptr + -8);
                    uVar10 = uStack_98 + 0x28;
                    if ((char *)0x1f < local_b0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                  }
                  ::operator_delete((void *)uVar7,uVar10);
                }
                local_2f8._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                        )local_308._0_8_;
                goto LAB_14c639f2b;
              }
              local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
              local_2f0.message_._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
              pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_b0,&local_2f0,"equal(v1 != v9, m19)","false","true");
              if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar4->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar5 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)local_308,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                  ,0x10e,(char *)pbVar4);
              testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
              if (uStack_98 < 0x10) goto LAB_14c639f2b;
              uVar10 = uStack_98 + 1;
              uVar7 = local_b0._Ptr;
              if (0xfff < uVar10) {
                uVar10 = uStack_98 + 0x28;
                uVar7 = *(char **)(local_b0._Ptr + -8);
                if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
            else {
              local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
              local_2f0.message_._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
              pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_b0,&local_2f0,"equal(v1 != v8, m18)","false","true");
              if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar4->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar5 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)local_308,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                  ,0x10d,(char *)pbVar4);
              testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
              if (uStack_98 < 0x10) goto LAB_14c639f2b;
              uVar10 = uStack_98 + 1;
              uVar7 = local_b0._Ptr;
              if (0xfff < uVar10) {
                uVar10 = uStack_98 + 0x28;
                uVar7 = *(char **)(local_b0._Ptr + -8);
                if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
          }
          else {
            local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
            local_2f0.message_._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
            pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
            pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_b0,&local_2f0,"equal(v1 != v7, m17)","false","true");
            if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
              pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar4->_Mypair)._Myval2._Bx._Ptr;
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)local_308,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                ,0x10c,(char *)pbVar4);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
            if (uStack_98 < 0x10) goto LAB_14c639f2b;
            uVar10 = uStack_98 + 1;
            uVar7 = local_b0._Ptr;
            if (0xfff < uVar10) {
              uVar10 = uStack_98 + 0x28;
              uVar7 = *(char **)(local_b0._Ptr + -8);
              if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
          }
        }
        else {
          local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
          local_2f0.message_._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
          pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
          pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_b0,&local_2f0,"equal(v1 != v6, m16)","false","true");
          if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar4->_Mypair)._Myval2._Bx._Ptr;
          }
          pAVar5 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)local_308,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                              ,0x10b,(char *)pbVar4);
          testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
          if (uStack_98 < 0x10) goto LAB_14c639f2b;
          uVar10 = uStack_98 + 1;
          uVar7 = local_b0._Ptr;
          if (0xfff < uVar10) {
            uVar10 = uStack_98 + 0x28;
            uVar7 = *(char **)(local_b0._Ptr + -8);
            if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      else {
        local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
        local_2f0.message_._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_b0,&local_2f0,"equal(v1 != v5, m15)","false","true");
        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar4->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)local_308,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                            ,0x10a,(char *)pbVar4);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
        if (uStack_98 < 0x10) goto LAB_14c639f2b;
        uVar10 = uStack_98 + 1;
        uVar7 = local_b0._Ptr;
        if (0xfff < uVar10) {
          uVar10 = uStack_98 + 0x28;
          uVar7 = *(char **)(local_b0._Ptr + -8);
          if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
    }
    else {
      local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
      local_2f0.message_._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
      pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_b0,&local_2f0,"equal(v1 != v4, m14)","false","true");
      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar4->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)local_308,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                          ,0x109,(char *)pbVar4);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
      if (uStack_98 < 0x10) goto LAB_14c639f2b;
      uVar10 = uStack_98 + 1;
      uVar7 = local_b0._Ptr;
      if (0xfff < uVar10) {
        uVar10 = uStack_98 + 0x28;
        uVar7 = *(char **)(local_b0._Ptr + -8);
        if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  else {
    local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
    local_2f0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0
                        ,&local_2f0,"equal(v1 != v3, m13)","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_308,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0x108,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
    if (uStack_98 < 0x10) goto LAB_14c639f2b;
    uVar10 = uStack_98 + 1;
    uVar7 = local_b0._Ptr;
    if (0xfff < uVar10) {
      uVar7 = *(undefined8 *)(local_b0._Ptr + -8);
      uVar10 = uStack_98 + 0x28;
      if ((char *)0x1f < local_b0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete((void *)uVar7,uVar10);
LAB_14c639f2b:
  local_b0._Ptr = local_b0._Ptr & 0xffffffffffffff00;
  local_a0 = ___xmm_000000000000000f0000000000000000;
  uStack_98 = _UNK_15076add8;
  if (local_2f8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_2f8._Mypair._Myval2 + 4) +
             (longlong)local_2f8._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
  uVar1._Mypair._Myval2 = local_2f0.message_._Mypair._Myval2;
  if (local_2f0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_2f0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c639fd0

void * __thiscall
T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63a010

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_Inequality_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63a050

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  T256<trimd::scalar::T128<float>_> *pTVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *pAVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulong64 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStackY_338 [32];
  undefined1 local_308 [16];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_2f8;
  AssertionResult local_2f0;
  undefined8 local_2e0;
  undefined8 local_2d8;
  T256<trimd::scalar::T128<float>_> local_2d0;
  T256<trimd::scalar::T128<float>_> local_2b0;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_270;
  undefined4 uStack_26c;
  longlong local_268;
  longlong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  longlong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  longlong local_210;
  longlong local_208;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1d0;
  longlong local_1c8;
  T256<trimd::scalar::T128<float>_> local_1b0;
  T256<trimd::scalar::T128<float>_> local_190;
  T256<trimd::scalar::T128<float>_> local_170;
  T256<trimd::scalar::T128<float>_> local_150;
  T256<trimd::scalar::T128<float>_> local_130;
  T256<trimd::scalar::T128<float>_> local_110;
  T256<trimd::scalar::T128<float>_> local_f0;
  T256<trimd::scalar::T128<float>_> local_d0;
  _Bxty local_b0;
  undefined8 local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_1b0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003fc00000;
  local_1b0.data1.data._Elems._8_8_ = _UNK_1528a0298;
  local_2b0.data1.data._Elems[0] = -NAN;
  local_2b0.data1.data._Elems[1] = -NAN;
  local_190.data1.data._Elems._0_8_ = ___xmm_4080000040400000402000003f800000;
  local_190.data1.data._Elems._8_8_ = _UNK_1528a02a8;
  local_2b0.data1.data._Elems[2] = -NAN;
  local_2b0.data1.data._Elems[3] = -NAN;
  local_170.data1.data._Elems._0_8_ = ___xmm_4080000040600000400000003f800000;
  local_170.data1.data._Elems._8_8_ = _UNK_1528a02b8;
  local_290 = 0;
  local_150.data1.data._Elems._0_8_ = ___xmm_4090000040400000400000003f800000;
  local_150.data1.data._Elems._8_8_ = _UNK_1528a02c8;
  uStack_28c = 0xffffffff;
  uStack_288 = 0xffffffff;
  local_130.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040b00000;
  local_130.data2.data._Elems._8_8_ = _UNK_1528a02e8;
  uStack_284 = 0xffffffff;
  local_110.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040d0000040a00000;
  local_110.data2.data._Elems._8_8_ = _UNK_1528a02f8;
  local_270 = 0xffffffff;
  local_f0.data2.data._Elems._0_8_ = ___xmm_4100000040f0000040c0000040a00000;
  local_f0.data2.data._Elems._8_8_ = _UNK_1528a0308;
  uStack_26c = 0;
  local_d0.data2.data._Elems._0_8_ = ___xmm_4108000040e0000040c0000040a00000;
  local_d0.data2.data._Elems._8_8_ = _UNK_1528a0318;
  local_268 = -1;
  local_2d0.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_2d0.data2.data._Elems._8_8_ = _UNK_152894998;
  local_250 = -1;
  local_1b0.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_1b0.data2.data._Elems._8_8_ = _UNK_152894998;
  local_248 = 0;
  local_190.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_190.data2.data._Elems._8_8_ = _UNK_152894998;
  uStack_244 = 0xffffffff;
  local_170.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_170.data2.data._Elems._8_8_ = _UNK_152894998;
  local_150.data2.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_150.data2.data._Elems._8_8_ = _UNK_152894998;
  local_2d0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_2d0.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_130.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_130.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_110.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_110.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_f0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_f0.data1.data._Elems._8_8_ = _UNK_15076c058;
  local_d0.data1.data._Elems._0_8_ = ___xmm_4080000040400000400000003f800000;
  local_d0.data1.data._Elems._8_8_ = _UNK_15076c058;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  auVar12._8_4_ = 0xffffffff;
  auVar12._0_8_ = 0xffffffffffffffff;
  auVar12._12_4_ = 0xffffffff;
  auVar13._8_4_ = 0xffffffff;
  auVar13._0_8_ = 0xffffffffffffffff;
  auVar13._12_4_ = 0xffffffff;
  auVar14._8_4_ = 0xffffffff;
  auVar14._0_8_ = 0xffffffffffffffff;
  auVar14._12_4_ = 0xffffffff;
  auVar15._8_4_ = 0xffffffff;
  auVar15._0_8_ = 0xffffffffffffffff;
  auVar15._12_4_ = 0xffffffff;
  local_230 = -1;
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffff00000000;
  auVar16._12_4_ = 0xffffffff;
  local_228 = 0xffffffff;
  auVar17._8_4_ = 0xffffffff;
  auVar17._0_8_ = 0xffffffff;
  auVar17._12_4_ = 0xffffffff;
  uStack_224 = 0;
  auVar18._0_12_ = ZEXT812(0xffffffffffffffff);
  auVar18._12_4_ = 0xffffffff;
  local_308._8_4_ = 0xffffffff;
  local_308._0_8_ = 0xffffffffffffffff;
  local_308._12_4_ = 0;
  local_210 = -1;
  local_208 = -1;
  local_1f0 = -1;
  local_1e8 = -1;
  local_1d0 = -1;
  local_1c8 = -1;
  local_b0._Ptr = (char *)0xffffffffffffffff;
  local_b0._8_8_ = -1;
  local_2f0._0_8_ = 0xffffffffffffffff;
  local_2f0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0xffffffffffffffff;
  local_2e0 = 0xffffffffffffffff;
  local_2d8 = 0xffffffffffffffff;
  if (auVar11._8_8_ == -1) {
    pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                       (&local_2b0,&local_2d0,&local_1b0);
    lVar6 = *(longlong *)(pTVar2->data1).data._Elems - CONCAT44(uStack_28c,local_290);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - CONCAT44(uStack_284,uStack_288);
    }
    lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 1;
    if (lVar9 == 0) {
      lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar12._8_8_;
    }
    if ((lVar6 == 0) && (lVar9 == 0)) {
      pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                         (&local_1b0,&local_2d0,&local_190);
      lVar6 = *(longlong *)(pTVar2->data1).data._Elems - CONCAT44(uStack_26c,local_270);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_268;
      }
      lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 1;
      if (lVar9 == 0) {
        lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar13._8_8_;
      }
      if ((lVar6 == 0) && (lVar9 == 0)) {
        pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                           (&local_190,&local_2d0,&local_170);
        lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_250;
        if (lVar6 == 0) {
          lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - CONCAT44(uStack_244,local_248);
        }
        lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 1;
        if (lVar9 == 0) {
          lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar14._8_8_;
        }
        if ((lVar6 == 0) && (lVar9 == 0)) {
          pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                             (&local_170,&local_2d0,&local_150);
          lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_230;
          if (lVar6 == 0) {
            lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - CONCAT44(uStack_224,local_228);
          }
          lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 1;
          if (lVar9 == 0) {
            lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar15._8_8_;
          }
          if ((lVar6 == 0) && (lVar9 == 0)) {
            pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                               (&local_150,&local_2d0,&local_130);
            lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_210;
            if (lVar6 == 0) {
              lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_208;
            }
            lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 0x100000000;
            if (lVar9 == 0) {
              lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar16._8_8_;
            }
            if ((lVar6 == 0) && (lVar9 == 0)) {
              pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                                 (&local_130,&local_2d0,&local_110);
              lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_1f0;
              if (lVar6 == 0) {
                lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_1e8;
              }
              lVar9 = *(longlong *)(pTVar2->data2).data._Elems + -0xffffffff;
              if (lVar9 == 0) {
                lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar17._8_8_;
              }
              if ((lVar6 == 0) && (lVar9 == 0)) {
                pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                                   (&local_110,&local_2d0,&local_f0);
                lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_1d0;
                if (lVar6 == 0) {
                  lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_1c8;
                }
                lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 1;
                if (lVar9 == 0) {
                  lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) - auVar18._8_8_;
                }
                if ((lVar6 == 0) && (lVar9 == 0)) {
                  pTVar2 = trimd::fallback::operator==<trimd::scalar::T128<float>_>
                                     (&local_f0,&local_2d0,&local_d0);
                  lVar6 = *(longlong *)(pTVar2->data1).data._Elems - local_b0._0_8_;
                  if (lVar6 == 0) {
                    lVar6 = *(longlong *)((pTVar2->data1).data._Elems + 2) - local_b0._8_8_;
                  }
                  lVar9 = *(longlong *)(pTVar2->data2).data._Elems + 1;
                  if (lVar9 == 0) {
                    lVar9 = *(longlong *)((pTVar2->data2).data._Elems + 2) + -0xffffffff;
                  }
                  if ((lVar6 == 0) && (lVar9 == 0)) {
                    return;
                  }
                  local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
                  local_2f0.message_._Mypair._Myval2 =
                       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
                  pMVar3 = (Message *)testing::Message::Message((Message *)local_308);
                  pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_b0,&local_2f0,"equal(v1 == v10, m110)","false",
                                      "true");
                  if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                  }
                  pAVar5 = (AssertHelper *)
                           testing::internal::AssertHelper::AssertHelper
                                     ((AssertHelper *)&local_2f8,kFatalFailure,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                      ,0xad,(char *)pbVar4);
                  testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_2f8);
                  if (0xf < uStack_98) {
                    uVar10 = uStack_98 + 1;
                    uVar7 = local_b0._Ptr;
                    if (0xfff < uVar10) {
                      uVar7 = *(undefined8 *)(local_b0._Ptr + -8);
                      uVar10 = uStack_98 + 0x28;
                      if ((char *)0x1f < local_b0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                    ::operator_delete((void *)uVar7,uVar10);
                  }
                  local_2f8._Mypair._Myval2 =
                       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                          )local_308._0_8_;
                  goto LAB_14c63af4b;
                }
                local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
                local_2f0.message_._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
                pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
                pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_b0,&local_2f0,"equal(v1 == v9, m19)","false","true");
                if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                }
                pAVar5 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   ((AssertHelper *)local_308,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                    ,0xac,(char *)pbVar4);
                testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
                if (uStack_98 < 0x10) goto LAB_14c63af4b;
                uVar10 = uStack_98 + 1;
                uVar7 = local_b0._Ptr;
                if (0xfff < uVar10) {
                  uVar10 = uStack_98 + 0x28;
                  uVar7 = *(char **)(local_b0._Ptr + -8);
                  if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))
                     ) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
              }
              else {
                local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
                local_2f0.message_._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
                pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
                pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_b0,&local_2f0,"equal(v1 == v8, m18)","false","true");
                if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (pbVar4->_Mypair)._Myval2._Bx._Ptr;
                }
                pAVar5 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   ((AssertHelper *)local_308,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                    ,0xab,(char *)pbVar4);
                testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
                testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
                if (uStack_98 < 0x10) goto LAB_14c63af4b;
                uVar10 = uStack_98 + 1;
                uVar7 = local_b0._Ptr;
                if (0xfff < uVar10) {
                  uVar10 = uStack_98 + 0x28;
                  uVar7 = *(char **)(local_b0._Ptr + -8);
                  if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))
                     ) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
              }
            }
            else {
              local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
              local_2f0.message_._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
              pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_b0,&local_2f0,"equal(v1 == v7, m17)","false","true");
              if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
                pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar4->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar5 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)local_308,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                  ,0xaa,(char *)pbVar4);
              testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
              if (uStack_98 < 0x10) goto LAB_14c63af4b;
              uVar10 = uStack_98 + 1;
              uVar7 = local_b0._Ptr;
              if (0xfff < uVar10) {
                uVar10 = uStack_98 + 0x28;
                uVar7 = *(char **)(local_b0._Ptr + -8);
                if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
          }
          else {
            local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
            local_2f0.message_._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
            pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
            pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_b0,&local_2f0,"equal(v1 == v6, m16)","false","true");
            if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
              pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar4->_Mypair)._Myval2._Bx._Ptr;
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)local_308,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                ,0xa9,(char *)pbVar4);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
            if (uStack_98 < 0x10) goto LAB_14c63af4b;
            uVar10 = uStack_98 + 1;
            uVar7 = local_b0._Ptr;
            if (0xfff < uVar10) {
              uVar10 = uStack_98 + 0x28;
              uVar7 = *(char **)(local_b0._Ptr + -8);
              if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
          }
        }
        else {
          local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
          local_2f0.message_._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
          pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
          pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_b0,&local_2f0,"equal(v1 == v5, m15)","false","true");
          if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
            pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar4->_Mypair)._Myval2._Bx._Ptr;
          }
          pAVar5 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)local_308,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                              ,0xa8,(char *)pbVar4);
          testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
          if (uStack_98 < 0x10) goto LAB_14c63af4b;
          uVar10 = uStack_98 + 1;
          uVar7 = local_b0._Ptr;
          if (0xfff < uVar10) {
            uVar10 = uStack_98 + 0x28;
            uVar7 = *(char **)(local_b0._Ptr + -8);
            if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      else {
        local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
        local_2f0.message_._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
        pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_b0,&local_2f0,"equal(v1 == v4, m14)","false","true");
        if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
          pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar4->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)local_308,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                            ,0xa7,(char *)pbVar4);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
        if (uStack_98 < 0x10) goto LAB_14c63af4b;
        uVar10 = uStack_98 + 1;
        uVar7 = local_b0._Ptr;
        if (0xfff < uVar10) {
          uVar10 = uStack_98 + 0x28;
          uVar7 = *(char **)(local_b0._Ptr + -8);
          if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
    }
    else {
      local_2f0._0_8_ = local_2f0._0_8_ & 0xffffffffffffff00;
      local_2f0.message_._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
      pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_b0,&local_2f0,"equal(v1 == v3, m13)","false","true");
      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar4->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)local_308,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                          ,0xa6,(char *)pbVar4);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
      if (uStack_98 < 0x10) goto LAB_14c63af4b;
      uVar10 = uStack_98 + 1;
      uVar7 = local_b0._Ptr;
      if (0xfff < uVar10) {
        uVar10 = uStack_98 + 0x28;
        uVar7 = *(char **)(local_b0._Ptr + -8);
        if ((char *)0x1f < local_b0._Ptr + (-8 - (longlong)*(char **)(local_b0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  else {
    local_2f0._0_8_ = 0xffffffffffffff00;
    local_2f0.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_2f8);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0
                        ,&local_2f0,"equal(v1 == v2, m12)","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_308,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0xa5,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_308);
    if (uStack_98 < 0x10) goto LAB_14c63af4b;
    uVar10 = uStack_98 + 1;
    uVar7 = local_b0._Ptr;
    if (0xfff < uVar10) {
      uVar7 = *(undefined8 *)(local_b0._Ptr + -8);
      uVar10 = uStack_98 + 0x28;
      if ((char *)0x1f < local_b0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete((void *)uVar7,uVar10);
LAB_14c63af4b:
  local_b0._Ptr = local_b0._Ptr & 0xffffffffffffff00;
  local_a0 = ___xmm_000000000000000f0000000000000000;
  uStack_98 = _UNK_15076add8;
  if (local_2f8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_2f8._Mypair._Myval2 + 4) +
             (longlong)local_2f8._Mypair._Myval2);
    (**(code **)*puVar8)(puVar8,1);
  }
  uVar1._Mypair._Myval2 = local_2f0.message_._Mypair._Myval2;
  if (local_2f0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_2f0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c63aff0

void * __thiscall
T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63b030

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_Equality_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63b070

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63b0b0

void __thiscall
T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x4b,pcVar2);
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

// `scalar_deleting_destructor' @ 14c63b170

void * __thiscall
T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63b1b0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_CheckSize_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63b1f0

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_TransposeSquareScalar_Test::TestBody(T256Test_TransposeSquareScalar_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  AssertHelper *pAVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auStackY_1f8 [32];
  AssertHelper local_1c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1c0;
  _Bxty local_1b8;
  T128<float> local_1a8;
  char *local_198;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uStack_190;
  T128<float> local_188;
  char *local_178;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_170;
  T128<float> local_168;
  char *local_158;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_150;
  T128<float> local_148;
  char *local_138;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_130;
  T128<float> local_128;
  char *local_118;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_110;
  T128<float> local_108;
  char *local_f8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_f0;
  T128<float> local_e8;
  char *local_d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_d0;
  T128<float> local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_198 = ___xmm_4080000040400000400000003f800000;
  uStack_190._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15076c058;
  local_188.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_188.data._Elems._8_8_ = _UNK_152894998;
  local_178 = ___xmm_4080000040400000400000003f800000;
  pbStack_170 = _UNK_15076c058;
  local_168.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_168.data._Elems._8_8_ = _UNK_152894998;
  local_158 = ___xmm_4080000040400000400000003f800000;
  pbStack_150 = _UNK_15076c058;
  local_148.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_148.data._Elems._8_8_ = _UNK_152894998;
  local_138 = ___xmm_4080000040400000400000003f800000;
  pbStack_130 = _UNK_15076c058;
  local_128.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_128.data._Elems._8_8_ = _UNK_152894998;
  local_118 = ___xmm_4080000040400000400000003f800000;
  pbStack_110 = _UNK_15076c058;
  local_108.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_108.data._Elems._8_8_ = _UNK_152894998;
  local_f8 = ___xmm_4080000040400000400000003f800000;
  pbStack_f0 = _UNK_15076c058;
  local_e8.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_e8.data._Elems._8_8_ = _UNK_152894998;
  local_d8 = ___xmm_4080000040400000400000003f800000;
  pbStack_d0 = _UNK_15076c058;
  local_c8.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_c8.data._Elems._8_8_ = _UNK_152894998;
  local_1b8._Ptr = ___xmm_4080000040400000400000003f800000;
  local_1b8._8_8_ = _UNK_15076c058;
  local_1a8.data._Elems._0_8_ = ___xmm_4100000040e0000040c0000040a00000;
  local_1a8.data._Elems._8_8_ = _UNK_152894998;
  trimd::scalar::transpose<float>
            ((T128<float> *)&local_198,(T128<float> *)&local_178,(T128<float> *)&local_158,
             (T128<float> *)&local_138);
  trimd::scalar::transpose<float>(&local_188,&local_168,&local_148,&local_128);
  trimd::scalar::transpose<float>
            ((T128<float> *)&local_118,(T128<float> *)&local_f8,(T128<float> *)&local_d8,
             (T128<float> *)&local_1b8);
  trimd::scalar::transpose<float>(&local_108,&local_e8,&local_c8,&local_1a8);
  lVar8 = (longlong)local_198 - ___xmm_3f8000003f8000003f8000003f800000;
  if (lVar8 == 0) {
    lVar8 = (longlong)uStack_190._Mypair._Myval2 - _UNK_15076b1f8;
  }
  lVar5 = (longlong)local_118 - ___xmm_3f8000003f8000003f8000003f800000;
  if (lVar5 == 0) {
    lVar5 = (longlong)pbStack_110 - _UNK_15076b1f8;
  }
  if ((lVar8 == 0) && (lVar5 == 0)) {
    lVar8 = (longlong)local_178 - ___xmm_40000000400000004000000040000000;
    if (lVar8 == 0) {
      lVar8 = (longlong)pbStack_170 - _UNK_15076ba38;
    }
    lVar5 = (longlong)local_f8 - ___xmm_40000000400000004000000040000000;
    if (lVar5 == 0) {
      lVar5 = (longlong)pbStack_f0 - _UNK_15076ba38;
    }
    if ((lVar8 == 0) && (lVar5 == 0)) {
      lVar8 = (longlong)local_158 - ___xmm_40400000404000004040000040400000;
      if (lVar8 == 0) {
        lVar8 = (longlong)pbStack_150 - _UNK_15076be98;
      }
      lVar5 = (longlong)local_d8 - ___xmm_40400000404000004040000040400000;
      if (lVar5 == 0) {
        lVar5 = (longlong)pbStack_d0 - _UNK_15076be98;
      }
      if ((lVar8 == 0) && (lVar5 == 0)) {
        lVar8 = (longlong)local_138 - ___xmm_40800000408000004080000040800000;
        if (lVar8 == 0) {
          lVar8 = (longlong)pbStack_130 - _UNK_1509253f8;
        }
        lVar5 = (longlong)local_1b8._Ptr - ___xmm_40800000408000004080000040800000;
        if (lVar5 == 0) {
          lVar5 = local_1b8._8_8_ - _UNK_1509253f8;
        }
        if ((lVar8 == 0) && (lVar5 == 0)) {
          lVar8 = local_188.data._Elems._0_8_ - ___xmm_40a0000040a0000040a0000040a00000;
          if (lVar8 == 0) {
            lVar8 = local_188.data._Elems._8_8_ - _UNK_150925428;
          }
          lVar5 = local_108.data._Elems._0_8_ - ___xmm_40a0000040a0000040a0000040a00000;
          if (lVar5 == 0) {
            lVar5 = local_108.data._Elems._8_8_ - _UNK_150925428;
          }
          if ((lVar8 == 0) && (lVar5 == 0)) {
            lVar8 = local_168.data._Elems._0_8_ - ___xmm_40c0000040c0000040c0000040c00000;
            if (lVar8 == 0) {
              lVar8 = local_168.data._Elems._8_8_ - _UNK_152884c58;
            }
            lVar5 = local_e8.data._Elems._0_8_ - ___xmm_40c0000040c0000040c0000040c00000;
            if (lVar5 == 0) {
              lVar5 = local_e8.data._Elems._8_8_ - _UNK_152884c58;
            }
            if ((lVar8 == 0) && (lVar5 == 0)) {
              lVar8 = local_148.data._Elems._0_8_ - ___xmm_40e0000040e0000040e0000040e00000;
              if (lVar8 == 0) {
                lVar8 = local_148.data._Elems._8_8_ - _UNK_152884c88;
              }
              lVar5 = local_c8.data._Elems._0_8_ - ___xmm_40e0000040e0000040e0000040e00000;
              if (lVar5 == 0) {
                lVar5 = local_c8.data._Elems._8_8_ - _UNK_152884c88;
              }
              if ((lVar8 == 0) && (lVar5 == 0)) {
                lVar8 = local_128.data._Elems._0_8_ - ___xmm_41000000410000004100000041000000;
                if (lVar8 == 0) {
                  lVar8 = local_128.data._Elems._8_8_ - _UNK_15093f338;
                }
                lVar5 = local_1a8.data._Elems._0_8_ - ___xmm_41000000410000004100000041000000;
                if (lVar5 == 0) {
                  lVar5 = local_1a8.data._Elems._8_8_ - _UNK_15093f338;
                }
                if ((lVar8 == 0) && (lVar5 == 0)) {
                  return;
                }
                local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
                uStack_190._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
                pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c0);
                pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_1b8,(AssertionResult *)&local_198,"equal(v8, e8)",
                                    "false","true");
                if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
                  pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (pbVar3->_Mypair)._Myval2._Bx._Ptr;
                }
                pAVar4 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_1c8,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                    ,0x2dd,(char *)pbVar3);
                testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
                testing::internal::AssertHelper::~AssertHelper(&local_1c8);
                local_1c8.data_ = (AssertHelperData *)local_1c0._Mypair._Myval2;
                if (0xf < (ulonglong)local_1a8.data._Elems._8_8_) {
                  uVar9 = local_1a8.data._Elems._8_8_ + 1;
                  uVar6 = local_1b8._Ptr;
                  if (0xfff < uVar9) {
                    uVar6 = *(undefined8 *)(local_1b8._Ptr + -8);
                    uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
                    if ((char *)0x1f < local_1b8._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                  }
                  ::operator_delete((void *)uVar6,uVar9);
                  local_1c8.data_ = (AssertHelperData *)local_1c0._Mypair._Myval2;
                }
                goto LAB_14c63bd65;
              }
              local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
              uStack_190._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
              pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_1b8,(AssertionResult *)&local_198,"equal(v7, e7)","false",
                                  "true");
              if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
                pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar3->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar4 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)&local_1c0,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                  ,0x2dc,(char *)pbVar3);
              testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
              if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
              uVar9 = local_1a8.data._Elems._8_8_ + 1;
              uVar6 = local_1b8._Ptr;
              if (0xfff < uVar9) {
                uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
                uVar6 = *(char **)(local_1b8._Ptr + -8);
                if ((char *)0x1f < local_1b8._Ptr + (-8 - (longlong)*(char **)(local_1b8._Ptr + -8))
                   ) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
            else {
              local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
              uStack_190._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
              pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
              pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_1b8,(AssertionResult *)&local_198,"equal(v6, e6)","false",
                                  "true");
              if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
                pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (pbVar3->_Mypair)._Myval2._Bx._Ptr;
              }
              pAVar4 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)&local_1c0,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                  ,0x2db,(char *)pbVar3);
              testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
              if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
              uVar9 = local_1a8.data._Elems._8_8_ + 1;
              uVar6 = local_1b8._Ptr;
              if (0xfff < uVar9) {
                uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
                uVar6 = *(char **)(local_1b8._Ptr + -8);
                if ((char *)0x1f < local_1b8._Ptr + (-8 - (longlong)*(char **)(local_1b8._Ptr + -8))
                   ) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
          }
          else {
            local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
            uStack_190._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
            pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
            pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_1b8,(AssertionResult *)&local_198,"equal(v5, e5)","false",
                                "true");
            if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
              pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (pbVar3->_Mypair)._Myval2._Bx._Ptr;
            }
            pAVar4 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_1c0,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                                ,0x2da,(char *)pbVar3);
            testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
            if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
            uVar9 = local_1a8.data._Elems._8_8_ + 1;
            uVar6 = local_1b8._Ptr;
            if (0xfff < uVar9) {
              uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
              uVar6 = *(char **)(local_1b8._Ptr + -8);
              if ((char *)0x1f < local_1b8._Ptr + (-8 - (longlong)*(char **)(local_1b8._Ptr + -8)))
              {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
          }
        }
        else {
          local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
          uStack_190._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
          pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
          pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_1b8,(AssertionResult *)&local_198,"equal(v4, e4)","false",
                              "true");
          if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
            pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (pbVar3->_Mypair)._Myval2._Bx._Ptr;
          }
          pAVar4 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_1c0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                              ,0x2d9,(char *)pbVar3);
          testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
          if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
          uVar9 = local_1a8.data._Elems._8_8_ + 1;
          uVar6 = local_1b8._Ptr;
          if (0xfff < uVar9) {
            uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
            uVar6 = *(char **)(local_1b8._Ptr + -8);
            if ((char *)0x1f < local_1b8._Ptr + (-8 - (longlong)*(char **)(local_1b8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      else {
        local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
        uStack_190._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
        pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_1b8,(AssertionResult *)&local_198,"equal(v3, e3)","false","true")
        ;
        if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
          pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar3->_Mypair)._Myval2._Bx._Ptr;
        }
        pAVar4 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_1c0,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                            ,0x2d8,(char *)pbVar3);
        testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
        if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
        uVar9 = local_1a8.data._Elems._8_8_ + 1;
        uVar6 = local_1b8._Ptr;
        if (0xfff < uVar9) {
          uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
          uVar6 = *(char **)(local_1b8._Ptr + -8);
          if ((char *)0x1f < local_1b8._Ptr + (-8 - (longlong)*(char **)(local_1b8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
    }
    else {
      local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
      uStack_190._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
      pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_1b8,(AssertionResult *)&local_198,"equal(v2, e2)","false","true");
      if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar3->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_1c0,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                          ,0x2d7,(char *)pbVar3);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
      if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
      uVar9 = local_1a8.data._Elems._8_8_ + 1;
      uVar6 = local_1b8._Ptr;
      if (0xfff < uVar9) {
        uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
        uVar6 = *(char **)(local_1b8._Ptr + -8);
        if ((char *)0x1f < local_1b8._Ptr + (-8 - (longlong)*(char **)(local_1b8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  else {
    local_198 = (char *)((ulonglong)local_198._1_7_ << 8);
    uStack_190._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_1c8);
    pbVar3 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1b8,(AssertionResult *)&local_198,"equal(v1, e1)","false","true");
    if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar3->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1c0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                        ,0x2d6,(char *)pbVar3);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar2);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c0);
    if ((ulonglong)local_1a8.data._Elems._8_8_ < 0x10) goto LAB_14c63bd65;
    uVar9 = local_1a8.data._Elems._8_8_ + 1;
    uVar6 = local_1b8._Ptr;
    if (0xfff < uVar9) {
      uVar6 = *(undefined8 *)(local_1b8._Ptr + -8);
      uVar9 = local_1a8.data._Elems._8_8_ + 0x28;
      if ((char *)0x1f < local_1b8._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  ::operator_delete((void *)uVar6,uVar9);
LAB_14c63bd65:
  local_1b8._Ptr = local_1b8._Ptr & 0xffffffffffffff00;
  local_1a8.data._Elems[0] = ___xmm_000000000000000f0000000000000000;
  local_1a8.data._Elems[1] = _UNK_15076add4;
  local_1a8.data._Elems[2] = _UNK_15076add8;
  local_1a8.data._Elems[3] = _UNK_15076addc;
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_1c8.data_ !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar7 = (undefined8 *)
             ((longlong)
              &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
               local_1c8.data_)->field_0x0 + (longlong)*(int *)(*(longlong *)local_1c8.data_ + 4));
    (**(code **)*puVar7)(puVar7,1);
  }
  uVar1._Mypair._Myval2 = uStack_190._Mypair._Myval2;
  if (uStack_190._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_190._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c63be10

void * __thiscall
T256Test_TransposeSquareScalar_Test::_scalar_deleting_destructor_
          (T256Test_TransposeSquareScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63be50

Test * __thiscall
testing::internal::TestFactoryImpl<T256Test_TransposeSquareScalar_Test>::CreateTest
          (TestFactoryImpl<T256Test_TransposeSquareScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7T256Test_TransposeSquareScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63be90

void * __thiscall
testing::internal::TestFactoryImpl<T256Test_TransposeSquareScalar_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_TransposeSquareScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_TransposeSquareScalar_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63bed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c63bf54) */
/* WARNING: Removing unreachable block (ram,0x00014c63bfa7) */
/* WARNING: Removing unreachable block (ram,0x00014c63bfaa) */
/* WARNING: Removing unreachable block (ram,0x00014c63bfeb) */
/* WARNING: Removing unreachable block (ram,0x00014c63bfff) */
/* WARNING: Removing unreachable block (ram,0x00014c63c014) */
/* WARNING: Removing unreachable block (ram,0x00014c63c02e) */
/* WARNING: Removing unreachable block (ram,0x00014c63c033) */
/* WARNING: Removing unreachable block (ram,0x00014c63c050) */
/* WARNING: Removing unreachable block (ram,0x00014c63c064) */
/* WARNING: Removing unreachable block (ram,0x00014c63c06e) */
/* WARNING: Removing unreachable block (ram,0x00014c63c083) */

void __thiscall T256Test_AbsScalar_Test::TestBody(T256Test_AbsScalar_Test *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c63c0b0

void * __thiscall
T256Test_AbsScalar_Test::_scalar_deleting_destructor_(T256Test_AbsScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63c0f0

Test * __thiscall
testing::internal::TestFactoryImpl<T256Test_AbsScalar_Test>::CreateTest
          (TestFactoryImpl<T256Test_AbsScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7T256Test_AbsScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63c130

void * __thiscall
testing::internal::TestFactoryImpl<T256Test_AbsScalar_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_AbsScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_AbsScalar_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c63c31e) */
/* WARNING: Removing unreachable block (ram,0x00014c63c360) */
/* WARNING: Removing unreachable block (ram,0x00014c63c363) */
/* WARNING: Removing unreachable block (ram,0x00014c63c3a1) */
/* WARNING: Removing unreachable block (ram,0x00014c63c3b4) */
/* WARNING: Removing unreachable block (ram,0x00014c63c3c9) */
/* WARNING: Removing unreachable block (ram,0x00014c63c3df) */
/* WARNING: Removing unreachable block (ram,0x00014c63c3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall T256Test_AndNotScalar_Test::TestBody(T256Test_AndNotScalar_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *this_00;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auStackY_a8 [32];
  AssertionResult local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_58;
  AssertHelper local_50;
  _Bxty local_48;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68 = 0x40a00000;
  local_48._12_4_ = 0;
  local_48._8_4_ = 0;
  local_78._4_4_ = 0x40000000;
  uStack_64 = 0x40c00000;
  local_60 = 0x40e00000;
  uStack_5c = 0x41000000;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_38 = 0;
  uStack_30 = 0;
  lVar8 = (longlong)&DAT_400000003f800000 - ___xmm_4080000040400000400000003f800000;
  if (lVar8 == 0) {
    lVar8 = 0x4080000040400000 - _UNK_15076c058;
  }
  lVar5 = 0x40c0000040a00000 - ___xmm_4100000040e0000040c0000040a00000;
  if (lVar5 == 0) {
    lVar5 = 0x4100000040e00000 - _UNK_152894998;
  }
  if ((lVar8 != 0) || (lVar5 != 0)) {
    local_78.success_ = false;
    local_78._1_3_ = 0x3f8000;
    local_78.message_._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_58);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48
                        ,&local_78,"equal(result1, e1)","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_50,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                         ,0x2fd,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_50);
    if (0xf < uStack_30) {
      pvVar1 = (void *)CONCAT44(local_48._4_4_,local_48._0_4_);
      uVar9 = uStack_30 + 1;
      pvVar6 = pvVar1;
      if (0xfff < uVar9) {
        pvVar6 = *(void **)((longlong)pvVar1 + -8);
        uVar9 = uStack_30 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar6,uVar9);
    }
    local_48._0_4_ = local_48._0_4_ & 0xffffff00;
    local_38 = ___xmm_000000000000000f0000000000000000;
    uStack_30 = _UNK_15076add8;
    if (local_58._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_58._Mypair._Myval2 + 4) +
               (longlong)local_58._Mypair._Myval2);
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_78.message_._Mypair._Myval2;
    if (local_78.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_78.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c63c530

void * __thiscall
T256Test_AndNotScalar_Test::_scalar_deleting_destructor_
          (T256Test_AndNotScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63c570

Test * __thiscall
testing::internal::TestFactoryImpl<T256Test_AndNotScalar_Test>::CreateTest
          (TestFactoryImpl<T256Test_AndNotScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7T256Test_AndNotScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63c5b0

void * __thiscall
testing::internal::TestFactoryImpl<T256Test_AndNotScalar_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_AndNotScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_AndNotScalar_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63c5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall T256Test_RsqrtScalar_Test::TestBody(T256Test_RsqrtScalar_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  ulonglong uVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *this_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_b8 [32];
  AssertHelper local_88;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_80;
  AssertionResult local_78;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar2 = 0;
  local_68._Ptr = ___xmm_3eaaaaab3f13cd3a3f3504f33f800000;
  local_68._8_8_ = _UNK_15289f8d8;
  local_40 = ___xmm_3eaaaaab3f13cd3a3f3504f33f800000;
  uStack_38 = _UNK_15289f8d8;
  local_58 = ___xmm_3f8000003f3504f33f13cd3a3eaaaaab;
  uStack_50 = _UNK_1528a0278;
  local_30 = ___xmm_3f8000003f3504f33f13cd3a3eaaaaab;
  uStack_28 = _UNK_1528a0278;
  do {
    if (__real_3951b717 <
        (float)((uint)(*(float *)((longlong)&local_68 + uVar2) -
                      *(float *)((longlong)&local_40 + uVar2)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_78.success_ = false;
      local_78.message_._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_80);
      pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_68,&local_78,"near(v, e, threshold)","false","true");
      if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
        pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar4->_Mypair)._Myval2._Bx._Ptr;
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_88,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                           ,0x30a,(char *)pbVar4);
      testing::internal::AssertHelper::operator=(this_00,pMVar3);
      testing::internal::AssertHelper::~AssertHelper(&local_88);
      if (0xf < uStack_50) {
        uVar7 = uStack_50 + 1;
        uVar5 = local_68._Ptr;
        if (0xfff < uVar7) {
          uVar5 = *(undefined8 *)(local_68._Ptr + -8);
          uVar7 = uStack_50 + 0x28;
          if ((char *)0x1f < local_68._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar5,uVar7);
      }
      local_68._Ptr = local_68._Ptr & 0xffffffffffffff00;
      local_58 = ___xmm_000000000000000f0000000000000000;
      uStack_50 = _UNK_15076add8;
      if (local_80._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar6 = (undefined8 *)
                 ((longlong)*(int *)(*(longlong *)local_80._Mypair._Myval2 + 4) +
                 (longlong)local_80._Mypair._Myval2);
        (**(code **)*puVar6)(puVar6,1);
      }
      uVar1._Mypair._Myval2 = local_78.message_._Mypair._Myval2;
      if (local_78.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_78.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      return;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  return;
}

// `scalar_deleting_destructor' @ 14c63c7e0

void * __thiscall
T256Test_RsqrtScalar_Test::_scalar_deleting_destructor_
          (T256Test_RsqrtScalar_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63c820

Test * __thiscall
testing::internal::TestFactoryImpl<T256Test_RsqrtScalar_Test>::CreateTest
          (TestFactoryImpl<T256Test_RsqrtScalar_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7T256Test_RsqrtScalar_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63c860

void * __thiscall
testing::internal::TestFactoryImpl<T256Test_RsqrtScalar_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_RsqrtScalar_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_RsqrtScalar_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c63c8a0

void * __thiscall
T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::_scalar_deleting_destructor_
          (T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// TestBody @ 14c63c8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  double dVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *this_00;
  char *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStackY_c8 [32];
  AssertionResult local_88;
  AssertHelper local_78;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  dVar1 = __real_3f1a36e2e0000000;
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar6 = 0;
  local_68 = ___xmm_40800000404000003fc0000040800000;
  uStack_60 = _UNK_15289f8e8;
  local_58 = ___xmm_40800000404000003fc0000040800000;
  uStack_50 = _UNK_15289f8e8;
  local_48 = ___xmm_40800000404000003fc0000040800000;
  uStack_40 = _UNK_15289f8e8;
  local_38 = ___xmm_40800000404000003fc0000040800000;
  uStack_30 = _UNK_15289f8e8;
  while (testing::internal::DoubleNearPredFormat
                   (&local_88,"result[i]","expected[i]","0.0001f",
                    (double)*(float *)((longlong)&local_48 + uVar6),
                    (double)*(float *)((longlong)&local_68 + uVar6),dVar1),
        uVar2._Mypair._Myval2 = local_88.message_._Mypair._Myval2, local_88.success_ != false) {
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    uVar6 = uVar6 + 4;
    if (0x1f < uVar6) {
      return;
    }
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_70);
  if (local_88.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)local_88.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
      pcVar4 = *(char **)local_88.message_._Mypair._Myval2;
    }
  }
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_78,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\trimdtests\\TestT256.cpp"
                       ,0x2be,pcVar4);
  testing::internal::AssertHelper::operator=(this_00,pMVar3);
  testing::internal::AssertHelper::~AssertHelper(&local_78);
  if (local_70._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_70._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_70._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  if (local_88.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             local_88.message_._Mypair._Myval2);
  ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  return;
}

// `scalar_deleting_destructor' @ 14c63ca80

void * __thiscall
T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c63cac0

Test * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
CreateTest(TestFactoryImpl<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &___7__T256Test_OperatorDiv_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c63cb00

void * __thiscall
testing::internal::
TestFactoryImpl<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c63cb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c63cbc8) */
/* WARNING: Removing unreachable block (ram,0x00014c63cc1b) */
/* WARNING: Removing unreachable block (ram,0x00014c63cc1e) */
/* WARNING: Removing unreachable block (ram,0x00014c63cc5f) */
/* WARNING: Removing unreachable block (ram,0x00014c63cc73) */
/* WARNING: Removing unreachable block (ram,0x00014c63cc88) */
/* WARNING: Removing unreachable block (ram,0x00014c63cca2) */
/* WARNING: Removing unreachable block (ram,0x00014c63cca7) */
/* WARNING: Removing unreachable block (ram,0x00014c63ccc4) */
/* WARNING: Removing unreachable block (ram,0x00014c63ccd8) */
/* WARNING: Removing unreachable block (ram,0x00014c63cce2) */
/* WARNING: Removing unreachable block (ram,0x00014c63ccf7) */

void __thiscall
T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::TestBody
          (T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c63cd20

void * __thiscall
T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>::
_scalar_deleting_destructor_
          (T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_> *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// operator==<trimd::scalar::T128<float>_> @ 14c63cd60

T256<trimd::scalar::T128<float>_> * __cdecl
trimd::fallback::operator==<trimd::scalar::T128<float>_>
          (T256<trimd::scalar::T128<float>_> *__return_storage_ptr__,
          T256<trimd::scalar::T128<float>_> *param_1,T256<trimd::scalar::T128<float>_> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = 0.0;
  if ((param_2->data1).data._Elems[0] == (param_1->data1).data._Elems[0]) {
    fVar2 = -NAN;
  }
  fVar7 = 0.0;
  if ((param_2->data1).data._Elems[1] == (param_1->data1).data._Elems[1]) {
    fVar7 = -NAN;
  }
  fVar9 = -NAN;
  fVar6 = 0.0;
  if ((param_2->data1).data._Elems[2] == (param_1->data1).data._Elems[2]) {
    fVar6 = -NAN;
  }
  fVar4 = 0.0;
  if ((param_2->data1).data._Elems[3] == (param_1->data1).data._Elems[3]) {
    fVar4 = fVar9;
  }
  fVar5 = 0.0;
  fVar8 = 0.0;
  if ((param_2->data2).data._Elems[0] == (param_1->data2).data._Elems[0]) {
    fVar8 = fVar9;
  }
  fVar3 = 0.0;
  if ((param_2->data2).data._Elems[1] == (param_1->data2).data._Elems[1]) {
    fVar3 = fVar9;
  }
  fVar9 = (param_2->data2).data._Elems[3];
  if ((param_2->data2).data._Elems[2] == (param_1->data2).data._Elems[2]) {
    fVar5 = -NAN;
  }
  fVar1 = (param_1->data2).data._Elems[3];
  (__return_storage_ptr__->data1).data._Elems[0] = fVar2;
  (__return_storage_ptr__->data1).data._Elems[1] = fVar7;
  (__return_storage_ptr__->data1).data._Elems[2] = fVar6;
  (__return_storage_ptr__->data1).data._Elems[3] = fVar4;
  fVar2 = 0.0;
  if (fVar9 == fVar1) {
    fVar2 = -NAN;
  }
  (__return_storage_ptr__->data2).data._Elems[0] = fVar8;
  (__return_storage_ptr__->data2).data._Elems[1] = fVar3;
  (__return_storage_ptr__->data2).data._Elems[2] = fVar5;
  (__return_storage_ptr__->data2).data._Elems[3] = fVar2;
  return __return_storage_ptr__;
}

// operator!=<trimd::scalar::T128<float>_> @ 14c63ce90

T256<trimd::scalar::T128<float>_> * __cdecl
trimd::fallback::operator!=<trimd::scalar::T128<float>_>
          (T256<trimd::scalar::T128<float>_> *__return_storage_ptr__,
          T256<trimd::scalar::T128<float>_> *param_1,T256<trimd::scalar::T128<float>_> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = 0.0;
  if ((param_2->data1).data._Elems[0] != (param_1->data1).data._Elems[0]) {
    fVar2 = -NAN;
  }
  fVar7 = 0.0;
  if ((param_2->data1).data._Elems[1] != (param_1->data1).data._Elems[1]) {
    fVar7 = -NAN;
  }
  fVar9 = -NAN;
  fVar6 = 0.0;
  if ((param_2->data1).data._Elems[2] != (param_1->data1).data._Elems[2]) {
    fVar6 = -NAN;
  }
  fVar4 = 0.0;
  if ((param_2->data1).data._Elems[3] != (param_1->data1).data._Elems[3]) {
    fVar4 = fVar9;
  }
  fVar5 = 0.0;
  fVar8 = 0.0;
  if ((param_2->data2).data._Elems[0] != (param_1->data2).data._Elems[0]) {
    fVar8 = fVar9;
  }
  fVar3 = 0.0;
  if ((param_2->data2).data._Elems[1] != (param_1->data2).data._Elems[1]) {
    fVar3 = fVar9;
  }
  fVar9 = (param_2->data2).data._Elems[3];
  if ((param_2->data2).data._Elems[2] != (param_1->data2).data._Elems[2]) {
    fVar5 = -NAN;
  }
  fVar1 = (param_1->data2).data._Elems[3];
  (__return_storage_ptr__->data1).data._Elems[0] = fVar2;
  (__return_storage_ptr__->data1).data._Elems[1] = fVar7;
  (__return_storage_ptr__->data1).data._Elems[2] = fVar6;
  (__return_storage_ptr__->data1).data._Elems[3] = fVar4;
  fVar2 = 0.0;
  if (fVar9 != fVar1) {
    fVar2 = -NAN;
  }
  (__return_storage_ptr__->data2).data._Elems[0] = fVar8;
  (__return_storage_ptr__->data2).data._Elems[1] = fVar3;
  (__return_storage_ptr__->data2).data._Elems[2] = fVar5;
  (__return_storage_ptr__->data2).data._Elems[3] = fVar2;
  return __return_storage_ptr__;
}

// GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_> @ 14c63cfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __cdecl testing::internal::
          GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *__return_storage_ptr__)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_68 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  _Bxty local_30;
  ulong64 local_20;
  ulong64 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  this = (Message *)testing::Message::Message((Message *)&local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,0);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  if (local_38._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_38._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (__return_storage_ptr__,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_30._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_20;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_18;
    ppbVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_20 = uVar7;
    uStack_18 = uVar4;
    local_30._Buf[0] = '\0';
  }
  if (0xf < uStack_18) {
    pvVar3 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    uVar7 = uStack_18 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_18 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  return __return_storage_ptr__;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_> @ 14c63d100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
          (Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_> param_1,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_68 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  _Bxty local_30;
  ulong64 local_20;
  ulong64 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = (Message *)testing::Message::Message((Message *)&local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  if (local_38._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_38._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_30._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_20;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_18;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_20 = uVar7;
    uStack_18 = uVar4;
    local_30._Buf[0] = '\0';
  }
  if (0xf < uStack_18) {
    pvVar3 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    uVar7 = uStack_18 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_18 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  return;
}

// GetTypeId<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_> @ 14c63d240

void * __cdecl
testing::internal::GetTypeId<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>(void)

{
  return &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_;
}

// GetTypeName<trimd::fallback::T256<trimd::scalar::T128<float>_>_> @ 14c63d250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::GetTypeName<trimd::fallback::T256<trimd::scalar::T128<float>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// transpose<float> @ 14c63d290

void __cdecl
trimd::scalar::transpose<float>
          (T128<float> *param_1,T128<float> *param_2,T128<float> *param_3,T128<float> *param_4)

{
  float fVar1;
  float fVar2;
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
  float fVar13;
  float fVar14;
  
  fVar1 = (param_3->data)._Elems[2];
  fVar2 = (param_4->data)._Elems[2];
  fVar3 = (param_1->data)._Elems[3];
  fVar4 = (param_2->data)._Elems[3];
  fVar5 = (param_3->data)._Elems[3];
  fVar6 = (param_4->data)._Elems[3];
  fVar7 = (param_2->data)._Elems[2];
  fVar8 = (param_1->data)._Elems[2];
  fVar9 = (param_4->data)._Elems[1];
  fVar10 = (param_3->data)._Elems[1];
  fVar11 = (param_2->data)._Elems[1];
  fVar12 = (param_1->data)._Elems[1];
  fVar13 = (param_3->data)._Elems[0];
  fVar14 = (param_4->data)._Elems[0];
  (param_1->data)._Elems[1] = (param_2->data)._Elems[0];
  (param_1->data)._Elems[2] = fVar13;
  (param_1->data)._Elems[3] = fVar14;
  (param_2->data)._Elems[0] = fVar12;
  (param_2->data)._Elems[1] = fVar11;
  (param_2->data)._Elems[2] = fVar10;
  (param_2->data)._Elems[3] = fVar9;
  (param_3->data)._Elems[0] = fVar8;
  (param_3->data)._Elems[1] = fVar7;
  (param_3->data)._Elems[2] = fVar1;
  (param_3->data)._Elems[3] = fVar2;
  (param_4->data)._Elems[0] = fVar3;
  (param_4->data)._Elems[1] = fVar4;
  (param_4->data)._Elems[2] = fVar5;
  (param_4->data)._Elems[3] = fVar6;
  return;
}

// GetSetUpCaseOrSuite @ 14c63d3a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d440

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d4e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d580

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d620

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d6c0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d760

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d800

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d8a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d940

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63d9e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63da80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63db20

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63dbc0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63dc60

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63dd00

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63dda0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63de40

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63dee0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63df80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e020

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e0c0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e160

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e200

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e2a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e340

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c63e3e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e480

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e520

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e5c0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e660

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e700

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e7a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e840

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e8e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63e980

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63ea20

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63eac0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63eb60

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63ec00

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63eca0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63ed40

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63ede0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63ee80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63ef20

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63efc0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f060

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f100

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f1a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f240

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f2e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f380

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f420

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c63f4c0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// Register @ 14c63f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_AlignedLoadStore_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_AlignedLoadStore_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_AlignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c63f9f2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c63f9f2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c63f9f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c63f9f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c63f9f2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c63f9f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c63f9f2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c63fa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseAND_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_BitwiseAND_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_BitwiseAND_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c63fed2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c63fed2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c63fed2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c63fed2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c63fed2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c63fed2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c63fed2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c63ff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseNOT_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_BitwiseNOT_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_BitwiseNOT_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6403b2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6403b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6403b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6403b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6403b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6403b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6403b2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c640400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseOR_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_BitwiseOR_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_BitwiseOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c640892;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c640892;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c640892;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c640892;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c640892;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c640892;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c640892:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c6408e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_BitwiseXOR_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_BitwiseXOR_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_BitwiseXOR_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c640d72;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c640d72;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c640d72;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c640d72;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c640d72;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c640d72;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c640d72:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c640dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CheckSize_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_CheckSize_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_CheckSize_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c641252;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c641252;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641252;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641252;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c641252;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641252;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c641252:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c6412a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentAdd_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_CompoundAssignmentAdd_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_CompoundAssignmentAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c641732;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c641732;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641732;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641732;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c641732;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641732;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c641732:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c641780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentDiv_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_CompoundAssignmentDiv_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_CompoundAssignmentDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c641c12;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c641c12;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641c12;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641c12;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c641c12;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c641c12;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c641c12:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c641c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentMul_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_CompoundAssignmentMul_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_CompoundAssignmentMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6420f2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6420f2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6420f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6420f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6420f2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6420f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6420f2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c642140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_CompoundAssignmentSub_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_CompoundAssignmentSub_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_CompoundAssignmentSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6425d2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6425d2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6425d2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6425d2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6425d2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6425d2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6425d2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c642620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_ConstructFromArgs_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_ConstructFromArgs_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_ConstructFromArgs_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c642ab2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c642ab2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c642ab2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c642ab2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c642ab2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c642ab2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c642ab2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c642b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_ConstructFromSingleValue_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_ConstructFromSingleValue_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_ConstructFromSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c642f92;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c642f92;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c642f92;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c642f92;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c642f92;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c642f92;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c642f92:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c642fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_Equality_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_Equality_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_Equality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c643472;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c643472;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643472;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643472;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c643472;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643472;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c643472:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c6434c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_FromAlignedSource_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_FromAlignedSource_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_FromAlignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c643952;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c643952;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643952;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643952;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c643952;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643952;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c643952:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c6439a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_FromUnalignedSource_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_FromUnalignedSource_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_FromUnalignedSource_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c643e32;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c643e32;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643e32;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643e32;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c643e32;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c643e32;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c643e32:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c643e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_GreaterThanOrEqual_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_GreaterThanOrEqual_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_GreaterThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c644312;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c644312;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c644312;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c644312;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c644312;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c644312;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c644312:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c644360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_GreaterThan_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_GreaterThan_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_GreaterThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6447f2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6447f2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6447f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6447f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6447f2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6447f2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6447f2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c644840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_Inequality_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_Inequality_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_Inequality_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c644cd2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c644cd2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c644cd2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c644cd2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c644cd2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c644cd2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c644cd2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c644d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_LessThanOrEqual_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_LessThanOrEqual_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_LessThanOrEqual_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6451b2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6451b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6451b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6451b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6451b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6451b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6451b2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c645200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_LessThan_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_LessThan_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_LessThan_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c645692;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c645692;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c645692;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c645692;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c645692;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c645692;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c645692:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c6456e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_LoadSingleValue_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_LoadSingleValue_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_LoadSingleValue_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c645b72;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c645b72;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c645b72;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c645b72;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c645b72;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c645b72;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c645b72:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c645bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorAdd_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_OperatorAdd_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_OperatorAdd_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c646052;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c646052;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646052;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646052;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c646052;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646052;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c646052:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c6460a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorDiv_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_OperatorDiv_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_OperatorDiv_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c646532;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c646532;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646532;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646532;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c646532;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646532;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c646532:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c646580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorMul_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_OperatorMul_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_OperatorMul_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c646a12;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c646a12;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646a12;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646a12;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c646a12;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646a12;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c646a12:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c646a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_OperatorSub_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_OperatorSub_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_OperatorSub_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c646ef2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c646ef2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646ef2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646ef2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c646ef2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c646ef2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c646ef2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c646f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_Sum_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_Sum_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_Sum_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6473d2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6473d2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6473d2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6473d2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6473d2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6473d2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6473d2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c647420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<T256Test,testing::internal::TemplateSel<T256Test_UnalignedLoadStore_Test>,testing::internal::Types1<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__T256Test_UnalignedLoadStore_Test_U__T256_U__T128_M_scalar_trimd___fallback_trimd_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<T256Test_UnalignedLoadStore_Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<T256Test<trimd::fallback::T256<trimd::scalar::T128<float>_>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c6478b2;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c6478b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6478b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6478b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c6478b2;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c6478b2;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c6478b2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

