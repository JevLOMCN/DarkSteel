// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 33

// test_info_'' @ 141322470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODMappingTest_SetLODRangeExact_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODMappingTest_SetLODRangeExact_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                      ,0x5a);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                               ,0x5a);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined4 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  *(undefined2 *)(pcVar5 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar5[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar5 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar5 + 0x74);
  *(local_58._Ptr + 0x76) = pcVar5[0x76];
  local_38 = 0x5a;
  LODMappingTest_SetLODRangeExact_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODMappingTest","SetLODRangeExact",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<LODMappingTest>::dummy_
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141322680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODMappingTest_SetLODRangeMaxMin_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODMappingTest_SetLODRangeMaxMin_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                      ,0x4b);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                               ,0x4b);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined4 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  *(undefined2 *)(pcVar5 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar5[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar5 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar5 + 0x74);
  *(local_58._Ptr + 0x76) = pcVar5[0x76];
  local_38 = 0x4b;
  LODMappingTest_SetLODRangeMaxMin_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODMappingTest","SetLODRangeMaxMin",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<LODMappingTest>::dummy_
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141322890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODMappingTest_SetLODRangeMax_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODMappingTest_SetLODRangeMax_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                      ,0x2d);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                               ,0x2d);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined4 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  *(undefined2 *)(pcVar5 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar5[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar5 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar5 + 0x74);
  *(local_58._Ptr + 0x76) = pcVar5[0x76];
  local_38 = 0x2d;
  LODMappingTest_SetLODRangeMax_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODMappingTest","SetLODRangeMax",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<LODMappingTest>::dummy_
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141322aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'LODMappingTest_SetLODRangeMin_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VLODMappingTest_SetLODRangeMin_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                      ,0x3c);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                               ,0x3c);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x76;
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
  *(undefined4 *)(pcVar5 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  *(undefined2 *)(pcVar5 + 0x74) = ::s_C__Workspace_UnrealEngine_Engin._116_2_;
  pcVar5[0x76] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000076;
  uStack_40 = _UNK_15287bdb8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar5 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar5 + 0x74);
  *(local_58._Ptr + 0x76) = pcVar5[0x76];
  local_38 = 0x3c;
  LODMappingTest_SetLODRangeMin_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("LODMappingTest","SetLODRangeMin",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<LODMappingTest>::dummy_
                  ,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// SetUp @ 14c337200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall _anon_56FB15D5::LODMappingTest::SetUp(LODMappingTest *this)

{
  ushort uVar1;
  undefined2 uVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  LODMapping *this_00;
  int *piVar7;
  ulonglong uVar8;
  undefined1 auStack_178 [32];
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_158;
  PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
  local_138 [2];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_128;
  ushort local_118 [8];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_b8;
  DefaultMemoryResource *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  undefined2 *puStack_80;
  DefaultMemoryResource *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  undefined2 *puStack_60;
  DefaultMemoryResource *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *puStack_40;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> local_38 [2];
  
  local_38[0] = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
                (__security_cookie.value ^ (ulonglong)auStack_178);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_138[0] = (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr;
  if ((*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_118[4] = 1;
  local_118[5] = 2;
  local_118[6] = 3;
  local_118[7] = 4;
  local_b8._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_b8._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,8,8);
  puVar4 = local_118 + 4;
  local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Myfirst + 4;
  local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Myfirst;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *local_b8._Mypair._Myval2._Mylast = uVar1;
    local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
  } while (puVar4 != (ushort *)&local_108);
  if ((*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_e0 = 0x20001;
  local_dc = 0x40003;
  local_d8 = 0x60005;
  local_d4 = 0x80007;
  local_d0 = 0xa0009;
  local_cc = 0xc000b;
  local_c8 = 0xe000d;
  local_c4 = 0x10000f;
  local_98 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_90 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x20,8);
  puVar5 = &local_e0;
  puStack_80 = local_90 + 0x10;
  local_88 = local_90;
  do {
    uVar2 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_88 = uVar2;
    local_88 = local_88 + 1;
  } while (puVar5 != local_c0);
  if ((*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_108 = 0x20001;
  local_104 = 0x40003;
  local_100 = 0x60005;
  local_fc = 0x80007;
  local_78 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_70 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x10,8);
  puVar5 = &local_108;
  puStack_60 = local_70 + 8;
  local_68 = local_70;
  do {
    uVar2 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_68 = uVar2;
    local_68 = local_68 + 1;
  } while (puVar5 != &local_f8);
  if ((*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_f8 = 0x20001;
  local_f4 = 0x40003;
  local_f0 = 0x60005;
  local_ec = 0x80007;
  local_e8 = 0xa0009;
  local_e4 = 0xc000b;
  local_58 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  local_50 = (undefined2 *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,0x18,8);
  puVar5 = &local_f8;
  puStack_40 = local_50 + 0xc;
  local_48 = local_50;
  do {
    uVar2 = *(undefined2 *)puVar5;
    puVar5 = (undefined4 *)((longlong)puVar5 + 2);
    *local_48 = uVar2;
    local_48 = local_48 + 1;
  } while (puVar5 != &local_e0);
  local_128._First = &local_b8;
  local_128._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_38;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_158,&local_128,local_138);
  uVar6 = 0;
  if (local_50 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))
              (local_58,local_50,((longlong)puStack_40 - (longlong)local_50 >> 1) * 2,8);
    local_50 = (undefined2 *)0x0;
    local_48 = (undefined2 *)0x0;
    puStack_40 = (undefined2 *)0x0;
  }
  if (local_70 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_78 + 0x10))
              (local_78,local_70,((longlong)puStack_60 - (longlong)local_70 >> 1) * 2,8);
    local_70 = (undefined2 *)0x0;
    local_68 = (undefined2 *)0x0;
    puStack_60 = (undefined2 *)0x0;
  }
  if (local_90 != (undefined2 *)0x0) {
    (**(code **)((longlong)*local_98 + 0x10))
              (local_98,local_90,((longlong)puStack_80 - (longlong)local_90 >> 1) * 2,8);
    local_90 = (undefined2 *)0x0;
    local_88 = (undefined2 *)0x0;
    puStack_80 = (undefined2 *)0x0;
  }
  if (local_b8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_b8._Mypair._Myval1 + 0x10))
              (local_b8._Mypair._Myval1,local_b8._Mypair._Myval2._Myfirst,
               ((longlong)local_b8._Mypair._Myval2._Myend -
                (longlong)local_b8._Mypair._Myval2._Myfirst >> 1) * 2,8);
  }
  if ((*piVar7 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_118[0] = 1;
  local_118[1] = 3;
  local_118[2] = 2;
  local_118[3] = 0;
  lVar3 = (**(code **)((longlong)
                       `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr + 8))
                    (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                      ::__l2::dmr,8,8);
  puVar4 = local_118;
  do {
    *(ushort *)((longlong)puVar4 + (lVar3 - (longlong)local_118)) = *puVar4;
    puVar4 = puVar4 + 1;
  } while (puVar4 != local_118 + 4);
  this_00 = &this->mapping;
  dna::LODMapping::setLODCount(this_00,4);
  uVar8 = uVar6;
  if ((longlong)local_158._Mypair._Myval2._Mylast - (longlong)local_158._Mypair._Myval2._Myfirst >>
      5 != 0) {
    do {
      puVar4 = *(ushort **)
                ((longlong)&((local_158._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myfirst + uVar8
                );
      dna::LODMapping::addIndices
                (this_00,(ushort)uVar6,puVar4,
                 (ushort)(*(longlong *)
                           ((longlong)
                            &((local_158._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Mylast + uVar8
                           ) - (longlong)puVar4 >> 1));
      dna::LODMapping::associateLODWithIndices(this_00,(ushort)uVar6,*(ushort *)(lVar3 + uVar6 * 2))
      ;
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 0x20;
    } while (uVar6 < (ulonglong)
                     ((longlong)local_158._Mypair._Myval2._Mylast -
                      (longlong)local_158._Mypair._Myval2._Myfirst >> 5));
  }
  if (lVar3 != 0) {
    (**(code **)((longlong)
                 `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,lVar3,8,8);
  }
  if (local_158._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::
    _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
              (local_158._Mypair._Myval2._Myfirst,local_158._Mypair._Myval2._Mylast,
               (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                *)&local_158);
    (**(code **)(*(longlong *)local_158._Mypair._Myval1 + 0x10))
              (local_158._Mypair._Myval1,local_158._Mypair._Myval2._Myfirst,
               (longlong)local_158._Mypair._Myval2._Myend -
               (longlong)local_158._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c337800

void * __thiscall
_anon_56FB15D5::LODMappingTest::_scalar_deleting_destructor_(LODMappingTest *this,uint param_1)

{
  dna::LODMapping::~LODMapping(&this->mapping);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->memRes);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// TestBody @ 14c337850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
LODMappingTest_SetLODRangeMax_Test::TestBody(LODMappingTest_SetLODRangeMax_Test *this)

{
  undefined1 *this_00;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  undefined2 uVar2;
  ushort *puVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar4;
  ushort uVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  char *pcVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int *piVar12;
  ushort **ppuVar13;
  undefined1 auStackY_148 [32];
  ushort local_118 [4];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_110;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_108;
  AssertHelper local_f8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_f0;
  LODConstraint local_d0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_a8;
  DefaultMemoryResource *local_88;
  undefined2 *local_80;
  undefined2 *local_78;
  undefined2 *puStack_70;
  ArrayView<unsigned_short_const_> local_68;
  ArrayView<unsigned_short_const_> local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  puVar10 = &local_48;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this_00 = &this->field_0x18;
  local_110._Mypair._Myval2._0_4_ = 4;
  local_118[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
  if (local_118[0] == 4) {
    testing::AssertionSuccess((AssertionResult *)&local_108);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
              ((AssertionResult *)&local_108,"mapping.getLODCount()","4u",local_118,
               (uint *)&local_110);
  }
  pvVar1 = local_108._Last;
  if ((char)local_108._First == '\0') {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_110);
    if ((ArrayView<unsigned_short_const_> *)local_108._Last ==
        (ArrayView<unsigned_short_const_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_108._Last;
      if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_108._Last + 0x10))->sz) {
        pcVar8 = *(char **)&(local_108._Last)->_Mypair;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_f8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                        ,0x2e,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper(&local_f8);
    if (local_110._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_110._Mypair._Myval2 + 4) +
                (longlong)local_110._Mypair._Myval2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if ((ArrayView<unsigned_short_const_> *)local_108._Last !=
        (ArrayView<unsigned_short_const_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_108._Last)
      ;
      ::operator_delete(local_108._Last,0x20);
    }
  }
  else {
    if ((ArrayView<unsigned_short_const_> *)local_108._Last !=
        (ArrayView<unsigned_short_const_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_108._Last)
      ;
      ::operator_delete(pvVar1,0x20);
    }
    dna::LODConstraint::LODConstraint(&local_d0,2,3,(MemoryResource *)&this->field_0x10);
    dna::LODMapping::discardLODs((LODMapping *)this_00,&local_d0);
    local_110._Mypair._Myval2._0_4_ = 2;
    local_118[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
    if (local_118[0] == 2) {
      testing::AssertionSuccess((AssertionResult *)&local_108);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
                ((AssertionResult *)&local_108,"mapping.getLODCount()","2u",local_118,
                 (uint *)&local_110);
    }
    if ((char)local_108._First == '\0') {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_110);
      if ((ArrayView<unsigned_short_const_> *)local_108._Last ==
          (ArrayView<unsigned_short_const_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_108._Last;
        if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_108._Last + 0x10))->sz) {
          pcVar8 = *(char **)&(local_108._Last)->_Mypair;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_f8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                          ,0x31,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper(&local_f8);
      if (local_110._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)
                   *(int *)((longlong)*(DefaultMemoryResource *)local_110._Mypair._Myval2 + 4) +
                  (longlong)local_110._Mypair._Myval2);
        (**(code **)*puVar10)(puVar10,1);
      }
      pvVar1 = local_108._Last;
      pvVar4 = local_f0._Mypair._Myval2._Myfirst;
      if ((ArrayView<unsigned_short_const_> *)local_108._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108._Last);
        ::operator_delete(pvVar1,0x20);
        pvVar4 = local_f0._Mypair._Myval2._Myfirst;
      }
    }
    else {
      if ((ArrayView<unsigned_short_const_> *)local_108._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_108._Last);
        ::operator_delete(local_108._Last,0x20);
      }
      piVar12 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar12 <
           `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`pma::impl::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_110._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
      if ((*piVar12 <
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
      local_40._0_4_ = 0x20001;
      local_40._4_4_ = 0x40003;
      local_38 = 0x60005;
      local_34 = 0x80007;
      local_a8._Mypair._Myval1 =
           (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
           &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
      local_a8._Mypair._Myval2._Myfirst =
           (ushort *)
           (**(code **)((longlong)
                        `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x10,8);
      puVar9 = &local_40;
      local_a8._Mypair._Myval2._Myend = local_a8._Mypair._Myval2._Myfirst + 8;
      local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Myfirst;
      do {
        *local_a8._Mypair._Myval2._Mylast = (ushort)*puVar9;
        puVar9 = (ulonglong *)((longlong)puVar9 + 2);
        local_a8._Mypair._Myval2._Mylast = local_a8._Mypair._Myval2._Mylast + 1;
      } while (puVar9 != &local_30);
      if ((*piVar12 <
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
      local_48._0_4_ = 0x20001;
      local_48._4_4_ = 0x40003;
      local_88 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
      local_80 = (undefined2 *)
                 (**(code **)((longlong)
                              `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                              ::__l2::dmr + 8))
                           (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr,8,8);
      puStack_70 = local_80 + 4;
      local_78 = local_80;
      do {
        uVar2 = *(undefined2 *)puVar10;
        puVar10 = (undefined8 *)((longlong)puVar10 + 2);
        *local_78 = uVar2;
        local_78 = local_78 + 1;
      } while (puVar10 != &local_40);
      local_108._First = &local_a8;
      local_108._Last =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)&local_68;
      std::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
      ::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (&local_f0,&local_108,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_110);
      if (local_80 != (undefined2 *)0x0) {
        (**(code **)((longlong)*local_88 + 0x10))
                  (local_88,local_80,((longlong)puStack_70 - (longlong)local_80 >> 1) * 2,8);
        local_80 = (undefined2 *)0x0;
        local_78 = (undefined2 *)0x0;
        puStack_70 = (undefined2 *)0x0;
      }
      if (local_a8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)((longlong)*(DefaultMemoryResource *)local_a8._Mypair._Myval1 + 0x10))
                  (local_a8._Mypair._Myval1,local_a8._Mypair._Myval2._Myfirst,
                   ((longlong)local_a8._Mypair._Myval2._Myend -
                    (longlong)local_a8._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
      uVar11 = 0;
      uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
      if (uVar5 != 0) {
        do {
          dna::LODMapping::getIndices((LODMapping *)this_00,&local_58,uVar11);
          local_68.ptr = local_f0._Mypair._Myval2._Myfirst[uVar11]._Mypair._Myval2._Myfirst;
          local_68.sz = (longlong)local_f0._Mypair._Myval2._Myfirst[uVar11]._Mypair._Myval2._Mylast
                        - (longlong)local_68.ptr >> 1;
          testing::internal::
          CmpHelperEQ<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                    ((AssertionResult *)&local_108,"resultIndices","expectedIndices",&local_58,
                     &local_68);
          pvVar1 = local_108._Last;
          if ((char)local_108._First == '\0') {
            pMVar6 = (Message *)testing::Message::Message((Message *)&local_f8);
            if ((ArrayView<unsigned_short_const_> *)local_108._Last ==
                (ArrayView<unsigned_short_const_> *)0x0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)local_108._Last;
              if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_108._Last + 0x10))->sz
                 ) {
                pcVar8 = *(char **)&(local_108._Last)->_Mypair;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_110,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                                ,0x39,pcVar8);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_110);
            if (local_f8.data_ != (AssertHelperData *)0x0) {
              puVar10 = (undefined8 *)
                        ((longlong)&(local_f8.data_)->type +
                        (longlong)*(int *)(*(longlong *)local_f8.data_ + 4));
              (**(code **)*puVar10)(puVar10,1);
            }
            pvVar1 = local_108._Last;
            if ((ArrayView<unsigned_short_const_> *)local_108._Last !=
                (ArrayView<unsigned_short_const_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_108._Last);
              ::operator_delete(pvVar1,0x20);
            }
            pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)0x0;
            if (local_f0._Mypair._Myval2._Myfirst ==
                (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)0x0) goto joined_r0x00014c337e2b;
            if (local_f0._Mypair._Myval2._Myfirst != local_f0._Mypair._Myval2._Mylast) {
              ppuVar13 = &((local_f0._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
              do {
                puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->
                         _Myfirst;
                if (puVar3 != (ushort *)0x0) {
                  (**(code **)(*(longlong *)ppuVar13[-3] + 0x10))
                            (ppuVar13[-3],puVar3,((longlong)*ppuVar13 - (longlong)puVar3 >> 1) * 2,8
                            );
                  ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->_Myfirst =
                       (ushort *)0x0;
                  ppuVar13[-1] = (ushort *)0x0;
                  *ppuVar13 = (ushort *)0x0;
                }
                pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                          *)(ppuVar13 + 1);
                ppuVar13 = ppuVar13 + 4;
              } while (pvVar1 != local_f0._Mypair._Myval2._Mylast);
            }
            goto LAB_14c337c0a;
          }
          if ((ArrayView<unsigned_short_const_> *)local_108._Last !=
              (ArrayView<unsigned_short_const_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_108._Last);
            ::operator_delete(pvVar1,0x20);
          }
          uVar11 = uVar11 + 1;
          uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
        } while (uVar11 < uVar5);
      }
      pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)0x0;
      if (local_f0._Mypair._Myval2._Myfirst !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )0x0) {
        std::
        _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  (local_f0._Mypair._Myval2._Myfirst,local_f0._Mypair._Myval2._Mylast,
                   (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                    *)&local_f0);
LAB_14c337c0a:
        (**(code **)(*(longlong *)local_f0._Mypair._Myval1 + 0x10))
                  (local_f0._Mypair._Myval1,local_f0._Mypair._Myval2._Myfirst,
                   (longlong)local_f0._Mypair._Myval2._Myend -
                   (longlong)local_f0._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
        local_f0._Mypair._Myval2._Myend =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_f0._Mypair._Myval2._Myfirst =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_f0._Mypair._Myval2._Mylast =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        pvVar4 = local_f0._Mypair._Myval2._Myfirst;
      }
    }
joined_r0x00014c337e2b:
    local_f0._Mypair._Myval2._Myfirst = pvVar4;
    if (local_d0.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_d0.lods._Mypair._Myval1 + 0x10))
                (local_d0.lods._Mypair._Myval1,local_d0.lods._Mypair._Myval2._Myfirst,
                 ((longlong)local_d0.lods._Mypair._Myval2._Myend -
                  (longlong)local_d0.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c337f90

void * __thiscall
LODMappingTest_SetLODRangeMax_Test::_scalar_deleting_destructor_
          (LODMappingTest_SetLODRangeMax_Test *this,uint param_1)

{
  dna::LODMapping::~LODMapping((LODMapping *)&this->field_0x18);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// CreateTest @ 14c337fe0

Test * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeMax_Test>::CreateTest
          (TestFactoryImpl<LODMappingTest_SetLODRangeMax_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&LODMappingTest::_vftable_;
    this_00[1]._padding_ = (longlong)&___7DefaultMemoryResource_pma__6B_;
    dna::LODMapping::LODMapping
              ((LODMapping *)&this_00[1].gtest_flag_saver_,(MemoryResource *)(this_00 + 1));
    this_00->_padding_ = (longlong)&___7LODMappingTest_SetLODRangeMax_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c338040

void * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeMax_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODMappingTest_SetLODRangeMax_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODMappingTest_SetLODRangeMax_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c338080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
LODMappingTest_SetLODRangeMin_Test::TestBody(LODMappingTest_SetLODRangeMin_Test *this)

{
  undefined1 *this_00;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  undefined2 uVar2;
  ushort *puVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar4;
  ushort uVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  char *pcVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int *piVar12;
  ushort **ppuVar13;
  undefined1 auStackY_168 [32];
  ushort local_138 [4];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_130;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_128;
  AssertHelper local_118;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_110;
  LODConstraint local_f0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_c8;
  DefaultMemoryResource *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined2 *puStack_90;
  ArrayView<unsigned_short_const_> local_88;
  ArrayView<unsigned_short_const_> local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  puVar10 = &local_68;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = &this->field_0x18;
  local_130._Mypair._Myval2._0_4_ = 4;
  local_138[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
  if (local_138[0] == 4) {
    testing::AssertionSuccess((AssertionResult *)&local_128);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
              ((AssertionResult *)&local_128,"mapping.getLODCount()","4u",local_138,
               (uint *)&local_130);
  }
  pvVar1 = local_128._Last;
  if ((char)local_128._First == '\0') {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_130);
    if ((ArrayView<unsigned_short_const_> *)local_128._Last ==
        (ArrayView<unsigned_short_const_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_128._Last;
      if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_128._Last + 0x10))->sz) {
        pcVar8 = *(char **)&(local_128._Last)->_Mypair;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_118,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                        ,0x3d,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper(&local_118);
    if (local_130._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_130._Mypair._Myval2 + 4) +
                (longlong)local_130._Mypair._Myval2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if ((ArrayView<unsigned_short_const_> *)local_128._Last !=
        (ArrayView<unsigned_short_const_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_128._Last)
      ;
      ::operator_delete(local_128._Last,0x20);
    }
  }
  else {
    if ((ArrayView<unsigned_short_const_> *)local_128._Last !=
        (ArrayView<unsigned_short_const_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_128._Last)
      ;
      ::operator_delete(pvVar1,0x20);
    }
    dna::LODConstraint::LODConstraint(&local_f0,0,1,(MemoryResource *)&this->field_0x10);
    dna::LODMapping::discardLODs((LODMapping *)this_00,&local_f0);
    local_130._Mypair._Myval2._0_4_ = 2;
    local_138[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
    if (local_138[0] == 2) {
      testing::AssertionSuccess((AssertionResult *)&local_128);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
                ((AssertionResult *)&local_128,"mapping.getLODCount()","2u",local_138,
                 (uint *)&local_130);
    }
    if ((char)local_128._First == '\0') {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_130);
      if ((ArrayView<unsigned_short_const_> *)local_128._Last ==
          (ArrayView<unsigned_short_const_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_128._Last;
        if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_128._Last + 0x10))->sz) {
          pcVar8 = *(char **)&(local_128._Last)->_Mypair;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_118,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                          ,0x40,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper(&local_118);
      if (local_130._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)
                   *(int *)((longlong)*(DefaultMemoryResource *)local_130._Mypair._Myval2 + 4) +
                  (longlong)local_130._Mypair._Myval2);
        (**(code **)*puVar10)(puVar10,1);
      }
      pvVar1 = local_128._Last;
      pvVar4 = local_110._Mypair._Myval2._Myfirst;
      if ((ArrayView<unsigned_short_const_> *)local_128._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_128._Last);
        ::operator_delete(pvVar1,0x20);
        pvVar4 = local_110._Mypair._Myval2._Myfirst;
      }
    }
    else {
      if ((ArrayView<unsigned_short_const_> *)local_128._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_128._Last);
        ::operator_delete(local_128._Last,0x20);
      }
      piVar12 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar12 <
           `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`pma::impl::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_130._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
      if ((*piVar12 <
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
      local_50._0_4_ = 0x20001;
      local_50._4_4_ = 0x40003;
      local_48 = 0x60005;
      local_44 = 0x80007;
      local_40 = 0xa0009;
      local_3c = 0xc000b;
      local_38 = 0xe000d;
      local_34 = 0x10000f;
      local_c8._Mypair._Myval1 =
           (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
           &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
      local_c8._Mypair._Myval2._Myfirst =
           (ushort *)
           (**(code **)((longlong)
                        `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x20,8);
      puVar9 = &local_50;
      local_c8._Mypair._Myval2._Myend = local_c8._Mypair._Myval2._Myfirst + 0x10;
      local_c8._Mypair._Myval2._Mylast = local_c8._Mypair._Myval2._Myfirst;
      do {
        *local_c8._Mypair._Myval2._Mylast = (ushort)*puVar9;
        puVar9 = (ulonglong *)((longlong)puVar9 + 2);
        local_c8._Mypair._Myval2._Mylast = local_c8._Mypair._Myval2._Mylast + 1;
      } while (puVar9 != &local_30);
      if ((*piVar12 <
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
      local_68._0_4_ = 0x20001;
      local_68._4_4_ = 0x40003;
      local_60 = 0x60005;
      local_5c = 0x80007;
      local_58 = 0xa0009;
      local_54 = 0xc000b;
      local_a8 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
      local_a0 = (undefined2 *)
                 (**(code **)((longlong)
                              `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                              ::__l2::dmr + 8))
                           (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr,0x18,8);
      puStack_90 = local_a0 + 0xc;
      local_98 = local_a0;
      do {
        uVar2 = *(undefined2 *)puVar10;
        puVar10 = (undefined8 *)((longlong)puVar10 + 2);
        *local_98 = uVar2;
        local_98 = local_98 + 1;
      } while (puVar10 != &local_50);
      local_128._First = &local_c8;
      local_128._Last =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)&local_88;
      std::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
      ::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (&local_110,&local_128,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_130);
      if (local_a0 != (undefined2 *)0x0) {
        (**(code **)((longlong)*local_a8 + 0x10))
                  (local_a8,local_a0,((longlong)puStack_90 - (longlong)local_a0 >> 1) * 2,8);
        local_a0 = (undefined2 *)0x0;
        local_98 = (undefined2 *)0x0;
        puStack_90 = (undefined2 *)0x0;
      }
      if (local_c8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)((longlong)*(DefaultMemoryResource *)local_c8._Mypair._Myval1 + 0x10))
                  (local_c8._Mypair._Myval1,local_c8._Mypair._Myval2._Myfirst,
                   ((longlong)local_c8._Mypair._Myval2._Myend -
                    (longlong)local_c8._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
      uVar11 = 0;
      uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
      if (uVar5 != 0) {
        do {
          dna::LODMapping::getIndices((LODMapping *)this_00,&local_78,uVar11);
          local_88.ptr = local_110._Mypair._Myval2._Myfirst[uVar11]._Mypair._Myval2._Myfirst;
          local_88.sz = (longlong)local_110._Mypair._Myval2._Myfirst[uVar11]._Mypair._Myval2._Mylast
                        - (longlong)local_88.ptr >> 1;
          testing::internal::
          CmpHelperEQ<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                    ((AssertionResult *)&local_128,"resultIndices","expectedIndices",&local_78,
                     &local_88);
          pvVar1 = local_128._Last;
          if ((char)local_128._First == '\0') {
            pMVar6 = (Message *)testing::Message::Message((Message *)&local_118);
            if ((ArrayView<unsigned_short_const_> *)local_128._Last ==
                (ArrayView<unsigned_short_const_> *)0x0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)local_128._Last;
              if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_128._Last + 0x10))->sz
                 ) {
                pcVar8 = *(char **)&(local_128._Last)->_Mypair;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                                ,0x48,pcVar8);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_130);
            if (local_118.data_ != (AssertHelperData *)0x0) {
              puVar10 = (undefined8 *)
                        ((longlong)&(local_118.data_)->type +
                        (longlong)*(int *)(*(longlong *)local_118.data_ + 4));
              (**(code **)*puVar10)(puVar10,1);
            }
            pvVar1 = local_128._Last;
            if ((ArrayView<unsigned_short_const_> *)local_128._Last !=
                (ArrayView<unsigned_short_const_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_128._Last);
              ::operator_delete(pvVar1,0x20);
            }
            pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)0x0;
            if (local_110._Mypair._Myval2._Myfirst ==
                (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)0x0) goto joined_r0x00014c338699;
            if (local_110._Mypair._Myval2._Myfirst != local_110._Mypair._Myval2._Mylast) {
              ppuVar13 = &((local_110._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
              do {
                puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->
                         _Myfirst;
                if (puVar3 != (ushort *)0x0) {
                  (**(code **)(*(longlong *)ppuVar13[-3] + 0x10))
                            (ppuVar13[-3],puVar3,((longlong)*ppuVar13 - (longlong)puVar3 >> 1) * 2,8
                            );
                  ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->_Myfirst =
                       (ushort *)0x0;
                  ppuVar13[-1] = (ushort *)0x0;
                  *ppuVar13 = (ushort *)0x0;
                }
                pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                          *)(ppuVar13 + 1);
                ppuVar13 = ppuVar13 + 4;
              } while (pvVar1 != local_110._Mypair._Myval2._Mylast);
            }
            goto LAB_14c33847a;
          }
          if ((ArrayView<unsigned_short_const_> *)local_128._Last !=
              (ArrayView<unsigned_short_const_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_128._Last);
            ::operator_delete(pvVar1,0x20);
          }
          uVar11 = uVar11 + 1;
          uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
        } while (uVar11 < uVar5);
      }
      pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)0x0;
      if (local_110._Mypair._Myval2._Myfirst !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )0x0) {
        std::
        _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  (local_110._Mypair._Myval2._Myfirst,local_110._Mypair._Myval2._Mylast,
                   (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                    *)&local_110);
LAB_14c33847a:
        (**(code **)(*(longlong *)local_110._Mypair._Myval1 + 0x10))
                  (local_110._Mypair._Myval1,local_110._Mypair._Myval2._Myfirst,
                   (longlong)local_110._Mypair._Myval2._Myend -
                   (longlong)local_110._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
        local_110._Mypair._Myval2._Myend =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_110._Mypair._Myval2._Myfirst =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_110._Mypair._Myval2._Mylast =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        pvVar4 = local_110._Mypair._Myval2._Myfirst;
      }
    }
joined_r0x00014c338699:
    local_110._Mypair._Myval2._Myfirst = pvVar4;
    if (local_f0.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_f0.lods._Mypair._Myval1 + 0x10))
                (local_f0.lods._Mypair._Myval1,local_f0.lods._Mypair._Myval2._Myfirst,
                 ((longlong)local_f0.lods._Mypair._Myval2._Myend -
                  (longlong)local_f0.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c338800

void * __thiscall
LODMappingTest_SetLODRangeMin_Test::_scalar_deleting_destructor_
          (LODMappingTest_SetLODRangeMin_Test *this,uint param_1)

{
  dna::LODMapping::~LODMapping((LODMapping *)&this->field_0x18);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// CreateTest @ 14c338850

Test * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeMin_Test>::CreateTest
          (TestFactoryImpl<LODMappingTest_SetLODRangeMin_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&LODMappingTest::_vftable_;
    this_00[1]._padding_ = (longlong)&___7DefaultMemoryResource_pma__6B_;
    dna::LODMapping::LODMapping
              ((LODMapping *)&this_00[1].gtest_flag_saver_,(MemoryResource *)(this_00 + 1));
    this_00->_padding_ = (longlong)&___7LODMappingTest_SetLODRangeMin_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c3388b0

void * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeMin_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<LODMappingTest_SetLODRangeMin_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODMappingTest_SetLODRangeMin_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c3388f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
LODMappingTest_SetLODRangeMaxMin_Test::TestBody(LODMappingTest_SetLODRangeMaxMin_Test *this)

{
  undefined1 *this_00;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  undefined2 uVar2;
  ushort *puVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar4;
  ushort uVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  char *pcVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int *piVar12;
  ushort **ppuVar13;
  undefined1 auStackY_158 [32];
  ushort local_128 [4];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_120;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_118;
  AssertHelper local_108;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_100;
  LODConstraint local_e0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_b8;
  DefaultMemoryResource *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  undefined2 *puStack_80;
  ArrayView<unsigned_short_const_> local_78;
  ArrayView<unsigned_short_const_> local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  puVar10 = &local_58;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = &this->field_0x18;
  local_120._Mypair._Myval2._0_4_ = 4;
  local_128[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
  if (local_128[0] == 4) {
    testing::AssertionSuccess((AssertionResult *)&local_118);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
              ((AssertionResult *)&local_118,"mapping.getLODCount()","4u",local_128,
               (uint *)&local_120);
  }
  pvVar1 = local_118._Last;
  if ((char)local_118._First == '\0') {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_120);
    if ((ArrayView<unsigned_short_const_> *)local_118._Last ==
        (ArrayView<unsigned_short_const_> *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_118._Last;
      if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_118._Last + 0x10))->sz) {
        pcVar8 = *(char **)&(local_118._Last)->_Mypair;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_108,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                        ,0x4c,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper(&local_108);
    if (local_120._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_120._Mypair._Myval2 + 4) +
                (longlong)local_120._Mypair._Myval2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
        (ArrayView<unsigned_short_const_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_118._Last)
      ;
      ::operator_delete(local_118._Last,0x20);
    }
  }
  else {
    if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
        (ArrayView<unsigned_short_const_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_118._Last)
      ;
      ::operator_delete(pvVar1,0x20);
    }
    dna::LODConstraint::LODConstraint(&local_e0,1,2,(MemoryResource *)&this->field_0x10);
    dna::LODMapping::discardLODs((LODMapping *)this_00,&local_e0);
    local_120._Mypair._Myval2._0_4_ = 2;
    local_128[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
    if (local_128[0] == 2) {
      testing::AssertionSuccess((AssertionResult *)&local_118);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
                ((AssertionResult *)&local_118,"mapping.getLODCount()","2u",local_128,
                 (uint *)&local_120);
    }
    if ((char)local_118._First == '\0') {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_120);
      if ((ArrayView<unsigned_short_const_> *)local_118._Last ==
          (ArrayView<unsigned_short_const_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_118._Last;
        if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_118._Last + 0x10))->sz) {
          pcVar8 = *(char **)&(local_118._Last)->_Mypair;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_108,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                          ,0x4f,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper(&local_108);
      if (local_120._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)
                   *(int *)((longlong)*(DefaultMemoryResource *)local_120._Mypair._Myval2 + 4) +
                  (longlong)local_120._Mypair._Myval2);
        (**(code **)*puVar10)(puVar10,1);
      }
      pvVar1 = local_118._Last;
      pvVar4 = local_100._Mypair._Myval2._Myfirst;
      if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118._Last);
        ::operator_delete(pvVar1,0x20);
        pvVar4 = local_100._Mypair._Myval2._Myfirst;
      }
    }
    else {
      if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118._Last);
        ::operator_delete(local_118._Last,0x20);
      }
      piVar12 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar12 <
           `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`pma::impl::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_120._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
      if ((*piVar12 <
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
      local_48._0_4_ = 0x20001;
      local_48._4_4_ = 0x40003;
      local_40 = 0x60005;
      local_3c = 0x80007;
      local_38 = 0xa0009;
      local_34 = 0xc000b;
      local_b8._Mypair._Myval1 =
           (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
           &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
      local_b8._Mypair._Myval2._Myfirst =
           (ushort *)
           (**(code **)((longlong)
                        `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x18,8);
      puVar9 = &local_48;
      local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Myfirst + 0xc;
      local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Myfirst;
      do {
        *local_b8._Mypair._Myval2._Mylast = (ushort)*puVar9;
        puVar9 = (ulonglong *)((longlong)puVar9 + 2);
        local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
      } while (puVar9 != &local_30);
      if ((*piVar12 <
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
      local_58._0_4_ = 0x20001;
      local_58._4_4_ = 0x40003;
      local_50 = 0x60005;
      local_4c = 0x80007;
      local_98 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
      local_90 = (undefined2 *)
                 (**(code **)((longlong)
                              `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                              ::__l2::dmr + 8))
                           (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr,0x10,8);
      puStack_80 = local_90 + 8;
      local_88 = local_90;
      do {
        uVar2 = *(undefined2 *)puVar10;
        puVar10 = (undefined8 *)((longlong)puVar10 + 2);
        *local_88 = uVar2;
        local_88 = local_88 + 1;
      } while (puVar10 != &local_48);
      local_118._First = &local_b8;
      local_118._Last =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)&local_78;
      std::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
      ::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (&local_100,&local_118,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_120);
      if (local_90 != (undefined2 *)0x0) {
        (**(code **)((longlong)*local_98 + 0x10))
                  (local_98,local_90,((longlong)puStack_80 - (longlong)local_90 >> 1) * 2,8);
        local_90 = (undefined2 *)0x0;
        local_88 = (undefined2 *)0x0;
        puStack_80 = (undefined2 *)0x0;
      }
      if (local_b8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)((longlong)*(DefaultMemoryResource *)local_b8._Mypair._Myval1 + 0x10))
                  (local_b8._Mypair._Myval1,local_b8._Mypair._Myval2._Myfirst,
                   ((longlong)local_b8._Mypair._Myval2._Myend -
                    (longlong)local_b8._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
      uVar11 = 0;
      uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
      if (uVar5 != 0) {
        do {
          dna::LODMapping::getIndices((LODMapping *)this_00,&local_68,uVar11);
          local_78.ptr = local_100._Mypair._Myval2._Myfirst[uVar11]._Mypair._Myval2._Myfirst;
          local_78.sz = (longlong)local_100._Mypair._Myval2._Myfirst[uVar11]._Mypair._Myval2._Mylast
                        - (longlong)local_78.ptr >> 1;
          testing::internal::
          CmpHelperEQ<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                    ((AssertionResult *)&local_118,"resultIndices","expectedIndices",&local_68,
                     &local_78);
          pvVar1 = local_118._Last;
          if ((char)local_118._First == '\0') {
            pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
            if ((ArrayView<unsigned_short_const_> *)local_118._Last ==
                (ArrayView<unsigned_short_const_> *)0x0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)local_118._Last;
              if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_118._Last + 0x10))->sz
                 ) {
                pcVar8 = *(char **)&(local_118._Last)->_Mypair;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_120,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                                ,0x57,pcVar8);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_120);
            if (local_108.data_ != (AssertHelperData *)0x0) {
              puVar10 = (undefined8 *)
                        ((longlong)&(local_108.data_)->type +
                        (longlong)*(int *)(*(longlong *)local_108.data_ + 4));
              (**(code **)*puVar10)(puVar10,1);
            }
            pvVar1 = local_118._Last;
            if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
                (ArrayView<unsigned_short_const_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_118._Last);
              ::operator_delete(pvVar1,0x20);
            }
            pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)0x0;
            if (local_100._Mypair._Myval2._Myfirst ==
                (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)0x0) goto joined_r0x00014c338ee9;
            if (local_100._Mypair._Myval2._Myfirst != local_100._Mypair._Myval2._Mylast) {
              ppuVar13 = &((local_100._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
              do {
                puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->
                         _Myfirst;
                if (puVar3 != (ushort *)0x0) {
                  (**(code **)(*(longlong *)ppuVar13[-3] + 0x10))
                            (ppuVar13[-3],puVar3,((longlong)*ppuVar13 - (longlong)puVar3 >> 1) * 2,8
                            );
                  ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->_Myfirst =
                       (ushort *)0x0;
                  ppuVar13[-1] = (ushort *)0x0;
                  *ppuVar13 = (ushort *)0x0;
                }
                pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                          *)(ppuVar13 + 1);
                ppuVar13 = ppuVar13 + 4;
              } while (pvVar1 != local_100._Mypair._Myval2._Mylast);
            }
            goto LAB_14c338cca;
          }
          if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
              (ArrayView<unsigned_short_const_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_118._Last);
            ::operator_delete(pvVar1,0x20);
          }
          uVar11 = uVar11 + 1;
          uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
        } while (uVar11 < uVar5);
      }
      pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)0x0;
      if (local_100._Mypair._Myval2._Myfirst !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )0x0) {
        std::
        _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  (local_100._Mypair._Myval2._Myfirst,local_100._Mypair._Myval2._Mylast,
                   (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                    *)&local_100);
LAB_14c338cca:
        (**(code **)(*(longlong *)local_100._Mypair._Myval1 + 0x10))
                  (local_100._Mypair._Myval1,local_100._Mypair._Myval2._Myfirst,
                   (longlong)local_100._Mypair._Myval2._Myend -
                   (longlong)local_100._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
        local_100._Mypair._Myval2._Myend =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_100._Mypair._Myval2._Myfirst =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        local_100._Mypair._Myval2._Mylast =
             (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              *)0x0;
        pvVar4 = local_100._Mypair._Myval2._Myfirst;
      }
    }
joined_r0x00014c338ee9:
    local_100._Mypair._Myval2._Myfirst = pvVar4;
    if (local_e0.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_e0.lods._Mypair._Myval1 + 0x10))
                (local_e0.lods._Mypair._Myval1,local_e0.lods._Mypair._Myval2._Myfirst,
                 ((longlong)local_e0.lods._Mypair._Myval2._Myend -
                  (longlong)local_e0.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c339050

void * __thiscall
LODMappingTest_SetLODRangeMaxMin_Test::_scalar_deleting_destructor_
          (LODMappingTest_SetLODRangeMaxMin_Test *this,uint param_1)

{
  dna::LODMapping::~LODMapping((LODMapping *)&this->field_0x18);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// CreateTest @ 14c3390a0

Test * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeMaxMin_Test>::CreateTest
          (TestFactoryImpl<LODMappingTest_SetLODRangeMaxMin_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&LODMappingTest::_vftable_;
    this_00[1]._padding_ = (longlong)&___7DefaultMemoryResource_pma__6B_;
    dna::LODMapping::LODMapping
              ((LODMapping *)&this_00[1].gtest_flag_saver_,(MemoryResource *)(this_00 + 1));
    this_00->_padding_ = (longlong)&___7LODMappingTest_SetLODRangeMaxMin_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c339100

void * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeMaxMin_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<LODMappingTest_SetLODRangeMaxMin_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODMappingTest_SetLODRangeMaxMin_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c339140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
LODMappingTest_SetLODRangeExact_Test::TestBody(LODMappingTest_SetLODRangeExact_Test *this)

{
  undefined1 *this_00;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  undefined2 uVar2;
  ushort *puVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar4;
  ushort uVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  char *pcVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int *piVar12;
  ushort **ppuVar13;
  undefined1 auStackY_158 [32];
  ushort local_128 [4];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_120;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_118;
  undefined1 local_108 [24];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *local_f0;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
  *pvStack_e8;
  longlong local_e0;
  LODConstraint local_d8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_b8;
  DefaultMemoryResource *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  undefined2 *puStack_80;
  ArrayView<unsigned_short_const_> local_78;
  ArrayView<unsigned_short_const_> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38 [2];
  
  puVar10 = &local_58;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = &this->field_0x18;
  local_120._Mypair._Myval2._0_4_ = 4;
  local_128[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
  if (local_128[0] == 4) {
    testing::AssertionSuccess((AssertionResult *)&local_118);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
              ((AssertionResult *)&local_118,"mapping.getLODCount()","4u",local_128,
               (uint *)&local_120);
  }
  if ((char)local_118._First == '\0') {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_120);
    if (local_118._Last ==
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)local_118._Last;
      if ((ushort *)0xf < ((local_118._Last)->_Mypair)._Myval2._Myend) {
        pcVar8 = (((_String_val<std::_Simple_types<char>_> *)&((local_118._Last)->_Mypair)._Myval1)
                 ->_Bx)._Ptr;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)(local_108 + 8),kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                        ,0x5b,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)(local_108 + 8));
    if (local_120._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)local_120._Mypair._Myval2 + 4) +
                (longlong)local_120._Mypair._Myval2);
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_118._Last !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_118._Last)
      ;
      ::operator_delete(local_118._Last,0x20);
    }
  }
  else {
    if (local_118._Last !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_118._Last)
      ;
      ::operator_delete(local_118._Last,0x20);
    }
    local_118._First =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         local_108;
    local_108._0_4_ = 0x30001;
    local_118._Last =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         &DAT_00000002;
    dna::LODConstraint::LODConstraint
              (&local_d8,(ArrayView<unsigned_short_const_> *)&local_118,
               (MemoryResource *)&this->field_0x10);
    dna::LODMapping::discardLODs((LODMapping *)this_00,&local_d8);
    local_120._Mypair._Myval2._0_4_ = 2;
    local_128[0] = dna::LODMapping::getLODCount((LODMapping *)this_00);
    if (local_128[0] == 2) {
      testing::AssertionSuccess((AssertionResult *)&local_118);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_int>
                ((AssertionResult *)&local_118,"mapping.getLODCount()","2u",local_128,
                 (uint *)&local_120);
    }
    pvVar1 = local_118._Last;
    if ((char)local_118._First == '\0') {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_120);
      if ((ArrayView<unsigned_short_const_> *)local_118._Last ==
          (ArrayView<unsigned_short_const_> *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)local_118._Last;
        if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_118._Last + 0x10))->sz) {
          pcVar8 = *(char **)&(local_118._Last)->_Mypair;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)(local_108 + 8),kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                          ,0x5f,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)(local_108 + 8));
      if (local_120._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)
                   *(int *)((longlong)*(DefaultMemoryResource *)local_120._Mypair._Myval2 + 4) +
                  (longlong)local_120._Mypair._Myval2);
        (**(code **)*puVar10)(puVar10,1);
      }
      pvVar1 = local_118._Last;
      pvVar4 = local_f0;
      if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118._Last);
        ::operator_delete(pvVar1,0x20);
        pvVar4 = local_f0;
      }
    }
    else {
      if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
          (ArrayView<unsigned_short_const_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118._Last);
        ::operator_delete(pvVar1,0x20);
      }
      piVar12 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar12 <
           `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`pma::impl::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_120._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )&`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
      if ((*piVar12 <
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
      local_50._0_4_ = 0x20001;
      local_50._4_4_ = 0x40003;
      local_48 = 0x60005;
      local_44 = 0x80007;
      local_40 = 0xa0009;
      local_3c = 0xc000b;
      local_b8._Mypair._Myval1 =
           (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
           &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
      local_b8._Mypair._Myval2._Myfirst =
           (ushort *)
           (**(code **)((longlong)
                        `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x18,8);
      puVar9 = &local_50;
      local_b8._Mypair._Myval2._Myend = local_b8._Mypair._Myval2._Myfirst + 0xc;
      local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Myfirst;
      do {
        *local_b8._Mypair._Myval2._Mylast = (ushort)*puVar9;
        puVar9 = (ulonglong *)((longlong)puVar9 + 2);
        local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
      } while (puVar9 != local_38);
      if ((*piVar12 <
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
      local_58._0_4_ = 0x20001;
      local_58._4_4_ = 0x40003;
      local_98 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                  ::__l2::dmr;
      local_90 = (undefined2 *)
                 (**(code **)((longlong)
                              `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                              ::__l2::dmr + 8))
                           (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr,8,8);
      puStack_80 = local_90 + 4;
      local_88 = local_90;
      do {
        uVar2 = *(undefined2 *)puVar10;
        puVar10 = (undefined8 *)((longlong)puVar10 + 2);
        *local_88 = uVar2;
        local_88 = local_88 + 1;
      } while (puVar10 != &local_50);
      local_118._First = &local_b8;
      local_118._Last =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)&local_78;
      std::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
      ::
      vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                ((vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  *)(local_108 + 0x10),&local_118,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_120);
      if (local_90 != (undefined2 *)0x0) {
        (**(code **)((longlong)*local_98 + 0x10))
                  (local_98,local_90,((longlong)puStack_80 - (longlong)local_90 >> 1) * 2,8);
        local_90 = (undefined2 *)0x0;
        local_88 = (undefined2 *)0x0;
        puStack_80 = (undefined2 *)0x0;
      }
      if (local_b8._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)((longlong)*(DefaultMemoryResource *)local_b8._Mypair._Myval1 + 0x10))
                  (local_b8._Mypair._Myval1,local_b8._Mypair._Myval2._Myfirst,
                   ((longlong)local_b8._Mypair._Myval2._Myend -
                    (longlong)local_b8._Mypair._Myval2._Myfirst >> 1) * 2,8);
      }
      uVar11 = 0;
      uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
      if (uVar5 != 0) {
        do {
          dna::LODMapping::getIndices((LODMapping *)this_00,&local_68,uVar11);
          local_78.ptr = local_f0[uVar11]._Mypair._Myval2._Myfirst;
          local_78.sz = (longlong)local_f0[uVar11]._Mypair._Myval2._Mylast - (longlong)local_78.ptr
                        >> 1;
          testing::internal::
          CmpHelperEQ<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                    ((AssertionResult *)&local_118,"resultIndices","expectedIndices",&local_68,
                     &local_78);
          pvVar1 = local_118._Last;
          if ((char)local_118._First == '\0') {
            pMVar6 = (Message *)testing::Message::Message((Message *)(local_108 + 8));
            if ((ArrayView<unsigned_short_const_> *)local_118._Last ==
                (ArrayView<unsigned_short_const_> *)0x0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)local_118._Last;
              if (0xf < ((ArrayView<unsigned_short_const_> *)((longlong)local_118._Last + 0x10))->sz
                 ) {
                pcVar8 = *(char **)&(local_118._Last)->_Mypair;
              }
            }
            pAVar7 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_120,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestLODMapping.cpp"
                                ,0x67,pcVar8);
            testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_120);
            if ((ushort *)local_108._8_8_ != (ushort *)0x0) {
              puVar10 = (undefined8 *)
                        (local_108._8_8_ + (longlong)*(int *)(*(longlong *)local_108._8_8_ + 4));
              (**(code **)*puVar10)(puVar10,1);
            }
            pvVar1 = local_118._Last;
            if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
                (ArrayView<unsigned_short_const_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_118._Last);
              ::operator_delete(pvVar1,0x20);
            }
            pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)0x0;
            if (local_f0 ==
                (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)0x0) goto joined_r0x00014c339749;
            if (local_f0 != pvStack_e8) {
              ppuVar13 = &(local_f0->_Mypair)._Myval2._Myend;
              do {
                puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->
                         _Myfirst;
                if (puVar3 != (ushort *)0x0) {
                  (**(code **)(*(longlong *)ppuVar13[-3] + 0x10))
                            (ppuVar13[-3],puVar3,((longlong)*ppuVar13 - (longlong)puVar3 >> 1) * 2,8
                            );
                  ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar13 + -2))->_Myfirst =
                       (ushort *)0x0;
                  ppuVar13[-1] = (ushort *)0x0;
                  *ppuVar13 = (ushort *)0x0;
                }
                pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                          *)(ppuVar13 + 1);
                ppuVar13 = ppuVar13 + 4;
              } while (pvVar1 != pvStack_e8);
            }
            goto LAB_14c33952a;
          }
          if ((ArrayView<unsigned_short_const_> *)local_118._Last !=
              (ArrayView<unsigned_short_const_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_118._Last);
            ::operator_delete(pvVar1,0x20);
          }
          uVar11 = uVar11 + 1;
          uVar5 = dna::LODMapping::getLODCount((LODMapping *)this_00);
        } while (uVar11 < uVar5);
      }
      pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)0x0;
      if (local_f0 !=
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )0x0) {
        std::
        _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                  (local_f0,pvStack_e8,
                   (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                    *)(local_108 + 0x10));
LAB_14c33952a:
        (**(code **)(*(longlong *)local_108._16_8_ + 0x10))
                  (local_108._16_8_,local_f0,local_e0 - (longlong)local_f0 & 0xffffffffffffffe0,8);
        local_e0 = 0;
        local_f0 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)0x0;
        pvStack_e8 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)0x0;
        pvVar4 = local_f0;
      }
    }
joined_r0x00014c339749:
    local_f0 = pvVar4;
    if (local_d8.lods._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)(*(longlong *)local_d8.lods._Mypair._Myval1 + 0x10))
                (local_d8.lods._Mypair._Myval1,local_d8.lods._Mypair._Myval2._Myfirst,
                 ((longlong)local_d8.lods._Mypair._Myval2._Myend -
                  (longlong)local_d8.lods._Mypair._Myval2._Myfirst >> 1) * 2,8);
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c3398b0

void * __thiscall
LODMappingTest_SetLODRangeExact_Test::_scalar_deleting_destructor_
          (LODMappingTest_SetLODRangeExact_Test *this,uint param_1)

{
  dna::LODMapping::~LODMapping((LODMapping *)&this->field_0x18);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// CreateTest @ 14c339900

Test * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeExact_Test>::CreateTest
          (TestFactoryImpl<LODMappingTest_SetLODRangeExact_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x58);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&LODMappingTest::_vftable_;
    this_00[1]._padding_ = (longlong)&___7DefaultMemoryResource_pma__6B_;
    dna::LODMapping::LODMapping
              ((LODMapping *)&this_00[1].gtest_flag_saver_,(MemoryResource *)(this_00 + 1));
    this_00->_padding_ = (longlong)&___7LODMappingTest_SetLODRangeExact_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c339960

void * __thiscall
testing::internal::TestFactoryImpl<LODMappingTest_SetLODRangeExact_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<LODMappingTest_SetLODRangeExact_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<LODMappingTest_SetLODRangeExact_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ArrayView<unsigned_short_const_>_> @ 14c3399a0

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,av::ArrayView<unsigned_short_const_>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,
          ArrayView<unsigned_short_const_> *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x10,param_1);
  return param_1;
}

// CmpHelperEQ<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_> @ 14c3399d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArrayView<unsigned_short_const_> *param_3,ArrayView<unsigned_short_const_> *param_4)

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  undefined1 auStackY_b8 [32];
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (param_3->sz == param_4->sz) {
    if ((param_3->ptr == param_4->ptr) ||
       ((_Size = param_3->sz * 2, param_4->sz * 2 == _Size &&
        (iVar2 = memcmp(param_3->ptr,param_4->ptr,_Size), iVar2 == 0)))) {
      AssertionSuccess(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pbVar3 = FormatForComparisonFailureMessage<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar4 = FormatForComparisonFailureMessage<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar4,pbVar3,false);
  if (0xf < uStack_70) {
    pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar7 = uStack_70 + 1;
    pvVar5 = pvVar1;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c339b13;
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_88._Buf[0] = '\0';
  local_78 = ___xmm_000000000000000f0000000000000000;
  uStack_70 = _UNK_15076add8;
  if (0xf < local_50) {
    uVar7 = local_50 + 1;
    uVar6 = local_68._Ptr;
    if (0xfff < uVar7) {
      uVar6 = *(undefined8 *)(local_68._Ptr + -8);
      uVar7 = local_50 + 0x28;
      if ((char *)0x1f < local_68._Ptr + (-8 - uVar6)) {
LAB_14c339b13:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar6,uVar7);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_> @ 14c339b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArrayView<unsigned_short_const_> *param_3,ArrayView<unsigned_short_const_> *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c339c51;
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
LAB_14c339c51:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<av::ArrayView<unsigned_short_const_>_> @ 14c339ca0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<av::ArrayView<unsigned_short_const_>_>
          (ArrayView<unsigned_short_const_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// DefaultPrintTo<av::ArrayView<unsigned_short_const_>_> @ 14c339cc0

void __cdecl
testing::internal::DefaultPrintTo<av::ArrayView<unsigned_short_const_>_>
          (WrapPrinterType<3> param_1,ArrayView<unsigned_short_const_> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x10,param_3);
  return;
}

// FormatForComparisonFailureMessage<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_> @ 14c339ce0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<av::ArrayView<unsigned_short_const_>,av::ArrayView<unsigned_short_const_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ArrayView<unsigned_short_const_> *param_1,ArrayView<unsigned_short_const_> *param_2)

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

// PrintTo<av::ArrayView<unsigned_short_const_>_> @ 14c339e90

void __cdecl
testing::internal::PrintTo<av::ArrayView<unsigned_short_const_>_>
          (ArrayView<unsigned_short_const_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// PrintToString<av::ArrayView<unsigned_short_const_>_> @ 14c339eb0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<av::ArrayView<unsigned_short_const_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ArrayView<unsigned_short_const_> *param_1)

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

// UniversalPrint<av::ArrayView<unsigned_short_const_>_> @ 14c33a060

void __cdecl
testing::internal::UniversalPrint<av::ArrayView<unsigned_short_const_>_>
          (ArrayView<unsigned_short_const_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// GetSetUpCaseOrSuite @ 14c33a080

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::GetSetUpCaseOrSuite
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

// GetTearDownCaseOrSuite @ 14c33a120

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<`anonymous_namespace'::LODMappingTest>::GetTearDownCaseOrSuite
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

