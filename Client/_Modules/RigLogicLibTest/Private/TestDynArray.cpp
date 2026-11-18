// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 117

// test_info_'' @ 14139d9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CopyAssign_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CopyAssign_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x54);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x54);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x54;
  DynArrayTest_CopyAssign_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CopyAssign",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139dbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CopyConstruct_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CopyConstruct_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x45);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x45);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x45;
  DynArrayTest_CopyConstruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CopyConstruct",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139ddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CreateEmpty_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CreateEmpty_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xc);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xc);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0xc;
  DynArrayTest_CreateEmpty_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CreateEmpty",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139e010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CreateFromEmptyRange_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CreateFromEmptyRange_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x32);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x32);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x32;
  DynArrayTest_CreateFromEmptyRange_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CreateFromEmptyRange",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CreateFromPointerSize_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VDynArrayTest_CreateFromPointerSize_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x38);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x38);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x38;
  DynArrayTest_CreateFromPointerSize_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CreateFromPointerSize",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139e450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CreateFromRange_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CreateFromRange_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x25);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x25);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x25;
  DynArrayTest_CreateFromRange_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CreateFromRange",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CreateInitialized_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CreateInitialized_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x1a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x1a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x1a;
  DynArrayTest_CreateInitialized_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CreateInitialized",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139e890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_CreateUninitialized_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_CreateUninitialized_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x13);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x13);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x13;
  DynArrayTest_CreateUninitialized_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","CreateUninitialized",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139eab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_MoveAssign_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_MoveAssign_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x7a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x7a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x7a;
  DynArrayTest_MoveAssign_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","MoveAssign",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139ecd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_MoveConstruct_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_MoveConstruct_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,100);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,100);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 100;
  DynArrayTest_MoveConstruct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","MoveConstruct",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139eef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_ResizeToLarger_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_ResizeToLarger_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xac);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xac);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0xac;
  DynArrayTest_ResizeToLarger_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","ResizeToLarger",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_ResizeToSmaller_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_ResizeToSmaller_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x9b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x9b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x9b;
  DynArrayTest_ResizeToSmaller_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","ResizeToSmaller",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'DynArrayTest_ResizeUninitializedToLarger_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VDynArrayTest_ResizeUninitializedToLarger_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xd2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xd2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0xd2;
  DynArrayTest_ResizeUninitializedToLarger_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","ResizeUninitializedToLarger",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'DynArrayTest_ResizeUninitializedToSmaller_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VDynArrayTest_ResizeUninitializedToSmaller_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xc1);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0xc1);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0xc1;
  DynArrayTest_ResizeUninitializedToSmaller_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","ResizeUninitializedToSmaller",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139f770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'DynArrayTest_SubscriptOperator_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VDynArrayTest_SubscriptOperator_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x91);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                      ,0x91);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x91;
  DynArrayTest_SubscriptOperator_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("DynArrayTest","SubscriptOperator",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c617510

void __thiscall DynArrayTest_CreateEmpty_Test::TestBody(DynArrayTest_CreateEmpty_Test *this)

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
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
             PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
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
    testing::AssertionSuccess(&local_18);
    if (local_18.success_ != false) goto LAB_14c61763b;
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
        goto LAB_14c6175ed;
      }
    }
    iVar5 = 0x10;
  }
LAB_14c6175ed:
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res10,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
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
LAB_14c61763b:
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c6176a0

void * __thiscall
DynArrayTest_CreateEmpty_Test::_scalar_deleting_destructor_
          (DynArrayTest_CreateEmpty_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6176e0

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateEmpty_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CreateEmpty_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CreateEmpty_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c617720

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateEmpty_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CreateEmpty_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CreateEmpty_Test>)&___7TestFactoryBase_internal_testing__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c617760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_CreateUninitialized_Test::TestBody(DynArrayTest_CreateUninitialized_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  char *pcVar6;
  void *pvVar7;
  ulong64 uVar8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar9;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  AssertionResult local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_a8 [2];
  undefined **local_98;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_90;
  undefined1 local_88 [64];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_48;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_98 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_90._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_88,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_c8);
  local_b8.success_ =
       local_90._Myval2 !=
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_b8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_90._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
    pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_b8,"arr.empty()","true","false");
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x15,(char *)pbVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_a8);
    if (0xf < uStack_20) {
      pvVar1 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
      uVar8 = uStack_20 + 1;
      pvVar7 = pvVar1;
      if (0xfff < uVar8) {
        pvVar7 = *(void **)((longlong)pvVar1 + -8);
        uVar8 = uStack_20 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar7,uVar8);
    }
    local_38._Buf[0] = '\0';
    local_28 = ___xmm_000000000000000f0000000000000000;
    uStack_20 = _UNK_15076add8;
    if (local_c0._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)local_c0._Mypair._Myval2 +
                  (longlong)*(int *)(*(undefined **)local_c0._Mypair._Myval2 + 4)))
                ((undefined8 *)
                 ((longlong)local_c0._Mypair._Myval2 +
                 (longlong)*(int *)(*(undefined **)local_c0._Mypair._Myval2 + 4)),1);
    }
    uVar2._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_48._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c617b91;
    local_c8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_48._Myval2;
    if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c617b87:
    puVar9 = &local_c8;
  }
  else {
    local_c8._Mypair._Myval2._0_4_ = 10;
    local_c0._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_90._Myval2;
    if (local_90._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
      testing::AssertionSuccess(&local_b8);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_b8,"arr.size()","10ul",(ulong64 *)&local_c0,(ulong *)&local_c8);
    }
    uVar2._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
      if (local_b8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = (char *)local_b8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
          pcVar6 = *(char **)local_b8.message_._Mypair._Myval2;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)local_a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x16,pcVar6);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_a8);
      if (local_c0._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (*(code *)**(undefined8 **)
                    ((longlong)local_c0._Mypair._Myval2 +
                    (longlong)*(int *)(*(undefined **)local_c0._Mypair._Myval2 + 4)))
                  ((undefined8 *)
                   ((longlong)local_c0._Mypair._Myval2 +
                   (longlong)*(int *)(*(undefined **)local_c0._Mypair._Myval2 + 4)),1);
      }
      uVar2._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_48._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c617b91;
      local_c8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_48._Myval2;
      if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c617b87;
    }
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_c0._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_c8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_48._Myval2;
    if (local_48._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      testing::internal::CmpHelperOpFailure<int_*,std::nullptr_t>
                (&local_b8,"arr.data()","nullptr",(int **)&local_c8,(void **)&local_c0,"!=");
    }
    else {
      testing::AssertionSuccess(&local_b8);
    }
    uVar2._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
      if (local_b8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = (char *)local_b8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
          pcVar6 = *(char **)local_b8.message_._Mypair._Myval2;
        }
      }
      pAVar4 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_c0,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x17,pcVar6);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_c0);
      if (local_c8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (*(code *)**(undefined8 **)
                    ((longlong)local_c8._Mypair._Myval2 +
                    (longlong)*(int *)(*(undefined **)local_c8._Mypair._Myval2 + 4)))
                  ((undefined8 *)
                   ((longlong)local_c8._Mypair._Myval2 +
                   (longlong)*(int *)(*(undefined **)local_c8._Mypair._Myval2 + 4)),1);
      }
      uVar2._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_48._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c617b91;
      local_a8[0]._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_48._Myval2;
      if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      puVar9 = local_a8;
    }
    else {
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_48._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c617b91;
      local_c0._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_48._Myval2;
      if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      puVar9 = &local_c0;
    }
  }
  (**(code **)(*(longlong *)local_88._56_8_ + 0x10))(local_88._56_8_,puVar9);
LAB_14c617b91:
  if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_88._56_8_ + 0x20))
              (local_88._56_8_,(undefined1 *)local_88._56_8_ != local_88);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c617c20

void * __thiscall
DynArrayTest_CreateUninitialized_Test::_scalar_deleting_destructor_
          (DynArrayTest_CreateUninitialized_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c617c60

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateUninitialized_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CreateUninitialized_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CreateUninitialized_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c617ca0

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateUninitialized_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CreateUninitialized_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CreateUninitialized_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c617ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_CreateInitialized_Test::TestBody(DynArrayTest_CreateInitialized_Test *this)

{
  byte *pbVar1;
  byte bVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  uint uVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  char *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  AssertHelperData *pAVar12;
  ulong64 uVar13;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar14;
  AssertHelperData *pAVar15;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  AssertHelper local_c0;
  AssertionResult local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_a8;
  byte local_a0 [8];
  undefined **local_98;
  AssertHelperData *local_90;
  undefined1 local_88 [64];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_48;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_a0[0] = 2;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_98 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_90 = (AssertHelperData *)&DAT_0000000a;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_88,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_c8);
  pAVar15 = (AssertHelperData *)0x0;
  uVar5 = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  pAVar12 = pAVar15;
  do {
    pbVar1 = local_a0 + (longlong)pAVar12;
    pAVar12 = (AssertHelperData *)((longlong)&pAVar12->type + 1);
    bVar2 = *(byte *)((longlong)&pAVar12->type + (longlong)(local_a0 + 3));
    if (*pbVar1 != bVar2) {
      uVar5 = -(uint)(*pbVar1 < bVar2) | 1;
      break;
    }
  } while (pAVar12 != (AssertHelperData *)&DAT_00000004);
  if (uVar5 == 0) {
    *(undefined **)local_48._Myval2 = (undefined *)0x0;
    *(undefined8 *)&(local_48._Myval2)->field_0x8 = 0;
    *(undefined8 *)&(local_48._Myval2)->field_0x10 = 0;
    ((local_48._Myval2)->_Stringbuffer)._padding_ = 0;
    ((local_48._Myval2)->_Stringbuffer)._padding_ = 0;
  }
  else {
    *(undefined4 *)local_48._Myval2 = 2;
    *(undefined4 *)&(local_48._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_48._Myval2)->field_0x8 = 2;
    *(undefined4 *)&(local_48._Myval2)->field_0xc = 2;
    *(undefined4 *)&(local_48._Myval2)->field_0x10 = 2;
    *(undefined4 *)&(local_48._Myval2)->field_0x14 = 2;
    *(undefined4 *)&((local_48._Myval2)->_Stringbuffer)._padding_ = 2;
    *(undefined4 *)((longlong)&((local_48._Myval2)->_Stringbuffer)._padding_ + 4) = 2;
    *(undefined4 *)&((local_48._Myval2)->_Stringbuffer)._padding_ = 2;
    *(undefined4 *)((longlong)&((local_48._Myval2)->_Stringbuffer)._padding_ + 4) = 2;
  }
  local_b8.success_ = local_90 != (AssertHelperData *)0x0;
  local_b8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_90 == (AssertHelperData *)0x0) {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_c0);
    pbVar8 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,&local_b8,"arr.empty()","true","false");
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x1c,(char *)pbVar8);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
    if (0xf < uStack_20) {
      pvVar3 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
      uVar13 = uStack_20 + 1;
      pvVar11 = pvVar3;
      if (0xfff < uVar13) {
        pvVar11 = *(void **)((longlong)pvVar3 + -8);
        uVar13 = uStack_20 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar11,uVar13);
    }
    local_38._Buf[0] = '\0';
    local_28 = ___xmm_000000000000000f0000000000000000;
    uStack_20 = _UNK_15076add8;
    if (local_c0.data_ != (AssertHelperData *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)&(local_c0.data_)->type +
                (longlong)*(int *)(*(longlong *)local_c0.data_ + 4));
      (**(code **)*puVar10)(puVar10,1);
    }
    uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (local_48._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c6182bb;
    local_c8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_48._Myval2;
    if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c6182b1:
    puVar14 = &local_c8;
  }
  else {
    local_c8._Mypair._Myval2._0_4_ = 10;
    local_c0.data_ = local_90;
    if (local_90 == (AssertHelperData *)&DAT_0000000a) {
      testing::AssertionSuccess(&local_b8);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_b8,"arr.size()","10ul",(ulong64 *)&local_c0,(ulong *)&local_c8);
    }
    uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_c0);
      if (local_b8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_b8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_b8.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x1d,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
      if (local_c0.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_c0.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_c0.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (local_48._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c6182bb;
      local_c8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_48._Myval2;
      if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c6182b1;
    }
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_c0.data_ = (AssertHelperData *)0x0;
    local_c8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_48._Myval2;
    if (local_48._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      testing::internal::CmpHelperOpFailure<int_*,std::nullptr_t>
                (&local_b8,"arr.data()","nullptr",(int **)&local_c8,&local_c0.data_,"!=");
    }
    else {
      testing::AssertionSuccess(&local_b8);
    }
    uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_c0);
      if (local_b8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_b8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_b8.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_a8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x1e,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_a8);
      if (local_c0.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_c0.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_c0.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (local_48._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c6182bb;
      local_c8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_48._Myval2;
      if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c6182b1;
    }
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    if (local_90 != (AssertHelperData *)0x0) {
      do {
        local_c8._Mypair._Myval2._0_4_ = 2;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_b8,"arr[i]","2",
                   (int *)((longlong)&(local_48._Myval2)->field_0x0 + (longlong)pAVar15 * 4),
                   (int *)&local_c8);
        uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
        if (local_b8.success_ == false) {
          pMVar6 = (Message *)testing::Message::Message((Message *)&local_c8);
          if (local_b8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar9 = "";
          }
          else {
            pcVar9 = (char *)local_b8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
              pcVar9 = *(char **)local_b8.message_._Mypair._Myval2;
            }
          }
          pAVar7 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_c0,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                              ,0x21,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
          testing::internal::AssertHelper::~AssertHelper(&local_c0);
          if (local_c8._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            (*(code *)**(undefined8 **)
                        ((longlong)local_c8._Mypair._Myval2 +
                        (longlong)*(int *)(*(undefined **)local_c8._Mypair._Myval2 + 4)))
                      ((undefined8 *)
                       ((longlong)local_c8._Mypair._Myval2 +
                       (longlong)*(int *)(*(undefined **)local_c8._Mypair._Myval2 + 4)),1);
          }
          uVar4._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
          if (local_b8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_b8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          if (local_48._Myval2 ==
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
          goto LAB_14c6182bb;
          local_a8._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_48._Myval2;
          if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          goto LAB_14c618015;
        }
        if (local_b8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        pAVar15 = (AssertHelperData *)((longlong)&pAVar15->type + 1);
      } while (pAVar15 < local_90);
    }
    if (local_48._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c6182bb;
    local_a8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_48._Myval2;
    if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c618015:
    puVar14 = &local_a8;
  }
  (**(code **)(*(longlong *)local_88._56_8_ + 0x10))(local_88._56_8_,puVar14);
LAB_14c6182bb:
  if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_88._56_8_ + 0x20))
              (local_88._56_8_,(undefined1 *)local_88._56_8_ != local_88);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c618360

void * __thiscall
DynArrayTest_CreateInitialized_Test::_scalar_deleting_destructor_
          (DynArrayTest_CreateInitialized_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6183a0

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateInitialized_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CreateInitialized_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CreateInitialized_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6183e0

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateInitialized_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CreateInitialized_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CreateInitialized_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c618420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_CreateFromRange_Test::TestBody(DynArrayTest_CreateFromRange_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  char *pcVar6;
  undefined8 *puVar7;
  void *pvVar8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar9;
  ulong64 uVar10;
  AssertHelperData *pAVar11;
  undefined1 auStackY_118 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_e8;
  AssertHelper local_e0;
  AssertionResult local_d8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8 [2];
  undefined **local_b8;
  AssertHelperData *local_b0;
  undefined1 local_a8 [64];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_38 = ___xmm_00000004000000030000000200000001;
  uStack_30 = _UNK_150631e38;
  local_18 = 9;
  local_28 = ___xmm_00000008000000070000000600000005;
  lStack_20 = _UNK_150631ed8;
  local_14 = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_e8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  local_b0 = (AssertHelperData *)&DAT_0000000a;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_a8,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_e8);
  memmove(local_68._Myval2,&stack0xffffffffffffffc8,0x28);
  local_d8.success_ = local_b0 != (AssertHelperData *)0x0;
  pAVar11 = (AssertHelperData *)0x0;
  local_d8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_b0 == (AssertHelperData *)0x0) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
    pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_d8,"arr.empty()","true","false");
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_c8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x28,(char *)pbVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
    if (0xf < uStack_40) {
      pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar10) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar8,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (local_e0.data_ != (AssertHelperData *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)&(local_e0.data_)->type +
               (longlong)*(int *)(*(longlong *)local_e0.data_ + 4));
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c618a26;
    local_e8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_68._Myval2;
    if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  else {
    local_e8._Mypair._Myval2._0_4_ = 10;
    local_e0.data_ = local_b0;
    if (local_b0 == (AssertHelperData *)&DAT_0000000a) {
      testing::AssertionSuccess(&local_d8);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_d8,"arr.size()","10ul",(ulong64 *)&local_e0,(ulong *)&local_e8);
    }
    uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.success_ != false) {
      if (local_d8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_d8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      local_e0.data_ = (AssertHelperData *)0x0;
      local_e8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_68._Myval2;
      if (local_68._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        testing::internal::CmpHelperOpFailure<int_*,std::nullptr_t>
                  (&local_d8,"arr.data()","nullptr",(int **)&local_e8,&local_e0.data_,"!=");
      }
      else {
        testing::AssertionSuccess(&local_d8);
      }
      uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
      if (local_d8.success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
        if (local_d8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
            pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
          }
        }
        pAVar4 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)local_c8,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                            ,0x2a,pcVar6);
        testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_e0.data_
            != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar7 = (undefined8 *)
                   ((longlong)&(local_e0.data_)->type +
                   (longlong)*(int *)(*(undefined **)local_e0.data_ + 4));
          (**(code **)*puVar7)(puVar7,1);
        }
        uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
        if (local_d8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61891c;
        local_e8._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_68._Myval2;
        if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
LAB_14c618911:
        puVar9 = &local_e8;
      }
      else {
        if (local_d8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_e0.data_ = (AssertHelperData *)local_68._Myval2;
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            &stack0xffffffffffffffc8) {
          testing::internal::CmpHelperOpFailure<int_*,int_[10]>
                    (&local_d8,"arr.data()","values",(int **)&local_e0,
                     (int (*) [10])&stack0xffffffffffffffc8,"!=");
        }
        else {
          testing::AssertionSuccess(&local_d8);
        }
        uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
        if (local_d8.success_ == false) {
          pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
          if (local_d8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar6 = "";
          }
          else {
            pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
              pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
            }
          }
          pAVar4 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)local_c8,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                              ,0x2b,pcVar6);
          testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
          if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
              local_e0.data_ !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar7 = (undefined8 *)
                     ((longlong)&(local_e0.data_)->type +
                     (longlong)*(int *)(*(undefined **)local_e0.data_ + 4));
            (**(code **)*puVar7)(puVar7,1);
          }
          uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
          if (local_d8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_d8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
          }
          if (local_68._Myval2 ==
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
          goto LAB_14c61891c;
          local_e8._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_68._Myval2;
          if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          goto LAB_14c618911;
        }
        if (local_d8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        if (local_b0 != (AssertHelperData *)0x0) {
          do {
            testing::internal::EqHelper::Compare<int,int,0>
                      (&local_d8,"arr[i]","values[i]",
                       (int *)((longlong)&(local_68._Myval2)->field_0x0 + (longlong)pAVar11 * 4),
                       (int *)((longlong)&stack0xffffffffffffffc8 + (longlong)pAVar11 * 4));
            uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
            if (local_d8.success_ == false) {
              pMVar3 = (Message *)testing::Message::Message((Message *)&local_e8);
              if (local_d8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar6 = "";
              }
              else {
                pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
                }
              }
              pAVar4 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 (&local_e0,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                  ,0x2e,pcVar6);
              testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
              testing::internal::AssertHelper::~AssertHelper(&local_e0);
              if (local_e8._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                (*(code *)**(undefined8 **)
                            ((longlong)local_e8._Mypair._Myval2 +
                            (longlong)*(int *)(*(undefined **)local_e8._Mypair._Myval2 + 4)))
                          ((undefined8 *)
                           ((longlong)local_e8._Mypair._Myval2 +
                           (longlong)*(int *)(*(undefined **)local_e8._Mypair._Myval2 + 4)),1);
              }
              uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              if (local_d8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_d8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
              }
              if (local_68._Myval2 ==
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
              goto LAB_14c61891c;
              local_c8[0]._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )local_68._Myval2;
              if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              goto LAB_14c61878e;
            }
            if (local_d8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_d8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
            }
            pAVar11 = (AssertHelperData *)((longlong)&pAVar11->type + 1);
          } while (pAVar11 < local_b0);
        }
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61891c;
        local_c8[0]._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_68._Myval2;
        if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
LAB_14c61878e:
        puVar9 = local_c8;
      }
      (**(code **)(*(longlong *)local_a8._56_8_ + 0x10))(local_a8._56_8_,puVar9);
LAB_14c61891c:
      if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
        return;
      }
      (**(code **)(*(longlong *)local_a8._56_8_ + 0x20))
                (local_a8._56_8_,(undefined1 *)local_a8._56_8_ != local_a8);
      return;
    }
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
    if (local_d8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_c8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x29,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
    if (local_e0.data_ != (AssertHelperData *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)&(local_e0.data_)->type +
               (longlong)*(int *)(*(longlong *)local_e0.data_ + 4));
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c618a26;
    local_e8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_68._Myval2;
    if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  (**(code **)(*(longlong *)local_a8._56_8_ + 0x10))(local_a8._56_8_,&local_e8);
LAB_14c618a26:
  if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_a8._56_8_ + 0x20))
              (local_a8._56_8_,(undefined1 *)local_a8._56_8_ != local_a8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c618be0

void * __thiscall
DynArrayTest_CreateFromRange_Test::_scalar_deleting_destructor_
          (DynArrayTest_CreateFromRange_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c618c20

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateFromRange_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CreateFromRange_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CreateFromRange_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c618c60

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateFromRange_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CreateFromRange_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CreateFromRange_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c618ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_CreateFromEmptyRange_Test::TestBody(DynArrayTest_CreateFromEmptyRange_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  AssertHelper *this_00;
  void *pvVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_f8 [32];
  AssertHelper local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  AssertHelperData *local_b8;
  AssertionResult local_b0;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined **local_78;
  longlong local_70;
  undefined1 local_68 [64];
  AssertHelperData *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pma::PolyAllocator<int,8,pma::DefaultMemoryResource>::
  PolyAllocator<int,8,pma::DefaultMemoryResource>
            ((PolyAllocator<int,8,pma::DefaultMemoryResource> *)&local_a0._Ptr);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_70 = 0;
  local_78 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c8.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_68,0,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_c8);
  local_b0.success_ = local_70 == 0;
  local_b0.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_70 == 0) {
    if (local_28 != (AssertHelperData *)0x0) {
      local_c8.data_ = local_28;
      if ((longlong *)local_68._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_68._56_8_ + 0x10))(local_68._56_8_,&local_c8);
    }
    if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
                (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
    }
  }
  else {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0
                        ,&local_b0,"arr.empty()","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_c8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x35,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(this_00,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_c8);
    if (0xf < uStack_88) {
      pvVar1 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
      uVar7 = uStack_88 + 1;
      pvVar5 = pvVar1;
      if (0xfff < uVar7) {
        pvVar5 = *(void **)((longlong)pvVar1 + -8);
        uVar7 = uStack_88 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar5,uVar7);
    }
    local_a0._Buf[0] = '\0';
    local_90 = ___xmm_000000000000000f0000000000000000;
    uStack_88 = _UNK_15076add8;
    if (local_c0._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar6 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4) +
               (longlong)local_c0._Mypair._Myval2);
      (**(code **)*puVar6)(puVar6,1);
    }
    uVar2._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
    if (local_b0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_28 != (AssertHelperData *)0x0) {
      local_b8 = local_28;
      if ((longlong *)local_68._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_68._56_8_ + 0x10))(local_68._56_8_,&local_b8);
    }
    if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
                (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c618f30

void * __thiscall
DynArrayTest_CreateFromEmptyRange_Test::_scalar_deleting_destructor_
          (DynArrayTest_CreateFromEmptyRange_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c618f70

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateFromEmptyRange_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CreateFromEmptyRange_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CreateFromEmptyRange_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c618fb0

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateFromEmptyRange_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CreateFromEmptyRange_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CreateFromEmptyRange_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c618ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_CreateFromPointerSize_Test::TestBody(DynArrayTest_CreateFromPointerSize_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  char *pcVar6;
  undefined8 *puVar7;
  void *pvVar8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar9;
  ulong64 uVar10;
  AssertHelperData *pAVar11;
  undefined1 auStackY_118 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_e8;
  AssertHelper local_e0;
  AssertionResult local_d8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8 [2];
  undefined **local_b8;
  AssertHelperData *local_b0;
  undefined1 local_a8 [64];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_38 = ___xmm_00000004000000030000000200000001;
  uStack_30 = _UNK_150631e38;
  local_18 = 9;
  local_28 = ___xmm_00000008000000070000000600000005;
  lStack_20 = _UNK_150631ed8;
  iStack_14 = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_b0 = (AssertHelperData *)&DAT_0000000a;
  local_b8 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_e8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_a8,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_e8);
  if (local_68._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined **)local_68._Myval2 = local_38;
    *(undefined8 *)&(local_68._Myval2)->field_0x8 = uStack_30;
    *(undefined8 *)&(local_68._Myval2)->field_0x10 = local_28;
    ((local_68._Myval2)->_Stringbuffer)._padding_ = lStack_20;
    ((local_68._Myval2)->_Stringbuffer)._padding_ = CONCAT44(iStack_14,local_18);
  }
  local_d8.success_ = local_b0 != (AssertHelperData *)0x0;
  pAVar11 = (AssertHelperData *)0x0;
  local_d8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_b0 == (AssertHelperData *)0x0) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
    pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,&local_d8,"arr.empty()","true","false");
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_c8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x3b,(char *)pbVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
    if (0xf < uStack_40) {
      pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar10) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar8,uVar10);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (local_e0.data_ != (AssertHelperData *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)&(local_e0.data_)->type +
               (longlong)*(int *)(*(longlong *)local_e0.data_ + 4));
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c619605;
    local_e8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_68._Myval2;
    if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  else {
    local_e8._Mypair._Myval2._0_4_ = 10;
    local_e0.data_ = local_b0;
    if (local_b0 == (AssertHelperData *)&DAT_0000000a) {
      testing::AssertionSuccess(&local_d8);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_d8,"arr.size()","10ul",(ulong64 *)&local_e0,(ulong *)&local_e8);
    }
    uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.success_ != false) {
      if (local_d8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_d8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      local_e0.data_ = (AssertHelperData *)0x0;
      local_e8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_68._Myval2;
      if (local_68._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        testing::internal::CmpHelperOpFailure<int_*,std::nullptr_t>
                  (&local_d8,"arr.data()","nullptr",(int **)&local_e8,&local_e0.data_,"!=");
      }
      else {
        testing::AssertionSuccess(&local_d8);
      }
      uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
      if (local_d8.success_ == false) {
        pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
        if (local_d8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
            pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
          }
        }
        pAVar4 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)local_c8,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                            ,0x3d,pcVar6);
        testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_e0.data_
            != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar7 = (undefined8 *)
                   ((longlong)&(local_e0.data_)->type +
                   (longlong)*(int *)(*(undefined **)local_e0.data_ + 4));
          (**(code **)*puVar7)(puVar7,1);
        }
        uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
        if (local_d8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c6194fb;
        local_e8._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_68._Myval2;
        if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
LAB_14c6194f0:
        puVar9 = &local_e8;
      }
      else {
        if (local_d8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_e0.data_ = (AssertHelperData *)local_68._Myval2;
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            &stack0xffffffffffffffc8) {
          testing::internal::CmpHelperOpFailure<int_*,int_[10]>
                    (&local_d8,"arr.data()","values",(int **)&local_e0,
                     (int (*) [10])&stack0xffffffffffffffc8,"!=");
        }
        else {
          testing::AssertionSuccess(&local_d8);
        }
        uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
        if (local_d8.success_ == false) {
          pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
          if (local_d8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar6 = "";
          }
          else {
            pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
              pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
            }
          }
          pAVar4 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)local_c8,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                              ,0x3e,pcVar6);
          testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
          if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
              local_e0.data_ !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar7 = (undefined8 *)
                     ((longlong)&(local_e0.data_)->type +
                     (longlong)*(int *)(*(undefined **)local_e0.data_ + 4));
            (**(code **)*puVar7)(puVar7,1);
          }
          uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
          if (local_d8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_d8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
          }
          if (local_68._Myval2 ==
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
          goto LAB_14c6194fb;
          local_e8._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_68._Myval2;
          if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          goto LAB_14c6194f0;
        }
        if (local_d8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        if (local_b0 != (AssertHelperData *)0x0) {
          do {
            testing::internal::EqHelper::Compare<int,int,0>
                      (&local_d8,"arr[i]","values[i]",
                       (int *)((longlong)&(local_68._Myval2)->field_0x0 + (longlong)pAVar11 * 4),
                       (int *)((longlong)&stack0xffffffffffffffc8 + (longlong)pAVar11 * 4));
            uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
            if (local_d8.success_ == false) {
              pMVar3 = (Message *)testing::Message::Message((Message *)&local_e8);
              if (local_d8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar6 = "";
              }
              else {
                pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
                }
              }
              pAVar4 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 (&local_e0,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                  ,0x41,pcVar6);
              testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
              testing::internal::AssertHelper::~AssertHelper(&local_e0);
              if (local_e8._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                (*(code *)**(undefined8 **)
                            ((longlong)local_e8._Mypair._Myval2 +
                            (longlong)*(int *)(*(undefined **)local_e8._Mypair._Myval2 + 4)))
                          ((undefined8 *)
                           ((longlong)local_e8._Mypair._Myval2 +
                           (longlong)*(int *)(*(undefined **)local_e8._Mypair._Myval2 + 4)),1);
              }
              uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              if (local_d8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_d8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
              }
              if (local_68._Myval2 ==
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
              goto LAB_14c6194fb;
              local_c8[0]._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )local_68._Myval2;
              if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              goto LAB_14c61936d;
            }
            if (local_d8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_d8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
            }
            pAVar11 = (AssertHelperData *)((longlong)&pAVar11->type + 1);
          } while (pAVar11 < local_b0);
        }
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c6194fb;
        local_c8[0]._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_68._Myval2;
        if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
LAB_14c61936d:
        puVar9 = local_c8;
      }
      (**(code **)(*(longlong *)local_a8._56_8_ + 0x10))(local_a8._56_8_,puVar9);
LAB_14c6194fb:
      if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
        return;
      }
      (**(code **)(*(longlong *)local_a8._56_8_ + 0x20))
                (local_a8._56_8_,(undefined1 *)local_a8._56_8_ != local_a8);
      return;
    }
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_e0);
    if (local_d8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_d8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_d8.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_c8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x3c,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_c8);
    if (local_e0.data_ != (AssertHelperData *)0x0) {
      puVar7 = (undefined8 *)
               ((longlong)&(local_e0.data_)->type +
               (longlong)*(int *)(*(longlong *)local_e0.data_ + 4));
      (**(code **)*puVar7)(puVar7,1);
    }
    uVar2._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
    if (local_d8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_d8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c619605;
    local_e8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_68._Myval2;
    if ((longlong *)local_a8._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  (**(code **)(*(longlong *)local_a8._56_8_ + 0x10))(local_a8._56_8_,&local_e8);
LAB_14c619605:
  if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_a8._56_8_ + 0x20))
              (local_a8._56_8_,(undefined1 *)local_a8._56_8_ != local_a8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c6197c0

void * __thiscall
DynArrayTest_CreateFromPointerSize_Test::_scalar_deleting_destructor_
          (DynArrayTest_CreateFromPointerSize_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c619800

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateFromPointerSize_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CreateFromPointerSize_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CreateFromPointerSize_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c619840

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CreateFromPointerSize_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CreateFromPointerSize_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CreateFromPointerSize_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c619880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_CopyConstruct_Test::TestBody(DynArrayTest_CopyConstruct_Test *this)

{
  int *piVar1;
  int *piVar2;
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
  undefined8 *puVar13;
  char *pcVar14;
  ulong64 uVar15;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar16;
  ulonglong uVar17;
  undefined1 auStackY_1d8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1a8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_1a0;
  AssertHelper local_198;
  AssertionResult local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 local_15c;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_158;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_150;
  undefined1 local_148 [64];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_108;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_f8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_f0;
  undefined1 local_e8 [56];
  longlong *local_b0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_a8;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_180 = ___xmm_00000004000000030000000200000001;
  uStack_178 = _UNK_150631e38;
  local_160 = 9;
  local_170 = ___xmm_00000008000000070000000600000005;
  uStack_168 = _UNK_150631ed8;
  local_15c = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_150._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a;
  local_158._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_148,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_1a8);
  if (local_108._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)local_108._Myval2 = 1;
    *(undefined4 *)&(local_108._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_108._Myval2)->field_0x8 = 3;
    *(undefined4 *)&(local_108._Myval2)->field_0xc = 4;
    *(undefined4 *)&(local_108._Myval2)->field_0x10 = 5;
    *(undefined4 *)&(local_108._Myval2)->field_0x14 = 6;
    *(undefined4 *)&((local_108._Myval2)->_Stringbuffer)._padding_ = 7;
    *(undefined4 *)((longlong)&((local_108._Myval2)->_Stringbuffer)._padding_ + 4) = 8;
    *(undefined4 *)&((local_108._Myval2)->_Stringbuffer)._padding_ = 9;
    *(undefined4 *)((longlong)&((local_108._Myval2)->_Stringbuffer)._padding_ + 4) = 10;
  }
  local_f8 = local_158._Myval2;
  local_f0 = local_150._Myval2;
  local_1a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_158._Myval2;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_e8,
             (ulong64)local_150._Myval2,(PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_1a8)
  ;
  if ((local_a8._Myval2 !=
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) &&
     (local_108._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    memcpy(local_a8._Myval2,local_108._Myval2,(longlong)local_150._Myval2 * 4);
  }
  local_1a8._Mypair._Myval2._0_4_ = 10;
  local_198.data_ = (AssertHelperData *)local_150._Myval2;
  if (local_150._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
    testing::AssertionSuccess(&local_190);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_190,"arr.size()","10ul",(ulong64 *)&local_198,(ulong *)&local_1a8);
  }
  uVar6._Mypair._Myval2 = local_190.message_._Mypair._Myval2;
  if (local_190.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_198);
    if (local_190.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_190.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_190.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1a0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x4a,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1a0);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_198.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_198.data_)->type +
                (longlong)*(int *)(*(longlong *)local_198.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
    }
    if (local_a8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_a8._Myval2;
      if (local_b0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_b0 + 0x10))(local_b0,&local_1a8);
    }
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)local_e8);
      local_b0 = (longlong *)0x0;
    }
    if (local_108._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_108._Myval2;
      if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_148._56_8_ + 0x10))(local_148._56_8_,&local_1a8);
    }
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_148._56_8_ + 0x20))
              (local_148._56_8_,(undefined1 *)local_148._56_8_ != local_148);
    return;
  }
  if (local_190.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
  }
  uVar5 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  local_198.data_ = (AssertHelperData *)local_f0;
  local_1a8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_150._Myval2;
  if (local_150._Myval2 == local_f0) {
    testing::AssertionSuccess(&local_190);
  }
  else {
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
               (ulong64 *)&local_198);
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
               (ulong64 *)&local_1a8);
    testing::internal::EqFailure
              (&local_190,"arr.size()","arrCopy.size()",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,false);
    if (0xf < uStack_80) {
      pvVar3 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
      uVar15 = uStack_80 + 1;
      pvVar11 = pvVar3;
      if (0xfff < uVar15) {
        pvVar11 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_80 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) goto LAB_14c619b21;
      }
      ::operator_delete(pvVar11,uVar15);
    }
    local_98._Buf[0] = '\0';
    local_88 = uVar4;
    uStack_80 = uVar5;
    if (0xf < uStack_60) {
      pvVar3 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar15 = uStack_60 + 1;
      pvVar11 = pvVar3;
      if (0xfff < uVar15) {
        pvVar11 = *(void **)((longlong)pvVar3 + -8);
        uVar15 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) {
LAB_14c619b21:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar11,uVar15);
    }
  }
  uVar6._Mypair._Myval2 = local_190.message_._Mypair._Myval2;
  if (local_190.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_198);
    if (local_190.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_190.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_190.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1a0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x4b,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1a0);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_198.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_198.data_)->type +
                (longlong)*(int *)(*(longlong *)local_198.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
    }
    if (local_a8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_a8._Myval2;
      if (local_b0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_b0 + 0x10))(local_b0,&local_1a8);
    }
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)local_e8);
      local_b0 = (longlong *)0x0;
    }
    if (local_108._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_108._Myval2;
      if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_148._56_8_ + 0x10))(local_148._56_8_,&local_1a8);
    }
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_148._56_8_ + 0x20))
              (local_148._56_8_,(undefined1 *)local_148._56_8_ != local_148);
    return;
  }
  if (local_190.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
  }
  uVar17 = 0;
  if (local_150._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    do {
      piVar1 = (int *)((longlong)&(local_108._Myval2)->field_0x0 + uVar17 * 4);
      piVar2 = (int *)((longlong)&local_180 + uVar17 * 4);
      if (*piVar1 == *(int *)((longlong)&local_180 + uVar17 * 4)) {
        testing::AssertionSuccess(&local_190);
      }
      else {
        pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58,piVar2,piVar1);
        pbVar8 = testing::internal::FormatForComparisonFailureMessage<int,int>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_78,piVar1,piVar2);
        testing::internal::EqFailure(&local_190,"arr[i]","values[i]",pbVar8,pbVar7,false);
        if (0xf < uStack_60) {
          pvVar3 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
          uVar15 = uStack_60 + 1;
          pvVar11 = pvVar3;
          if (0xfff < uVar15) {
            pvVar11 = *(void **)((longlong)pvVar3 + -8);
            uVar15 = uStack_60 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) goto LAB_14c619d38;
          }
          ::operator_delete(pvVar11,uVar15);
        }
        local_78._Buf[0] = '\0';
        local_68 = uVar4;
        uStack_60 = uVar5;
        if (0xf < local_40) {
          uVar15 = local_40 + 1;
          uVar12 = local_58._Ptr;
          if (0xfff < uVar15) {
            uVar12 = *(undefined8 *)(local_58._Ptr + -8);
            uVar15 = local_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar12)) {
LAB_14c619d38:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar12,uVar15);
        }
      }
      uVar6._Mypair._Myval2 = local_190.message_._Mypair._Myval2;
      if (local_190.success_ == false) {
        pMVar9 = (Message *)testing::Message::Message((Message *)&local_198);
        if (local_190.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar14 = "";
        }
        else {
          pcVar14 = (char *)local_190.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
            pcVar14 = *(char **)local_190.message_._Mypair._Myval2;
          }
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            ((AssertHelper *)&local_1a0,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                             ,0x4d,pcVar14);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1a0);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_198.data_
            != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar13 = (undefined8 *)
                    ((longlong)&(local_198.data_)->type +
                    (longlong)*(int *)(*(longlong *)local_198.data_ + 4));
          (**(code **)*puVar13)(puVar13,1);
        }
        if (local_190.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_190.message_._Mypair._Myval2);
          ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
        }
        if (local_a8._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_1a8._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_a8._Myval2;
          if (local_b0 == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          (**(code **)(*local_b0 + 0x10))(local_b0,&local_1a8);
        }
        if (local_b0 != (longlong *)0x0) {
          (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)local_e8);
          local_b0 = (longlong *)0x0;
        }
        if (local_108._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61a11e;
        local_1a8._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_108._Myval2;
        if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        goto LAB_14c61a113;
      }
      if (local_190.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_190.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
      }
      testing::internal::EqHelper::Compare<int,int,0>
                ((AssertionResult *)&local_98,"arr[i]","arrCopy[i]",
                 (int *)((longlong)&(local_108._Myval2)->field_0x0 + uVar17 * 4),
                 (int *)((longlong)&(local_a8._Myval2)->field_0x0 + uVar17 * 4));
      uVar12 = local_98._8_8_;
      if (local_98._Buf[0] == '\0') {
        pMVar9 = (Message *)testing::Message::Message((Message *)&local_1a8);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_ ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar14 = "";
        }
        else {
          pcVar14 = local_98._8_8_;
          if (0xf < *(ulong64 *)(local_98._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
            pcVar14 = *local_98._8_8_;
          }
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_198,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                             ,0x4e,pcVar14);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
        testing::internal::AssertHelper::~AssertHelper(&local_198);
        if (local_1a8._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar13 = (undefined8 *)
                    ((longlong)local_1a8._Mypair._Myval2 +
                    (longlong)*(int *)(*(longlong *)local_1a8._Mypair._Myval2 + 4));
          (**(code **)*puVar13)(puVar13,1);
        }
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_ !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_98._8_8_);
          ::operator_delete((void *)local_98._8_8_,0x20);
        }
        if (local_a8._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_1a0._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_a8._Myval2;
          if (local_b0 == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          (**(code **)(*local_b0 + 0x10))(local_b0,&local_1a0);
        }
        if (local_b0 != (longlong *)0x0) {
          (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)local_e8);
          local_b0 = (longlong *)0x0;
        }
        if (local_108._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61a11e;
        local_1a0._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_108._Myval2;
        if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        goto LAB_14c619e4b;
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_ !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_
                  );
        ::operator_delete((void *)uVar12,0x20);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < local_150._Myval2);
  }
  local_1a0._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_a8._Myval2;
  local_198.data_ = (AssertHelperData *)local_108._Myval2;
  if (local_108._Myval2 == local_a8._Myval2) {
    testing::internal::CmpHelperOpFailure<int_*,int_*>
              (&local_190,"arr.data()","arrCopy.data()",(int **)&local_198,(int **)&local_1a0,"!=");
  }
  else {
    testing::AssertionSuccess(&local_190);
  }
  if (local_190.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_198);
    if (local_190.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_190.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_190.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1a0,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x51,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1a0);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_198.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_198.data_)->type +
                (longlong)*(int *)(*(longlong *)local_198.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
    }
    if (local_a8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1a8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_a8._Myval2;
      if (local_b0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_b0 + 0x10))(local_b0,&local_1a8);
    }
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)local_e8);
      local_b0 = (longlong *)0x0;
    }
    if (local_108._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61a11e;
    local_1a8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_108._Myval2;
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c61a113:
    puVar16 = &local_1a8;
  }
  else {
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
    }
    if (local_a8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_1a0._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_a8._Myval2;
      if (local_b0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*local_b0 + 0x10))(local_b0,&local_1a0);
    }
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)local_e8);
      local_b0 = (longlong *)0x0;
    }
    if (local_108._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61a11e;
    local_1a0._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_108._Myval2;
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c619e4b:
    puVar16 = &local_1a0;
  }
  (**(code **)(*(longlong *)local_148._56_8_ + 0x10))(local_148._56_8_,puVar16);
LAB_14c61a11e:
  if ((longlong *)local_148._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_148._56_8_ + 0x20))
              (local_148._56_8_,(undefined1 *)local_148._56_8_ != local_148);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61a460

void * __thiscall
DynArrayTest_CopyConstruct_Test::_scalar_deleting_destructor_
          (DynArrayTest_CopyConstruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61a4a0

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CopyConstruct_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CopyConstruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CopyConstruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61a4e0

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CopyConstruct_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CopyConstruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CopyConstruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61a520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_CopyAssign_Test::TestBody(DynArrayTest_CopyAssign_Test *this)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulong64 uVar15;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar16;
  int *piVar17;
  ulonglong uVar18;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar19;
  undefined1 auStackY_238 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_208;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_200;
  AssertHelper local_1f8;
  AssertionResult local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_1b8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_1b0;
  _Func_class<void,int_*> local_1a8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_168;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_158;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_150;
  undefined1 local_148 [64];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_108;
  _Bxty local_f8;
  undefined8 local_e8;
  ulonglong uStack_e0;
  _Bxty local_d8;
  undefined8 local_c8;
  ulonglong uStack_c0;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_b8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_b0;
  unique_ptr<int,std::function<void___cdecl(int_*)>_> local_a8;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_1c0 = 9;
  local_1e0 = ___xmm_00000004000000030000000200000001;
  uStack_1d8 = _UNK_150631e38;
  local_1bc = 10;
  local_1d0 = ___xmm_00000008000000070000000600000005;
  uStack_1c8 = _UNK_150631ed8;
  if ((*piVar17 <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_150._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a;
  local_158._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_208._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_148,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_208);
  if (local_108._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)local_108._Myval2 = 1;
    *(undefined4 *)&(local_108._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_108._Myval2)->field_0x8 = 3;
    *(undefined4 *)&(local_108._Myval2)->field_0xc = 4;
    *(undefined4 *)&(local_108._Myval2)->field_0x10 = 5;
    *(undefined4 *)&(local_108._Myval2)->field_0x14 = 6;
    *(undefined4 *)&((local_108._Myval2)->_Stringbuffer)._padding_ = 7;
    *(undefined4 *)((longlong)&((local_108._Myval2)->_Stringbuffer)._padding_ + 4) = 8;
    *(undefined4 *)&((local_108._Myval2)->_Stringbuffer)._padding_ = 9;
    *(undefined4 *)((longlong)&((local_108._Myval2)->_Stringbuffer)._padding_ + 4) = 10;
  }
  if ((*piVar17 <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar18 = 0;
  local_b8 = local_158._Myval2;
  local_1b0 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
  local_168._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_b0 = local_150._Myval2;
  local_208._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_158._Myval2;
  local_1b8 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
              &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            (&local_a8,(ulong64)local_150._Myval2,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_208);
  pbVar19 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            local_a8._Mypair._Myval2;
  if (((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       local_a8._Mypair._Myval2 !=
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) &&
     (local_108._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    memcpy(local_a8._Mypair._Myval2,local_108._Myval2,(longlong)local_150._Myval2 * 4);
    pbVar19 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
              local_a8._Mypair._Myval2;
  }
  pbVar6 = local_1b8;
  local_1b8 = local_b8;
  local_b8 = pbVar6;
  local_a8._Mypair._Myval2 = (int *)local_168._Myval2;
  local_168._Myval2 = pbVar19;
  std::_Func_class<void,int_*>::_Swap(&local_1a8,(_Func_class<void,int_*> *)&local_a8);
  pbVar19 = local_1b0;
  local_1b0 = local_b0;
  local_b0 = pbVar19;
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
      local_a8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    local_208._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_a8._Mypair._Myval2;
    if ((_Func_base<void,int_*> *)local_a8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)(undefined1 *)local_a8._Mypair._Myval1._56_8_ + 0x10))
              (local_a8._Mypair._Myval1._56_8_,&local_208);
  }
  if ((_Func_base<void,int_*> *)local_a8._Mypair._Myval1._56_8_ != (_Func_base<void,int_*> *)0x0) {
    (**(code **)(*(longlong *)(undefined1 *)local_a8._Mypair._Myval1._56_8_ + 0x20))
              (local_a8._Mypair._Myval1._56_8_,
               (_Func_base<void,int_*> *)local_a8._Mypair._Myval1._56_8_ !=
               (_Func_base<void,int_*> *)&local_a8);
  }
  local_208._Mypair._Myval2._0_4_ = 10;
  local_1f8.data_ = (AssertHelperData *)local_150._Myval2;
  if (local_150._Myval2 ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
    testing::AssertionSuccess(&local_1f0);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_1f0,"arr.size()","10ul",(ulong64 *)&local_1f8,(ulong *)&local_208);
  }
  uVar5._Mypair._Myval2 = local_1f0.message_._Mypair._Myval2;
  if (local_1f0.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_1f8);
    if (local_1f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_1f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_1f0.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_200,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x5a,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_200);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_1f8.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1f8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1f8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_1f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1f0.message_._Mypair._Myval2,0x20);
    }
    if (local_168._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_208._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_168._Myval2;
      if (local_1a8._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x10))
                (local_1a8._Mystorage._Ptrs[7],&local_208);
    }
    if (local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x20))
                (local_1a8._Mystorage._Ptrs[7],
                 local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_1a8);
      local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if (local_108._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_208._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_108._Myval2;
      if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_148._56_8_ + 0x10))(local_148._56_8_,&local_208);
    }
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_148._56_8_ + 0x20))
              (local_148._56_8_,(undefined1 *)local_148._56_8_ != local_148);
    return;
  }
  if (local_1f0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_1f0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
  }
  uVar4 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  local_1f8.data_ = (AssertHelperData *)local_1b0;
  local_208._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_150._Myval2;
  if (local_150._Myval2 == local_1b0) {
    testing::AssertionSuccess(&local_1f0);
  }
  else {
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8,
               (ulong64 *)&local_1f8);
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8,
               (ulong64 *)&local_208);
    testing::internal::EqFailure
              (&local_1f0,"arr.size()","arrCopy.size()",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8,false);
    if (0xf < uStack_e0) {
      pvVar2 = (void *)CONCAT71(local_f8._1_7_,local_f8._Buf[0]);
      uVar15 = uStack_e0 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar15) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar15 = uStack_e0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c61a887;
      }
      ::operator_delete(pvVar11,uVar15);
    }
    local_f8._Buf[0] = '\0';
    local_e8 = uVar3;
    uStack_e0 = uVar4;
    if (0xf < uStack_c0) {
      pvVar2 = (void *)CONCAT71(local_d8._1_7_,local_d8._Buf[0]);
      uVar15 = uStack_c0 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar15) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar15 = uStack_c0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) {
LAB_14c61a887:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar11,uVar15);
    }
  }
  uVar5._Mypair._Myval2 = local_1f0.message_._Mypair._Myval2;
  if (local_1f0.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_1f8);
    if (local_1f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_1f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_1f0.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_200,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x5b,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_200);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_1f8.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1f8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1f8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_1f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1f0.message_._Mypair._Myval2,0x20);
    }
    if (local_168._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_208._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_168._Myval2;
      if (local_1a8._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x10))
                (local_1a8._Mystorage._Ptrs[7],&local_208);
    }
    if (local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x20))
                (local_1a8._Mystorage._Ptrs[7],
                 local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_1a8);
      local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if (local_108._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_208._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_108._Myval2;
      if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_148._56_8_ + 0x10))(local_148._56_8_,&local_208);
    }
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_148._56_8_ + 0x20))
              (local_148._56_8_,(undefined1 *)local_148._56_8_ != local_148);
    return;
  }
  if (local_1f0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_1f0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
  }
  if (local_150._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    do {
      piVar17 = (int *)((longlong)&(local_108._Myval2)->field_0x0 + uVar18 * 4);
      piVar1 = (int *)((longlong)&local_1e0 + uVar18 * 4);
      if (*piVar17 == *(int *)((longlong)&local_1e0 + uVar18 * 4)) {
        testing::AssertionSuccess(&local_1f0);
      }
      else {
        pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58,piVar1,piVar17);
        pbVar8 = testing::internal::FormatForComparisonFailureMessage<int,int>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_d8,piVar17,piVar1);
        testing::internal::EqFailure(&local_1f0,"arr[i]","values[i]",pbVar8,pbVar7,false);
        if (0xf < uStack_c0) {
          pvVar2 = (void *)CONCAT71(local_d8._1_7_,local_d8._Buf[0]);
          uVar15 = uStack_c0 + 1;
          pvVar11 = pvVar2;
          if (0xfff < uVar15) {
            pvVar11 = *(void **)((longlong)pvVar2 + -8);
            uVar15 = uStack_c0 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c61aa97;
          }
          ::operator_delete(pvVar11,uVar15);
        }
        local_d8._Buf[0] = '\0';
        local_c8 = uVar3;
        uStack_c0 = uVar4;
        if (0xf < local_40) {
          uVar15 = local_40 + 1;
          uVar12 = local_58._Ptr;
          if (0xfff < uVar15) {
            uVar12 = *(undefined8 *)(local_58._Ptr + -8);
            uVar15 = local_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar12)) {
LAB_14c61aa97:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar12,uVar15);
        }
      }
      uVar5._Mypair._Myval2 = local_1f0.message_._Mypair._Myval2;
      if (local_1f0.success_ == false) {
        pMVar9 = (Message *)testing::Message::Message((Message *)&local_1f8);
        if (local_1f0.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar14 = "";
        }
        else {
          pcVar14 = (char *)local_1f0.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_1f0.message_._Mypair._Myval2 + 0x18)) {
            pcVar14 = *(char **)local_1f0.message_._Mypair._Myval2;
          }
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            ((AssertHelper *)&local_200,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                             ,0x5d,pcVar14);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_200);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_1f8.data_
            != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar13 = (undefined8 *)
                    ((longlong)&(local_1f8.data_)->type +
                    (longlong)*(int *)(*(longlong *)local_1f8.data_ + 4));
          (**(code **)*puVar13)(puVar13,1);
        }
        if (local_1f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_1f0.message_._Mypair._Myval2);
          ::operator_delete((void *)local_1f0.message_._Mypair._Myval2,0x20);
        }
        if (local_168._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_208._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_168._Myval2;
          if (local_1a8._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x10))
                    (local_1a8._Mystorage._Ptrs[7],&local_208);
        }
        if (local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
          (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x20))
                    (local_1a8._Mystorage._Ptrs[7],
                     local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_1a8);
          local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
        }
        if (local_108._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61ae7d;
        local_208._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_108._Myval2;
        if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        goto LAB_14c61ae72;
      }
      if (local_1f0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_1f0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
      }
      testing::internal::EqHelper::Compare<int,int,0>
                ((AssertionResult *)&local_f8,"arr[i]","arrCopy[i]",
                 (int *)((longlong)&(local_108._Myval2)->field_0x0 + uVar18 * 4),
                 (int *)((longlong)&(local_168._Myval2)->field_0x0 + uVar18 * 4));
      uVar12 = local_f8._8_8_;
      if (local_f8._Buf[0] == '\0') {
        pMVar9 = (Message *)testing::Message::Message((Message *)&local_208);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_f8._8_8_ ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar14 = "";
        }
        else {
          pcVar14 = local_f8._8_8_;
          if (0xf < *(ulong64 *)(local_f8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
            pcVar14 = *local_f8._8_8_;
          }
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            (&local_1f8,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                             ,0x5e,pcVar14);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
        testing::internal::AssertHelper::~AssertHelper(&local_1f8);
        if (local_208._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar13 = (undefined8 *)
                    ((longlong)local_208._Mypair._Myval2 +
                    (longlong)*(int *)(*(longlong *)local_208._Mypair._Myval2 + 4));
          (**(code **)*puVar13)(puVar13,1);
        }
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_f8._8_8_ !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f8._8_8_);
          ::operator_delete((void *)local_f8._8_8_,0x20);
        }
        if (local_168._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_200._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_168._Myval2;
          if (local_1a8._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x10))
                    (local_1a8._Mystorage._Ptrs[7],&local_200);
        }
        if (local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
          (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x20))
                    (local_1a8._Mystorage._Ptrs[7],
                     local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_1a8);
          local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
        }
        if (local_108._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61ae7d;
        local_200._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_108._Myval2;
        if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        goto LAB_14c61abaa;
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_f8._8_8_ !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_f8._8_8_
                  );
        ::operator_delete((void *)uVar12,0x20);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < local_150._Myval2);
  }
  local_200._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_168._Myval2;
  local_1f8.data_ = (AssertHelperData *)local_108._Myval2;
  if (local_108._Myval2 == local_168._Myval2) {
    testing::internal::CmpHelperOpFailure<int_*,int_*>
              (&local_1f0,"arr.data()","arrCopy.data()",(int **)&local_1f8,(int **)&local_200,"!=");
  }
  else {
    testing::AssertionSuccess(&local_1f0);
  }
  if (local_1f0.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_1f8);
    if (local_1f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)local_1f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_1f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)local_1f0.message_._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_200,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                         ,0x61,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_200);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_1f8.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1f8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1f8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_1f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1f0.message_._Mypair._Myval2,0x20);
    }
    if (local_168._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_208._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_168._Myval2;
      if (local_1a8._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x10))
                (local_1a8._Mystorage._Ptrs[7],&local_208);
    }
    if (local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x20))
                (local_1a8._Mystorage._Ptrs[7],
                 local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_1a8);
      local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if (local_108._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61ae7d;
    local_208._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_108._Myval2;
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c61ae72:
    puVar16 = &local_208;
  }
  else {
    if (local_1f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_1f0.message_._Mypair._Myval2,0x20);
    }
    if (local_168._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_200._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_168._Myval2;
      if (local_1a8._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x10))
                (local_1a8._Mystorage._Ptrs[7],&local_200);
    }
    if (local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_1a8._Mystorage._Ptrs[7] + 0x20))
                (local_1a8._Mystorage._Ptrs[7],
                 local_1a8._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_1a8);
      local_1a8._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if (local_108._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61ae7d;
    local_200._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_108._Myval2;
    if ((longlong *)local_148._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c61abaa:
    puVar16 = &local_200;
  }
  (**(code **)(*(longlong *)local_148._56_8_ + 0x10))(local_148._56_8_,puVar16);
LAB_14c61ae7d:
  if ((longlong *)local_148._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_148._56_8_ + 0x20))
              (local_148._56_8_,(undefined1 *)local_148._56_8_ != local_148);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61b1e0

void * __thiscall
DynArrayTest_CopyAssign_Test::_scalar_deleting_destructor_
          (DynArrayTest_CopyAssign_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61b220

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CopyAssign_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_CopyAssign_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_CopyAssign_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61b260

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_CopyAssign_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_CopyAssign_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_CopyAssign_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_MoveConstruct_Test::TestBody(DynArrayTest_MoveConstruct_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  PolyAllocator<int,8,pma::DefaultMemoryResource> PVar3;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar13;
  AssertHelperData *pAVar14;
  undefined1 auStackY_198 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_168;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_160;
  AssertHelper local_158;
  AssertionResult local_150;
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_138;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_130;
  _Func_class<void,int_*> local_128;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_e8;
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_d8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_d0;
  unique_ptr<int,std::function<void___cdecl(int_*)>_> local_c8;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_38 = ___xmm_00000004000000030000000200000001;
  uStack_30 = _UNK_150631e38;
  local_18 = 9;
  local_28 = ___xmm_00000008000000070000000600000005;
  lStack_20 = _UNK_150631ed8;
  iStack_14 = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_d0 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a;
  local_d8 = (PolyAllocator<int,8,pma::DefaultMemoryResource>)
             &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_168._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            (&local_c8,10,(PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_168);
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
      local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined **)local_c8._Mypair._Myval2 = local_38;
    *(undefined8 *)((longlong)local_c8._Mypair._Myval2 + 8) = uStack_30;
    *(undefined8 *)((longlong)local_c8._Mypair._Myval2 + 0x10) = local_28;
    ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)
    ((longlong)local_c8._Mypair._Myval2 + 0x18))->_padding_ = lStack_20;
    ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)
    ((longlong)local_c8._Mypair._Myval2 + 0x18))->_padding_ = CONCAT44(iStack_14,local_18);
  }
  local_138 = (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0;
  pma::PolyAllocator<int,8,pma::DefaultMemoryResource>::
  PolyAllocator<int,8,pma::DefaultMemoryResource>(&local_138);
  PVar3 = local_138;
  pAVar14 = (AssertHelperData *)0x0;
  local_138 = local_d8;
  local_d8 = PVar3;
  local_e8._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       local_c8._Mypair._Myval2;
  local_130._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
  local_c8._Mypair._Myval2 = (int *)0x0;
  std::_Func_class<void,int_*>::_Swap(&local_128,(_Func_class<void,int_*> *)&local_c8);
  _Var4._Myval2 = local_130._Myval2;
  local_150.success_ =
       local_130._Myval2 ==
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_130._Myval2 = local_d0;
  local_d0 = _Var4._Myval2;
  local_150.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (_Var4._Myval2 == (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
  {
    local_160._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )_Var4._Myval2;
    local_168._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )((ulonglong)local_168._Mypair._Myval2 & 0xffffffff00000000);
    testing::AssertionSuccess(&local_150);
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_150.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_150.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_150.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x6e,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_158.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_e8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_e8._Myval2;
        if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                  (local_128._Mystorage._Ptrs[7],&local_168);
      }
      if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                  (local_128._Mystorage._Ptrs[7],
                   local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
        local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
      }
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
          local_c8._Mypair._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61bc7c;
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_c8._Mypair._Myval2;
      if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0
         ) {
        std::_Xbad_function_call();
        return;
      }
    }
    else {
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      local_158.data_ = (AssertHelperData *)0x0;
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_c8._Mypair._Myval2;
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
          local_c8._Mypair._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        testing::AssertionSuccess(&local_150);
      }
      else {
        pbVar5 = testing::internal::FormatForComparisonFailureMessage<std::nullptr_t,int_*>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58,&local_158.data_,(int **)&local_168);
        testing::PrintToString<int_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   (int **)&local_168);
        testing::internal::EqFailure
                  (&local_150,"arr.data()","nullptr",
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                   pbVar5,false);
        if (0xf < uStack_60) {
          pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
          uVar12 = uStack_60 + 1;
          pvVar8 = pvVar1;
          if (0xfff < uVar12) {
            pvVar8 = *(void **)((longlong)pvVar1 + -8);
            uVar12 = uStack_60 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c61b506;
          }
          ::operator_delete(pvVar8,uVar12);
        }
        local_78._Buf[0] = '\0';
        local_68 = ___xmm_000000000000000f0000000000000000;
        uStack_60 = _UNK_15076add8;
        if (0xf < local_40) {
          uVar12 = local_40 + 1;
          uVar9 = local_58._Ptr;
          if (0xfff < uVar12) {
            uVar9 = *(undefined8 *)(local_58._Ptr + -8);
            uVar12 = local_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar9)) {
LAB_14c61b506:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar9,uVar12);
        }
      }
      uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
      if (local_150.success_ == false) {
        pMVar6 = (Message *)testing::Message::Message((Message *)&local_158);
        if (local_150.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar10 = "";
        }
        else {
          pcVar10 = (char *)local_150.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
            pcVar10 = *(char **)local_150.message_._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_160,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                            ,0x6f,pcVar10);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
        if (local_158.data_ != (AssertHelperData *)0x0) {
          puVar11 = (undefined8 *)
                    ((longlong)&(local_158.data_)->type +
                    (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
          (**(code **)*puVar11)(puVar11,1);
        }
        uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        if (local_e8._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_168._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_e8._Myval2;
          if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                    (local_128._Mystorage._Ptrs[7],&local_168);
        }
        if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
          (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                    (local_128._Mystorage._Ptrs[7],
                     local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
          local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
        }
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            local_c8._Mypair._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61bc7c;
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_c8._Mypair._Myval2;
        if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
            (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
      }
      else {
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        local_168._Mypair._Myval2._0_4_ = 10;
        local_158.data_ = (AssertHelperData *)local_130._Myval2;
        if (local_130._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a)
        {
          testing::AssertionSuccess(&local_150);
        }
        else {
          testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                    (&local_150,"arrCopy.size()","10ul",(ulong64 *)&local_158,(ulong *)&local_168);
        }
        uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.success_ != false) {
          if (local_150.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_150.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
          }
          if (local_130._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            do {
              testing::internal::EqHelper::Compare<int,int,0>
                        (&local_150,"arrCopy[i]","values[i]",
                         (int *)((longlong)&(local_e8._Myval2)->field_0x0 + (longlong)pAVar14 * 4),
                         (int *)((longlong)&stack0xffffffffffffffc8 + (longlong)pAVar14 * 4));
              uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              if (local_150.success_ == false) {
                pMVar6 = (Message *)testing::Message::Message((Message *)&local_168);
                if (local_150.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar10 = "";
                }
                else {
                  pcVar10 = (char *)local_150.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
                    pcVar10 = *(char **)local_150.message_._Mypair._Myval2;
                  }
                }
                pAVar7 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_158,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                    ,0x74,pcVar10);
                testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
                testing::internal::AssertHelper::~AssertHelper(&local_158);
                if (local_168._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  (*(code *)**(undefined8 **)
                              ((longlong)*(int *)(*(undefined **)local_168._Mypair._Myval2 + 4) +
                              (longlong)local_168._Mypair._Myval2))
                            ((undefined8 *)
                             ((longlong)*(int *)(*(undefined **)local_168._Mypair._Myval2 + 4) +
                             (longlong)local_168._Mypair._Myval2),1);
                }
                uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
                if (local_150.message_._Mypair._Myval2 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_150.message_._Mypair._Myval2);
                  ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
                }
                if (local_e8._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  local_160._Mypair._Myval2 =
                       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                          )local_e8._Myval2;
                  if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
                    std::_Xbad_function_call();
                    return;
                  }
                  (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                            (local_128._Mystorage._Ptrs[7],&local_160);
                }
                if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
                  (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                            (local_128._Mystorage._Ptrs[7],
                             local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
                  local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
                }
                if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                    local_c8._Mypair._Myval2 ==
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
                goto LAB_14c61b922;
                local_160._Mypair._Myval2 =
                     (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                        )local_c8._Mypair._Myval2;
                if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
                    (_Func_base<void,int_*> *)0x0) {
                  std::_Xbad_function_call();
                  return;
                }
                goto LAB_14c61b752;
              }
              if (local_150.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_150.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
              }
              pAVar14 = (AssertHelperData *)((longlong)&pAVar14->type + 1);
            } while (pAVar14 < local_130._Myval2);
          }
          local_160._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_e8._Myval2;
          if (local_e8._Myval2 ==
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
              &stack0xffffffffffffffc8) {
            testing::internal::CmpHelperOpFailure<int_*,int_[10]>
                      (&local_150,"arrCopy.data()","values",(int **)&local_160,
                       (int (*) [10])&stack0xffffffffffffffc8,"!=");
          }
          else {
            testing::AssertionSuccess(&local_150);
          }
          uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
          if (local_150.success_ == false) {
            pMVar6 = (Message *)testing::Message::Message((Message *)&local_158);
            if (local_150.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar10 = "";
            }
            else {
              pcVar10 = (char *)local_150.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
                pcVar10 = *(char **)local_150.message_._Mypair._Myval2;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_160,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                ,0x77,pcVar10);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
            if (local_158.data_ != (AssertHelperData *)0x0) {
              puVar11 = (undefined8 *)
                        ((longlong)&(local_158.data_)->type +
                        (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
              (**(code **)*puVar11)(puVar11,1);
            }
            uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
            if (local_150.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_150.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
            }
            if (local_e8._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              local_168._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )local_e8._Myval2;
              if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                        (local_128._Mystorage._Ptrs[7],&local_168);
            }
            if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
              (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                        (local_128._Mystorage._Ptrs[7],
                         local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
              local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
            }
            if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                local_c8._Mypair._Myval2 ==
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            goto LAB_14c61b922;
            local_168._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )local_c8._Mypair._Myval2;
            if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
                (_Func_base<void,int_*> *)0x0) {
              std::_Xbad_function_call();
              return;
            }
            puVar13 = &local_168;
          }
          else {
            if (local_150.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_150.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
            }
            if (local_e8._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              local_160._Mypair._Myval2 =
                   (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                      )local_e8._Myval2;
              if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                        (local_128._Mystorage._Ptrs[7],&local_160);
            }
            if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
              (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                        (local_128._Mystorage._Ptrs[7],
                         local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
              local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
            }
            if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                local_c8._Mypair._Myval2 ==
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            goto LAB_14c61b922;
            local_160._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )local_c8._Mypair._Myval2;
            if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
                (_Func_base<void,int_*> *)0x0) {
              std::_Xbad_function_call();
              return;
            }
LAB_14c61b752:
            puVar13 = &local_160;
            local_160._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )local_c8._Mypair._Myval2;
          }
          (**(code **)(*(longlong *)(undefined1 *)local_c8._Mypair._Myval1._56_8_ + 0x10))
                    (local_c8._Mypair._Myval1._56_8_,puVar13);
LAB_14c61b922:
          if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
              (_Func_base<void,int_*> *)0x0) {
            return;
          }
          (**(code **)(*(longlong *)(undefined1 *)local_c8._Mypair._Myval1._56_8_ + 0x20))
                    (local_c8._Mypair._Myval1._56_8_,
                     (_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ !=
                     (_Func_base<void,int_*> *)&local_c8);
          return;
        }
        pMVar6 = (Message *)testing::Message::Message((Message *)&local_158);
        if (local_150.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar10 = "";
        }
        else {
          pcVar10 = (char *)local_150.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
            pcVar10 = *(char **)local_150.message_._Mypair._Myval2;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_160,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                            ,0x72,pcVar10);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
        if (local_158.data_ != (AssertHelperData *)0x0) {
          puVar11 = (undefined8 *)
                    ((longlong)&(local_158.data_)->type +
                    (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
          (**(code **)*puVar11)(puVar11,1);
        }
        uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        if (local_e8._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_168._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_e8._Myval2;
          if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                    (local_128._Mystorage._Ptrs[7],&local_168);
        }
        if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
          (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                    (local_128._Mystorage._Ptrs[7],
                     local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
          local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
        }
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            local_c8._Mypair._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61bc7c;
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_c8._Mypair._Myval2;
        if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
            (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
      }
    }
  }
  else {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_158);
    pbVar5 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78
                        ,&local_150,"arr.empty()","false","true");
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_160,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x6d,(char *)pbVar5);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar12 = uStack_60 + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar12) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar12 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar8,uVar12);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (local_158.data_ != (AssertHelperData *)0x0) {
      puVar11 = (undefined8 *)
                ((longlong)&(local_158.data_)->type +
                (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
      (**(code **)*puVar11)(puVar11,1);
    }
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_e8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_e8._Myval2;
      if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                (local_128._Mystorage._Ptrs[7],&local_168);
    }
    if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                (local_128._Mystorage._Ptrs[7],
                 local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
      local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_c8._Mypair._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61bc7c;
    local_168._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_c8._Mypair._Myval2;
    if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
  }
  local_168._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_c8._Mypair._Myval2;
  (**(code **)(*(longlong *)(undefined1 *)local_c8._Mypair._Myval1._56_8_ + 0x10))
            (local_c8._Mypair._Myval1._56_8_,&local_168);
LAB_14c61bc7c:
  if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ != (_Func_base<void,int_*> *)0x0) {
    (**(code **)(*(longlong *)(undefined1 *)local_c8._Mypair._Myval1._56_8_ + 0x20))
              (local_c8._Mypair._Myval1._56_8_,
               (_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ !=
               (_Func_base<void,int_*> *)&local_c8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61bea0

void * __thiscall
DynArrayTest_MoveConstruct_Test::_scalar_deleting_destructor_
          (DynArrayTest_MoveConstruct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61bee0

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_MoveConstruct_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_MoveConstruct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_MoveConstruct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61bf20

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_MoveConstruct_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_MoveConstruct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_MoveConstruct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61bf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_MoveAssign_Test::TestBody(DynArrayTest_MoveAssign_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *puVar12;
  int *piVar13;
  AssertHelperData *pAVar14;
  undefined1 auStackY_198 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_168;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_160;
  AssertHelper local_158;
  AssertionResult local_150;
  undefined **local_138;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_130;
  _Func_class<void,int_*> local_128;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_e8;
  undefined **local_d8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_d0;
  unique_ptr<int,std::function<void___cdecl(int_*)>_> local_c8;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_18 = 9;
  local_38 = ___xmm_00000004000000030000000200000001;
  uStack_30 = _UNK_150631e38;
  iStack_14 = 10;
  local_28 = ___xmm_00000008000000070000000600000005;
  lStack_20 = _UNK_150631ed8;
  if ((*piVar13 <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_d0 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a;
  local_d8 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_168._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            (&local_c8,10,(PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_168);
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
      local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined **)local_c8._Mypair._Myval2 = local_38;
    *(undefined8 *)((longlong)local_c8._Mypair._Myval2 + 8) = uStack_30;
    *(undefined8 *)((longlong)local_c8._Mypair._Myval2 + 0x10) = local_28;
    ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)
    ((longlong)local_c8._Mypair._Myval2 + 0x18))->_padding_ = lStack_20;
    ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)
    ((longlong)local_c8._Mypair._Myval2 + 0x18))->_padding_ = CONCAT44(iStack_14,local_18);
  }
  if ((*piVar13 <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pAVar14 = (AssertHelperData *)0x0;
  local_138 = local_d8;
  local_e8._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       local_c8._Mypair._Myval2;
  local_130._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
  local_d8 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_c8._Mypair._Myval2 = (int *)0x0;
  std::_Func_class<void,int_*>::_Swap(&local_128,(_Func_class<void,int_*> *)&local_c8);
  _Var3._Myval2 = local_130._Myval2;
  local_150.success_ =
       local_130._Myval2 ==
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_130._Myval2 = local_d0;
  local_d0 = _Var3._Myval2;
  local_150.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (_Var3._Myval2 == (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
  {
    local_160._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )_Var3._Myval2;
    local_168._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )((ulonglong)local_168._Mypair._Myval2 & 0xffffffff00000000);
    testing::AssertionSuccess(&local_150);
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_150.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_150.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_150.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x85,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_158.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_e8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_e8._Myval2;
        if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                  (local_128._Mystorage._Ptrs[7],&local_168);
      }
      if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                  (local_128._Mystorage._Ptrs[7],
                   local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
        local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
      }
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
          local_c8._Mypair._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61ca56;
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_c8._Mypair._Myval2;
      if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0
         ) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c61ca4b;
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_158.data_ = (AssertHelperData *)0x0;
    local_168._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_c8._Mypair._Myval2;
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_c8._Mypair._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      testing::AssertionSuccess(&local_150);
    }
    else {
      pbVar4 = testing::internal::FormatForComparisonFailureMessage<std::nullptr_t,int_*>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,&local_158.data_,(int **)&local_168);
      testing::PrintToString<int_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                 (int **)&local_168);
      testing::internal::EqFailure
                (&local_150,"arr.data()","nullptr",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,pbVar4
                 ,false);
      if (0xf < uStack_60) {
        pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar11 = uStack_60 + 1;
        pvVar7 = pvVar1;
        if (0xfff < uVar11) {
          pvVar7 = *(void **)((longlong)pvVar1 + -8);
          uVar11 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) goto LAB_14c61c1c2;
        }
        ::operator_delete(pvVar7,uVar11);
      }
      local_78._Buf[0] = '\0';
      local_68 = ___xmm_000000000000000f0000000000000000;
      uStack_60 = _UNK_15076add8;
      if (0xf < local_40) {
        uVar11 = local_40 + 1;
        uVar8 = local_58._Ptr;
        if (0xfff < uVar11) {
          uVar8 = *(undefined8 *)(local_58._Ptr + -8);
          uVar11 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar8)) {
LAB_14c61c1c2:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar8,uVar11);
      }
    }
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_150.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_150.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_150.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x86,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_158.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_e8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_e8._Myval2;
        if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                  (local_128._Mystorage._Ptrs[7],&local_168);
      }
      if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                  (local_128._Mystorage._Ptrs[7],
                   local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
        local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
      }
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
          local_c8._Mypair._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61ca56;
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_c8._Mypair._Myval2;
      if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0
         ) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c61ca4b;
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_168._Mypair._Myval2._0_4_ = 10;
    local_158.data_ = (AssertHelperData *)local_130._Myval2;
    if (local_130._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
      testing::AssertionSuccess(&local_150);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_150,"arrCopy.size()","10ul",(ulong64 *)&local_158,(ulong *)&local_168);
    }
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_150.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_150.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_150.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x89,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_158.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_e8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_e8._Myval2;
        if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                  (local_128._Mystorage._Ptrs[7],&local_168);
      }
      if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                  (local_128._Mystorage._Ptrs[7],
                   local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
        local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
      }
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
          local_c8._Mypair._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61ca56;
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_c8._Mypair._Myval2;
      if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0
         ) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c61ca4b;
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_130._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      do {
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_150,"arrCopy[i]","values[i]",
                   (int *)((longlong)&(local_e8._Myval2)->field_0x0 + (longlong)pAVar14 * 4),
                   (int *)((longlong)&stack0xffffffffffffffc8 + (longlong)pAVar14 * 4));
        uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.success_ == false) {
          pMVar5 = (Message *)testing::Message::Message((Message *)&local_168);
          if (local_150.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar9 = "";
          }
          else {
            pcVar9 = (char *)local_150.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
              pcVar9 = *(char **)local_150.message_._Mypair._Myval2;
            }
          }
          pAVar6 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_158,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                              ,0x8b,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
          testing::internal::AssertHelper::~AssertHelper(&local_158);
          if (local_168._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            (*(code *)**(undefined8 **)
                        ((longlong)*(int *)(*(undefined **)local_168._Mypair._Myval2 + 4) +
                        (longlong)local_168._Mypair._Myval2))
                      ((undefined8 *)
                       ((longlong)*(int *)(*(undefined **)local_168._Mypair._Myval2 + 4) +
                       (longlong)local_168._Mypair._Myval2),1);
          }
          uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
          if (local_150.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_150.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
          }
          if (local_e8._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            local_160._Mypair._Myval2 =
                 (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                    )local_e8._Myval2;
            if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
              std::_Xbad_function_call();
              return;
            }
            (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                      (local_128._Mystorage._Ptrs[7],&local_160);
          }
          if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
            (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                      (local_128._Mystorage._Ptrs[7],
                       local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
            local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
          }
          if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
              local_c8._Mypair._Myval2 ==
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
          goto LAB_14c61ca56;
          local_160._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                  )local_c8._Mypair._Myval2;
          if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ ==
              (_Func_base<void,int_*> *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          goto LAB_14c61c403;
        }
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        pAVar14 = (AssertHelperData *)((longlong)&pAVar14->type + 1);
      } while (pAVar14 < local_130._Myval2);
    }
    local_160._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_e8._Myval2;
    if (local_e8._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        &stack0xffffffffffffffc8) {
      testing::internal::CmpHelperOpFailure<int_*,int_[10]>
                (&local_150,"arrCopy.data()","values",(int **)&local_160,
                 (int (*) [10])&stack0xffffffffffffffc8,"!=");
    }
    else {
      testing::AssertionSuccess(&local_150);
    }
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_150.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_150.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_150.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x8e,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_158.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      if (local_e8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_168._Mypair._Myval2 =
             (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )local_e8._Myval2;
        if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                  (local_128._Mystorage._Ptrs[7],&local_168);
      }
      if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
        (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                  (local_128._Mystorage._Ptrs[7],
                   local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
        local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
      }
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
          local_c8._Mypair._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61ca56;
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_c8._Mypair._Myval2;
      if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0
         ) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c61ca4b;
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_e8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_160._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_e8._Myval2;
      if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                (local_128._Mystorage._Ptrs[7],&local_160);
    }
    if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                (local_128._Mystorage._Ptrs[7],
                 local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
      local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_c8._Mypair._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61ca56;
    local_160._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_c8._Mypair._Myval2;
    if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
LAB_14c61c403:
    puVar12 = &local_160;
    local_160._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_c8._Mypair._Myval2;
  }
  else {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
    pbVar4 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78
                        ,&local_150,"arr.empty()","false","true");
    if (0xf < (pbVar4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar4->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_160,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x84,(char *)pbVar4);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_160);
    if (0xf < uStack_60) {
      pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar11 = uStack_60 + 1;
      pvVar7 = pvVar1;
      if (0xfff < uVar11) {
        pvVar7 = *(void **)((longlong)pvVar1 + -8);
        uVar11 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar7,uVar11);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (local_158.data_ != (AssertHelperData *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)&(local_158.data_)->type +
                (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
      (**(code **)*puVar10)(puVar10,1);
    }
    uVar2._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_e8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_168._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_e8._Myval2;
      if (local_128._Mystorage._Ptrs[7] == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x10))
                (local_128._Mystorage._Ptrs[7],&local_168);
    }
    if (local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_128._Mystorage._Ptrs[7] + 0x20))
                (local_128._Mystorage._Ptrs[7],
                 local_128._Mystorage._Ptrs[7] != (_Func_base<void,int_*> *)&local_128);
      local_128._Mystorage._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        local_c8._Mypair._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61ca56;
    local_168._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_c8._Mypair._Myval2;
    if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ == (_Func_base<void,int_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
LAB_14c61ca4b:
    puVar12 = &local_168;
    local_168._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_c8._Mypair._Myval2;
  }
  (**(code **)(*(longlong *)(undefined1 *)local_c8._Mypair._Myval1._56_8_ + 0x10))
            (local_c8._Mypair._Myval1._56_8_,puVar12);
LAB_14c61ca56:
  if ((_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ != (_Func_base<void,int_*> *)0x0) {
    (**(code **)(*(longlong *)(undefined1 *)local_c8._Mypair._Myval1._56_8_ + 0x20))
              (local_c8._Mypair._Myval1._56_8_,
               (_Func_base<void,int_*> *)local_c8._Mypair._Myval1._56_8_ !=
               (_Func_base<void,int_*> *)&local_c8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61cb60

void * __thiscall
DynArrayTest_MoveAssign_Test::_scalar_deleting_destructor_
          (DynArrayTest_MoveAssign_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61cba0

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_MoveAssign_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_MoveAssign_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_MoveAssign_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61cbe0

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_MoveAssign_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_MoveAssign_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_MoveAssign_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61cc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_SubscriptOperator_Test::TestBody(DynArrayTest_SubscriptOperator_Test *this)

{
  Type *pTVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  AssertHelperData *pAVar15;
  ulonglong uVar16;
  undefined1 auStackY_128 [32];
  AssertHelper local_f8;
  AssertionResult local_f0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_e0;
  AssertHelper local_d8 [2];
  undefined **local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [64];
  AssertHelperData *local_78;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  _Bxty local_48;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
             PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  local_c0 = 10;
  local_c8 = &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_f8.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_b8,10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_f8);
  if (local_78 != (AssertHelperData *)0x0) {
    local_78->type = kNonFatalFailure;
    *(undefined4 *)&local_78->field_0x4 = 2;
    *(undefined4 *)&local_78->file = 3;
    *(undefined4 *)((longlong)&local_78->file + 4) = 4;
    local_78->line = 5;
    *(undefined4 *)&local_78->field_0x14 = 6;
    *(undefined4 *)&(local_78->message)._Mypair._Myval2._Bx = 7;
    *(undefined4 *)((longlong)&(local_78->message)._Mypair._Myval2._Bx + 4) = 8;
    *(undefined4 *)((longlong)&(local_78->message)._Mypair._Myval2._Bx + 8) = 9;
    *(undefined4 *)((longlong)&(local_78->message)._Mypair._Myval2._Bx + 0xc) = 10;
  }
  uVar4 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  uVar16 = 0;
  pAVar15 = local_78;
  do {
    pTVar1 = (Type *)((longlong)&local_78->type + uVar16);
    if (*pTVar1 == pAVar15->type) {
      testing::AssertionSuccess(&local_f0);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_48,(int *)pAVar15,(int *)pTVar1);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_68,(int *)pTVar1,(int *)pAVar15);
      testing::internal::EqFailure(&local_f0,"arr[i]","raw[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_50) {
        pvVar2 = (void *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
        uVar14 = uStack_50 + 1;
        pvVar10 = pvVar2;
        if (0xfff < uVar14) {
          pvVar10 = *(void **)((longlong)pvVar2 + -8);
          uVar14 = uStack_50 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10))) goto LAB_14c61ce4c;
        }
        ::operator_delete(pvVar10,uVar14);
      }
      local_68._Buf[0] = '\0';
      local_58 = uVar3;
      uStack_50 = uVar4;
      if (0xf < local_30) {
        uVar14 = local_30 + 1;
        uVar11 = local_48._Ptr;
        if (0xfff < uVar14) {
          uVar11 = *(undefined8 *)(local_48._Ptr + -8);
          uVar14 = local_30 + 0x28;
          if ((char *)0x1f < local_48._Ptr + (-8 - uVar11)) {
LAB_14c61ce4c:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar11,uVar14);
      }
    }
    uVar5._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
    if (local_f0.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_e0);
      if (local_f0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)local_f0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
          pcVar12 = *(char **)local_f0.message_._Mypair._Myval2;
        }
      }
      pAVar9 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_f8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0x97,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_f8);
      if (local_e0._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)&(local_e0._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_e0._Myval2 + 4));
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_f0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
      }
      if (local_78 == (AssertHelperData *)0x0) goto LAB_14c61cf25;
      local_d8[0].data_ = local_78;
      if ((longlong *)local_b8._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      pAVar9 = local_d8;
      goto LAB_14c61cf1f;
    }
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar16 = uVar16 + 4;
    pAVar15 = (AssertHelperData *)&pAVar15->field_0x4;
    if (0x27 < uVar16) {
      if (local_78 != (AssertHelperData *)0x0) {
        local_f8.data_ = local_78;
        if ((longlong *)local_b8._56_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar9 = &local_f8;
LAB_14c61cf1f:
        (**(code **)(*(longlong *)local_b8._56_8_ + 0x10))(local_b8._56_8_,pAVar9);
      }
LAB_14c61cf25:
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_b8._56_8_ + 0x20))
                  (local_b8._56_8_,(undefined1 *)local_b8._56_8_ != local_b8);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c61cfc0

void * __thiscall
DynArrayTest_SubscriptOperator_Test::_scalar_deleting_destructor_
          (DynArrayTest_SubscriptOperator_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61d000

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_SubscriptOperator_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_SubscriptOperator_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_SubscriptOperator_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61d040

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_SubscriptOperator_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_SubscriptOperator_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_SubscriptOperator_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61d080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_ResizeToSmaller_Test::TestBody(DynArrayTest_ResizeToSmaller_Test *this)

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
  ulonglong uVar11;
  undefined1 auStackY_138 [32];
  AssertHelper local_108;
  AssertHelper local_100;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_f8;
  AssertionResult local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [80];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = ___xmm_00000004000000030000000200000001;
  uStack_d8 = _UNK_150631e38;
  local_c0 = 9;
  local_d0 = ___xmm_00000008000000070000000600000005;
  uStack_c8 = _UNK_150631ed8;
  local_bc = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_b8._8_8_ = &DAT_0000000a;
  local_b8._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_108.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)(local_b8 + 0x10),10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_108);
  if (local_68._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)local_68._Myval2 = 1;
    *(undefined4 *)&(local_68._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_68._Myval2)->field_0x8 = 3;
    *(undefined4 *)&(local_68._Myval2)->field_0xc = 4;
    *(int *)&(local_68._Myval2)->field_0x10 = 5;
    *(undefined4 *)&(local_68._Myval2)->field_0x14 = 6;
    *(undefined4 *)
     &(((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *)
       &((local_68._Myval2)->_Stringbuffer)._padding_)->_Myval2)._Bx = 7;
    *(undefined4 *)
     ((longlong)
      &(((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *)
        &((local_68._Myval2)->_Stringbuffer)._padding_)->_Myval2)._Bx + 4) = 8;
    *(undefined4 *)&((local_68._Myval2)->_Stringbuffer)._padding_ = 9;
    *(undefined4 *)((longlong)&((local_68._Myval2)->_Stringbuffer)._padding_ + 4) = 10;
  }
  local_108.data_._0_4_ = 10;
  local_f8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_b8._8_8_;
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_b8._8_8_ ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
    testing::AssertionSuccess(&local_f0);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_f0,"arr.size()","10ul",(ulong64 *)&local_f8,(ulong *)&local_108);
  }
  uVar2._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
  if (local_f0.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_f8);
    if (local_f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_f0.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_100,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0x9f,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_100);
    if (local_f8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)local_f8._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_f8._Mypair._Myval2 + 4));
      (**(code **)*puVar9)(puVar9,1);
    }
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_108.data_ = (AssertHelperData *)local_68._Myval2;
      if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_b8._72_8_ + 0x10))(local_b8._72_8_,&local_108);
    }
    if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_b8._72_8_ + 0x20))
              (local_b8._72_8_,(undefined1 *)local_b8._72_8_ != local_b8 + 0x10);
    return;
  }
  if (local_f0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_f0.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
  }
  _Var3._Myval2 = local_68._Myval2;
  uVar11 = 0;
  local_100.data_ = (AssertHelperData *)local_68._Myval2;
  local_108.data_ = local_108.data_ & 0xffffffff00000000;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize
            ((DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *)local_b8,5,
             (int *)&local_108);
  local_f8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_68._Myval2;
  if (_Var3._Myval2 == local_68._Myval2) {
    testing::AssertionSuccess(&local_f0);
  }
  else {
    testing::PrintToString<int_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
               (int **)&local_f8);
    testing::PrintToString<int_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (int **)&local_100);
    testing::internal::EqFailure
              (&local_f0,"preResize","arr.data()",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false);
    if (0xf < uStack_40) {
      pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar10 = uStack_40 + 1;
      pvVar6 = pvVar1;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar1 + -8);
        uVar10 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) goto LAB_14c61d2e6;
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
LAB_14c61d2e6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  uVar2._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
  if (local_f0.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_f8);
    if (local_f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_f0.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_100,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0xa4,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_100);
    if (local_f8._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)local_f8._Mypair._Myval2 +
               (longlong)*(int *)(*(longlong *)local_f8._Mypair._Myval2 + 4));
      (**(code **)*puVar9)(puVar9,1);
    }
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61d66a;
    local_108.data_ = (AssertHelperData *)local_68._Myval2;
    if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
LAB_14c61d65f:
    pAVar5 = &local_108;
  }
  else {
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_108.data_._0_4_ = 5;
    local_100.data_ = (AssertHelperData *)local_b8._8_8_;
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_b8._8_8_ ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000005) {
      testing::AssertionSuccess(&local_f0);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                (&local_f0,"arr.size()","5ul",(ulong64 *)&local_100,(ulong *)&local_108);
    }
    uVar2._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
    if (local_f0.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_f8);
      if (local_f0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_f0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
          pcVar8 = *(char **)local_f0.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_100,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xa5,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_100);
      if (local_f8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar9 = (undefined8 *)
                 ((longlong)*(int *)(*(longlong *)local_f8._Mypair._Myval2 + 4) +
                 (longlong)local_f8._Mypair._Myval2);
        (**(code **)*puVar9)(puVar9,1);
      }
      if (local_f0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
      }
      if (local_68._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61d66a;
      local_108.data_ = (AssertHelperData *)local_68._Myval2;
      if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      goto LAB_14c61d65f;
    }
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    do {
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_f0,"arr[i]","values[i]",
                 (int *)((longlong)&(local_68._Myval2)->field_0x0 + uVar11),
                 (int *)((longlong)&local_e0 + uVar11));
      uVar2._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
      if (local_f0.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_f8);
        if (local_f0.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)local_f0.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
            pcVar8 = *(char **)local_f0.message_._Mypair._Myval2;
          }
        }
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_100,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                            ,0xa8,pcVar8);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
        testing::internal::AssertHelper::~AssertHelper(&local_100);
        if (local_f8._Mypair._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)local_f8._Mypair._Myval2 + 4) +
                   (longlong)local_f8._Mypair._Myval2);
          (**(code **)*puVar9)(puVar9,1);
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
        }
        if (local_68._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
        goto LAB_14c61d66a;
        local_108.data_ = (AssertHelperData *)local_68._Myval2;
        if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        goto LAB_14c61d65f;
      }
      if (local_f0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      uVar11 = uVar11 + 4;
    } while (uVar11 < 0x14);
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61d66a;
    local_100.data_ = (AssertHelperData *)local_68._Myval2;
    if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    pAVar5 = &local_100;
  }
  (**(code **)(*(longlong *)local_b8._72_8_ + 0x10))(local_b8._72_8_,pAVar5);
LAB_14c61d66a:
  if ((longlong *)local_b8._72_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_b8._72_8_ + 0x20))
              (local_b8._72_8_,(undefined1 *)local_b8._72_8_ != local_b8 + 0x10);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61d7f0

void * __thiscall
DynArrayTest_ResizeToSmaller_Test::_scalar_deleting_destructor_
          (DynArrayTest_ResizeToSmaller_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61d830

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeToSmaller_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_ResizeToSmaller_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_ResizeToSmaller_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61d870

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeToSmaller_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_ResizeToSmaller_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_ResizeToSmaller_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61d8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall DynArrayTest_ResizeToLarger_Test::TestBody(DynArrayTest_ResizeToLarger_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  int *piVar16;
  undefined1 auStackY_128 [32];
  AssertHelper local_f8;
  AssertHelper local_f0;
  AssertionResult local_e8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_d8 [2];
  undefined1 local_c8 [80];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_78;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_68._Ptr = ___xmm_00000004000000030000000200000001;
  local_68._8_8_ = _UNK_150631e38;
  local_48 = 9;
  local_58 = ___xmm_00000008000000070000000600000005;
  uStack_50 = _UNK_150631ed8;
  local_44 = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_c8._8_8_ = &DAT_0000000a;
  local_c8._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f8.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)(local_c8 + 0x10),10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_f8);
  if (local_78._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)local_78._Myval2 = 1;
    *(undefined4 *)&(local_78._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_78._Myval2)->field_0x8 = 3;
    *(undefined4 *)&(local_78._Myval2)->field_0xc = 4;
    *(int *)&(local_78._Myval2)->field_0x10 = 5;
    *(undefined4 *)&(local_78._Myval2)->field_0x14 = 6;
    *(undefined4 *)
     &(((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *)
       &((local_78._Myval2)->_Stringbuffer)._padding_)->_Myval2)._Bx = 7;
    *(undefined4 *)
     ((longlong)
      &(((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *)
        &((local_78._Myval2)->_Stringbuffer)._padding_)->_Myval2)._Bx + 4) = 8;
    *(undefined4 *)&((local_78._Myval2)->_Stringbuffer)._padding_ = 9;
    *(undefined4 *)((longlong)&((local_78._Myval2)->_Stringbuffer)._padding_ + 4) = 10;
  }
  local_f8.data_._0_4_ = 10;
  local_d8[0]._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )local_c8._8_8_;
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_c8._8_8_ ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
    testing::AssertionSuccess(&local_e8);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_e8,"arr.size()","10ul",(ulong64 *)local_d8,(ulong *)&local_f8);
  }
  uVar4._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
  if (local_e8.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)local_d8);
    if (local_e8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_f0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0xb0,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper(&local_f0);
    if (local_d8[0]._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_d8[0]._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_d8[0]._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_e8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
    }
    if (local_78._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61e07b;
    local_f8.data_ = (AssertHelperData *)local_78._Myval2;
    if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  else {
    if (local_e8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    _Var5._Myval2 = local_78._Myval2;
    local_f0.data_ = (AssertHelperData *)local_78._Myval2;
    local_f8.data_._0_4_ = 0x2a;
    terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize
              ((DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *)local_c8,0xf,
               (int *)&local_f8);
    local_d8[0]._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_78._Myval2;
    if (_Var5._Myval2 == local_78._Myval2) {
      testing::internal::CmpHelperOpFailure<int_*,int_*>
                (&local_e8,"preResize","arr.data()",(int **)&local_f0,(int **)local_d8,"!=");
    }
    else {
      testing::AssertionSuccess(&local_e8);
    }
    uVar4._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
    if (local_e8.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)local_d8);
      if (local_e8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
          pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
        }
      }
      pAVar9 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_f0,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xb5,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_f0);
      if (local_d8[0]._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)local_d8[0]._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_d8[0]._Mypair._Myval2 + 4));
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_e8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
      }
      if (local_78._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61e07b;
      local_f8.data_ = (AssertHelperData *)local_78._Myval2;
      if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
    }
    else {
      if (local_e8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      local_f8.data_._0_4_ = 0xf;
      local_f0.data_ = (AssertHelperData *)local_c8._8_8_;
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_c8._8_8_ ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000f) {
        testing::AssertionSuccess(&local_e8);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  (&local_e8,"arr.size()","15ul",(ulong64 *)&local_f0,(ulong *)&local_f8);
      }
      uVar4._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
      if (local_e8.success_ != false) {
        if (local_e8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar15 = 0;
        do {
          testing::internal::EqHelper::Compare<int,int,0>
                    (&local_e8,"arr[i]","values[i]",
                     (int *)((longlong)&(local_78._Myval2)->field_0x0 + uVar15),
                     (int *)(local_68._Buf + uVar15));
          uVar4._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
          if (local_e8.success_ == false) {
            pMVar8 = (Message *)testing::Message::Message((Message *)local_d8);
            if (local_e8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
              }
            }
            pAVar9 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_f0,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                ,0xb9,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
            testing::internal::AssertHelper::~AssertHelper(&local_f0);
            if (local_d8[0]._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)local_d8[0]._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_d8[0]._Mypair._Myval2 + 4));
              (**(code **)*puVar13)(puVar13,1);
            }
            if (local_e8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_e8.message_._Mypair._Myval2);
              ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
            }
            if (local_78._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              local_f8.data_ = (AssertHelperData *)local_78._Myval2;
              if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*(longlong *)local_c8._72_8_ + 0x10))(local_c8._72_8_,&local_f8);
            }
            if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
              return;
            }
            (**(code **)(*(longlong *)local_c8._72_8_ + 0x20))
                      (local_c8._72_8_,(undefined1 *)local_c8._72_8_ != local_c8 + 0x10);
            return;
          }
          if (local_e8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_e8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          uVar3 = _UNK_15076add8;
          uVar2 = ___xmm_000000000000000f0000000000000000;
          uVar15 = uVar15 + 4;
        } while (uVar15 < 0x28);
        uVar15 = 0x28;
        do {
          piVar16 = (int *)((longlong)&(local_78._Myval2)->field_0x0 + uVar15);
          local_f8.data_._0_4_ = 0x2a;
          if (*piVar16 == 0x2a) {
            testing::AssertionSuccess(&local_e8);
          }
          else {
            pbVar6 = testing::internal::FormatForComparisonFailureMessage<int,int>
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_68,(int *)&local_f8,piVar16);
            pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                               ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_40,piVar16,(int *)&local_f8);
            testing::internal::EqFailure(&local_e8,"arr[i]","42",pbVar7,pbVar6,false);
            if (0xf < uStack_28) {
              pvVar1 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
              uVar14 = uStack_28 + 1;
              pvVar10 = pvVar1;
              if (0xfff < uVar14) {
                pvVar10 = *(void **)((longlong)pvVar1 + -8);
                uVar14 = uStack_28 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))
                goto LAB_14c61dce5;
              }
              ::operator_delete(pvVar10,uVar14);
            }
            local_40._Buf[0] = '\0';
            local_30 = uVar2;
            uStack_28 = uVar3;
            if (0xf < uStack_50) {
              uVar14 = uStack_50 + 1;
              uVar11 = local_68._Ptr;
              if (0xfff < uVar14) {
                uVar11 = *(undefined8 *)(local_68._Ptr + -8);
                uVar14 = uStack_50 + 0x28;
                if ((char *)0x1f < local_68._Ptr + (-8 - uVar11)) {
LAB_14c61dce5:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar11,uVar14);
            }
          }
          uVar4._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
          if (local_e8.success_ == false) {
            pMVar8 = (Message *)testing::Message::Message((Message *)local_d8);
            if (local_e8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
              }
            }
            pAVar9 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_f0,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                ,0xbd,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
            testing::internal::AssertHelper::~AssertHelper(&local_f0);
            if (local_d8[0]._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)local_d8[0]._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_d8[0]._Mypair._Myval2 + 4));
              (**(code **)*puVar13)(puVar13,1);
            }
            if (local_e8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_e8.message_._Mypair._Myval2);
              ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
            }
            if (local_78._Myval2 ==
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            goto LAB_14c61ddc2;
            local_f8.data_ = (AssertHelperData *)local_78._Myval2;
            if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
              std::_Xbad_function_call();
              return;
            }
            pAVar9 = &local_f8;
            goto LAB_14c61ddbc;
          }
          if (local_e8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_e8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          uVar15 = uVar15 + 4;
          if (0x3b < uVar15) {
            if (local_78._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              local_f0.data_ = (AssertHelperData *)local_78._Myval2;
              if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              pAVar9 = &local_f0;
LAB_14c61ddbc:
              (**(code **)(*(longlong *)local_c8._72_8_ + 0x10))(local_c8._72_8_,pAVar9);
            }
LAB_14c61ddc2:
            if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
              return;
            }
            (**(code **)(*(longlong *)local_c8._72_8_ + 0x20))
                      (local_c8._72_8_,(undefined1 *)local_c8._72_8_ != local_c8 + 0x10);
            return;
          }
        } while( true );
      }
      pMVar8 = (Message *)testing::Message::Message((Message *)local_d8);
      if (local_e8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
          pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
        }
      }
      pAVar9 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_f0,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xb6,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_f0);
      if (local_d8[0]._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)*(int *)(*(longlong *)local_d8[0]._Mypair._Myval2 + 4) +
                  (longlong)local_d8[0]._Mypair._Myval2);
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_e8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
      }
      if (local_78._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61e07b;
      local_f8.data_ = (AssertHelperData *)local_78._Myval2;
      if ((longlong *)local_c8._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
    }
  }
  (**(code **)(*(longlong *)local_c8._72_8_ + 0x10))(local_c8._72_8_,&local_f8);
LAB_14c61e07b:
  if ((longlong *)local_c8._72_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c8._72_8_ + 0x20))
              (local_c8._72_8_,(undefined1 *)local_c8._72_8_ != local_c8 + 0x10);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61e1c0

void * __thiscall
DynArrayTest_ResizeToLarger_Test::_scalar_deleting_destructor_
          (DynArrayTest_ResizeToLarger_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61e200

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeToLarger_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_ResizeToLarger_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_ResizeToLarger_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61e240

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeToLarger_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_ResizeToLarger_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_ResizeToLarger_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_ResizeUninitializedToSmaller_Test::TestBody
          (DynArrayTest_ResizeUninitializedToSmaller_Test *this)

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
  ulonglong uVar11;
  undefined1 auStackY_138 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_108;
  AssertHelper local_100;
  AssertionResult local_f8;
  AssertHelper local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [80];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = ___xmm_00000004000000030000000200000001;
  uStack_d8 = _UNK_150631e38;
  local_c0 = 9;
  local_d0 = ___xmm_00000008000000070000000600000005;
  uStack_c8 = _UNK_150631ed8;
  local_bc = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_b8._8_8_ = &DAT_0000000a;
  local_b8._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_108._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)(local_b8 + 0x10),10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_108);
  if (local_68._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)local_68._Myval2 = 1;
    *(undefined4 *)&(local_68._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_68._Myval2)->field_0x8 = 3;
    *(undefined4 *)&(local_68._Myval2)->field_0xc = 4;
    *(undefined4 *)&(local_68._Myval2)->field_0x10 = 5;
    *(undefined4 *)&(local_68._Myval2)->field_0x14 = 6;
    *(undefined4 *)&((local_68._Myval2)->_Stringbuffer)._padding_ = 7;
    *(undefined4 *)((longlong)&((local_68._Myval2)->_Stringbuffer)._padding_ + 4) = 8;
    *(undefined4 *)&((local_68._Myval2)->_Stringbuffer)._padding_ = 9;
    *(undefined4 *)((longlong)&((local_68._Myval2)->_Stringbuffer)._padding_ + 4) = 10;
  }
  local_108._Mypair._Myval2._0_4_ = 10;
  local_100.data_ = (AssertHelperData *)local_b8._8_8_;
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_b8._8_8_ ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
    testing::AssertionSuccess(&local_f8);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_f8,"arr.size()","10ul",(ulong64 *)&local_100,(ulong *)&local_108);
  }
  uVar2._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
  if (local_f8.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_100);
    if (local_f8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_f8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
        pcVar8 = *(char **)local_f8.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_e8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0xc5,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_e8);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_100.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)&(local_100.data_)->type +
               (longlong)*(int *)(*(longlong *)local_100.data_ + 4));
      (**(code **)*puVar9)(puVar9,1);
    }
    if (local_f8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_f8.message_._Mypair._Myval2,0x20);
    }
    if (local_68._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61e89d;
    local_108._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_68._Myval2;
    if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  else {
    if (local_f8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    _Var3._Myval2 = local_68._Myval2;
    local_108._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_68._Myval2;
    terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized
              ((DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *)local_b8,5);
    local_100.data_ = (AssertHelperData *)local_68._Myval2;
    if (_Var3._Myval2 == local_68._Myval2) {
      testing::AssertionSuccess(&local_f8);
    }
    else {
      testing::PrintToString<int_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                 (int **)&local_100);
      testing::PrintToString<int_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 (int **)&local_108);
      testing::internal::EqFailure
                (&local_f8,"preResize","arr.data()",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false)
      ;
      if (0xf < uStack_40) {
        pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
        uVar10 = uStack_40 + 1;
        pvVar6 = pvVar1;
        if (0xfff < uVar10) {
          pvVar6 = *(void **)((longlong)pvVar1 + -8);
          uVar10 = uStack_40 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) goto LAB_14c61e4d3;
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
LAB_14c61e4d3:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar7,uVar10);
      }
    }
    uVar2._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
    if (local_f8.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_100);
      if (local_f8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_f8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
          pcVar8 = *(char **)local_f8.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_e8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xca,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_e8);
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_100.data_
          != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar9 = (undefined8 *)
                 ((longlong)&(local_100.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_100.data_ + 4));
        (**(code **)*puVar9)(puVar9,1);
      }
      if (local_f8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_f8.message_._Mypair._Myval2,0x20);
      }
      if (local_68._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61e89d;
      local_108._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_68._Myval2;
      if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
    }
    else {
      if (local_f8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
      }
      local_108._Mypair._Myval2._0_4_ = 5;
      local_100.data_ = (AssertHelperData *)local_b8._8_8_;
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_b8._8_8_ ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000005) {
        testing::AssertionSuccess(&local_f8);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  (&local_f8,"arr.size()","5ul",(ulong64 *)&local_100,(ulong *)&local_108);
      }
      uVar2._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
      if (local_f8.success_ != false) {
        if (local_f8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
        }
        uVar11 = 0;
        do {
          testing::internal::EqHelper::Compare<int,int,0>
                    (&local_f8,"arr[i]","values[i]",
                     (int *)((longlong)&(local_68._Myval2)->field_0x0 + uVar11),
                     (int *)((longlong)&local_e0 + uVar11));
          uVar2._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
          if (local_f8.success_ == false) {
            pMVar4 = (Message *)testing::Message::Message((Message *)&local_108);
            if (local_f8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)local_f8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                pcVar8 = *(char **)local_f8.message_._Mypair._Myval2;
              }
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_100,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                ,0xce,pcVar8);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
            testing::internal::AssertHelper::~AssertHelper(&local_100);
            if (local_108._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar9 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4) +
                       (longlong)local_108._Mypair._Myval2);
              (**(code **)*puVar9)(puVar9,1);
            }
            if (local_f8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_f8.message_._Mypair._Myval2);
              ::operator_delete((void *)local_f8.message_._Mypair._Myval2,0x20);
            }
            if (local_68._Myval2 ==
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            goto LAB_14c61e6db;
            local_e8.data_ = (AssertHelperData *)local_68._Myval2;
            if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
              std::_Xbad_function_call();
              return;
            }
            pAVar5 = &local_e8;
            goto LAB_14c61e6d5;
          }
          if (local_f8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_f8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
          }
          uVar11 = uVar11 + 4;
        } while (uVar11 < 0x14);
        if (local_68._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_100.data_ = (AssertHelperData *)local_68._Myval2;
          if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          pAVar5 = &local_100;
LAB_14c61e6d5:
          (**(code **)(*(longlong *)local_b8._72_8_ + 0x10))(local_b8._72_8_,pAVar5);
        }
LAB_14c61e6db:
        if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
          return;
        }
        (**(code **)(*(longlong *)local_b8._72_8_ + 0x20))
                  (local_b8._72_8_,(undefined1 *)local_b8._72_8_ != local_b8 + 0x10);
        return;
      }
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_100);
      if (local_f8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_f8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
          pcVar8 = *(char **)local_f8.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_e8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xcb,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_e8);
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_100.data_
          != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar9 = (undefined8 *)
                 ((longlong)&(local_100.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_100.data_ + 4));
        (**(code **)*puVar9)(puVar9,1);
      }
      if (local_f8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_f8.message_._Mypair._Myval2,0x20);
      }
      if (local_68._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61e89d;
      local_108._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_68._Myval2;
      if ((longlong *)local_b8._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
    }
  }
  (**(code **)(*(longlong *)local_b8._72_8_ + 0x10))(local_b8._72_8_,&local_108);
LAB_14c61e89d:
  if ((longlong *)local_b8._72_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_b8._72_8_ + 0x20))
              (local_b8._72_8_,(undefined1 *)local_b8._72_8_ != local_b8 + 0x10);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61e9e0

void * __thiscall
DynArrayTest_ResizeUninitializedToSmaller_Test::_scalar_deleting_destructor_
          (DynArrayTest_ResizeUninitializedToSmaller_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61ea20

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeUninitializedToSmaller_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_ResizeUninitializedToSmaller_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_ResizeUninitializedToSmaller_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61ea60

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeUninitializedToSmaller_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_ResizeUninitializedToSmaller_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_ResizeUninitializedToSmaller_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c61eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
DynArrayTest_ResizeUninitializedToLarger_Test::TestBody
          (DynArrayTest_ResizeUninitializedToLarger_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  _Var2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  char *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  AssertHelper local_c0;
  AssertionResult local_b8;
  AssertHelper local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [80];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a0 = ___xmm_00000004000000030000000200000001;
  uStack_98 = _UNK_150631e38;
  local_80 = 9;
  local_90 = ___xmm_00000008000000070000000600000005;
  uStack_88 = _UNK_150631ed8;
  local_7c = 10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::
           PolyAllocator<int,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_78._8_8_ = &DAT_0000000a;
  local_78._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_c8._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&`public:___cdecl_pma::impl::PolyAllocator<int,8,pma::DefaultMemoryResource>::PolyAllocator<int,8,pma::DefaultMemoryResource>(void)___ptr64'
          ::__l2::dmr;
  terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
            ((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)(local_78 + 0x10),10,
             (PolyAllocator<int,8,pma::DefaultMemoryResource>)&local_c8);
  if (local_28._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    *(undefined4 *)local_28._Myval2 = 1;
    *(undefined4 *)&(local_28._Myval2)->field_0x4 = 2;
    *(undefined4 *)&(local_28._Myval2)->field_0x8 = 3;
    *(undefined4 *)&(local_28._Myval2)->field_0xc = 4;
    *(undefined4 *)&(local_28._Myval2)->field_0x10 = 5;
    *(undefined4 *)&(local_28._Myval2)->field_0x14 = 6;
    *(undefined4 *)&((local_28._Myval2)->_Stringbuffer)._padding_ = 7;
    *(undefined4 *)((longlong)&((local_28._Myval2)->_Stringbuffer)._padding_ + 4) = 8;
    *(undefined4 *)&((local_28._Myval2)->_Stringbuffer)._padding_ = 9;
    *(undefined4 *)((longlong)&((local_28._Myval2)->_Stringbuffer)._padding_ + 4) = 10;
  }
  local_c8._Mypair._Myval2._0_4_ = 10;
  local_c0.data_ = (AssertHelperData *)local_78._8_8_;
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_78._8_8_ ==
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000a) {
    testing::AssertionSuccess(&local_b8);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
              (&local_b8,"arr.size()","10ul",(ulong64 *)&local_c0,(ulong *)&local_c8);
  }
  uVar1._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
  if (local_b8.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
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
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                        ,0xd6,pcVar5);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_a8);
    if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_c0.data_ !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar6 = (undefined8 *)
               ((longlong)&(local_c0.data_)->type +
               (longlong)*(int *)(*(longlong *)local_c0.data_ + 4));
      (**(code **)*puVar6)(puVar6,1);
    }
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_b8.message_._Mypair._Myval2,0x20);
    }
    if (local_28._Myval2 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
    goto LAB_14c61efdd;
    local_c8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_28._Myval2;
    if ((longlong *)local_78._72_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
  }
  else {
    if (local_b8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_b8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    _Var2._Myval2 = local_28._Myval2;
    local_c8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_28._Myval2;
    terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized
              ((DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *)local_78,0xf);
    local_c0.data_ = (AssertHelperData *)local_28._Myval2;
    if (_Var2._Myval2 == local_28._Myval2) {
      testing::internal::CmpHelperOpFailure<int_*,int_*>
                (&local_b8,"preResize","arr.data()",(int **)&local_c8,(int **)&local_c0,"!=");
    }
    else {
      testing::AssertionSuccess(&local_b8);
    }
    uVar1._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
    if (local_b8.success_ == false) {
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
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
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xdb,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper(&local_a8);
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_c0.data_ !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar6 = (undefined8 *)
                 ((longlong)&(local_c0.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_c0.data_ + 4));
        (**(code **)*puVar6)(puVar6,1);
      }
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_b8.message_._Mypair._Myval2,0x20);
      }
      if (local_28._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61efdd;
      local_c8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_28._Myval2;
      if ((longlong *)local_78._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
    }
    else {
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
      }
      local_c8._Mypair._Myval2._0_4_ = 0xf;
      local_c0.data_ = (AssertHelperData *)local_78._8_8_;
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_78._8_8_ ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_0000000f) {
        testing::AssertionSuccess(&local_b8);
      }
      else {
        testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_long>
                  (&local_b8,"arr.size()","15ul",(ulong64 *)&local_c0,(ulong *)&local_c8);
      }
      uVar1._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
      if (local_b8.success_ != false) {
        if (local_b8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
        }
        uVar7 = 0;
        do {
          testing::internal::EqHelper::Compare<int,int,0>
                    (&local_b8,"arr[i]","values[i]",
                     (int *)((longlong)&(local_28._Myval2)->field_0x0 + uVar7),
                     (int *)((longlong)&local_a0 + uVar7));
          uVar1._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
          if (local_b8.success_ == false) {
            pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
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
                               (&local_c0,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                                ,0xdf,pcVar5);
            testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
            testing::internal::AssertHelper::~AssertHelper(&local_c0);
            if (local_c8._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar6 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
                       (longlong)local_c8._Mypair._Myval2);
              (**(code **)*puVar6)(puVar6,1);
            }
            if (local_b8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_b8.message_._Mypair._Myval2);
              ::operator_delete((void *)local_b8.message_._Mypair._Myval2,0x20);
            }
            if (local_28._Myval2 ==
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
            goto LAB_14c61ee2a;
            local_a8.data_ = (AssertHelperData *)local_28._Myval2;
            if ((longlong *)local_78._72_8_ == (longlong *)0x0) {
              std::_Xbad_function_call();
              return;
            }
            pAVar4 = &local_a8;
            goto LAB_14c61ee24;
          }
          if (local_b8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_b8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
          }
          uVar7 = uVar7 + 4;
        } while (uVar7 < 0x28);
        if (local_28._Myval2 !=
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_c0.data_ = (AssertHelperData *)local_28._Myval2;
          if ((longlong *)local_78._72_8_ == (longlong *)0x0) {
            std::_Xbad_function_call();
            return;
          }
          pAVar4 = &local_c0;
LAB_14c61ee24:
          (**(code **)(*(longlong *)local_78._72_8_ + 0x10))(local_78._72_8_,pAVar4);
        }
LAB_14c61ee2a:
        if ((longlong *)local_78._72_8_ == (longlong *)0x0) {
          return;
        }
        (**(code **)(*(longlong *)local_78._72_8_ + 0x20))
                  (local_78._72_8_,(undefined1 *)local_78._72_8_ != local_78 + 0x10);
        return;
      }
      pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
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
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestDynArray.cpp"
                          ,0xdc,pcVar5);
      testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
      testing::internal::AssertHelper::~AssertHelper(&local_a8);
      if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_c0.data_ !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar6 = (undefined8 *)
                 ((longlong)&(local_c0.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_c0.data_ + 4));
        (**(code **)*puVar6)(puVar6,1);
      }
      if (local_b8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_b8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_b8.message_._Mypair._Myval2,0x20);
      }
      if (local_28._Myval2 ==
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      goto LAB_14c61efdd;
      local_c8._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_28._Myval2;
      if ((longlong *)local_78._72_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
    }
  }
  (**(code **)(*(longlong *)local_78._72_8_ + 0x10))(local_78._72_8_,&local_c8);
LAB_14c61efdd:
  if ((longlong *)local_78._72_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_78._72_8_ + 0x20))
              (local_78._72_8_,(undefined1 *)local_78._72_8_ != local_78 + 0x10);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c61f110

void * __thiscall
DynArrayTest_ResizeUninitializedToLarger_Test::_scalar_deleting_destructor_
          (DynArrayTest_ResizeUninitializedToLarger_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c61f150

Test * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeUninitializedToLarger_Test>::CreateTest
          (TestFactoryImpl<DynArrayTest_ResizeUninitializedToLarger_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7DynArrayTest_ResizeUninitializedToLarger_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c61f190

void * __thiscall
testing::internal::TestFactoryImpl<DynArrayTest_ResizeUninitializedToLarger_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<DynArrayTest_ResizeUninitializedToLarger_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<DynArrayTest_ResizeUninitializedToLarger_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<int_*,int_*> @ 14c61f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<int_*,int_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          int **param_4)

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
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    PrintToString<int_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<int_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c61f2cd;
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
LAB_14c61f2cd:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<int_*,int_*> @ 14c61f310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<int_*,int_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          int **param_4)

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
  PrintToString<int_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<int_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c61f3f8;
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
LAB_14c61f3f8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperNE<int_*,int_[10]> @ 14c61f440

AssertionResult * __cdecl
testing::internal::CmpHelperNE<int_*,int_[10]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          int (*param_4) [10])

{
  if ((int (*) [10])*param_3 != param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperOpFailure<int_*,int_[10]>(__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
  return __return_storage_ptr__;
}

// CmpHelperNE<int_*,std::nullptr_t> @ 14c61f490

AssertionResult * __cdecl
testing::internal::CmpHelperNE<int_*,std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          void **param_4)

{
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperOpFailure<int_*,std::nullptr_t>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
  return __return_storage_ptr__;
}

// CmpHelperNE<int_*,int_*> @ 14c61f4e0

AssertionResult * __cdecl
testing::internal::CmpHelperNE<int_*,int_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          int **param_4)

{
  if (*param_3 != *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperOpFailure<int_*,int_*>(__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
  return __return_storage_ptr__;
}

// CmpHelperOpFailure<int_*,int_[10]> @ 14c61f530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperOpFailure<int_*,int_[10]>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          int (*param_4) [10],char *param_5)

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
  int (*local_a8) [10];
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
  PrintToString<int_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
             (int **)local_b0._Mypair._Myval2);
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
                (longlong)(*(int **)local_b0._Mypair._Myval2)[1]))
              ((undefined8 *)
               ((longlong)local_b0._Mypair._Myval2 +
               (longlong)(*(int **)local_b0._Mypair._Myval2)[1]),1);
  }
  PrintToString<int_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,
             (int **)&local_a8);
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c61f886;
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
LAB_14c61f886:
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

// CmpHelperOpFailure<int_*,std::nullptr_t> @ 14c61f900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperOpFailure<int_*,std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          void **param_4,char *param_5)

{
  void *pvVar1;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  AssertionResult *pAVar3;
  Message *pMVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  ulong64 uVar9;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b0;
  void **local_a8;
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
  pAVar3 = AssertionFailure(&local_a0);
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,"Expected: (");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4) +
             (longlong)local_c0._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c0);
  pcVar8 = "(null)";
  if (param_1 != (char *)0x0) {
    pcVar8 = param_1;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_c0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,") ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4) +
             (longlong)local_b8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b8);
  pcVar8 = "(null)";
  if (param_5 != (char *)0x0) {
    pcVar8 = param_5;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_b8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10," (");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  pcVar8 = "(null)";
  if (param_2 != (char *)0x0) {
    pcVar8 = param_2;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_c8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,"), actual: ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  uVar2._Mypair._Myval2 = local_b0._Mypair._Myval2;
  PrintToString<int_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,
             (int **)local_b0._Mypair._Myval2);
  pAVar3 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar3,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_90);
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10," vs ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)local_b0._Mypair._Myval2 +
                (longlong)(*(int **)local_b0._Mypair._Myval2)[1]))
              ((undefined8 *)
               ((longlong)local_b0._Mypair._Myval2 +
               (longlong)(*(int **)local_b0._Mypair._Myval2)[1]),1);
  }
  pbVar5 = FormatForComparisonFailureMessage<std::nullptr_t,int_*>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
                      local_a8,(int **)uVar2._Mypair._Myval2);
  pAVar3 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar3,pbVar5);
  AssertionResult::AssertionResult(__return_storage_ptr__,pAVar3);
  if (0xf < uStack_58) {
    pvVar1 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
    uVar9 = uStack_58 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_58 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) goto LAB_14c61fc53;
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_70._Buf[0] = '\0';
  local_60 = ___xmm_000000000000000f0000000000000000;
  uStack_58 = _UNK_15076add8;
  if (0xf < uStack_78) {
    pvVar1 = (void *)CONCAT71(local_90._1_7_,local_90._Buf[0]);
    uVar9 = uStack_78 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_78 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
LAB_14c61fc53:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_90._Buf[0] = '\0';
  local_80 = ___xmm_000000000000000f0000000000000000;
  uStack_78 = _UNK_15076add8;
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return __return_storage_ptr__;
}

// CmpHelperOpFailure<int_*,int_*> @ 14c61fcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperOpFailure<int_*,int_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,int **param_3,
          int **param_4,char *param_5)

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
  int **local_a8;
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
  PrintToString<int_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
             (int **)local_b0._Mypair._Myval2);
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
                (longlong)(*(int **)local_b0._Mypair._Myval2)[1]))
              ((undefined8 *)
               ((longlong)local_b0._Mypair._Myval2 +
               (longlong)(*(int **)local_b0._Mypair._Myval2)[1]),1);
  }
  PrintToString<int_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c62001e;
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
LAB_14c62001e:
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

// DefaultPrintTo<int_const_> @ 14c6200a0

void __cdecl
testing::internal::DefaultPrintTo<int_const_>
          (WrapPrinterType<1> param_1,int *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (int *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6200b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// FormatForComparisonFailureMessage<int_[10],int_*> @ 14c6200d0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<int_[10],int_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int (*param_1) [10],int **param_2)

{
  int (*local_res8 [4]) [10];
  
  local_res8[0] = param_1;
  PrintToString<int_const_*>(__return_storage_ptr__,(int **)local_res8);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<int_*,int_[10]> @ 14c620100

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<int_*,int_[10]>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int **param_1,int (*param_2) [10])

{
  PrintToString<int_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<int_*,int_*> @ 14c620120

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<int_*,int_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int **param_1,int **param_2)

{
  PrintToString<int_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<int_const_*> @ 14c620140

void __cdecl
testing::internal::PrintTo<int_const_*>
          (int **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (int *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c62015a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintToString<int_const_*> @ 14c620170

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<int_const_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          int **param_1)

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
  if (*param_1 == (int *)0x0) {
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

// UniversalPrint<int_const_*> @ 14c620330

void __cdecl
testing::internal::UniversalPrint<int_const_*>
          (int **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (int *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c62034a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// _Test_callable<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>_> @ 14c620360

bool __cdecl
std::
_Test_callable<_terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>_> @ 14c620370

bool __cdecl
std::
_Test_callable<_terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_::__l5::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>_> @ 14c620380

bool __cdecl
std::
_Test_callable<_terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized_::__l5::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// swap<void___cdecl(int_*)> @ 14c620390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
std::swap<void___cdecl(int_*)>
          (function<void___cdecl(int_*)> *param_1,function<void___cdecl(int_*)> *param_2)

{
  function<void___cdecl(int_*)> *pfVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [56];
  function<void___cdecl(int_*)> *pfStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pfVar1 = *(function<void___cdecl(int_*)> **)&param_1->field_0x38;
  if ((pfVar1 != param_1) && (*(function<void___cdecl(int_*)> **)&param_2->field_0x38 != param_2)) {
    *(function<void___cdecl(int_*)> **)&param_1->field_0x38 =
         *(function<void___cdecl(int_*)> **)&param_2->field_0x38;
    *(function<void___cdecl(int_*)> **)&param_2->field_0x38 = pfVar1;
    return;
  }
  pfStack_30 = (function<void___cdecl(int_*)> *)0x0;
  if (pfVar1 != (function<void___cdecl(int_*)> *)0x0) {
    if (pfVar1 == param_1) {
      pfStack_30 = (function<void___cdecl(int_*)> *)
                   (**(code **)(*(longlong *)pfVar1 + 8))(pfVar1,auStack_68);
      pfVar1 = *(function<void___cdecl(int_*)> **)&param_1->field_0x38;
      if (pfVar1 == (function<void___cdecl(int_*)> *)0x0) goto LAB_14c6206a3;
      (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != param_1);
      pfVar1 = pfStack_30;
    }
    pfStack_30 = pfVar1;
    *(undefined8 *)&param_1->field_0x38 = 0;
  }
LAB_14c6206a3:
  pfVar1 = *(function<void___cdecl(int_*)> **)&param_2->field_0x38;
  if (pfVar1 != (function<void___cdecl(int_*)> *)0x0) {
    if (pfVar1 == param_2) {
      uVar2 = (**(code **)(*(longlong *)pfVar1 + 8))(pfVar1,param_1);
      *(undefined8 *)&param_1->field_0x38 = uVar2;
      pfVar1 = *(function<void___cdecl(int_*)> **)&param_2->field_0x38;
      if (pfVar1 == (function<void___cdecl(int_*)> *)0x0) goto LAB_14c6206e9;
      (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != param_2);
    }
    else {
      *(function<void___cdecl(int_*)> **)&param_1->field_0x38 = pfVar1;
    }
    *(undefined8 *)&param_2->field_0x38 = 0;
  }
LAB_14c6206e9:
  if (pfStack_30 != (function<void___cdecl(int_*)> *)0x0) {
    if (pfStack_30 == (function<void___cdecl(int_*)> *)auStack_68) {
      uVar2 = (**(code **)(*(longlong *)pfStack_30 + 8))(pfStack_30,param_2);
      *(undefined8 *)&param_2->field_0x38 = uVar2;
      if (pfStack_30 != (function<void___cdecl(int_*)> *)0x0) {
        (**(code **)(*(longlong *)pfStack_30 + 0x20))
                  (pfStack_30,pfStack_30 != (function<void___cdecl(int_*)> *)auStack_68);
      }
    }
    else {
      *(function<void___cdecl(int_*)> **)&param_2->field_0x38 = pfStack_30;
    }
  }
  return;
}

// _Copy @ 14c6203a0

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__CA_AV__unique_ptr_HV__function___A6AXPEAH_Z_std___std___KV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___Z_XPEAH_std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)this + 0x10);
  return param_1;
}

// _Copy @ 14c6203d0

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__4__resize___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__QEAAX_KAEBH_Z_XPEAH_std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Copy @ 14c6203f0

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__4__resize_uninitialized___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__QEAAX_K_Z_XPEAH_std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Delete_this @ 14c620410

void __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14c620430

void __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14c620450

void __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Do_call @ 14c620470

void __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
::_Do_call(void *this,int **param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014c62048b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),*param_1,*(longlong *)((longlong)this + 0x10) << 2,8
            );
  return;
}

// _Do_call @ 14c6204a0

void __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
::_Do_call(void *this,int **param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)((longlong)this + 8);
                    /* WARNING: Could not recover jumptable at 0x00014c6204bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*param_1,(*(undefined8 **)((longlong)this + 8))[1] << 2,8);
  return;
}

// _Do_call @ 14c6204d0

void __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
::_Do_call(void *this,int **param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(undefined8 **)((longlong)this + 8);
                    /* WARNING: Could not recover jumptable at 0x00014c6204eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*param_1,(*(undefined8 **)((longlong)this + 8))[1] << 2,8);
  return;
}

// _Get @ 14c620500

void * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14c620510

void * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14c620520

void * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14c620530

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1__create___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__CA_AV__unique_ptr_HV__function___A6AXPEAH_Z_std___std___KV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___Z_XPEAH_std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)this + 0x10);
  return param_1;
}

// _Move @ 14c620560

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__4__resize___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__QEAAX_KAEBH_Z_XPEAH_std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c620580

_Func_base<void,int_*> * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__4__resize_uninitialized___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__QEAAX_K_Z_XPEAH_std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Reset_move @ 14c6205a0

void __thiscall
std::_Func_class<void,int_*>::_Reset_move
          (_Func_class<void,int_*> *this,_Func_class<void,int_*> *param_1)

{
  _Func_base<void,int_*> *p_Var1;
  
  p_Var1 = (param_1->_Mystorage)._Ptrs[7];
  if (p_Var1 != (_Func_base<void,int_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,int_*> *)param_1) {
      p_Var1 = (_Func_base<void,int_*> *)
               (**(code **)(*(longlong *)&p_Var1->field_0x0 + 8))(p_Var1,this);
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      p_Var1 = (param_1->_Mystorage)._Ptrs[7];
      if (p_Var1 != (_Func_base<void,int_*> *)0x0) {
        (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                  (p_Var1,p_Var1 != (_Func_base<void,int_*> *)param_1);
        (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
        return;
      }
    }
    else {
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
    }
  }
  return;
}

// _Swap @ 14c620610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
std::_Func_class<void,int_*>::_Swap(_Func_class<void,int_*> *this,_Func_class<void,int_*> *param_1)

{
  _Func_base<void,int_*> *p_Var1;
  undefined1 auStack_88 [32];
  _Func_base<void,int_*> local_68 [7];
  _Func_base<void,int_*> *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  p_Var1 = (this->_Mystorage)._Ptrs[7];
  if ((p_Var1 != (_Func_base<void,int_*> *)this) &&
     ((param_1->_Mystorage)._Ptrs[7] != (_Func_base<void,int_*> *)param_1)) {
    (this->_Mystorage)._Ptrs[7] = (param_1->_Mystorage)._Ptrs[7];
    (param_1->_Mystorage)._Ptrs[7] = p_Var1;
    return;
  }
  local_30 = (_Func_base<void,int_*> *)0x0;
  if (p_Var1 != (_Func_base<void,int_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,int_*> *)this) {
      local_30 = (_Func_base<void,int_*> *)(**(code **)((longlong)*p_Var1 + 8))(p_Var1,local_68);
      p_Var1 = (this->_Mystorage)._Ptrs[7];
      if (p_Var1 == (_Func_base<void,int_*> *)0x0) goto LAB_14c6206a3;
      (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                (p_Var1,p_Var1 != (_Func_base<void,int_*> *)this);
      p_Var1 = local_30;
    }
    local_30 = p_Var1;
    (this->_Mystorage)._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
  }
LAB_14c6206a3:
  p_Var1 = (param_1->_Mystorage)._Ptrs[7];
  if (p_Var1 != (_Func_base<void,int_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,int_*> *)param_1) {
      p_Var1 = (_Func_base<void,int_*> *)
               (**(code **)(*(longlong *)&p_Var1->field_0x0 + 8))(p_Var1,this);
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      p_Var1 = (param_1->_Mystorage)._Ptrs[7];
      if (p_Var1 == (_Func_base<void,int_*> *)0x0) goto LAB_14c6206e9;
      (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                (p_Var1,p_Var1 != (_Func_base<void,int_*> *)param_1);
    }
    else {
      (this->_Mystorage)._Ptrs[7] = p_Var1;
    }
    (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void,int_*> *)0x0;
  }
LAB_14c6206e9:
  if (local_30 != (_Func_base<void,int_*> *)0x0) {
    if (local_30 == local_68) {
      p_Var1 = (_Func_base<void,int_*> *)(**(code **)((longlong)*local_30 + 8))(local_30,param_1);
      (param_1->_Mystorage)._Ptrs[7] = p_Var1;
      if (local_30 != (_Func_base<void,int_*> *)0x0) {
        (**(code **)((longlong)*local_30 + 0x20))(local_30,local_30 != local_68);
      }
    }
    else {
      (param_1->_Mystorage)._Ptrs[7] = local_30;
    }
  }
  return;
}

// _Target_type @ 14c620750

type_info * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`private:_static_class_std::unique_ptr<int,std::function<void___cdecl(int*___ptr64)>_>___cdecl_terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create(unsigned___int64,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14c620760

type_info * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_void___cdecl_terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize(unsigned___int64,int_const&___ptr64)___ptr64'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14c620770

type_info * __thiscall
std::
_Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_void___cdecl_terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized(unsigned___int64)___ptr64'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}

// create @ 14c620780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unique_ptr<int,std::function<void___cdecl(int_*)>_> * __cdecl
terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create
          (unique_ptr<int,std::function<void___cdecl(int_*)>_> *__return_storage_ptr__,
          ulong64 param_1,PolyAllocator<int,8,pma::DefaultMemoryResource> param_2)

{
  int *piVar1;
  _Func_base<void,int_*> *p_Var2;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  ulong64 local_58;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  piVar1 = (int *)(**(code **)(**(longlong **)param_2 + 8))(*(longlong **)param_2,param_1 * 4,8);
  local_68 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1__create___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__CA_AV__unique_ptr_HV__function___A6AXPEAH_Z_std___std___KV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___Z_XPEAH_std__6B_
  ;
  local_60 = *(undefined8 *)param_2;
  local_30 = &local_68;
  *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
  local_58 = param_1;
  p_Var2 = std::
           _Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::create'::__l2::<lambda_1>,void,int_*>
           ::_Move(&local_68,__return_storage_ptr__);
  *(_Func_base<void,int_*> **)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var2;
  if (local_30 != (undefined ***)0x0) {
    (*(code *)(*local_30)[4])(local_30,local_30 != &local_68);
  }
  (__return_storage_ptr__->_Mypair)._Myval2 = piVar1;
  return __return_storage_ptr__;
}

// resize @ 14c620840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize
          (DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *this,ulong64 param_1
          ,int *param_2)

{
  unique_ptr<int,std::function<void___cdecl(int_*)>_> *this_00;
  PolyAllocator<int,8,pma::DefaultMemoryResource> PVar1;
  longlong *plVar2;
  unique_ptr<int,std::function<void___cdecl(int_*)>_> *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_138 [2];
  _Func_base<void,int_*> local_128 [7];
  _Func_base<void,int_*> *local_f0;
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_e8;
  undefined **local_d8;
  DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *local_d0;
  undefined ***local_a0;
  undefined1 local_98 [64];
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (this->sz < param_1) {
    PVar1 = (PolyAllocator<int,8,pma::DefaultMemoryResource>)(this->ptr)._Mypair._Myval2;
    local_d8 = &
               ___7___Func_impl_no_alloc_V<lambda_1>__4__resize___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__QEAAX_KAEBH_Z_XPEAH_std__6B_
    ;
    local_a0 = &local_d8;
    (this->ptr)._Mypair._Myval2 = (int *)0x0;
    local_f0 = (_Func_base<void,int_*> *)0x0;
    local_d0 = this;
    local_f0 = std::
               _Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize'::__l5::<lambda_1>,void,int_*>
               ::_Move(&local_d8,local_128);
    if (local_a0 != (undefined ***)0x0) {
      (*(code *)(*local_a0)[4])(local_a0,local_a0 != &local_d8);
    }
    local_138[0] = this->alloc;
    local_e8 = PVar1;
    puVar3 = create((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_98,param_1,
                    (PolyAllocator<int,8,pma::DefaultMemoryResource>)local_138);
    this_00 = &this->ptr;
    piVar4 = (puVar3->_Mypair)._Myval2;
    (puVar3->_Mypair)._Myval2 = (int *)0x0;
    PVar1 = (PolyAllocator<int,8,pma::DefaultMemoryResource>)(this->ptr)._Mypair._Myval2;
    (this->ptr)._Mypair._Myval2 = piVar4;
    if (PVar1 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      plVar2 = *(longlong **)&(this->ptr)._Mypair._Myval1.field_0x38;
      local_138[0] = PVar1;
      if (plVar2 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,local_138);
    }
    if (this_00 != puVar3) {
      plVar2 = *(longlong **)&(this->ptr)._Mypair._Myval1.field_0x38;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))
                  (plVar2,(unique_ptr<int,std::function<void___cdecl(int_*)>_> *)plVar2 != this_00);
        *(undefined8 *)&(this->ptr)._Mypair._Myval1.field_0x38 = 0;
      }
      std::_Func_class<void,int_*>::_Reset_move
                ((_Func_class<void,int_*> *)this_00,(_Func_class<void,int_*> *)puVar3);
    }
    if (local_58 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      local_138[0] = local_58;
      if ((longlong *)local_98._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_98._56_8_ + 0x10))(local_98._56_8_,local_138);
    }
    if ((longlong *)local_98._56_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_98._56_8_ + 0x20))
                (local_98._56_8_,(undefined1 *)local_98._56_8_ != local_98);
    }
    if (local_e8 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      memcpy((this->ptr)._Mypair._Myval2,(void *)local_e8,this->sz << 2);
    }
    lVar5 = param_1 - this->sz;
    if (lVar5 != 0) {
      piVar4 = (this->ptr)._Mypair._Myval2 + this->sz;
      if (*param_2 == 0) {
        memset(piVar4,0,lVar5 * 4);
      }
      else {
        do {
          *piVar4 = *param_2;
          piVar4 = piVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    if (local_e8 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      local_138[0] = local_e8;
      if (local_f0 == (_Func_base<void,int_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_f0 + 0x10))(local_f0,local_138);
    }
    if (local_f0 != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_f0 + 0x20))(local_f0,local_f0 != local_128);
    }
  }
  this->sz = param_1;
  return;
}

// resize_uninitialized @ 14c620a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized
          (DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *this,ulong64 param_1
          )

{
  unique_ptr<int,std::function<void___cdecl(int_*)>_> *this_00;
  PolyAllocator<int,8,pma::DefaultMemoryResource> PVar1;
  int *piVar2;
  longlong *plVar3;
  unique_ptr<int,std::function<void___cdecl(int_*)>_> *puVar4;
  undefined1 auStack_148 [32];
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_128 [2];
  _Func_base<void,int_*> local_118 [7];
  _Func_base<void,int_*> *local_e0;
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_d8;
  undefined **local_c8;
  DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_> *local_c0;
  undefined ***local_90;
  undefined1 local_88 [64];
  PolyAllocator<int,8,pma::DefaultMemoryResource> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (this->sz < param_1) {
    PVar1 = (PolyAllocator<int,8,pma::DefaultMemoryResource>)(this->ptr)._Mypair._Myval2;
    local_c8 = &
               ___7___Func_impl_no_alloc_V<lambda_1>__4__resize_uninitialized___DynArray_HV__PolyAllocator_H_07VDefaultMemoryResource_pma___pma___terse__QEAAX_K_Z_XPEAH_std__6B_
    ;
    local_90 = &local_c8;
    (this->ptr)._Mypair._Myval2 = (int *)0x0;
    local_e0 = (_Func_base<void,int_*> *)0x0;
    local_c0 = this;
    local_e0 = std::
               _Func_impl_no_alloc<`terse::DynArray<int,pma::PolyAllocator<int,8,pma::DefaultMemoryResource>_>::resize_uninitialized'::__l5::<lambda_1>,void,int_*>
               ::_Move(&local_c8,local_118);
    if (local_90 != (undefined ***)0x0) {
      (*(code *)(*local_90)[4])(local_90,local_90 != &local_c8);
    }
    local_128[0] = this->alloc;
    local_d8 = PVar1;
    puVar4 = create((unique_ptr<int,std::function<void___cdecl(int_*)>_> *)local_88,param_1,
                    (PolyAllocator<int,8,pma::DefaultMemoryResource>)local_128);
    this_00 = &this->ptr;
    piVar2 = (puVar4->_Mypair)._Myval2;
    (puVar4->_Mypair)._Myval2 = (int *)0x0;
    PVar1 = (PolyAllocator<int,8,pma::DefaultMemoryResource>)(this->ptr)._Mypair._Myval2;
    (this->ptr)._Mypair._Myval2 = piVar2;
    if (PVar1 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      plVar3 = *(longlong **)&(this->ptr)._Mypair._Myval1.field_0x38;
      local_128[0] = PVar1;
      if (plVar3 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,local_128);
    }
    if (this_00 != puVar4) {
      plVar3 = *(longlong **)&(this->ptr)._Mypair._Myval1.field_0x38;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))
                  (plVar3,(unique_ptr<int,std::function<void___cdecl(int_*)>_> *)plVar3 != this_00);
        *(undefined8 *)&(this->ptr)._Mypair._Myval1.field_0x38 = 0;
      }
      std::_Func_class<void,int_*>::_Reset_move
                ((_Func_class<void,int_*> *)this_00,(_Func_class<void,int_*> *)puVar4);
    }
    if (local_48 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      local_128[0] = local_48;
      if ((longlong *)local_88._56_8_ == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)(*(longlong *)local_88._56_8_ + 0x10))(local_88._56_8_,local_128);
    }
    if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_88._56_8_ + 0x20))
                (local_88._56_8_,(undefined1 *)local_88._56_8_ != local_88);
    }
    if (local_d8 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
      memcpy((this->ptr)._Mypair._Myval2,(void *)local_d8,this->sz << 2);
      if (local_d8 != (PolyAllocator<int,8,pma::DefaultMemoryResource>)0x0) {
        local_128[0] = local_d8;
        if (local_e0 == (_Func_base<void,int_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)((longlong)*local_e0 + 0x10))(local_e0,local_128);
      }
    }
    if (local_e0 != (_Func_base<void,int_*> *)0x0) {
      (**(code **)((longlong)*local_e0 + 0x20))(local_e0,local_e0 != local_118);
    }
  }
  this->sz = param_1;
  return;
}

