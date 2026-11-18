// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 53

// test_info_'' @ 141388c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test::test_info___
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
              ___7__TestFactoryImpl_VTestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x45);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x45);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x45;
  TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","CreateRotationMatrixFromXYZAnglesVector",(char *)0x0,(char *)0x0
                  ,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2
                 );
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141388e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'TestTransforms_CreateRotationMatrixFromXYZAngles_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestTransforms_CreateRotationMatrixFromXYZAngles_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x3b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x3b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x3b;
  TestTransforms_CreateRotationMatrixFromXYZAngles_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","CreateRotationMatrixFromXYZAngles",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413890b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'TestTransforms_RotateByXYZAnglesLeftHanded_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestTransforms_RotateByXYZAnglesLeftHanded_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x65);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x65);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x65;
  TestTransforms_RotateByXYZAnglesLeftHanded_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","RotateByXYZAnglesLeftHanded",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413892d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'TestTransforms_RotateByXYZAnglesVector_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestTransforms_RotateByXYZAnglesVector_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x5a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x5a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x5a;
  TestTransforms_RotateByXYZAnglesVector_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","RotateByXYZAnglesVector",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1413894f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'TestTransforms_RotateByXYZAngles_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VTestTransforms_RotateByXYZAngles_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x4f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x4f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x4f;
  TestTransforms_RotateByXYZAngles_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","RotateByXYZAngles",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141389710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'TestTransforms_RotateLeftHanded_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VTestTransforms_RotateLeftHanded_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x12);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x12);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x12;
  TestTransforms_RotateLeftHanded_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","RotateLeftHanded",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141389930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'TestTransforms_Rotate_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VTestTransforms_Rotate_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 8;
  TestTransforms_Rotate_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","Rotate",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,pvVar5
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141389b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'TestTransforms_ScaleNonUniform_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VTestTransforms_ScaleNonUniform_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x27);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x27);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x27;
  TestTransforms_ScaleNonUniform_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","ScaleNonUniform",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141389d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'TestTransforms_ScaleUniform_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VTestTransforms_ScaleUniform_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x1d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x1d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x1d;
  TestTransforms_ScaleUniform_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","ScaleUniform",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141389f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'TestTransforms_Translate_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VTestTransforms_Translate_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x31);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                      ,0x31);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined2 *)(pcVar6 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar6[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(local_58._Ptr + 0x76) = pcVar6[0x76];
  local_38 = 0x31;
  TestTransforms_Translate_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestTransforms","Translate",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58,
                  pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c5cd1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TestTransforms_Rotate_Test::TestBody(TestTransforms_Rotate_Test *this)

{
  longlong *plVar1;
  double dVar2;
  vec<4,float> *pvVar3;
  vec<4,float> *pvVar4;
  vec<4,float> *pvVar5;
  vec<4,float> *pvVar6;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar7;
  Message *pMVar8;
  AssertHelper *pAVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  vec<4,float> *pvVar14;
  undefined1 auStackY_f8 [32];
  AssertHelper local_b8;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  AssertionResult local_a0;
  float local_90 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  mat<4,4,float> local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b0 = (undefined1  [8])0x0;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,0x3f800000);
  local_b8.data_._0_4_ = 0x3fc90fdb;
  tdm::projective::rotate<float>
            (&local_68,(vec<3,float> *)local_b0,(ang<float,tdm::impl::radians>)SUB84(&local_b8,0),
             right);
  pvVar14 = local_68.values;
  uVar13 = 0;
  local_80 = ___xmm_3f80000000000000000000003f800000;
  uStack_78 = _UNK_15076b188;
  local_b8.data_._0_4_ = 0;
  local_90[0] = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  local_90[3] = 0.0;
  local_90[3] = 0.0;
  local_90[2] = 0.0;
  local_90[1] = 0.0;
  local_90[0] = 0.0;
  uVar10 = uVar13;
  do {
    local_b0._4_4_ = *(float *)((longlong)&local_80 + uVar10 * 4);
    if ((float)local_b0._4_4_ == 0.0) {
      local_b0._4_4_ = 0.0;
      local_b0 = (undefined1  [8])0x0;
      uStack_a8 = 0;
    }
    else {
      local_b0._0_4_ = local_b0._4_4_;
      uStack_a8 = CONCAT44(local_b0._4_4_,local_b0._4_4_);
    }
    pvVar3 = (vec<4,float> *)pvVar14->values;
    pvVar4 = (vec<4,float> *)pvVar14->values;
    pvVar5 = (vec<4,float> *)pvVar14->values;
    pvVar6 = (vec<4,float> *)pvVar14->values;
    uVar10 = uVar10 + 1;
    pvVar14 = pvVar14 + 1;
    local_90[0] = local_90[0] + pvVar3->values[0] * (float)local_b0._4_4_;
    local_90[1] = local_90[1] + pvVar4->values[1] * (float)local_b0._4_4_;
    local_90[2] = local_90[2] + pvVar5->values[2] * (float)local_b0._4_4_;
    local_90[3] = local_90[3] + pvVar6->values[3] * (float)local_b0._4_4_;
  } while (uVar10 != 4);
  local_b0 = (undefined1  [8])___xmm_3f80000000000000bf80000000000000;
  uStack_a8 = _UNK_152899828;
  testing::AssertionSuccess(&local_a0);
  uVar7._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
  if (local_a0.success_ == false) {
    pMVar8 = (Message *)testing::Message::Message((Message *)&local_b8);
    if (local_a0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_a0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_a0.message_._Mypair._Myval2;
      }
    }
    pAVar9 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_b0,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0xf,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_b0);
    plVar1 = (longlong *)CONCAT44(local_b8.data_._4_4_,local_b8.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar12 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar12)(puVar12,1);
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
    dVar2 = __real_3f1a36e2e0000000;
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
      dVar2 = __real_3f1a36e2e0000000;
    }
    do {
      testing::internal::DoubleNearPredFormat
                (&local_a0,"result[ri]","expected[ri]","0.0001f",
                 (double)*(float *)((longlong)local_90 + uVar13),
                 (double)*(float *)(local_b0 + uVar13),dVar2);
      uVar7._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
      if (local_a0.success_ == false) {
        pMVar8 = (Message *)testing::Message::Message((Message *)local_b0);
        if (local_a0.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar11 = "";
        }
        else {
          pcVar11 = (char *)local_a0.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
            pcVar11 = *(char **)local_a0.message_._Mypair._Myval2;
          }
        }
        pAVar9 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           (&local_b8,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                            ,0xf,pcVar11);
        testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
        testing::internal::AssertHelper::~AssertHelper(&local_b8);
        if (local_b0 != (undefined1  [8])0x0) {
          puVar12 = (undefined8 *)
                    ((longlong)(longlong *)local_b0 + (longlong)*(int *)(*(longlong *)local_b0 + 4))
          ;
          (**(code **)*puVar12)(puVar12,1);
        }
        if (local_a0.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          return;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_a0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
        return;
      }
      if (local_a0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_a0.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
      }
      uVar13 = uVar13 + 4;
    } while (uVar13 < 0x10);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cd510

void * __thiscall
TestTransforms_Rotate_Test::_scalar_deleting_destructor_
          (TestTransforms_Rotate_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cd550

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_Rotate_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_Rotate_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_Rotate_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cd590

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_Rotate_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_Rotate_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_Rotate_Test>)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cd5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_RotateLeftHanded_Test::TestBody(TestTransforms_RotateLeftHanded_Test *this)

{
  longlong *plVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_158 [32];
  AssertHelper local_118;
  AssertionResult local_110;
  vec<3,float> local_100 [2];
  float local_e8 [16];
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_100[0].values[0] = 0.5;
  local_100[0].values[1] = 0.4;
  local_100[0].values[2] = 0.3;
  local_118.data_._0_4_ = 0x3f490fdb;
  tdm::projective::rotate<float>
            (&local_a8,local_100,(ang<float,tdm::impl::radians>)SUB84(&local_118,0),left);
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  lVar6 = 0;
  local_e8[4] = 0.0;
  local_e8[5] = 0.0;
  local_e8[6] = 0.0;
  local_e8[7] = 0.0;
  local_e8[8] = 0.0;
  local_e8[9] = 0.0;
  local_e8[10] = 0.0;
  local_e8[0xb] = 0.0;
  local_e8[0xc] = 0.0;
  local_e8[0xd] = 0.0;
  local_e8[0xe] = 0.0;
  local_e8[0xf] = 0.0;
  local_68 = ___xmm_00000000be9fcfc43ed5959a3f5a8273;
  uStack_60 = _UNK_152899808;
  local_58 = ___xmm_000000003f11feca3f4d0364be3b3b32;
  uStack_50 = _UNK_1528997d8;
  local_48 = ___xmm_000000003f428416bedc026d3ef9c9d6;
  uStack_40 = _UNK_1528997f8;
  local_38 = ___xmm_3f800000000000000000000000000000;
  uStack_30 = _UNK_150689648;
  do {
    *(undefined4 *)((longlong)local_e8 + lVar6) = *(undefined4 *)((longlong)&local_68 + lVar6);
    *(undefined4 *)((longlong)local_e8 + lVar6 + 4) =
         *(undefined4 *)((longlong)&local_68 + lVar6 + 4);
    *(undefined4 *)((longlong)local_e8 + lVar6 + 8) = *(undefined4 *)((longlong)&uStack_60 + lVar6);
    *(undefined4 *)((longlong)local_e8 + lVar6 + 0xc) =
         *(undefined4 *)((longlong)&uStack_60 + lVar6 + 4);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x40);
  testing::AssertionSuccess(&local_110);
  uVar3._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
  if (local_110.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_118);
    if (local_110.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_110.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_110.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_100,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x1a,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_100);
    plVar1 = (longlong *)CONCAT44(local_118.data_._4_4_,local_118.data_._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_110.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_110.message_._Mypair._Myval2);
      ::operator_delete((void *)local_110.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_110.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_110.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_110);
    uVar3._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
    if (local_110.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_118);
      if (local_110.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_110.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_110.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)local_100,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x1a,pcVar7);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_100);
      plVar1 = (longlong *)CONCAT44(local_118.data_._4_4_,local_118.data_._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar8)(puVar8,1);
      }
      if (local_110.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_110.message_._Mypair._Myval2);
        ::operator_delete((void *)local_110.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_110.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_110.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      dVar2 = __real_3f1a36e2e0000000;
      uVar11 = 0;
      do {
        uVar10 = 0;
        uVar9 = uVar11;
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_110,"m[ri][ci]","expected[ri][ci]","0.0001f",
                     (double)*(float *)((longlong)local_a8.values[0].values + uVar9),
                     (double)*(float *)((longlong)local_e8 + uVar9),dVar2);
          uVar3._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
          if (local_110.success_ == false) {
            pMVar4 = (Message *)testing::Message::Message((Message *)local_100);
            if (local_110.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_110.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_110.message_._Mypair._Myval2;
              }
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_118,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                                ,0x1a,pcVar7);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
            testing::internal::AssertHelper::~AssertHelper(&local_118);
            plVar1 = (longlong *)CONCAT44(local_100[0].values[1],local_100[0].values[0]);
            if (plVar1 != (longlong *)0x0) {
              puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
              (**(code **)*puVar8)(puVar8,1);
            }
            if (local_110.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              return;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_110.message_._Mypair._Myval2);
            ::operator_delete((void *)local_110.message_._Mypair._Myval2,0x20);
            return;
          }
          if (local_110.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_110.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
          }
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 + 4;
        } while (uVar10 < 4);
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < 0x40);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cda00

void * __thiscall
TestTransforms_RotateLeftHanded_Test::_scalar_deleting_destructor_
          (TestTransforms_RotateLeftHanded_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cda40

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateLeftHanded_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_RotateLeftHanded_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_RotateLeftHanded_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cda80

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateLeftHanded_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_RotateLeftHanded_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_RotateLeftHanded_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cdac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TestTransforms_ScaleUniform_Test::TestBody(TestTransforms_ScaleUniform_Test *this)

{
  undefined8 uVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  uint uVar4;
  vec<4,float> *pvVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStackY_1b8 [32];
  AssertHelper local_178;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_170 [2];
  byte local_160 [8];
  byte local_158 [8];
  AssertionResult local_150;
  vec<4,float> local_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  mat<4,4,float> local_f8;
  float local_b8 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar13 = 0;
  local_138.values[1] = 0.0;
  local_138.values[2] = 0.0;
  local_138.values[3] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_138.values[0] = 1.0;
  uStack_124 = 0x3f800000;
  uStack_110 = 0x3f800000;
  uStack_fc = 0x3f800000;
  local_f8.values[0].values[0] = __real_40400000;
  if (__real_40400000 == 0.0) {
    local_170[0]._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    local_f8.values[0].values[0] = 0.0;
  }
  local_160[0] = 0;
  local_160[1] = 0;
  local_160[2] = 0x80;
  local_160[3] = 0x3f;
  uVar4 = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  uVar11 = uVar13;
  do {
    uVar8 = uVar11 + 1;
    if (local_160[uVar11] != local_158[uVar11]) {
      uVar4 = -(uint)(local_160[uVar11] < local_158[uVar11]) | 1;
      break;
    }
    uVar11 = uVar8;
  } while (uVar8 != 4);
  local_f8.values[3].values[3] = __real_3f800000;
  if (uVar4 == 0) {
    local_f8.values[3].values[3] = 0.0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_f8.values[0].values[1] = 0.0;
  local_f8.values[0].values[2] = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_f8.values[0].values[3] = 0.0;
  local_f8.values[1].values[0] = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  local_f8.values[1].values[2] = 0.0;
  local_f8.values[1].values[3] = 0.0;
  local_48 = 0;
  uStack_40 = 0;
  local_f8.values[2].values[0] = 0.0;
  local_f8.values[2].values[1] = 0.0;
  local_f8.values[2].values[3] = 0.0;
  local_f8.values[3].values[0] = 0.0;
  local_f8.values[3].values[1] = 0.0;
  local_f8.values[3].values[2] = 0.0;
  uVar11 = uVar13;
  local_f8.values[1].values[1] = local_f8.values[0].values[0];
  local_f8.values[2].values[2] = local_f8.values[0].values[0];
  do {
    pvVar5 = tdm::operator*<4,4,float>
                       ((vec<4,float> *)&local_150,
                        (vec<4,float> *)((longlong)local_138.values + uVar11),&local_f8);
    uVar1 = *(undefined8 *)(pvVar5->values + 2);
    *(undefined8 *)((longlong)&local_78 + uVar11) = *(undefined8 *)pvVar5->values;
    *(undefined8 *)((longlong)&uStack_70 + uVar11) = uVar1;
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  local_138.values[0] = (float)local_78;
  local_138.values[1] = (float)((ulonglong)local_78 >> 0x20);
  local_138.values[2] = (float)uStack_70;
  local_138.values[3] = (float)((ulonglong)uStack_70 >> 0x20);
  uStack_128 = (undefined4)local_68;
  uStack_124 = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_120 = uStack_60;
  local_118 = local_58;
  uStack_110 = (undefined4)uStack_50;
  uStack_10c = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_108 = (undefined4)local_48;
  uStack_104 = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_100 = (undefined4)uStack_40;
  uStack_fc = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_b8[4] = 0.0;
  local_b8[5] = 0.0;
  local_b8[6] = 0.0;
  local_b8[7] = 0.0;
  local_b8[8] = 0.0;
  local_b8[9] = 0.0;
  local_b8[10] = 0.0;
  local_b8[0xb] = 0.0;
  local_b8[0xc] = 0.0;
  local_b8[0xd] = 0.0;
  local_b8[0xe] = 0.0;
  local_b8[0xf] = 0.0;
  local_78 = ___xmm_00000000000000000000000040400000;
  uStack_70 = _UNK_152884608;
  local_68 = ___xmm_00000000000000004040000000000000;
  uStack_60 = _UNK_1528997b8;
  local_58 = ___xmm_00000000404000000000000000000000;
  uStack_50 = _UNK_15140dc98;
  local_48 = ___xmm_3f800000000000000000000000000000;
  uStack_40 = _UNK_150689648;
  uVar11 = uVar13;
  do {
    *(undefined4 *)((longlong)local_b8 + uVar11) = *(undefined4 *)((longlong)&local_78 + uVar11);
    *(undefined4 *)((longlong)local_b8 + uVar11 + 4) =
         *(undefined4 *)((longlong)&local_78 + uVar11 + 4);
    *(undefined4 *)((longlong)local_b8 + uVar11 + 8) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11);
    *(undefined4 *)((longlong)local_b8 + uVar11 + 0xc) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11 + 4);
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  testing::AssertionSuccess(&local_150);
  uVar3._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
  if (local_150.success_ == false) {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_178);
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
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_170,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x24,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_170);
    if (local_178.data_ != (AssertHelperData *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)&(local_178.data_)->type +
                (longlong)*(int *)(*(longlong *)local_178.data_ + 4));
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_150);
    uVar3._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_178);
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
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)local_170,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x24,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_170);
      if (local_178.data_ != (AssertHelperData *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)&(local_178.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_178.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      uVar11 = uVar13;
      uVar8 = uVar13;
      dVar2 = __real_3f1a36e2e0000000;
      uVar12 = uVar13;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        dVar2 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  (&local_150,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_138.values + uVar8),
                   (double)*(float *)((longlong)local_b8 + uVar8),dVar2);
        uVar3._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.success_ == false) {
          pMVar6 = (Message *)testing::Message::Message((Message *)local_170);
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
          pAVar7 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_178,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                              ,0x24,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
          testing::internal::AssertHelper::~AssertHelper(&local_178);
          if (local_170[0]._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar10 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_170[0]._Mypair._Myval2 + 4) +
                      (longlong)local_170[0]._Mypair._Myval2);
            (**(code **)*puVar10)(puVar10,1);
          }
          if (local_150.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
          return;
        }
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 4;
      } while ((uVar11 < 4) ||
              (uVar8 = uVar12 + 0x10, uVar11 = uVar13, uVar12 = uVar8, uVar8 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ce010

void * __thiscall
TestTransforms_ScaleUniform_Test::_scalar_deleting_destructor_
          (TestTransforms_ScaleUniform_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ce050

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_ScaleUniform_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_ScaleUniform_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_ScaleUniform_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ce090

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_ScaleUniform_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_ScaleUniform_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_ScaleUniform_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ce0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_ScaleNonUniform_Test::TestBody(TestTransforms_ScaleNonUniform_Test *this)

{
  undefined8 uVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  vec<4,float> *pvVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_198 [32];
  AssertHelper local_158;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_150;
  AssertionResult local_148;
  vec<4,float> local_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  mat<4,4,float> local_f8;
  float local_b8 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar12 = 0;
  local_138.values[1] = 0.0;
  local_138.values[2] = 0.0;
  local_138.values[3] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_138.values[0] = 1.0;
  uStack_124 = 0x3f800000;
  uStack_110 = 0x3f800000;
  uStack_fc = 0x3f800000;
  local_f8.values[3].values[3] = __real_3f800000;
  if (__real_3f800000 == 0.0) {
    local_f8.values[3].values[3] = 0.0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_f8.values[0].values[1] = 0.0;
  local_f8.values[0].values[2] = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_f8.values[0].values[3] = 0.0;
  local_f8.values[1].values[0] = 0.0;
  local_58 = 0;
  uStack_50 = 0;
  local_f8.values[1].values[2] = 0.0;
  local_f8.values[1].values[3] = 0.0;
  local_48 = 0;
  uStack_40 = 0;
  local_f8.values[2].values[0] = 0.0;
  local_f8.values[2].values[1] = 0.0;
  local_f8.values[2].values[3] = 0.0;
  local_f8.values[3].values[0] = 0.0;
  local_f8.values[3].values[1] = 0.0;
  local_f8.values[3].values[2] = 0.0;
  local_f8.values[0].values[0] = 2.0;
  local_f8.values[1].values[1] = 3.0;
  local_f8.values[2].values[2] = 4.0;
  uVar9 = uVar12;
  do {
    pvVar4 = tdm::operator*<4,4,float>
                       ((vec<4,float> *)&local_148,
                        (vec<4,float> *)((longlong)local_138.values + uVar9),&local_f8);
    uVar1 = *(undefined8 *)(pvVar4->values + 2);
    *(undefined8 *)((longlong)&local_78 + uVar9) = *(undefined8 *)pvVar4->values;
    *(undefined8 *)((longlong)&uStack_70 + uVar9) = uVar1;
    uVar9 = uVar9 + 0x10;
  } while (uVar9 != 0x40);
  local_138.values[0] = (float)local_78;
  local_138.values[1] = (float)((ulonglong)local_78 >> 0x20);
  local_138.values[2] = (float)uStack_70;
  local_138.values[3] = (float)((ulonglong)uStack_70 >> 0x20);
  uStack_128 = (undefined4)local_68;
  uStack_124 = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_120 = uStack_60;
  local_118 = local_58;
  uStack_110 = (undefined4)uStack_50;
  uStack_10c = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_108 = (undefined4)local_48;
  uStack_104 = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_100 = (undefined4)uStack_40;
  uStack_fc = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_b8[4] = 0.0;
  local_b8[5] = 0.0;
  local_b8[6] = 0.0;
  local_b8[7] = 0.0;
  local_b8[8] = 0.0;
  local_b8[9] = 0.0;
  local_b8[10] = 0.0;
  local_b8[0xb] = 0.0;
  local_b8[0xc] = 0.0;
  local_b8[0xd] = 0.0;
  local_b8[0xe] = 0.0;
  local_b8[0xf] = 0.0;
  local_78 = ___xmm_00000000000000000000000040000000;
  uStack_70 = _UNK_15094b718;
  local_68 = ___xmm_00000000000000004040000000000000;
  uStack_60 = _UNK_1528997b8;
  local_58 = ___xmm_00000000408000000000000000000000;
  uStack_50 = _UNK_150957978;
  local_48 = ___xmm_3f800000000000000000000000000000;
  uStack_40 = _UNK_150689648;
  uVar9 = uVar12;
  do {
    *(undefined4 *)((longlong)local_b8 + uVar9) = *(undefined4 *)((longlong)&local_78 + uVar9);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 4) =
         *(undefined4 *)((longlong)&local_78 + uVar9 + 4);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 8) = *(undefined4 *)((longlong)&uStack_70 + uVar9);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 0xc) =
         *(undefined4 *)((longlong)&uStack_70 + uVar9 + 4);
    uVar9 = uVar9 + 0x10;
  } while (uVar9 != 0x40);
  testing::AssertionSuccess(&local_148);
  uVar3._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
  if (local_148.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
    if (local_148.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_148.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_148.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_150,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x2e,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_150);
    if (local_158.data_ != (AssertHelperData *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)&(local_158.data_)->type +
               (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_148.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_148.message_._Mypair._Myval2);
      ::operator_delete((void *)local_148.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_148.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_148.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_148);
    uVar3._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
    if (local_148.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_148.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_148.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_148.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_150,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x2e,pcVar7);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_150);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar8 = (undefined8 *)
                 ((longlong)&(local_158.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar8)(puVar8,1);
      }
      if (local_148.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_148.message_._Mypair._Myval2);
        ::operator_delete((void *)local_148.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      uVar9 = uVar12;
      uVar11 = uVar12;
      dVar2 = __real_3f1a36e2e0000000;
      uVar10 = uVar12;
      if (local_148.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_148.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        dVar2 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  (&local_148,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_138.values + uVar11),
                   (double)*(float *)((longlong)local_b8 + uVar11),dVar2);
        uVar3._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
        if (local_148.success_ == false) {
          pMVar5 = (Message *)testing::Message::Message((Message *)&local_150);
          if (local_148.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_148.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_148.message_._Mypair._Myval2;
            }
          }
          pAVar6 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_158,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                              ,0x2e,pcVar7);
          testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
          testing::internal::AssertHelper::~AssertHelper(&local_158);
          if (local_150._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar8 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)local_150._Mypair._Myval2 + 4) +
                     (longlong)local_150._Mypair._Myval2);
            (**(code **)*puVar8)(puVar8,1);
          }
          if (local_148.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_148.message_._Mypair._Myval2);
          ::operator_delete((void *)local_148.message_._Mypair._Myval2,0x20);
          return;
        }
        if (local_148.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_148.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 + 4;
      } while ((uVar9 < 4) ||
              (uVar11 = uVar10 + 0x10, uVar9 = uVar12, uVar10 = uVar11, uVar11 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ce5c0

void * __thiscall
TestTransforms_ScaleNonUniform_Test::_scalar_deleting_destructor_
          (TestTransforms_ScaleNonUniform_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ce600

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_ScaleNonUniform_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_ScaleNonUniform_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_ScaleNonUniform_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5ce640

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_ScaleNonUniform_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_ScaleNonUniform_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_ScaleNonUniform_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5ce680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TestTransforms_Translate_Test::TestBody(TestTransforms_Translate_Test *this)

{
  undefined8 uVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  vec<4,float> *pvVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_198 [32];
  AssertHelper local_158;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_150;
  AssertionResult local_148;
  vec<4,float> local_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  mat<4,4,float> local_f8;
  float local_b8 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar12 = 0;
  local_138.values[0] = 1.0;
  local_138.values[1] = 0.0;
  local_138.values[2] = 0.0;
  local_138.values[3] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_f8.values[0].values[1] = 0.0;
  local_f8.values[0].values[2] = 0.0;
  local_f8.values[0].values[3] = 0.0;
  local_f8.values[1].values[0] = 0.0;
  local_f8.values[1].values[2] = 0.0;
  local_f8.values[1].values[3] = 0.0;
  local_f8.values[2].values[0] = 0.0;
  local_f8.values[2].values[1] = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_124 = 0x3f800000;
  local_68 = 0;
  uStack_60 = 0;
  uStack_110 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  uStack_fc = 0x3f800000;
  local_48 = 0;
  uStack_40 = 0;
  local_f8.values[2].values[2] = 1.0;
  local_f8.values[2].values[3] = 0.0;
  local_f8.values[0].values[0] = 1.0;
  local_f8.values[1].values[1] = 1.0;
  local_f8.values[3].values[3] = 1.0;
  local_f8.values[3].values[0] = 2.0;
  local_f8.values[3].values[1] = 3.0;
  local_f8.values[3].values[2] = 4.0;
  uVar9 = uVar12;
  do {
    pvVar4 = tdm::operator*<4,4,float>
                       ((vec<4,float> *)&local_148,
                        (vec<4,float> *)((longlong)local_138.values + uVar9),&local_f8);
    uVar1 = *(undefined8 *)(pvVar4->values + 2);
    *(undefined8 *)((longlong)&local_78 + uVar9) = *(undefined8 *)pvVar4->values;
    *(undefined8 *)((longlong)&uStack_70 + uVar9) = uVar1;
    uVar9 = uVar9 + 0x10;
  } while (uVar9 != 0x40);
  local_138.values[0] = (float)local_78;
  local_138.values[1] = (float)((ulonglong)local_78 >> 0x20);
  local_138.values[2] = (float)uStack_70;
  local_138.values[3] = (float)((ulonglong)uStack_70 >> 0x20);
  uStack_128 = (undefined4)local_68;
  uStack_124 = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_120 = uStack_60;
  local_118 = local_58;
  uStack_110 = (undefined4)uStack_50;
  uStack_10c = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_108 = (undefined4)local_48;
  uStack_104 = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_100 = (undefined4)uStack_40;
  uStack_fc = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_b8[4] = 0.0;
  local_b8[5] = 0.0;
  local_b8[6] = 0.0;
  local_b8[7] = 0.0;
  local_b8[8] = 0.0;
  local_b8[9] = 0.0;
  local_b8[10] = 0.0;
  local_b8[0xb] = 0.0;
  local_b8[0xc] = 0.0;
  local_b8[0xd] = 0.0;
  local_b8[0xe] = 0.0;
  local_b8[0xf] = 0.0;
  local_78 = ___xmm_0000000000000000000000003f800000;
  uStack_70 = _UNK_1506894f8;
  local_68 = ___xmm_00000000000000003f80000000000000;
  uStack_60 = _UNK_150689508;
  local_58 = ___xmm_000000003f8000000000000000000000;
  uStack_50 = _UNK_150689538;
  local_48 = ___xmm_3f800000408000004040000040000000;
  uStack_40 = _UNK_152899838;
  uVar9 = uVar12;
  do {
    *(undefined4 *)((longlong)local_b8 + uVar9) = *(undefined4 *)((longlong)&local_78 + uVar9);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 4) =
         *(undefined4 *)((longlong)&local_78 + uVar9 + 4);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 8) = *(undefined4 *)((longlong)&uStack_70 + uVar9);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 0xc) =
         *(undefined4 *)((longlong)&uStack_70 + uVar9 + 4);
    uVar9 = uVar9 + 0x10;
  } while (uVar9 != 0x40);
  testing::AssertionSuccess(&local_148);
  uVar3._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
  if (local_148.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
    if (local_148.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_148.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_148.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_150,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x38,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_150);
    if (local_158.data_ != (AssertHelperData *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)&(local_158.data_)->type +
               (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_148.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_148.message_._Mypair._Myval2);
      ::operator_delete((void *)local_148.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_148.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_148.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_148);
    uVar3._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
    if (local_148.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_148.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_148.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_148.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_150,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x38,pcVar7);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_150);
      if (local_158.data_ != (AssertHelperData *)0x0) {
        puVar8 = (undefined8 *)
                 ((longlong)&(local_158.data_)->type +
                 (longlong)*(int *)(*(longlong *)local_158.data_ + 4));
        (**(code **)*puVar8)(puVar8,1);
      }
      if (local_148.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_148.message_._Mypair._Myval2);
        ::operator_delete((void *)local_148.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      uVar9 = uVar12;
      uVar11 = uVar12;
      dVar2 = __real_3f1a36e2e0000000;
      uVar10 = uVar12;
      if (local_148.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_148.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        dVar2 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  (&local_148,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_138.values + uVar11),
                   (double)*(float *)((longlong)local_b8 + uVar11),dVar2);
        uVar3._Mypair._Myval2 = local_148.message_._Mypair._Myval2;
        if (local_148.success_ == false) {
          pMVar5 = (Message *)testing::Message::Message((Message *)&local_150);
          if (local_148.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)local_148.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_148.message_._Mypair._Myval2 + 0x18)) {
              pcVar7 = *(char **)local_148.message_._Mypair._Myval2;
            }
          }
          pAVar6 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_158,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                              ,0x38,pcVar7);
          testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
          testing::internal::AssertHelper::~AssertHelper(&local_158);
          if (local_150._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar8 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)local_150._Mypair._Myval2 + 4) +
                     (longlong)local_150._Mypair._Myval2);
            (**(code **)*puVar8)(puVar8,1);
          }
          if (local_148.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_148.message_._Mypair._Myval2);
          ::operator_delete((void *)local_148.message_._Mypair._Myval2,0x20);
          return;
        }
        if (local_148.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_148.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 + 4;
      } while ((uVar9 < 4) ||
              (uVar11 = uVar10 + 0x10, uVar9 = uVar12, uVar10 = uVar11, uVar11 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5ceb60

void * __thiscall
TestTransforms_Translate_Test::_scalar_deleting_destructor_
          (TestTransforms_Translate_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5ceba0

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_Translate_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_Translate_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_Translate_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cebe0

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_Translate_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_Translate_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_Translate_Test>)&___7TestFactoryBase_internal_testing__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cec20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_CreateRotationMatrixFromXYZAngles_Test::TestBody
          (TestTransforms_CreateRotationMatrixFromXYZAngles_Test *this)

{
  longlong *plVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_158 [32];
  Message local_118;
  AssertHelper local_110;
  AssertionResult local_108;
  undefined4 local_f8 [4];
  mat<4,4,float> local_e8;
  float local_a8 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8[0] = 0x3fc90fdb;
  local_118.ss_._Mypair._Myval2._0_4_ = 0;
  local_110.data_._0_4_ = 0x3fc90fdb;
  tdm::projective::rotate<float>
            (&local_e8,(ang<float,tdm::impl::radians>)SUB84(&local_110,0),
             (ang<float,tdm::impl::radians>)SUB84(&local_118,0),
             (ang<float,tdm::impl::radians>)SUB84(local_f8,0),right);
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  lVar6 = 0;
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[6] = 0.0;
  local_a8[7] = 0.0;
  local_a8[8] = 0.0;
  local_a8[9] = 0.0;
  local_a8[10] = 0.0;
  local_a8[0xb] = 0.0;
  local_a8[0xc] = 0.0;
  local_a8[0xd] = 0.0;
  local_a8[0xe] = 0.0;
  local_a8[0xf] = 0.0;
  local_68 = ___xmm_00000000000000003f80000000000000;
  uStack_60 = _UNK_150689508;
  local_58 = ___xmm_000000003f8000000000000000000000;
  uStack_50 = _UNK_150689538;
  local_48 = ___xmm_0000000000000000000000003f800000;
  uStack_40 = _UNK_1506894f8;
  local_38 = ___xmm_3f800000000000000000000000000000;
  uStack_30 = _UNK_150689648;
  do {
    *(undefined4 *)((longlong)local_a8 + lVar6) = *(undefined4 *)((longlong)&local_68 + lVar6);
    *(undefined4 *)((longlong)local_a8 + lVar6 + 4) =
         *(undefined4 *)((longlong)&local_68 + lVar6 + 4);
    *(undefined4 *)((longlong)local_a8 + lVar6 + 8) = *(undefined4 *)((longlong)&uStack_60 + lVar6);
    *(undefined4 *)((longlong)local_a8 + lVar6 + 0xc) =
         *(undefined4 *)((longlong)&uStack_60 + lVar6 + 4);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x40);
  testing::AssertionSuccess(&local_108);
  uVar3._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
  if (local_108.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message(&local_118);
    if (local_108.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_108.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_108.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_110,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x42,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_110);
    plVar1 = (longlong *)
             CONCAT44(local_118.ss_._Mypair._Myval2._4_4_,local_118.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_108.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_108.message_._Mypair._Myval2);
      ::operator_delete((void *)local_108.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_108.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_108.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_108);
    uVar3._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
    if (local_108.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message(&local_118);
      if (local_108.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_108.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_108.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_110,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x42,pcVar7);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_110);
      plVar1 = (longlong *)
               CONCAT44(local_118.ss_._Mypair._Myval2._4_4_,local_118.ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar8)(puVar8,1);
      }
      if (local_108.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108.message_._Mypair._Myval2);
        ::operator_delete((void *)local_108.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_108.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      dVar2 = __real_3f1a36e2e0000000;
      uVar11 = 0;
      do {
        uVar9 = 0;
        uVar10 = uVar11;
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_108,"m[ri][ci]","expected[ri][ci]","0.0001f",
                     (double)*(float *)((longlong)local_e8.values[0].values + uVar10),
                     (double)*(float *)((longlong)local_a8 + uVar10),dVar2);
          uVar3._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
          if (local_108.success_ == false) {
            pMVar4 = (Message *)testing::Message::Message(&local_118);
            if (local_108.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_108.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_108.message_._Mypair._Myval2;
              }
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_110,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                                ,0x42,pcVar7);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
            testing::internal::AssertHelper::~AssertHelper(&local_110);
            plVar1 = (longlong *)
                     CONCAT44(local_118.ss_._Mypair._Myval2._4_4_,
                              local_118.ss_._Mypair._Myval2._0_4_);
            if (plVar1 != (longlong *)0x0) {
              puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
              (**(code **)*puVar8)(puVar8,1);
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
            ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
          }
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 4;
        } while (uVar9 < 4);
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < 0x40);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cf050

void * __thiscall
TestTransforms_CreateRotationMatrixFromXYZAngles_Test::_scalar_deleting_destructor_
          (TestTransforms_CreateRotationMatrixFromXYZAngles_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cf090

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAngles_Test>::
CreateTest(TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAngles_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_CreateRotationMatrixFromXYZAngles_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cf0d0

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAngles_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAngles_Test> *this,uint param_1
          )

{
  *this = (TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAngles_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cf110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test::TestBody
          (TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test *this)

{
  longlong *plVar1;
  double dVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_158 [32];
  Message local_118;
  AssertHelper local_110;
  AssertionResult local_108;
  undefined4 local_f8 [4];
  mat<4,4,float> local_e8;
  float local_a8 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8[0] = 0x3fc90fdb;
  local_118.ss_._Mypair._Myval2._0_4_ = 0;
  local_110.data_._0_4_ = 0x3fc90fdb;
  tdm::projective::rotate<float>
            (&local_e8,(ang<float,tdm::impl::radians>)SUB84(&local_110,0),
             (ang<float,tdm::impl::radians>)SUB84(&local_118,0),
             (ang<float,tdm::impl::radians>)SUB84(local_f8,0),right);
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  lVar6 = 0;
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[6] = 0.0;
  local_a8[7] = 0.0;
  local_a8[8] = 0.0;
  local_a8[9] = 0.0;
  local_a8[10] = 0.0;
  local_a8[0xb] = 0.0;
  local_a8[0xc] = 0.0;
  local_a8[0xd] = 0.0;
  local_a8[0xe] = 0.0;
  local_a8[0xf] = 0.0;
  local_68 = ___xmm_00000000000000003f80000000000000;
  uStack_60 = _UNK_150689508;
  local_58 = ___xmm_000000003f8000000000000000000000;
  uStack_50 = _UNK_150689538;
  local_48 = ___xmm_0000000000000000000000003f800000;
  uStack_40 = _UNK_1506894f8;
  local_38 = ___xmm_3f800000000000000000000000000000;
  uStack_30 = _UNK_150689648;
  do {
    *(undefined4 *)((longlong)local_a8 + lVar6) = *(undefined4 *)((longlong)&local_68 + lVar6);
    *(undefined4 *)((longlong)local_a8 + lVar6 + 4) =
         *(undefined4 *)((longlong)&local_68 + lVar6 + 4);
    *(undefined4 *)((longlong)local_a8 + lVar6 + 8) = *(undefined4 *)((longlong)&uStack_60 + lVar6);
    *(undefined4 *)((longlong)local_a8 + lVar6 + 0xc) =
         *(undefined4 *)((longlong)&uStack_60 + lVar6 + 4);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x40);
  testing::AssertionSuccess(&local_108);
  uVar3._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
  if (local_108.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message(&local_118);
    if (local_108.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_108.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_108.message_._Mypair._Myval2;
      }
    }
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_110,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x4c,pcVar7);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_110);
    plVar1 = (longlong *)
             CONCAT44(local_118.ss_._Mypair._Myval2._4_4_,local_118.ss_._Mypair._Myval2._0_4_);
    if (plVar1 != (longlong *)0x0) {
      puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
      (**(code **)*puVar8)(puVar8,1);
    }
    if (local_108.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_108.message_._Mypair._Myval2);
      ::operator_delete((void *)local_108.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_108.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_108.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_108);
    uVar3._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
    if (local_108.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message(&local_118);
      if (local_108.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)local_108.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
          pcVar7 = *(char **)local_108.message_._Mypair._Myval2;
        }
      }
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_110,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x4c,pcVar7);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper(&local_110);
      plVar1 = (longlong *)
               CONCAT44(local_118.ss_._Mypair._Myval2._4_4_,local_118.ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar8)(puVar8,1);
      }
      if (local_108.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108.message_._Mypair._Myval2);
        ::operator_delete((void *)local_108.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_108.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      dVar2 = __real_3f1a36e2e0000000;
      uVar11 = 0;
      do {
        uVar9 = 0;
        uVar10 = uVar11;
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_108,"m[ri][ci]","expected[ri][ci]","0.0001f",
                     (double)*(float *)((longlong)local_e8.values[0].values + uVar10),
                     (double)*(float *)((longlong)local_a8 + uVar10),dVar2);
          uVar3._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
          if (local_108.success_ == false) {
            pMVar4 = (Message *)testing::Message::Message(&local_118);
            if (local_108.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_108.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_108.message_._Mypair._Myval2;
              }
            }
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_110,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                                ,0x4c,pcVar7);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
            testing::internal::AssertHelper::~AssertHelper(&local_110);
            plVar1 = (longlong *)
                     CONCAT44(local_118.ss_._Mypair._Myval2._4_4_,
                              local_118.ss_._Mypair._Myval2._0_4_);
            if (plVar1 != (longlong *)0x0) {
              puVar8 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
              (**(code **)*puVar8)(puVar8,1);
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
            ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
          }
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 4;
        } while (uVar9 < 4);
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < 0x40);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cf540

void * __thiscall
TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test::_scalar_deleting_destructor_
          (TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cf580

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test>::
CreateTest(TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cf5c0

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_CreateRotationMatrixFromXYZAnglesVector_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cf600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_RotateByXYZAngles_Test::TestBody(TestTransforms_RotateByXYZAngles_Test *this)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  mat<4,4,float> *pmVar5;
  vec<4,float> *pvVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_1a8 [32];
  Message local_168;
  AssertHelper local_160;
  undefined4 local_158 [2];
  AssertionResult local_150;
  vec<4,float> local_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8 [16];
  mat<4,4,float> local_b8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar14 = 0;
  local_138.values[0] = 1.0;
  local_138.values[1] = 0.0;
  local_138.values[2] = 0.0;
  local_138.values[3] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_168.ss_._Mypair._Myval2._0_4_ = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_124 = 0x3f800000;
  local_68 = 0;
  uStack_60 = 0;
  uStack_110 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  uStack_fc = 0x3f800000;
  local_48 = 0;
  uStack_40 = 0;
  local_158[0] = 0x3f060a92;
  local_160.data_._0_4_ = 0x3f490fdb;
  pmVar5 = tdm::projective::rotate<float>
                     (&local_b8,(ang<float,tdm::impl::radians>)SUB84(&local_160,0),
                      (ang<float,tdm::impl::radians>)SUB84(&local_168,0),
                      (ang<float,tdm::impl::radians>)SUB84(local_158,0),right);
  uVar11 = uVar14;
  do {
    pvVar6 = tdm::operator*<4,4,float>
                       ((vec<4,float> *)&local_150,
                        (vec<4,float> *)((longlong)local_138.values + uVar11),pmVar5);
    uVar1 = *(undefined8 *)(pvVar6->values + 2);
    *(undefined8 *)((longlong)&local_78 + uVar11) = *(undefined8 *)pvVar6->values;
    *(undefined8 *)((longlong)&uStack_70 + uVar11) = uVar1;
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  local_138.values[0] = (float)local_78;
  local_138.values[1] = (float)((ulonglong)local_78 >> 0x20);
  local_138.values[2] = (float)uStack_70;
  local_138.values[3] = (float)((ulonglong)uStack_70 >> 0x20);
  uStack_128 = (undefined4)local_68;
  uStack_124 = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_120 = uStack_60;
  local_118 = local_58;
  uStack_110 = (undefined4)uStack_50;
  uStack_10c = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_108 = (undefined4)local_48;
  uStack_104 = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_100 = (undefined4)uStack_40;
  uStack_fc = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  local_f8[8] = 0.0;
  local_f8[9] = 0.0;
  local_f8[10] = 0.0;
  local_f8[0xb] = 0.0;
  local_f8[0xc] = 0.0;
  local_f8[0xd] = 0.0;
  local_f8[0xe] = 0.0;
  local_f8[0xf] = 0.0;
  local_78 = ___xmm_00000000000000003f0000003f5db3d0;
  uStack_70 = _UNK_152895488;
  local_68 = ___xmm_000000003f3504f73f1cc469beb504e6;
  uStack_60 = _UNK_152895498;
  local_58 = ___xmm_000000003f3504f7bf1cc4693eb504e6;
  uStack_50 = _UNK_1528954a8;
  local_48 = ___xmm_3f800000000000000000000000000000;
  uStack_40 = _UNK_150689648;
  uVar11 = uVar14;
  do {
    *(undefined4 *)((longlong)local_f8 + uVar11) = *(undefined4 *)((longlong)&local_78 + uVar11);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 4) =
         *(undefined4 *)((longlong)&local_78 + uVar11 + 4);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 8) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 0xc) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11 + 4);
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  testing::AssertionSuccess(&local_150);
  uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
  if (local_150.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message(&local_168);
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
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_160,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x57,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_160);
    plVar2 = (longlong *)
             CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_150);
    uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message(&local_168);
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
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x57,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_160);
      plVar2 = (longlong *)
               CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_);
      if (plVar2 != (longlong *)0x0) {
        puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
        (**(code **)*puVar10)(puVar10,1);
      }
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      uVar11 = uVar14;
      uVar13 = uVar14;
      dVar3 = __real_3f1a36e2e0000000;
      uVar12 = uVar14;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        dVar3 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  (&local_150,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_138.values + uVar13),
                   (double)*(float *)((longlong)local_f8 + uVar13),dVar3);
        uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message(&local_168);
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
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_160,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                              ,0x57,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_160);
          plVar2 = (longlong *)
                   CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_)
          ;
          if (plVar2 != (longlong *)0x0) {
            puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar10)(puVar10,1);
          }
          if (local_150.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
          return;
        }
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + 4;
      } while ((uVar11 < 4) ||
              (uVar13 = uVar12 + 0x10, uVar11 = uVar14, uVar12 = uVar13, uVar13 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5cfae0

void * __thiscall
TestTransforms_RotateByXYZAngles_Test::_scalar_deleting_destructor_
          (TestTransforms_RotateByXYZAngles_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5cfb20

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateByXYZAngles_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_RotateByXYZAngles_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_RotateByXYZAngles_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5cfb60

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateByXYZAngles_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_RotateByXYZAngles_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_RotateByXYZAngles_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5cfba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_RotateByXYZAnglesVector_Test::TestBody
          (TestTransforms_RotateByXYZAnglesVector_Test *this)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  mat<4,4,float> *pmVar5;
  vec<4,float> *pvVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_1a8 [32];
  Message local_168;
  AssertHelper local_160;
  undefined4 local_158 [2];
  AssertionResult local_150;
  vec<4,float> local_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8 [16];
  mat<4,4,float> local_b8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar14 = 0;
  local_138.values[0] = 1.0;
  local_138.values[1] = 0.0;
  local_138.values[2] = 0.0;
  local_138.values[3] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_168.ss_._Mypair._Myval2._0_4_ = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_124 = 0x3f800000;
  local_68 = 0;
  uStack_60 = 0;
  uStack_110 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  uStack_fc = 0x3f800000;
  local_48 = 0;
  uStack_40 = 0;
  local_158[0] = 0x3f060a92;
  local_160.data_._0_4_ = 0x3f490fdb;
  pmVar5 = tdm::projective::rotate<float>
                     (&local_b8,(ang<float,tdm::impl::radians>)SUB84(&local_160,0),
                      (ang<float,tdm::impl::radians>)SUB84(&local_168,0),
                      (ang<float,tdm::impl::radians>)SUB84(local_158,0),right);
  uVar11 = uVar14;
  do {
    pvVar6 = tdm::operator*<4,4,float>
                       ((vec<4,float> *)&local_150,
                        (vec<4,float> *)((longlong)local_138.values + uVar11),pmVar5);
    uVar1 = *(undefined8 *)(pvVar6->values + 2);
    *(undefined8 *)((longlong)&local_78 + uVar11) = *(undefined8 *)pvVar6->values;
    *(undefined8 *)((longlong)&uStack_70 + uVar11) = uVar1;
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  local_138.values[0] = (float)local_78;
  local_138.values[1] = (float)((ulonglong)local_78 >> 0x20);
  local_138.values[2] = (float)uStack_70;
  local_138.values[3] = (float)((ulonglong)uStack_70 >> 0x20);
  uStack_128 = (undefined4)local_68;
  uStack_124 = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_120 = uStack_60;
  local_118 = local_58;
  uStack_110 = (undefined4)uStack_50;
  uStack_10c = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_108 = (undefined4)local_48;
  uStack_104 = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_100 = (undefined4)uStack_40;
  uStack_fc = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  local_f8[8] = 0.0;
  local_f8[9] = 0.0;
  local_f8[10] = 0.0;
  local_f8[0xb] = 0.0;
  local_f8[0xc] = 0.0;
  local_f8[0xd] = 0.0;
  local_f8[0xe] = 0.0;
  local_f8[0xf] = 0.0;
  local_78 = ___xmm_00000000000000003f0000003f5db3d0;
  uStack_70 = _UNK_152895488;
  local_68 = ___xmm_000000003f3504f73f1cc469beb504e6;
  uStack_60 = _UNK_152895498;
  local_58 = ___xmm_000000003f3504f7bf1cc4693eb504e6;
  uStack_50 = _UNK_1528954a8;
  local_48 = ___xmm_3f800000000000000000000000000000;
  uStack_40 = _UNK_150689648;
  uVar11 = uVar14;
  do {
    *(undefined4 *)((longlong)local_f8 + uVar11) = *(undefined4 *)((longlong)&local_78 + uVar11);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 4) =
         *(undefined4 *)((longlong)&local_78 + uVar11 + 4);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 8) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 0xc) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11 + 4);
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  testing::AssertionSuccess(&local_150);
  uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
  if (local_150.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message(&local_168);
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
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_160,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x62,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_160);
    plVar2 = (longlong *)
             CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_150);
    uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message(&local_168);
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
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x62,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_160);
      plVar2 = (longlong *)
               CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_);
      if (plVar2 != (longlong *)0x0) {
        puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
        (**(code **)*puVar10)(puVar10,1);
      }
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      uVar11 = uVar14;
      uVar13 = uVar14;
      dVar3 = __real_3f1a36e2e0000000;
      uVar12 = uVar14;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        dVar3 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  (&local_150,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_138.values + uVar13),
                   (double)*(float *)((longlong)local_f8 + uVar13),dVar3);
        uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message(&local_168);
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
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_160,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                              ,0x62,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_160);
          plVar2 = (longlong *)
                   CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_)
          ;
          if (plVar2 != (longlong *)0x0) {
            puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar10)(puVar10,1);
          }
          if (local_150.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
          return;
        }
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + 4;
      } while ((uVar11 < 4) ||
              (uVar13 = uVar12 + 0x10, uVar11 = uVar14, uVar12 = uVar13, uVar13 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d0080

void * __thiscall
TestTransforms_RotateByXYZAnglesVector_Test::_scalar_deleting_destructor_
          (TestTransforms_RotateByXYZAnglesVector_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d00c0

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateByXYZAnglesVector_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_RotateByXYZAnglesVector_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_RotateByXYZAnglesVector_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d0100

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateByXYZAnglesVector_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_RotateByXYZAnglesVector_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_RotateByXYZAnglesVector_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5d0140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestTransforms_RotateByXYZAnglesLeftHanded_Test::TestBody
          (TestTransforms_RotateByXYZAnglesLeftHanded_Test *this)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  mat<4,4,float> *pmVar5;
  vec<4,float> *pvVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_1a8 [32];
  Message local_168;
  AssertHelper local_160;
  undefined4 local_158 [2];
  AssertionResult local_150;
  vec<4,float> local_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8 [16];
  mat<4,4,float> local_b8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar14 = 0;
  local_138.values[0] = 1.0;
  local_138.values[1] = 0.0;
  local_138.values[2] = 0.0;
  local_138.values[3] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  local_168.ss_._Mypair._Myval2._0_4_ = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_124 = 0x3f800000;
  local_68 = 0;
  uStack_60 = 0;
  uStack_110 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  uStack_fc = 0x3f800000;
  local_48 = 0;
  uStack_40 = 0;
  local_158[0] = 0x3f060a92;
  local_160.data_._0_4_ = 0x3f490fdb;
  pmVar5 = tdm::projective::rotate<float>
                     (&local_b8,(ang<float,tdm::impl::radians>)SUB84(&local_160,0),
                      (ang<float,tdm::impl::radians>)SUB84(&local_168,0),
                      (ang<float,tdm::impl::radians>)SUB84(local_158,0),left);
  uVar11 = uVar14;
  do {
    pvVar6 = tdm::operator*<4,4,float>
                       ((vec<4,float> *)&local_150,
                        (vec<4,float> *)((longlong)local_138.values + uVar11),pmVar5);
    uVar1 = *(undefined8 *)(pvVar6->values + 2);
    *(undefined8 *)((longlong)&local_78 + uVar11) = *(undefined8 *)pvVar6->values;
    *(undefined8 *)((longlong)&uStack_70 + uVar11) = uVar1;
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  local_138.values[0] = (float)local_78;
  local_138.values[1] = (float)((ulonglong)local_78 >> 0x20);
  local_138.values[2] = (float)uStack_70;
  local_138.values[3] = (float)((ulonglong)uStack_70 >> 0x20);
  uStack_128 = (undefined4)local_68;
  uStack_124 = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_120 = uStack_60;
  local_118 = local_58;
  uStack_110 = (undefined4)uStack_50;
  uStack_10c = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_108 = (undefined4)local_48;
  uStack_104 = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_100 = (undefined4)uStack_40;
  uStack_fc = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  local_f8[8] = 0.0;
  local_f8[9] = 0.0;
  local_f8[10] = 0.0;
  local_f8[0xb] = 0.0;
  local_f8[0xc] = 0.0;
  local_f8[0xd] = 0.0;
  local_f8[0xe] = 0.0;
  local_f8[0xf] = 0.0;
  local_78 = ___xmm_0000000000000000bf0000003f5db3d7;
  uStack_70 = _UNK_1528997c8;
  local_68 = ___xmm_00000000bf3504f43f1cc4723eb504f4;
  uStack_60 = _UNK_152899818;
  local_58 = ___xmm_000000003f3504f43f1cc4723eb504f4;
  uStack_50 = _UNK_1528997e8;
  local_48 = ___xmm_3f800000000000000000000000000000;
  uStack_40 = _UNK_150689648;
  uVar11 = uVar14;
  do {
    *(undefined4 *)((longlong)local_f8 + uVar11) = *(undefined4 *)((longlong)&local_78 + uVar11);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 4) =
         *(undefined4 *)((longlong)&local_78 + uVar11 + 4);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 8) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11);
    *(undefined4 *)((longlong)local_f8 + uVar11 + 0xc) =
         *(undefined4 *)((longlong)&uStack_70 + uVar11 + 4);
    uVar11 = uVar11 + 0x10;
  } while (uVar11 != 0x40);
  testing::AssertionSuccess(&local_150);
  uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
  if (local_150.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message(&local_168);
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
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_160,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                        ,0x6d,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_160);
    plVar2 = (longlong *)
             CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::AssertionSuccess(&local_150);
    uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message(&local_168);
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
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_160,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                          ,0x6d,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_160);
      plVar2 = (longlong *)
               CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_);
      if (plVar2 != (longlong *)0x0) {
        puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
        (**(code **)*puVar10)(puVar10,1);
      }
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      uVar11 = uVar14;
      uVar13 = uVar14;
      dVar3 = __real_3f1a36e2e0000000;
      uVar12 = uVar14;
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        dVar3 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  (&local_150,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_138.values + uVar13),
                   (double)*(float *)((longlong)local_f8 + uVar13),dVar3);
        uVar4._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
        if (local_150.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message(&local_168);
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
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_160,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestTransforms.cpp"
                              ,0x6d,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_160);
          plVar2 = (longlong *)
                   CONCAT44(local_168.ss_._Mypair._Myval2._4_4_,local_168.ss_._Mypair._Myval2._0_4_)
          ;
          if (plVar2 != (longlong *)0x0) {
            puVar10 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
            (**(code **)*puVar10)(puVar10,1);
          }
          if (local_150.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
          return;
        }
        if (local_150.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_150.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + 4;
      } while ((uVar11 < 4) ||
              (uVar13 = uVar12 + 0x10, uVar11 = uVar14, uVar12 = uVar13, uVar13 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5d0620

void * __thiscall
TestTransforms_RotateByXYZAnglesLeftHanded_Test::_scalar_deleting_destructor_
          (TestTransforms_RotateByXYZAnglesLeftHanded_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5d0660

Test * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateByXYZAnglesLeftHanded_Test>::CreateTest
          (TestFactoryImpl<TestTransforms_RotateByXYZAnglesLeftHanded_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestTransforms_RotateByXYZAnglesLeftHanded_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5d06a0

void * __thiscall
testing::internal::TestFactoryImpl<TestTransforms_RotateByXYZAnglesLeftHanded_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestTransforms_RotateByXYZAnglesLeftHanded_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestTransforms_RotateByXYZAnglesLeftHanded_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator*<4,4,float> @ 14c5d06e0

vec<4,float> * __cdecl
tdm::operator*<4,4,float>
          (vec<4,float> *__return_storage_ptr__,vec<4,float> *param_1,mat<4,4,float> *param_2)

{
  vec<4,float> *pvVar1;
  vec<4,float> *pvVar2;
  vec<4,float> *pvVar3;
  vec<4,float> *pvVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  __return_storage_ptr__->values[0] = 0.0;
  __return_storage_ptr__->values[1] = 0.0;
  __return_storage_ptr__->values[2] = 0.0;
  __return_storage_ptr__->values[3] = 0.0;
  lVar5 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  do {
    fVar6 = param_1->values[lVar5];
    if (fVar6 == 0.0) {
      fVar6 = 0.0;
    }
    pvVar1 = (vec<4,float> *)param_2->values[0].values;
    pvVar2 = (vec<4,float> *)param_2->values[0].values;
    pvVar3 = (vec<4,float> *)param_2->values[0].values;
    pvVar4 = (vec<4,float> *)param_2->values[0].values;
    lVar5 = lVar5 + 1;
    param_2 = (mat<4,4,float> *)((longlong)param_2 + 0x10);
    fVar7 = fVar7 + pvVar1->values[0] * fVar6;
    fVar8 = fVar8 + pvVar2->values[1] * fVar6;
    fVar9 = fVar9 + pvVar3->values[2] * fVar6;
    fVar10 = fVar10 + pvVar4->values[3] * fVar6;
    __return_storage_ptr__->values[0] = fVar7;
    __return_storage_ptr__->values[1] = fVar8;
    __return_storage_ptr__->values[2] = fVar9;
    __return_storage_ptr__->values[3] = fVar10;
  } while (lVar5 != 4);
  return __return_storage_ptr__;
}

// rotate<float> @ 14c5d07a0

mat<4,4,float> * __cdecl
tdm::projective::rotate<float>
          (mat<4,4,float> *__return_storage_ptr__,vec<3,float> *param_1,
          ang<float,tdm::impl::radians> param_2,handedness param_3)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  __libm_sse2_sincosf_();
  fVar2 = extraout_XMM0_Da * (float)(int)param_3;
  fVar8 = __real_3f800000 - extraout_XMM0_Db;
  fVar1 = (float)*(undefined8 *)param_1->values;
  fVar7 = (float)((ulonglong)*(undefined8 *)param_1->values >> 0x20);
  fVar6 = param_1->values[2];
  fVar5 = __real_3f800000 / SQRT(fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6);
  fVar7 = fVar5 * fVar7;
  fVar6 = fVar5 * fVar6;
  fVar5 = fVar5 * fVar1;
  fVar3 = fVar7 * fVar5 * fVar8;
  fVar4 = fVar6 * fVar7 * fVar8;
  fVar1 = fVar6 * fVar5 * fVar8;
  mat<4,4,float>::
  mat<4,4,float><float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,0>
            (__return_storage_ptr__,fVar5 * fVar5 * fVar8 + extraout_XMM0_Db,fVar3 - fVar6 * fVar2,
             fVar1 + fVar7 * fVar2,0.0,fVar3 + fVar6 * fVar2,
             fVar7 * fVar7 * fVar8 + extraout_XMM0_Db,fVar4 - fVar5 * fVar2,0.0,
             fVar1 - fVar7 * fVar2,fVar4 + fVar5 * fVar2,fVar6 * fVar6 * fVar8 + extraout_XMM0_Db,
             0.0,0.0,0.0,0.0,__real_3f800000);
  return __return_storage_ptr__;
}

// rotate<float> @ 14c5d09e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

mat<4,4,float> * __cdecl
tdm::projective::rotate<float>
          (mat<4,4,float> *__return_storage_ptr__,ang<float,tdm::impl::radians> param_1,
          ang<float,tdm::impl::radians> param_2,ang<float,tdm::impl::radians> param_3,
          handedness param_4)

{
  undefined8 uVar1;
  vec<4,float> *pvVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Dc;
  float fVar3;
  undefined1 auStack_198 [32];
  vec<4,float> local_178;
  mat<4,4,float> local_168;
  undefined1 local_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  vec<4,float> vStack_f8;
  mat<4,4,float> local_e8;
  vec<4,float> local_a8;
  vec<4,float> local_98;
  vec<4,float> local_88;
  vec<4,float> local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_198;
  __libm_sse2_sincosf4_();
  fVar3 = (float)(int)param_4;
  __libm_sse2_sincosf_();
  local_e8.values[0].values[1] = extraout_XMM0_Da_00 * fVar3;
  local_128._4_4_ = 0.0;
  local_128._8_4_ = 0.0;
  local_168.values[0].values[2] =
       (float)((uint)(extraout_XMM0_Dc * fVar3) ^ __xmm_80000000800000008000000080000000);
  local_e8.values[1].values[0] =
       (float)((uint)local_e8.values[0].values[1] ^ __xmm_80000000800000008000000080000000);
  auStack_108._4_4_ = (uint)(extraout_XMM0_Da * fVar3) ^ __xmm_80000000800000008000000080000000;
  local_a8.values[0] = 0.0;
  local_a8.values[1] = 0.0;
  local_a8.values[2] = 0.0;
  local_a8.values[3] = 0.0;
  stack0xfffffffffffffee4 = 0;
  local_98.values[0] = 0.0;
  local_98.values[1] = 0.0;
  local_98.values[2] = 0.0;
  local_98.values[3] = 0.0;
  stack0xfffffffffffffef4 = 0;
  local_88.values[0] = 0.0;
  local_88.values[1] = 0.0;
  local_88.values[2] = 0.0;
  local_88.values[3] = 0.0;
  stack0xffffffffffffff04 = 0;
  local_78.values[0] = 0.0;
  local_78.values[1] = 0.0;
  local_78.values[2] = 0.0;
  local_78.values[3] = 0.0;
  vStack_f8.values[1] = 0.0;
  vStack_f8.values[2] = 0.0;
  local_128._0_4_ = 1.0;
  vStack_f8.values[3] = 1.0;
  local_168.values[0].values[1] = 0.0;
  local_168.values[0].values[3] = 0.0;
  local_168.values[1].values[0] = 0.0;
  local_168.values[1].values[2] = 0.0;
  local_168.values[1].values[3] = 0.0;
  local_168.values[2].values[1] = 0.0;
  local_168.values[2].values[3] = 0.0;
  local_168.values[3].values[0] = 0.0;
  local_168.values[3].values[1] = 0.0;
  local_168.values[3].values[2] = 0.0;
  local_168.values[1].values[1] = 1.0;
  local_168.values[3].values[3] = 1.0;
  local_e8.values[0].values[2] = 0.0;
  local_e8.values[0].values[3] = 0.0;
  local_e8.values[1].values[2] = 0.0;
  local_e8.values[1].values[3] = 0.0;
  local_e8.values[2].values[0] = 0.0;
  local_e8.values[2].values[1] = 0.0;
  local_e8.values[2].values[3] = 0.0;
  local_e8.values[3].values[0] = 0.0;
  local_e8.values[3].values[1] = 0.0;
  local_e8.values[3].values[2] = 0.0;
  local_e8.values[2].values[2] = 1.0;
  local_e8.values[3].values[3] = 1.0;
  local_168.values[2].values[0] = extraout_XMM0_Dc * fVar3;
  auStack_118._8_4_ = extraout_XMM0_Da * fVar3;
  pvVar2 = operator*<4,4,float>(&local_178,(vec<4,float> *)local_128,&local_168);
  local_a8.values._0_8_ = *(undefined8 *)pvVar2->values;
  local_a8.values._8_8_ = *(undefined8 *)(pvVar2->values + 2);
  pvVar2 = operator*<4,4,float>(&local_178,(vec<4,float> *)auStack_118,&local_168);
  local_98.values._0_8_ = *(undefined8 *)pvVar2->values;
  local_98.values._8_8_ = *(undefined8 *)(pvVar2->values + 2);
  pvVar2 = operator*<4,4,float>(&local_178,(vec<4,float> *)auStack_108,&local_168);
  local_88.values._0_8_ = *(undefined8 *)pvVar2->values;
  local_88.values._8_8_ = *(undefined8 *)(pvVar2->values + 2);
  pvVar2 = operator*<4,4,float>(&local_178,&vStack_f8,&local_168);
  local_78.values._0_8_ = *(undefined8 *)pvVar2->values;
  local_78.values._8_8_ = *(undefined8 *)(pvVar2->values + 2);
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
  pvVar2 = operator*<4,4,float>(&local_178,&local_a8,&local_e8);
  uVar1 = *(undefined8 *)(pvVar2->values + 2);
  *(undefined8 *)__return_storage_ptr__->values[0].values = *(undefined8 *)pvVar2->values;
  *(undefined8 *)(__return_storage_ptr__->values[0].values + 2) = uVar1;
  pvVar2 = operator*<4,4,float>(&local_178,&local_98,&local_e8);
  uVar1 = *(undefined8 *)(pvVar2->values + 2);
  *(undefined8 *)__return_storage_ptr__->values[1].values = *(undefined8 *)pvVar2->values;
  *(undefined8 *)(__return_storage_ptr__->values[1].values + 2) = uVar1;
  pvVar2 = operator*<4,4,float>(&local_178,&local_88,&local_e8);
  uVar1 = *(undefined8 *)(pvVar2->values + 2);
  *(undefined8 *)__return_storage_ptr__->values[2].values = *(undefined8 *)pvVar2->values;
  *(undefined8 *)(__return_storage_ptr__->values[2].values + 2) = uVar1;
  pvVar2 = operator*<4,4,float>(&local_178,&local_78,&local_e8);
  uVar1 = *(undefined8 *)(pvVar2->values + 2);
  *(undefined8 *)__return_storage_ptr__->values[3].values = *(undefined8 *)pvVar2->values;
  *(undefined8 *)(__return_storage_ptr__->values[3].values + 2) = uVar1;
  return __return_storage_ptr__;
}

