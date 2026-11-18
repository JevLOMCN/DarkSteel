// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 115

// test_info_'' @ 141396f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_ArchiveOffset_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_ArchiveOffset_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x2f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x2f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x2f;
  BinaryOutputArchiveTest_ArchiveOffset_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","ArchiveOffset",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141397150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test::test_info___
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,99);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,99);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 99;
  BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","ArchiveSizeIsRelativeToOffset",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141397390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_AttachUserData_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_AttachUserData_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1ea);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1ea);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x1ea;
  BinaryOutputArchiveTest_AttachUserData_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","AttachUserData",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 1413975d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_BlobSerialization_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_BlobSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0xf2);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0xf2);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0xf2;
  BinaryOutputArchiveTest_BlobSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","BlobSerialization",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141397810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_ComplexTypeSerialization_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_ComplexTypeSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x9f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x9f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x9f;
  BinaryOutputArchiveTest_ComplexTypeSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","ComplexTypeSerialization",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141397a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test::
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x151);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x151);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x151;
  BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","DynArrayOfPrimitiveStructSerialization",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141397c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'BinaryOutputArchiveTest_FreeSave_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VBinaryOutputArchiveTest_FreeSave_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,199);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,199);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 199;
  BinaryOutputArchiveTest_FreeSave_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","FreeSave",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141397ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_FreeSerialize_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_FreeSerialize_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0xb5);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0xb5);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0xb5;
  BinaryOutputArchiveTest_FreeSerialize_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","FreeSerialize",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141398110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_LittleEndianDataSerialization_Test::test_info___
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_LittleEndianDataSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x81);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x81);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x81;
  BinaryOutputArchiveTest_LittleEndianDataSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","LittleEndianDataSerialization",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141398350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_MixedNestedTypes_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_MixedNestedTypes_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1b6);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1b6);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x1b6;
  BinaryOutputArchiveTest_MixedNestedTypes_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","MixedNestedTypes",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141398590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test::test_info___
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_PrimitiveTypeSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x90);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x90);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x90;
  BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","PrimitiveTypeSerialization",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 1413987d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_SaveVersionedType_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_SaveVersionedType_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,499);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,499);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 499;
  BinaryOutputArchiveTest_SaveVersionedType_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","SaveVersionedType",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141398a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_StreamInsertionOperator_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_StreamInsertionOperator_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1c);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1c);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x1c;
  BinaryOutputArchiveTest_StreamInsertionOperator_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","StreamInsertionOperator",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141398c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_StringSerialization_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_StringSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0xd9);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0xd9);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0xd9;
  BinaryOutputArchiveTest_StringSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","StringSerialization",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141398e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test::
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x132);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x132);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x132;
  BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","VectorOfComplexTypeSerialization",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 1413990d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test::test_info___
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x11d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x11d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x11d;
  BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","VectorOfFloatTypeSerialization",(char *)0x0,(char *)0x0
                  ,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2
                 );
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141399310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test::
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x108);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x108);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x108;
  BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","VectorOfIntegerTypeSerialization",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141399550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test::
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x186);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x186);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x186;
  BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","VectorOfPairOfStringsSerialization",(char *)0x0,
                  (char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 141399790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_VectorOfStringSerialization_Test::test_info___
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_VectorOfStringSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x171);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x171);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x171;
  BinaryOutputArchiveTest_VectorOfStringSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","VectorOfStringSerialization",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0xa0);
  return;
}

// test_info_'' @ 1413999d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test::
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
              ___7__TestFactoryImpl_VBinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1a0);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,0x1a0);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar6 + 0x88) = uVar1;
  pcVar6[0x90] = ::s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar6[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
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
  uVar1 = *(undefined8 *)(pcVar6 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar6 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar1;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar6 + 0x90);
  local_38 = 0x1a0;
  BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryOutputArchiveTest","VectorOfVectorOfPrimitiveTypeSerialization",(char *)0x0
                  ,(char *)0x0,(CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,
                  (_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0xa0);
  return;
}

// TestBody @ 14c5f7700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test::TestBody
          (BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test *this)

{
  void *pvVar1;
  ulonglong uVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Anchor<unsigned_int> *pAVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong64 uVar14;
  size_t _Size;
  uchar *puVar15;
  ulonglong uVar16;
  int iVar17;
  uchar *puVar18;
  undefined1 auStackY_1e8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_198;
  AssertionResult local_190;
  uchar local_180 [32];
  vector<char,std::allocator<char>_> local_160;
  size_t local_148;
  undefined1 local_140 [16];
  vector<char,std::allocator<char>_> *local_130;
  uint local_128 [2];
  ArchiveSize<unsigned_int,unsigned_int> local_120;
  ArchiveSize<unsigned_int,unsigned_int> local_108;
  Anchor<unsigned_int> local_f0;
  int local_d8;
  char local_d4 [4];
  _Bxty local_d0;
  undefined8 local_c0;
  ulonglong local_b8;
  Proxy local_b0;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  Proxy local_58 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar16 = 0;
  local_b8 = 0xf;
  local_b0.target = &local_120;
  local_120.position = 0;
  local_b0.base = &local_f0;
  local_120.value = 0;
  local_120.proxy = &local_b0;
  local_108.position = 0;
  local_140._0_8_ = local_140;
  local_108.value = 0;
  local_f0.value = 0;
  local_d0._8_8_ = 0;
  local_130 = &local_160;
  local_128[0] = 4;
  local_58[0].target = &local_108;
  local_d8 = 0x4d2;
  local_58[0].base = &local_f0;
  local_108.proxy = local_58;
  local_f0.onMoveCallbackData = local_58;
  local_d4[0] = 'x';
  local_c0 = 4;
  local_d0._Ptr = (char *)0x64636261;
  local_160._Mypair._Myval2._Myfirst = (char *)0x0;
  local_160._Mypair._Myval2._Mylast = (char *)0x0;
  local_160._Mypair._Myval2._Myend = (char *)0x0;
  local_148 = 0;
  local_140._8_8_ = (void *)0x0;
  local_f0.onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  terse::Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>::
  dispatch<unsigned_int_&,terse::ArchiveSize<unsigned_int,unsigned_int>_&,terse::ArchiveSize<unsigned_int,unsigned_int>_&,terse::Anchor<unsigned_int>_&,int_&,char_&,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_&,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_&,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy>
            ((Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>
              *)local_140,local_128,&local_120,&local_108,&local_f0,&local_d8,local_d4,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0,&local_b0,
             local_58);
  if (local_58[0].target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    (local_58[0].target)->proxy = (Proxy *)0x0;
  }
  pAVar4 = local_58[0].base;
  uVar2 = _UNK_15076add8;
  uVar13 = ___xmm_000000000000000f0000000000000000;
  if (local_58[0].base != (Anchor<unsigned_int> *)0x0) {
    (local_58[0].base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    pAVar4->onMoveCallbackData = (void *)0x0;
  }
  local_58[0].target =
       (ArchiveSize<unsigned_int,unsigned_int> *)
       (local_160._Mypair._Myval2._Mylast + -(longlong)local_160._Mypair._Myval2._Myfirst);
  local_180[0] = '\0';
  local_180[1] = '\0';
  local_180[2] = '\0';
  local_180[3] = '\x04';
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\r';
  local_180[8] = '\0';
  local_180[9] = '\0';
  local_180[10] = '\0';
  local_180[0xb] = '\r';
  local_180[0xc] = '\0';
  local_180[0xd] = '\0';
  local_180[0xe] = '\x04';
  local_180[0xf] = 0xd2;
  local_180[0x10] = 'x';
  local_180[0x11] = '\0';
  local_180[0x12] = '\0';
  local_180[0x13] = '\0';
  local_180[0x14] = '\x04';
  local_180[0x15] = 'a';
  local_180[0x16] = 'b';
  local_180[0x17] = 'c';
  local_180[0x18] = 100;
  local_198._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_00000019;
  if (local_58[0].target == (ArchiveSize<unsigned_int,unsigned_int> *)&DAT_00000019) {
    testing::AssertionSuccess(&local_190);
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78
                        ,(ulong64 *)&local_198,(ulong64 *)local_58);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98
                        ,(ulong64 *)local_58,(ulong64 *)&local_198);
    testing::internal::EqFailure(&local_190,"stream.size()","sizeof(expected)",pbVar6,pbVar5,false);
    if (0xf < uStack_80) {
      pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
      uVar14 = uStack_80 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar14) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar14 = uStack_80 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c5f7997;
      }
      ::operator_delete(pvVar9,uVar14);
    }
    local_98._Buf[0] = '\0';
    local_88 = uVar13;
    uStack_80 = uVar2;
    if (0xf < local_60) {
      uVar14 = local_60 + 1;
      uVar10 = local_78._Ptr;
      if (0xfff < uVar14) {
        uVar10 = *(undefined8 *)(local_78._Ptr + -8);
        uVar14 = local_60 + 0x28;
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar10)) {
LAB_14c5f7997:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar14);
    }
  }
  uVar3._Mypair._Myval2 = local_190.message_._Mypair._Myval2;
  if (local_190.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_198);
    if (local_190.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_190.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_190.message_._Mypair._Myval2;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_58,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                        ,0x78,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_58);
    if (local_198._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar12 = (undefined8 *)
                ((longlong)&(local_198._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_198._Myval2 + 4));
      (**(code **)*puVar12)(puVar12,1);
    }
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
    }
    if (local_160._Mypair._Myval2._Myfirst != (char *)0x0) {
      uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
               (longlong)local_160._Mypair._Myval2._Myfirst;
      pcVar11 = local_160._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pcVar11 = *(char **)(local_160._Mypair._Myval2._Myfirst + -8);
        uVar14 = uVar14 + 0x27;
        if ((char *)0x1f < local_160._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11))
        goto LAB_14c5f80af;
      }
      ::operator_delete(pcVar11,uVar14);
      local_160._Mypair._Myval2._Myend = (char *)0x0;
      local_160._Mypair._Myval2._Myfirst = (char *)0x0;
      local_160._Mypair._Myval2._Mylast = (char *)0x0;
    }
    if (local_b0.target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
      (local_b0.target)->proxy = (Proxy *)0x0;
    }
    pAVar4 = local_b0.base;
    if (local_b0.base != (Anchor<unsigned_int> *)0x0) {
      (local_b0.base)->onMoveCallback =
           terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
      pAVar4->onMoveCallbackData = (void *)0x0;
    }
    if (local_b8 < 0x10) {
      return;
    }
    uVar14 = local_b8 + 1;
    uVar13 = local_d0._Ptr;
    if (0xfff < uVar14) {
      uVar13 = *(undefined8 *)(local_d0._Ptr + -8);
      uVar14 = local_b8 + 0x28;
      if ((char *)0x1f < local_d0._Ptr + (-8 - uVar13)) {
LAB_14c5f80af:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar13,uVar14);
    return;
  }
  if (local_190.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
  }
  _Size = (longlong)local_160._Mypair._Myval2._Mylast - (longlong)local_160._Mypair._Myval2._Myfirst
  ;
  local_148 = 0;
  if (0x19 < _Size) {
    _Size = 0x19;
  }
  if (_Size != 0) {
    memcpy(local_58,local_160._Mypair._Myval2._Myfirst,_Size);
    local_148 = _Size;
  }
  do {
    puVar18 = local_180 + uVar16;
    puVar15 = (uchar *)((longlong)&local_58[0].target + uVar16);
    if (*puVar15 == *puVar18) {
      testing::AssertionSuccess(&local_190);
    }
    else {
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar18,puVar15);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_98,puVar15,puVar18);
      testing::internal::EqFailure(&local_190,"bytes[i]","expected[i]",pbVar6,pbVar5,false);
      if (0xf < uStack_80) {
        pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        uVar14 = uStack_80 + 1;
        pvVar9 = pvVar1;
        if (0xfff < uVar14) {
          pvVar9 = *(void **)((longlong)pvVar1 + -8);
          uVar14 = uStack_80 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c5f7b5e;
        }
        ::operator_delete(pvVar9,uVar14);
      }
      local_98._Buf[0] = '\0';
      local_88 = uVar13;
      uStack_80 = uVar2;
      if (0xf < local_60) {
        uVar14 = local_60 + 1;
        uVar10 = local_78._Ptr;
        if (0xfff < uVar14) {
          uVar10 = *(undefined8 *)(local_78._Ptr + -8);
          uVar14 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar10)) {
LAB_14c5f7b5e:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar14);
      }
    }
    uVar3._Mypair._Myval2 = local_190.message_._Mypair._Myval2;
    if (local_190.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_198);
      if (local_190.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_190.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_190.message_._Mypair._Myval2;
        }
      }
      iVar17 = 0x7c;
      goto LAB_14c5f7ed2;
    }
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x19);
  local_198._Myval2._0_4_ = 0xd;
  if (local_120.value == 0xd) {
    testing::AssertionSuccess(&local_190);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_int,unsigned_long>
              (&local_190,"source.size.value","13ul",&local_120.value,(ulong *)&local_198);
  }
  uVar3._Mypair._Myval2 = local_190.message_._Mypair._Myval2;
  if (local_190.success_ != false) {
    if (local_190.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_190.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    local_198._Myval2._0_4_ = 0xd;
    if (local_108.value == 0xd) {
      testing::AssertionSuccess(&local_190);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned_int,unsigned_long>
                (&local_190,"source.size2.value","13ul",&local_108.value,(ulong *)&local_198);
    }
    if (local_190.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_198);
      if (local_190.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_190.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_190.message_._Mypair._Myval2;
        }
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)local_58,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                          ,0x7e,pcVar11);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_58);
      if (local_198._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)&(local_198._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_198._Myval2 + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_190.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_190.message_._Mypair._Myval2);
        ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
      }
      if (local_160._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
                 (longlong)local_160._Mypair._Myval2._Myfirst;
        pcVar11 = local_160._Mypair._Myval2._Myfirst;
        if (0xfff < uVar14) {
          pcVar11 = *(char **)(local_160._Mypair._Myval2._Myfirst + -8);
          uVar14 = uVar14 + 0x27;
          if ((char *)0x1f < local_160._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11))
          goto LAB_14c5f7e0b;
        }
        ::operator_delete(pcVar11,uVar14);
        local_160._Mypair._Myval2._Myend = (char *)0x0;
        local_160._Mypair._Myval2._Myfirst = (char *)0x0;
        local_160._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_b0.target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
        (local_b0.target)->proxy = (Proxy *)0x0;
      }
      pAVar4 = local_b0.base;
      if (local_b0.base != (Anchor<unsigned_int> *)0x0) {
        (local_b0.base)->onMoveCallback =
             terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
        pAVar4->onMoveCallbackData = (void *)0x0;
      }
      if (local_b8 < 0x10) {
        return;
      }
      uVar14 = local_b8 + 1;
      uVar13 = local_d0._Ptr;
      if (0xfff < uVar14) {
        uVar13 = *(undefined8 *)(local_d0._Ptr + -8);
        uVar14 = local_b8 + 0x28;
        if ((char *)0x1f < local_d0._Ptr + (-8 - uVar13)) {
LAB_14c5f7e0b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      if (local_190.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_190.message_._Mypair._Myval2);
        ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
      }
      if (local_160._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
                 (longlong)local_160._Mypair._Myval2._Myfirst;
        pcVar11 = local_160._Mypair._Myval2._Myfirst;
        if (0xfff < uVar14) {
          pcVar11 = *(char **)(local_160._Mypair._Myval2._Myfirst + -8);
          uVar14 = uVar14 + 0x27;
          if ((char *)0x1f < local_160._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11))
          goto LAB_14c5f7cc2;
        }
        ::operator_delete(pcVar11,uVar14);
        local_160._Mypair._Myval2._Myend = (char *)0x0;
        local_160._Mypair._Myval2._Myfirst = (char *)0x0;
        local_160._Mypair._Myval2._Mylast = (char *)0x0;
      }
      if (local_b0.target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
        (local_b0.target)->proxy = (Proxy *)0x0;
      }
      pAVar4 = local_b0.base;
      if (local_b0.base != (Anchor<unsigned_int> *)0x0) {
        (local_b0.base)->onMoveCallback =
             terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
        pAVar4->onMoveCallbackData = (void *)0x0;
      }
      if (local_b8 < 0x10) {
        return;
      }
      uVar14 = local_b8 + 1;
      uVar13 = local_d0._Ptr;
      if (0xfff < uVar14) {
        uVar14 = local_b8 + 0x28;
        uVar13 = *(char **)(local_d0._Ptr + -8);
        if ((char *)0x1f < local_d0._Ptr + (-8 - (longlong)*(char **)(local_d0._Ptr + -8))) {
LAB_14c5f7cc2:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    ::operator_delete((void *)uVar13,uVar14);
    return;
  }
  pMVar7 = (Message *)testing::Message::Message((Message *)&local_198);
  if (local_190.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar11 = "";
  }
  else {
    pcVar11 = (char *)local_190.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_190.message_._Mypair._Myval2 + 0x18)) {
      pcVar11 = *(char **)local_190.message_._Mypair._Myval2;
      iVar17 = 0x7d;
      goto LAB_14c5f7ed2;
    }
  }
  iVar17 = 0x7d;
LAB_14c5f7ed2:
  pAVar8 = (AssertHelper *)
           testing::internal::AssertHelper::AssertHelper
                     ((AssertHelper *)local_58,kFatalFailure,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                      ,iVar17,pcVar11);
  testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_58);
  if (local_198._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar12 = (undefined8 *)
              ((longlong)&(local_198._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_198._Myval2 + 4));
    (**(code **)*puVar12)(puVar12,1);
  }
  if (local_190.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190.message_._Mypair._Myval2);
    ::operator_delete((void *)local_190.message_._Mypair._Myval2,0x20);
  }
  std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_160);
  if (local_b0.target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    (local_b0.target)->proxy = (Proxy *)0x0;
  }
  pAVar4 = local_b0.base;
  if (local_b0.base != (Anchor<unsigned_int> *)0x0) {
    (local_b0.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    pAVar4->onMoveCallbackData = (void *)0x0;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0);
  return;
}

// `scalar_deleting_destructor' @ 14c5f80e0

void * __thiscall
BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f8120

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f8160

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_ArchiveSizeIsRelativeToOffset_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f81a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_LittleEndianDataSerialization_Test::TestBody
          (BinaryOutputArchiveTest_LittleEndianDataSerialization_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  size_t _Size;
  uchar *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  undefined1 auStackY_f8 [32];
  Message local_c8;
  AssertHelper local_c0;
  FakeStream local_b8;
  AssertionResult local_98;
  undefined8 *****local_88;
  undefined8 local_80;
  FakeStream *local_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  _Bxty local_50;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar15 = 0;
  local_c8.ss_._Mypair._Myval2._0_4_ = 0x4d2;
  local_88 = &local_88;
  local_b8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_78 = &local_b8;
  local_b8.position = 0;
  local_80 = 0;
  local_b8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_b8.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_b8,(char *)&local_c8,4);
  _Size = (longlong)local_b8.data._Mypair._Myval2._Mylast -
          (longlong)local_b8.data._Mypair._Myval2._Myfirst;
  local_c8.ss_._Mypair._Myval2._0_4_ = 0x4d2;
  local_b8.position = 0;
  if (4 < _Size) {
    _Size = 4;
  }
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_c0,local_b8.data._Mypair._Myval2._Myfirst,_Size);
    local_b8.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar16 = (uchar *)((longlong)&local_c8.ss_._Mypair._Myval2 + uVar15);
    puVar14 = (uchar *)((longlong)&local_c0.data_ + uVar15);
    if (*puVar14 == *puVar16) {
      testing::AssertionSuccess(&local_98);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_50,puVar16,puVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_70,puVar14,puVar16);
      testing::internal::EqFailure(&local_98,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_58) {
        pvVar2 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
        uVar13 = uStack_58 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_58 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5f83c1;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_70._Buf[0] = '\0';
      local_60 = uVar4;
      uStack_58 = uVar3;
      if (0xf < local_38) {
        uVar13 = local_38 + 1;
        uVar10 = local_50._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_50._Ptr + -8);
          uVar13 = local_38 + 0x28;
          if ((char *)0x1f < local_50._Ptr + (-8 - uVar10)) {
LAB_14c5f83c1:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
    if (local_98.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_c8);
      if (local_98.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_98.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_98.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_c0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x8d,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_c0);
      plVar1 = (longlong *)
               CONCAT44(local_c8.ss_._Mypair._Myval2._4_4_,local_c8.ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar12 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_98.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98.message_._Mypair._Myval2);
        ::operator_delete((void *)local_98.message_._Mypair._Myval2,0x20);
      }
      if (local_b8.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar13 = (longlong)local_b8.data._Mypair._Myval2._Myend -
               (longlong)local_b8.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_b8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_b8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5f84b5;
    }
    if (local_98.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
    if (3 < uVar15) {
      if (local_b8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar13 = (longlong)local_b8.data._Mypair._Myval2._Myend -
                 (longlong)local_b8.data._Mypair._Myval2._Myfirst;
        pcVar11 = local_b8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          pcVar11 = *(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8);
          if ((char *)0x1f <
              local_b8.data._Mypair._Myval2._Myfirst +
              (-8 - (longlong)*(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5f84b5:
        ::operator_delete(pcVar11,uVar13);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f84f0

void * __thiscall
BinaryOutputArchiveTest_LittleEndianDataSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_LittleEndianDataSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f8530

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_LittleEndianDataSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_LittleEndianDataSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_LittleEndianDataSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f8570

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_LittleEndianDataSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_LittleEndianDataSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_LittleEndianDataSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f85b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test::TestBody
          (BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  size_t _Size;
  uchar *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  undefined1 auStackY_f8 [32];
  Message local_c8;
  AssertHelper local_c0;
  FakeStream local_b8;
  AssertionResult local_98;
  undefined8 *****local_88;
  undefined8 local_80;
  FakeStream *local_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  _Bxty local_50;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar15 = 0;
  local_c8.ss_._Mypair._Myval2._0_4_ = 0xd2040000;
  local_88 = &local_88;
  local_b8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_78 = &local_b8;
  local_b8.position = 0;
  local_80 = 0;
  local_b8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_b8.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_b8,(char *)&local_c8,4);
  _Size = (longlong)local_b8.data._Mypair._Myval2._Mylast -
          (longlong)local_b8.data._Mypair._Myval2._Myfirst;
  local_c8.ss_._Mypair._Myval2._0_4_ = 0xd2040000;
  local_b8.position = 0;
  if (4 < _Size) {
    _Size = 4;
  }
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_c0,local_b8.data._Mypair._Myval2._Myfirst,_Size);
    local_b8.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar16 = (uchar *)((longlong)&local_c8.ss_._Mypair._Myval2 + uVar15);
    puVar14 = (uchar *)((longlong)&local_c0.data_ + uVar15);
    if (*puVar14 == *puVar16) {
      testing::AssertionSuccess(&local_98);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_50,puVar16,puVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_70,puVar14,puVar16);
      testing::internal::EqFailure(&local_98,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_58) {
        pvVar2 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
        uVar13 = uStack_58 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_58 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5f87d1;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_70._Buf[0] = '\0';
      local_60 = uVar4;
      uStack_58 = uVar3;
      if (0xf < local_38) {
        uVar13 = local_38 + 1;
        uVar10 = local_50._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_50._Ptr + -8);
          uVar13 = local_38 + 0x28;
          if ((char *)0x1f < local_50._Ptr + (-8 - uVar10)) {
LAB_14c5f87d1:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
    if (local_98.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_c8);
      if (local_98.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_98.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_98.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_c0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x9c,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_c0);
      plVar1 = (longlong *)
               CONCAT44(local_c8.ss_._Mypair._Myval2._4_4_,local_c8.ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar12 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_98.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98.message_._Mypair._Myval2);
        ::operator_delete((void *)local_98.message_._Mypair._Myval2,0x20);
      }
      if (local_b8.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar13 = (longlong)local_b8.data._Mypair._Myval2._Myend -
               (longlong)local_b8.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_b8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_b8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5f88c5;
    }
    if (local_98.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
    if (3 < uVar15) {
      if (local_b8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar13 = (longlong)local_b8.data._Mypair._Myval2._Myend -
                 (longlong)local_b8.data._Mypair._Myval2._Myfirst;
        pcVar11 = local_b8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          pcVar11 = *(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8);
          if ((char *)0x1f <
              local_b8.data._Mypair._Myval2._Myfirst +
              (-8 - (longlong)*(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5f88c5:
        ::operator_delete(pcVar11,uVar13);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f8900

void * __thiscall
BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f8940

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test__6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f8980

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_PrimitiveTypeSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f89c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_ComplexTypeSerialization_Test::TestBody
          (BinaryOutputArchiveTest_ComplexTypeSerialization_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  size_t _Size;
  uchar *puVar14;
  ulonglong uVar15;
  schar *psVar16;
  undefined1 auStackY_108 [32];
  ComplexType local_d8;
  AssertionResult local_c8;
  FakeStream local_b8;
  ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
  local_98;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  AssertHelper local_40 [2];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar15 = 0;
  local_d8.a = '\x7f';
  local_d8.b = 0xff;
  local_d8.c = 0x7fff;
  local_d8.e = 0x7fffffff;
  local_d8.d = 0xffff;
  local_98._padding_ = (longlong)&local_98;
  local_d8.f = 0xffffffff;
  local_98.stream = &local_b8;
  local_b8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_b8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_b8.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_b8.position = 0;
  local_98._padding_ = 0;
  terse::
  ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
  ::process<ComplexType>(&local_98,&local_d8);
  _Size = (longlong)local_b8.data._Mypair._Myval2._Mylast -
          (longlong)local_b8.data._Mypair._Myval2._Myfirst;
  local_d8.a = '\x7f';
  local_d8.b = 0xff;
  local_d8.c = -0x81;
  local_d8.d = 0xffff;
  local_d8._6_2_ = 0xff7f;
  local_d8.e = -1;
  local_d8.f = CONCAT22(local_d8.f._2_2_,0xffff);
  if (0xe < _Size) {
    _Size = 0xe;
  }
  local_b8.position = 0;
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_40,local_b8.data._Mypair._Myval2._Myfirst,_Size);
    local_b8.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    psVar16 = &local_d8.a + uVar15;
    puVar14 = (uchar *)((longlong)&local_40[0].data_ + uVar15);
    if (*puVar14 == *psVar16) {
      testing::AssertionSuccess(&local_c8);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_60,(uchar *)psVar16,puVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,puVar14,(uchar *)psVar16);
      testing::internal::EqFailure(&local_c8,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_68) {
        pvVar2 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
        uVar13 = uStack_68 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_68 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5f8c10;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_80._Buf[0] = '\0';
      local_70 = uVar4;
      uStack_68 = uVar3;
      if (0xf < local_48) {
        uVar13 = local_48 + 1;
        uVar10 = local_60._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_60._Ptr + -8);
          uVar13 = local_48 + 0x28;
          if ((char *)0x1f < local_60._Ptr + (-8 - uVar10)) {
LAB_14c5f8c10:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_d8);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_c8.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (local_40,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0xb2,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(local_40);
      plVar1 = (longlong *)CONCAT26(local_d8._6_2_,CONCAT24(local_d8.d,local_d8._0_4_));
      if (plVar1 != (longlong *)0x0) {
        puVar12 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_c8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
      }
      if (local_b8.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar13 = (longlong)local_b8.data._Mypair._Myval2._Myend -
               (longlong)local_b8.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_b8.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_b8.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5f8d04;
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
    if (0xd < uVar15) {
      if (local_b8.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar13 = (longlong)local_b8.data._Mypair._Myval2._Myend -
                 (longlong)local_b8.data._Mypair._Myval2._Myfirst;
        pcVar11 = local_b8.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          pcVar11 = *(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8);
          if ((char *)0x1f <
              local_b8.data._Mypair._Myval2._Myfirst +
              (-8 - (longlong)*(char **)(local_b8.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5f8d04:
        ::operator_delete(pcVar11,uVar13);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f8d40

void * __thiscall
BinaryOutputArchiveTest_ComplexTypeSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_ComplexTypeSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f8d80

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_ComplexTypeSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_ComplexTypeSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_ComplexTypeSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f8dc0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_ComplexTypeSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_ComplexTypeSerialization_Test> *this,uint param_1
          )

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_ComplexTypeSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f8e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_FreeSerialize_Test::TestBody
          (BinaryOutputArchiveTest_FreeSerialize_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  size_t _Size;
  uchar *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  undefined1 auStackY_f8 [32];
  Message local_c8;
  FakeStream local_c0;
  AssertionResult local_a0;
  undefined8 *****local_90;
  undefined8 local_88;
  FakeStream *local_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  AssertHelper local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar15 = 0;
  local_c8.ss_._Mypair._Myval2._0_2_ = 0xffff;
  local_c8.ss_._Mypair._Myval2._2_2_ = 0xffff;
  local_90 = &local_90;
  local_c0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_80 = &local_c0;
  local_c0.position = 0;
  local_88 = 0;
  local_c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_c0.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_c0,(char *)&local_c8,4);
  local_c8.ss_._Mypair._Myval2._0_2_ = 0xffff;
  tersetests::FakeStream::write((FakeStream *)local_90[2],(char *)&local_c8,2);
  _Size = (longlong)local_c0.data._Mypair._Myval2._Mylast -
          (longlong)local_c0.data._Mypair._Myval2._Myfirst;
  local_c8.ss_._Mypair._Myval2._0_2_ = 0xffff;
  local_c8.ss_._Mypair._Myval2._2_2_ = 0xffff;
  local_c8.ss_._Mypair._Myval2._4_2_ = 0xffff;
  local_c0.position = 0;
  if (6 < _Size) {
    _Size = 6;
  }
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_38,local_c0.data._Mypair._Myval2._Myfirst,_Size);
    local_c0.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar16 = (uchar *)((longlong)&local_c8.ss_._Mypair._Myval2 + uVar15);
    puVar14 = (uchar *)((longlong)&local_38.data_ + uVar15);
    if (*puVar14 == *puVar16) {
      testing::AssertionSuccess(&local_a0);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,puVar16,puVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar14,puVar16);
      testing::internal::EqFailure(&local_a0,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar13 = uStack_60 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5f9050;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar4;
      uStack_60 = uVar3;
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        uVar10 = local_58._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_58._Ptr + -8);
          uVar13 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar10)) {
LAB_14c5f9050:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
    if (local_a0.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_c8);
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
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_38,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0xc4,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_38);
      plVar1 = (longlong *)
               CONCAT26(local_c8.ss_._Mypair._Myval2._6_2_,
                        CONCAT24(local_c8.ss_._Mypair._Myval2._4_2_,
                                 CONCAT22(local_c8.ss_._Mypair._Myval2._2_2_,
                                          local_c8.ss_._Mypair._Myval2._0_2_)));
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
      if (local_c0.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar13 = (longlong)local_c0.data._Mypair._Myval2._Myend -
               (longlong)local_c0.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_c0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_c0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5f9144;
    }
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
    if (5 < uVar15) {
      if (local_c0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar13 = (longlong)local_c0.data._Mypair._Myval2._Myend -
                 (longlong)local_c0.data._Mypair._Myval2._Myfirst;
        pcVar11 = local_c0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          pcVar11 = *(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8);
          if ((char *)0x1f <
              local_c0.data._Mypair._Myval2._Myfirst +
              (-8 - (longlong)*(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5f9144:
        ::operator_delete(pcVar11,uVar13);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f9180

void * __thiscall
BinaryOutputArchiveTest_FreeSerialize_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_FreeSerialize_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f91c0

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_FreeSerialize_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_FreeSerialize_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_FreeSerialize_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f9200

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_FreeSerialize_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_FreeSerialize_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_FreeSerialize_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f9240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_FreeSave_Test::TestBody(BinaryOutputArchiveTest_FreeSave_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  size_t _Size;
  uchar *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  undefined1 auStackY_f8 [32];
  Message local_c8;
  FakeStream local_c0;
  AssertionResult local_a0;
  undefined8 *****local_90;
  undefined8 local_88;
  FakeStream *local_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  AssertHelper local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar15 = 0;
  local_c8.ss_._Mypair._Myval2._0_2_ = 0xffff;
  local_c8.ss_._Mypair._Myval2._2_2_ = 0xffff;
  local_90 = &local_90;
  local_c0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_80 = &local_c0;
  local_c0.position = 0;
  local_88 = 0;
  local_c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_c0.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_c0,(char *)&local_c8,4);
  local_c8.ss_._Mypair._Myval2._0_2_ = 0xffff;
  tersetests::FakeStream::write((FakeStream *)local_90[2],(char *)&local_c8,2);
  _Size = (longlong)local_c0.data._Mypair._Myval2._Mylast -
          (longlong)local_c0.data._Mypair._Myval2._Myfirst;
  local_c8.ss_._Mypair._Myval2._0_2_ = 0xffff;
  local_c8.ss_._Mypair._Myval2._2_2_ = 0xffff;
  local_c8.ss_._Mypair._Myval2._4_2_ = 0xffff;
  local_c0.position = 0;
  if (6 < _Size) {
    _Size = 6;
  }
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_38,local_c0.data._Mypair._Myval2._Myfirst,_Size);
    local_c0.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar16 = (uchar *)((longlong)&local_c8.ss_._Mypair._Myval2 + uVar15);
    puVar14 = (uchar *)((longlong)&local_38.data_ + uVar15);
    if (*puVar14 == *puVar16) {
      testing::AssertionSuccess(&local_a0);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,puVar16,puVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar14,puVar16);
      testing::internal::EqFailure(&local_a0,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar13 = uStack_60 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5f9490;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar4;
      uStack_60 = uVar3;
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        uVar10 = local_58._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_58._Ptr + -8);
          uVar13 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar10)) {
LAB_14c5f9490:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
    if (local_a0.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_c8);
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
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_38,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0xd6,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_38);
      plVar1 = (longlong *)
               CONCAT26(local_c8.ss_._Mypair._Myval2._6_2_,
                        CONCAT24(local_c8.ss_._Mypair._Myval2._4_2_,
                                 CONCAT22(local_c8.ss_._Mypair._Myval2._2_2_,
                                          local_c8.ss_._Mypair._Myval2._0_2_)));
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
      if (local_c0.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar13 = (longlong)local_c0.data._Mypair._Myval2._Myend -
               (longlong)local_c0.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_c0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_c0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5f9584;
    }
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
    if (5 < uVar15) {
      if (local_c0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar13 = (longlong)local_c0.data._Mypair._Myval2._Myend -
                 (longlong)local_c0.data._Mypair._Myval2._Myfirst;
        pcVar11 = local_c0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          pcVar11 = *(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8);
          if ((char *)0x1f <
              local_c0.data._Mypair._Myval2._Myfirst +
              (-8 - (longlong)*(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5f9584:
        ::operator_delete(pcVar11,uVar13);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f95c0

void * __thiscall
BinaryOutputArchiveTest_FreeSave_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_FreeSave_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f9600

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_FreeSave_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_FreeSave_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_FreeSave_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f9640

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_FreeSave_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_FreeSave_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_FreeSave_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f9680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_StringSerialization_Test::TestBody
          (BinaryOutputArchiveTest_StringSerialization_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong64 uVar14;
  size_t _Size;
  uchar *puVar15;
  ulonglong uVar16;
  uchar *puVar17;
  undefined1 auStackY_128 [32];
  Message local_f8;
  undefined4 local_f0;
  AssertionResult local_e8;
  FakeStream local_d8;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 *****local_98;
  undefined8 local_90;
  FakeStream *local_88;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  AssertHelper local_40 [2];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_40[0].data_._0_4_ = 0x8000000;
  uVar16 = 0;
  uStack_b0 = 0;
  local_d8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_b8 = &DAT_6867666564636261;
  local_98 = &local_98;
  local_d8.position = 0;
  local_88 = &local_d8;
  local_90 = 0;
  local_a8 = ___xmm_000000000000000f0000000000000008;
  uStack_a0 = _UNK_15289cb58;
  local_d8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_d8.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_d8,(char *)local_40,4);
  tersetests::FakeStream::write(local_88,(char *)&local_b8,8);
  _Size = (longlong)local_d8.data._Mypair._Myval2._Mylast -
          (longlong)local_d8.data._Mypair._Myval2._Myfirst;
  local_f8.ss_._Mypair._Myval2._0_4_ = 0x8000000;
  local_f8.ss_._Mypair._Myval2._4_4_ = 0x64636261;
  local_f0 = 0x68676665;
  if (0xc < _Size) {
    _Size = 0xc;
  }
  local_d8.position = 0;
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_40,local_d8.data._Mypair._Myval2._Myfirst,_Size);
    local_d8.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar17 = (uchar *)((longlong)&local_f8.ss_._Mypair._Myval2 + uVar16);
    puVar15 = (uchar *)((longlong)&local_40[0].data_ + uVar16);
    if (*puVar15 == *puVar17) {
      testing::AssertionSuccess(&local_e8);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_60,puVar17,puVar15);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,puVar15,puVar17);
      testing::internal::EqFailure(&local_e8,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_68) {
        pvVar2 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
        uVar14 = uStack_68 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar14) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar14 = uStack_68 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5f9911;
        }
        ::operator_delete(pvVar9,uVar14);
      }
      local_80._Buf[0] = '\0';
      local_70 = uVar4;
      uStack_68 = uVar3;
      if (0xf < local_48) {
        uVar14 = local_48 + 1;
        uVar10 = local_60._Ptr;
        if (0xfff < uVar14) {
          uVar10 = *(undefined8 *)(local_60._Ptr + -8);
          uVar14 = local_48 + 0x28;
          if ((char *)0x1f < local_60._Ptr + (-8 - uVar10)) {
LAB_14c5f9911:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar14);
      }
    }
    uVar5._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
    if (local_e8.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_f8);
      if (local_e8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_e8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_e8.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (local_40,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0xef,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(local_40);
      plVar1 = (longlong *)
               CONCAT44(local_f8.ss_._Mypair._Myval2._4_4_,local_f8.ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar12 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_e8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_e8.message_._Mypair._Myval2,0x20);
      }
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_d8.data);
      if (uStack_a0 < 0x10) {
        return;
      }
      uVar14 = uStack_a0 + 1;
      puVar13 = local_b8;
      if (0xfff < uVar14) {
        puVar13 = *(undefined1 **)(local_b8 + -8);
        uVar14 = uStack_a0 + 0x28;
        if ((undefined1 *)0x1f < local_b8 + (-8 - (longlong)puVar13)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5f9a15;
    }
    if (local_e8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar16 = uVar16 + 1;
    if (0xb < uVar16) {
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_d8.data);
      if (0xf < uStack_a0) {
        uVar14 = uStack_a0 + 1;
        puVar13 = local_b8;
        if (0xfff < uVar14) {
          uVar14 = uStack_a0 + 0x28;
          puVar13 = *(undefined1 **)(local_b8 + -8);
          if ((undefined1 *)0x1f < local_b8 + (-8 - (longlong)*(undefined1 **)(local_b8 + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5f9a15:
        ::operator_delete(puVar13,uVar14);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f9a50

void * __thiscall
BinaryOutputArchiveTest_StringSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_StringSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f9a90

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_StringSerialization_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_StringSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_StringSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f9ad0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_StringSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_StringSerialization_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_StringSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f9b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_BlobSerialization_Test::TestBody
          (BinaryOutputArchiveTest_BlobSerialization_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
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
  size_t _Size;
  uchar *puVar15;
  ulonglong uVar16;
  uchar *puVar17;
  undefined1 auStackY_168 [32];
  Message local_138;
  AssertHelper local_130;
  AssertionResult local_128;
  FakeStream local_118;
  AssertHelper local_f8;
  undefined8 *****local_f0;
  undefined8 local_e8;
  FakeStream *local_e0;
  undefined1 local_d8 [72];
  longlong *local_90;
  AssertHelperData *local_88;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::
           PolyAllocator<char,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar16 = 0;
  local_d8._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<char,8,pma::DefaultMemoryResource>::PolyAllocator<char,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_d8._8_8_ = 0;
  local_90 = (longlong *)0x0;
  local_88 = (AssertHelperData *)0x0;
  terse::DynArray<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_>::resize_uninitialized
            ((DynArray<char,pma::PolyAllocator<char,8,pma::DefaultMemoryResource>_> *)local_d8,4);
  memcpy(local_88,"abcd",local_d8._8_8_);
  local_f0 = &local_f0;
  local_e0 = &local_118;
  local_118.data._Mypair._Myval2._Myend = (char *)0x0;
  local_118.position = 0;
  local_e8 = 0;
  local_118.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_118.data._Mypair._Myval2._Mylast = (char *)0x0;
  if (local_d8._8_8_ != 0) {
    tersetests::FakeStream::write(&local_118,(char *)local_88,local_d8._8_8_);
  }
  _Size = (longlong)local_118.data._Mypair._Myval2._Mylast -
          (longlong)local_118.data._Mypair._Myval2._Myfirst;
  local_138.ss_._Mypair._Myval2._0_4_ = 0x64636261;
  local_118.position = 0;
  if (4 < _Size) {
    _Size = 4;
  }
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_130,local_118.data._Mypair._Myval2._Myfirst,_Size);
    local_118.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar17 = (uchar *)((longlong)&local_138.ss_._Mypair._Myval2 + uVar16);
    puVar15 = (uchar *)((longlong)&local_130.data_ + uVar16);
    if (*puVar15 == *puVar17) {
      testing::AssertionSuccess(&local_128);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,puVar17,puVar15);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar15,puVar17);
      testing::internal::EqFailure(&local_128,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar14 = uStack_60 + 1;
        pvVar10 = pvVar2;
        if (0xfff < uVar14) {
          pvVar10 = *(void **)((longlong)pvVar2 + -8);
          uVar14 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10))) goto LAB_14c5f9d7e;
        }
        ::operator_delete(pvVar10,uVar14);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar4;
      uStack_60 = uVar3;
      if (0xf < local_40) {
        uVar14 = local_40 + 1;
        uVar11 = local_58._Ptr;
        if (0xfff < uVar14) {
          uVar11 = *(undefined8 *)(local_58._Ptr + -8);
          uVar14 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar11)) {
LAB_14c5f9d7e:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar11,uVar14);
      }
    }
    uVar5._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
    if (local_128.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_138);
      if (local_128.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)local_128.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
          pcVar12 = *(char **)local_128.message_._Mypair._Myval2;
        }
      }
      pAVar9 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_130,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                          ,0x105,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar9,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_130);
      plVar1 = (longlong *)
               CONCAT44(local_138.ss_._Mypair._Myval2._4_4_,local_138.ss_._Mypair._Myval2._0_4_);
      if (plVar1 != (longlong *)0x0) {
        puVar13 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_128.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_128.message_._Mypair._Myval2);
        ::operator_delete((void *)local_128.message_._Mypair._Myval2,0x20);
      }
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_118.data);
      if (local_88 == (AssertHelperData *)0x0) goto LAB_14c5f9e5d;
      local_f8.data_ = local_88;
      if (local_90 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      pAVar9 = &local_f8;
      goto LAB_14c5f9e57;
    }
    if (local_128.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_128.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar16 = uVar16 + 1;
    if (3 < uVar16) {
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_118.data);
      if (local_88 != (AssertHelperData *)0x0) {
        local_130.data_ = local_88;
        if (local_90 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar9 = &local_130;
LAB_14c5f9e57:
        (**(code **)(*local_90 + 0x10))(local_90,pAVar9);
      }
LAB_14c5f9e5d:
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))(local_90,local_90 != (longlong *)(local_d8 + 0x10));
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5f9ef0

void * __thiscall
BinaryOutputArchiveTest_BlobSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_BlobSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5f9f30

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_BlobSerialization_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_BlobSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_BlobSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5f9f70

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_BlobSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_BlobSerialization_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_BlobSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5f9fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test::TestBody
          (BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test *this)

{
  uint uVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  uint *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  uint *puVar14;
  size_t _Size;
  uchar *puVar15;
  ulonglong uVar16;
  uchar *puVar17;
  undefined1 auStackY_128 [32];
  uchar local_f8 [24];
  AssertHelper local_e0;
  FakeStream local_d8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  undefined8 ***local_b0;
  undefined8 local_a8;
  FakeStream *local_a0;
  AssertionResult local_98;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  uchar local_48 [24];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_98._0_8_ = ___xmm_00010000000010000000010000000010;
  local_98.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289cb68;
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
  memmove(_Dst,&local_98,0x10);
  uVar16 = 0;
  local_e0.data_._0_4_ = 0x4000000;
  local_b0 = &local_b0;
  local_d8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_a0 = &local_d8;
  local_d8.position = 0;
  local_a8 = 0;
  local_d8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_d8.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_d8,(char *)&local_e0,4);
  for (puVar14 = _Dst; puVar14 != _Dst + 4; puVar14 = puVar14 + 1) {
    uVar1 = *puVar14;
    local_e0.data_._0_4_ =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    tersetests::FakeStream::write((FakeStream *)local_b0[2],(char *)&local_e0,4);
  }
  _Size = (longlong)local_d8.data._Mypair._Myval2._Mylast -
          (longlong)local_d8.data._Mypair._Myval2._Myfirst;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\x04';
  local_f8[4] = '\0';
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\x10';
  local_f8[8] = '\0';
  local_f8[9] = '\0';
  local_f8[10] = '\x01';
  local_f8[0xb] = '\0';
  if (0x14 < _Size) {
    _Size = 0x14;
  }
  local_f8[0xc] = '\0';
  local_f8[0xd] = '\0';
  local_f8[0xe] = '\x10';
  local_f8[0xf] = '\0';
  local_f8[0x10] = '\0';
  local_f8[0x11] = '\x01';
  local_f8[0x12] = '\0';
  local_f8[0x13] = '\0';
  local_d8.position = 0;
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_48,local_d8.data._Mypair._Myval2._Myfirst,_Size);
    local_d8.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar17 = local_f8 + uVar16;
    puVar15 = local_48 + uVar16;
    if (*puVar15 == *puVar17) {
      testing::AssertionSuccess(&local_98);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_68,puVar17,puVar15);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_88,puVar15,puVar17);
      testing::internal::EqFailure(&local_98,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_70) {
        pvVar2 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
        uVar13 = uStack_70 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_70 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5fa218;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_88._Buf[0] = '\0';
      local_78 = uVar4;
      uStack_70 = uVar3;
      if (0xf < local_50) {
        uVar13 = local_50 + 1;
        uVar10 = local_68._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_68._Ptr + -8);
          uVar13 = local_50 + 0x28;
          if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
LAB_14c5fa218:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
    if (local_98.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_b8);
      if (local_98.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_98.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_98.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_e0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x11a,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_e0);
      if (local_b8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)local_b8._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
      uVar5._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
      if (local_98.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
      }
      goto LAB_14c5fa2c9;
    }
    if (local_98.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar16 = uVar16 + 1;
    if (0x13 < uVar16) {
LAB_14c5fa2c9:
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_d8.data);
      if (_Dst != (uint *)0x0) {
        ::operator_delete(_Dst,0x10);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fa320

void * __thiscall
BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fa360

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fa3a0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfIntegerTypeSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fa3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test::TestBody
          (BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test *this)

{
  uint uVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  uint *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  uint *puVar14;
  size_t _Size;
  uchar *puVar15;
  ulonglong uVar16;
  uchar *puVar17;
  undefined1 auStackY_128 [32];
  uchar local_f8 [24];
  AssertHelper local_e0;
  FakeStream local_d8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  undefined8 ***local_b0;
  undefined8 local_a8;
  FakeStream *local_a0;
  AssertionResult local_98;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  uchar local_48 [24];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_98._0_8_ = ___xmm_3f3d70a43d4ccccd4048f5c33f99999a;
  local_98.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_15289c378;
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
  memmove(_Dst,&local_98,0x10);
  uVar16 = 0;
  local_e0.data_._0_4_ = 0x4000000;
  local_b0 = &local_b0;
  local_d8.data._Mypair._Myval2._Myend = (char *)0x0;
  local_a0 = &local_d8;
  local_d8.position = 0;
  local_a8 = 0;
  local_d8.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_d8.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_d8,(char *)&local_e0,4);
  for (puVar14 = _Dst; puVar14 != _Dst + 4; puVar14 = puVar14 + 1) {
    uVar1 = *puVar14;
    local_e0.data_._0_4_ =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    tersetests::FakeStream::write((FakeStream *)local_b0[2],(char *)&local_e0,4);
  }
  _Size = (longlong)local_d8.data._Mypair._Myval2._Mylast -
          (longlong)local_d8.data._Mypair._Myval2._Myfirst;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\x04';
  local_f8[4] = '?';
  local_f8[5] = 0x99;
  local_f8[6] = 0x99;
  local_f8[7] = 0x9a;
  local_f8[8] = '@';
  local_f8[9] = 'H';
  local_f8[10] = 0xf5;
  local_f8[0xb] = 0xc3;
  if (0x14 < _Size) {
    _Size = 0x14;
  }
  local_f8[0xc] = '=';
  local_f8[0xd] = 'L';
  local_f8[0xe] = 0xcc;
  local_f8[0xf] = 0xcd;
  local_f8[0x10] = '?';
  local_f8[0x11] = '=';
  local_f8[0x12] = 'p';
  local_f8[0x13] = 0xa4;
  local_d8.position = 0;
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_48,local_d8.data._Mypair._Myval2._Myfirst,_Size);
    local_d8.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar17 = local_f8 + uVar16;
    puVar15 = local_48 + uVar16;
    if (*puVar15 == *puVar17) {
      testing::AssertionSuccess(&local_98);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_68,puVar17,puVar15);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_88,puVar15,puVar17);
      testing::internal::EqFailure(&local_98,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_70) {
        pvVar2 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
        uVar13 = uStack_70 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_70 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5fa648;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_88._Buf[0] = '\0';
      local_78 = uVar4;
      uStack_70 = uVar3;
      if (0xf < local_50) {
        uVar13 = local_50 + 1;
        uVar10 = local_68._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_68._Ptr + -8);
          uVar13 = local_50 + 0x28;
          if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
LAB_14c5fa648:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
    if (local_98.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_b8);
      if (local_98.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_98.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_98.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_e0,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x12f,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_e0);
      if (local_b8._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)local_b8._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
      uVar5._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
      if (local_98.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_98.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
      }
      goto LAB_14c5fa6f9;
    }
    if (local_98.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_98.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar16 = uVar16 + 1;
    if (0x13 < uVar16) {
LAB_14c5fa6f9:
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_d8.data);
      if (_Dst != (uint *)0x0) {
        ::operator_delete(_Dst,0x10);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fa750

void * __thiscall
BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fa790

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fa7d0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfFloatTypeSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fa810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test::TestBody
          (BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test *this)

{
  undefined6 uVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  undefined8 *puVar7;
  ComplexType *_Dst;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *this_00;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong64 uVar14;
  ComplexType *pCVar15;
  size_t _Size;
  uchar *puVar16;
  ulonglong uVar17;
  uchar *puVar18;
  undefined1 auStackY_148 [32];
  Message local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  AssertHelper local_f8;
  AssertionResult local_f0;
  FakeStream local_e0;
  ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
  local_c0;
  _Bxty local_a8;
  undefined8 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulonglong local_70;
  uchar local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_118.ss_._Mypair._Myval2._0_4_ = 0x7fffff7f;
  local_118.ss_._Mypair._Myval2._4_2_ = 0xffff;
  uStack_110 = 0xffffffff7fffffff;
  puVar7 = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
  uVar1 = CONCAT24(local_118.ss_._Mypair._Myval2._4_2_,local_118.ss_._Mypair._Myval2._0_4_);
  local_118.ss_._Mypair._Myval2._0_4_ = 0x7fffff7f;
  local_118.ss_._Mypair._Myval2._4_2_ = 0xffff;
  *puVar7 = CONCAT26(local_118.ss_._Mypair._Myval2._6_2_,uVar1);
  puVar7[1] = uStack_110;
  uStack_110 = 0xffffffff7fffffff;
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
  _Dst[1].a = (char)local_118.ss_._Mypair._Myval2._0_4_;
  _Dst[1].b = (char)((uint)local_118.ss_._Mypair._Myval2._0_4_ >> 8);
  _Dst[1].c = (short)((uint)local_118.ss_._Mypair._Myval2._0_4_ >> 0x10);
  _Dst[1].d = local_118.ss_._Mypair._Myval2._4_2_;
  *(undefined2 *)&_Dst[1].field_0x6 = local_118.ss_._Mypair._Myval2._6_2_;
  _Dst[1].e = (undefined4)uStack_110;
  _Dst[1].f = uStack_110._4_4_;
  memmove(_Dst,puVar7,0x10);
  if (puVar7 != (undefined8 *)0x0) {
    ::operator_delete(puVar7,0x10);
  }
  uVar17 = 0;
  local_c0._padding_ = (longlong)&local_c0;
  local_c0.stream = &local_e0;
  local_e0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_e0.position = 0;
  local_f8.data_._0_4_ = 0x2000000;
  local_c0._padding_ = 0;
  local_e0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_e0.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_e0,(char *)&local_f8,4);
  for (pCVar15 = _Dst; pCVar15 != _Dst + 2; pCVar15 = pCVar15 + 1) {
    terse::
    ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
    ::process<ComplexType>
              ((ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
                *)local_c0._padding_,pCVar15);
  }
  _Size = (longlong)local_e0.data._Mypair._Myval2._Mylast -
          (longlong)local_e0.data._Mypair._Myval2._Myfirst;
  local_118.ss_._Mypair._Myval2._0_4_ = 0x2000000;
  local_118.ss_._Mypair._Myval2._4_2_ = 0xff7f;
  local_118.ss_._Mypair._Myval2._6_2_ = 0xff7f;
  uStack_110 = 0xffffffffff7fffff;
  if (0x20 < _Size) {
    _Size = 0x20;
  }
  local_108 = 0xff7fffff;
  local_104 = 0xffffff7f;
  local_100 = 0xffffffffffffff7f;
  local_e0.position = 0;
  uVar4 = _UNK_15076add8;
  uVar5 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_68,local_e0.data._Mypair._Myval2._Myfirst,_Size);
    local_e0.position = _Size;
    uVar4 = _UNK_15076add8;
    uVar5 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar18 = (uchar *)((longlong)&local_118.ss_._Mypair._Myval2 + uVar17);
    puVar16 = local_68 + uVar17;
    if (*puVar16 == *puVar18) {
      testing::AssertionSuccess(&local_f0);
    }
    else {
      pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_88,puVar18,puVar16);
      pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_a8,puVar16,puVar18);
      testing::internal::EqFailure(&local_f0,"bytes[i]","expected[i]",pbVar9,pbVar8,false);
      if (0xf < uStack_90) {
        pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
        uVar14 = uStack_90 + 1;
        pvVar11 = pvVar3;
        if (0xfff < uVar14) {
          pvVar11 = *(void **)((longlong)pvVar3 + -8);
          uVar14 = uStack_90 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11))) goto LAB_14c5faac8;
        }
        ::operator_delete(pvVar11,uVar14);
      }
      local_a8._Buf[0] = '\0';
      local_98 = uVar5;
      uStack_90 = uVar4;
      if (0xf < local_70) {
        uVar14 = local_70 + 1;
        uVar12 = local_88._Ptr;
        if (0xfff < uVar14) {
          uVar12 = *(undefined8 *)(local_88._Ptr + -8);
          uVar14 = local_70 + 0x28;
          if ((char *)0x1f < local_88._Ptr + (-8 - uVar12)) {
LAB_14c5faac8:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar12,uVar14);
      }
    }
    uVar6._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
    if (local_f0.success_ == false) {
      pMVar10 = (Message *)testing::Message::Message(&local_118);
      if (local_f0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_f0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_f0.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_f8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x14e,pcVar13);
      testing::internal::AssertHelper::operator=(this_00,pMVar10);
      testing::internal::AssertHelper::~AssertHelper(&local_f8);
      plVar2 = (longlong *)
               CONCAT26(local_118.ss_._Mypair._Myval2._6_2_,
                        CONCAT24(local_118.ss_._Mypair._Myval2._4_2_,
                                 local_118.ss_._Mypair._Myval2._0_4_));
      if (plVar2 != (longlong *)0x0) {
        puVar7 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
        (**(code **)*puVar7)(puVar7,1);
      }
      if (local_f0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_f0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
      }
      goto LAB_14c5fab79;
    }
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    uVar17 = uVar17 + 1;
    if (0x1f < uVar17) {
LAB_14c5fab79:
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_e0.data);
      if (_Dst != (ComplexType *)0x0) {
        ::operator_delete(_Dst,0x20);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fabd0

void * __thiscall
BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fac10

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fac50

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfComplexTypeSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fac90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test::TestBody
          (BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test *this)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  Type *pTVar4;
  longlong lVar5;
  AssertHelper AVar6;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *pAVar11;
  void *pvVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  AssertHelperData *pAVar17;
  size_t _Size;
  uchar *puVar18;
  ulonglong uVar19;
  uchar *puVar20;
  undefined1 auStackY_1a8 [32];
  AssertHelper local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  AssertHelper local_158;
  AssertionResult local_150;
  FakeStream local_140;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_120;
  ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
  local_118;
  undefined1 local_f8 [72];
  longlong *local_b0;
  AssertHelperData *local_a8;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  uchar local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>::
           PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar19 = 0;
  local_f8._0_8_ =
       &`public:___cdecl_pma::impl::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f8._8_8_ = 0;
  local_b0 = (longlong *)0x0;
  local_a8 = (AssertHelperData *)0x0;
  terse::DynArray<ComplexType,pma::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>_>::
  resize_uninitialized
            ((DynArray<ComplexType,pma::PolyAllocator<ComplexType,8,pma::DefaultMemoryResource>_> *)
             local_f8,2);
  local_178.data_._0_6_ = 0xffff7fffff7f;
  AVar6.data_ = local_178.data_;
  local_178.data_._0_6_ = 0xffff00000000;
  local_178.data_._0_4_ = 0x7fffff7f;
  *(AssertHelperData **)local_a8 = AVar6.data_;
  local_a8->file = (char *)0xffffffff7fffffff;
  uStack_170 = 0xffffffff7fffffff;
  *(AssertHelperData **)&local_a8->line = local_178.data_;
  (local_a8->message)._Mypair._Myval2._Bx._Ptr = (char *)0xffffffff7fffffff;
  local_118._padding_ = (longlong)&local_118;
  local_140.data._Mypair._Myval2._Myend = (char *)0x0;
  local_118.stream = &local_140;
  local_158.data_._0_4_ =
       (uint)local_f8._8_4_ >> 0x18 | (local_f8._8_4_ & 0xff0000) >> 8 |
       (local_f8._8_4_ & 0xff00) << 8 | local_f8._8_4_ << 0x18;
  local_140.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_140.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_140.position = 0;
  local_118._padding_ = 0;
  tersetests::FakeStream::write(&local_140,(char *)&local_158,4);
  pTVar4 = &local_a8->type;
  lVar5 = local_f8._8_8_ * 4;
  for (pAVar17 = local_a8; pAVar17 != (AssertHelperData *)(pTVar4 + lVar5);
      pAVar17 = (AssertHelperData *)&pAVar17->line) {
    terse::
    ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
    ::process<ComplexType>
              ((ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
                *)local_118._padding_,(ComplexType *)pAVar17);
  }
  _Size = (longlong)local_140.data._Mypair._Myval2._Mylast -
          (longlong)local_140.data._Mypair._Myval2._Myfirst;
  local_178.data_ = (AssertHelperData *)&DAT_ff7fff7f02000000;
  uStack_170 = 0xffffffffff7fffff;
  if (0x20 < _Size) {
    _Size = 0x20;
  }
  local_168 = 0xff7fffff;
  local_164 = 0xffffff7f;
  local_160 = 0xffffffffffffff7f;
  local_140.position = 0;
  uVar2 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_58,local_140.data._Mypair._Myval2._Myfirst,_Size);
    local_140.position = _Size;
    uVar2 = _UNK_15076add8;
    uVar3 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar20 = (uchar *)((longlong)&local_178.data_ + uVar19);
    puVar18 = local_58 + uVar19;
    if (*puVar18 == *puVar20) {
      testing::AssertionSuccess(&local_150);
    }
    else {
      pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar20,puVar18);
      pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_98,puVar18,puVar20);
      testing::internal::EqFailure(&local_150,"bytes[i]","expected[i]",pbVar9,pbVar8,false);
      if (0xf < uStack_80) {
        pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        uVar16 = uStack_80 + 1;
        pvVar12 = pvVar1;
        if (0xfff < uVar16) {
          pvVar12 = *(void **)((longlong)pvVar1 + -8);
          uVar16 = uStack_80 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12))) goto LAB_14c5fafaa;
        }
        ::operator_delete(pvVar12,uVar16);
      }
      local_98._Buf[0] = '\0';
      local_88 = uVar3;
      uStack_80 = uVar2;
      if (0xf < local_60) {
        uVar16 = local_60 + 1;
        uVar13 = local_78._Ptr;
        if (0xfff < uVar16) {
          uVar13 = *(undefined8 *)(local_78._Ptr + -8);
          uVar16 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar13)) {
LAB_14c5fafaa:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar13,uVar16);
      }
    }
    uVar7._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
    if (local_150.success_ == false) {
      pMVar10 = (Message *)testing::Message::Message((Message *)&local_120);
      if (local_150.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar14 = "";
      }
      else {
        pcVar14 = (char *)local_150.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
          pcVar14 = *(char **)local_150.message_._Mypair._Myval2;
        }
      }
      pAVar11 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_158,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x16e,pcVar14);
      testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
      testing::internal::AssertHelper::~AssertHelper(&local_158);
      if (local_120._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar15 = (undefined8 *)
                  ((longlong)local_120._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_120._Mypair._Myval2 + 4));
        (**(code **)*puVar15)(puVar15,1);
      }
      if (local_150.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_150.message_._Mypair._Myval2);
        ::operator_delete((void *)local_150.message_._Mypair._Myval2,0x20);
      }
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_140.data);
      if (local_a8 == (AssertHelperData *)0x0) goto LAB_14c5fb085;
      local_178.data_ = local_a8;
      if (local_b0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      pAVar11 = &local_178;
      goto LAB_14c5fb07f;
    }
    if (local_150.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_150.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar7._Mypair._Myval2,0x20);
    }
    uVar19 = uVar19 + 1;
    if (0x1f < uVar19) {
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_140.data);
      if (local_a8 != (AssertHelperData *)0x0) {
        local_158.data_ = local_a8;
        if (local_b0 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar11 = &local_158;
LAB_14c5fb07f:
        (**(code **)(*local_b0 + 0x10))(local_b0,pAVar11);
      }
LAB_14c5fb085:
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x20))(local_b0,local_b0 != (longlong *)(local_f8 + 0x10));
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fb120

void * __thiscall
BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fb160

Test * __thiscall
testing::internal::
TestFactoryImpl<BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fb1a0

void * __thiscall
testing::internal::
TestFactoryImpl<BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_DynArrayOfPrimitiveStructSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fb1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_VectorOfStringSerialization_Test::TestBody
          (BinaryOutputArchiveTest_VectorOfStringSerialization_Test *this)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *******pppppppuVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  uint uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *this_00;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  _Bxty *p_Var16;
  size_t _Size;
  ulonglong uVar17;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  uchar *puVar18;
  uchar *puVar19;
  undefined1 auStackY_198 [32];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  AssertHelper local_148;
  AssertionResult local_140;
  FakeStream local_130;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_110;
  undefined8 *******local_108;
  undefined8 local_100;
  FakeStream *local_f8;
  _Bxty local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  _Bxty local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  _Bxty local_a8;
  undefined8 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulonglong local_70;
  uchar local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_d8 = ___xmm_000000000000000f0000000000000008;
  uStack_d0 = _UNK_15289cb58;
  local_e8._Ptr = &DAT_6867666564636261;
  local_e8._8_8_ = 0;
  local_c8._Ptr = &DAT_6867666564636261;
  local_c8._8_8_ = 0;
  local_b8 = ___xmm_000000000000000f0000000000000008;
  uStack_b0 = _UNK_15289cb58;
  pbVar7 = std::_Allocate<16,std::_Default_allocate_traits>(0x40);
  p_Var16 = &local_e8;
  this_01 = pbVar7;
  do {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (this_01,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)p_Var16);
    this_01 = this_01 + 1;
    p_Var16 = p_Var16 + 2;
  } while (p_Var16 != &local_a8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e8);
  uVar17 = 0;
  local_108 = &local_108;
  local_f8 = &local_130;
  local_130.data._Mypair._Myval2._Myend = (char *)0x0;
  local_130.position = 0;
  local_100 = 0;
  uVar6 = (uint)((longlong)this_01 - (longlong)pbVar7 >> 5);
  local_148.data_._0_4_ =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  local_130.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_130.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_130,(char *)&local_148,4);
  pppppppuVar4 = local_108;
  for (pbVar8 = pbVar7; local_108 = pppppppuVar4, pbVar8 != this_01; pbVar8 = pbVar8 + 1) {
    uVar6 = (uint)(pbVar8->_Mypair)._Myval2._Mysize;
    local_148.data_._0_4_ =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    tersetests::FakeStream::write((FakeStream *)pppppppuVar4[2],(char *)&local_148,4);
    uVar15 = (pbVar8->_Mypair)._Myval2._Mysize;
    if (uVar15 != 0) {
      pbVar9 = pbVar8;
      if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
        pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar8->_Mypair)._Myval2._Bx._Ptr;
      }
      tersetests::FakeStream::write((FakeStream *)pppppppuVar4[2],(char *)pbVar9,uVar15);
    }
    pppppppuVar4 = local_108;
  }
  _Size = (longlong)local_130.data._Mypair._Myval2._Mylast -
          (longlong)local_130.data._Mypair._Myval2._Myfirst;
  local_168 = 0x2000000;
  local_164 = 0x8000000;
  local_160 = 0x64636261;
  if (0x1c < _Size) {
    _Size = 0x1c;
  }
  local_15c = 0x68676665;
  local_158 = 0x8000000;
  local_154 = 0x64636261;
  local_150 = 0x68676665;
  local_130.position = 0;
  uVar2 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_68,local_130.data._Mypair._Myval2._Myfirst,_Size);
    local_130.position = _Size;
    uVar2 = _UNK_15076add8;
    uVar3 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar18 = (uchar *)((longlong)&local_168 + uVar17);
    puVar19 = local_68 + uVar17;
    if (*puVar19 == *puVar18) {
      testing::AssertionSuccess(&local_140);
    }
    else {
      pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_88,puVar18,puVar19);
      pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_a8,puVar19,puVar18);
      testing::internal::EqFailure(&local_140,"bytes[i]","expected[i]",pbVar9,pbVar8,false);
      if (0xf < uStack_90) {
        pvVar1 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
        uVar15 = uStack_90 + 1;
        pvVar11 = pvVar1;
        if (0xfff < uVar15) {
          pvVar11 = *(void **)((longlong)pvVar1 + -8);
          uVar15 = uStack_90 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar11))) goto LAB_14c5fb506;
        }
        ::operator_delete(pvVar11,uVar15);
      }
      local_a8._Buf[0] = '\0';
      local_98 = uVar3;
      uStack_90 = uVar2;
      if (0xf < local_70) {
        uVar15 = local_70 + 1;
        uVar12 = local_88._Ptr;
        if (0xfff < uVar15) {
          uVar12 = *(undefined8 *)(local_88._Ptr + -8);
          uVar15 = local_70 + 0x28;
          if ((char *)0x1f < local_88._Ptr + (-8 - uVar12)) {
LAB_14c5fb506:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar12,uVar15);
      }
    }
    uVar5._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
    if (local_140.success_ == false) {
      pMVar10 = (Message *)testing::Message::Message((Message *)&local_110);
      if (local_140.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)local_140.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_140.message_._Mypair._Myval2 + 0x18)) {
          pcVar13 = *(char **)local_140.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_148,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x183,pcVar13);
      testing::internal::AssertHelper::operator=(this_00,pMVar10);
      testing::internal::AssertHelper::~AssertHelper(&local_148);
      if (local_110._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar14 = (undefined8 *)
                  ((longlong)&(local_110._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_110._Myval2 + 4));
        (**(code **)*puVar14)(puVar14,1);
      }
      if (local_140.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_140.message_._Mypair._Myval2);
        ::operator_delete((void *)local_140.message_._Mypair._Myval2,0x20);
      }
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_130.data);
      pbVar8 = pbVar7;
      if (pbVar7 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      for (; pbVar8 != this_01; pbVar8 = pbVar8 + 1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar8);
      }
      goto LAB_14c5fb5e3;
    }
    if (local_140.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_140.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar17 = uVar17 + 1;
    if (0x1b < uVar17) {
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_130.data);
      pbVar8 = pbVar7;
      if (pbVar7 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      for (; pbVar8 != this_01; pbVar8 = pbVar8 + 1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar8);
      }
LAB_14c5fb5e3:
      ::operator_delete(pbVar7,0x40);
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fb630

void * __thiscall
BinaryOutputArchiveTest_VectorOfStringSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_VectorOfStringSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fb670

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfStringSerialization_Test>::
CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_VectorOfStringSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_VectorOfStringSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fb6b0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfStringSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfStringSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfStringSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fb6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test::TestBody
          (BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test *this)

{
  longlong ****pppplVar1;
  longlong ****pppplVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  uint uVar7;
  pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  *ppVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  Message *pMVar11;
  AssertHelper *this_00;
  void *pvVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  _String_val<std::_Simple_types<char>_> *p_Var16;
  ulong64 *puVar17;
  ulong64 uVar18;
  _Bxty *p_Var19;
  ulong64 *puVar20;
  size_t _Size;
  uchar *puVar21;
  pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  *this_01;
  ulonglong uVar22;
  uchar *puVar23;
  undefined1 auStackY_1e8 [32];
  uchar local_1b8 [40];
  AssertHelper local_190;
  AssertionResult local_188;
  FakeStream local_178;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_158;
  longlong ****local_150;
  undefined8 local_148;
  FakeStream *local_140;
  vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
  local_138;
  _Bxty local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  _Bxty local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  _Bxty local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  _Bxty local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  uchar local_58 [40];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_118._8_8_ = 0;
  local_f8._8_8_ = 0;
  local_118._Ptr = (char *)0x64636261;
  local_d8._8_8_ = 0;
  local_b8._8_8_ = 0;
  local_f8._Ptr = (char *)0x68676665;
  local_d8._Ptr = (char *)0x64636261;
  local_b8._Ptr = (char *)0x68676665;
  local_108 = ___xmm_000000000000000f0000000000000004;
  uStack_100 = _UNK_152874538;
  local_e8 = ___xmm_000000000000000f0000000000000004;
  uStack_e0 = _UNK_152874538;
  local_c8 = ___xmm_000000000000000f0000000000000004;
  uStack_c0 = _UNK_152874538;
  local_a8 = ___xmm_000000000000000f0000000000000004;
  uStack_a0 = _UNK_152874538;
  ppVar8 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  p_Var19 = &local_118;
  local_138._Mypair._Myval2._Myend = ppVar8 + 2;
  this_01 = ppVar8;
  local_138._Mypair._Myval2._Myfirst = ppVar8;
  do {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&this_01->first,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)p_Var19);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (p_Var19->_Buf + (longlong)ppVar8 + (0x20 - (longlong)&local_118)),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (local_118._Buf + -(longlong)ppVar8 +
               (longlong)
               &((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (p_Var19->_Buf + (longlong)ppVar8 + (0x20 - (longlong)&local_118)))->_Mypair));
    this_01 = this_01 + 1;
    p_Var19 = p_Var19 + 4;
  } while (p_Var19 != &local_98);
  local_138._Mypair._Myval2._Mylast = this_01;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_118);
  uVar22 = 0;
  local_150 = (longlong ****)&local_150;
  local_140 = &local_178;
  local_178.data._Mypair._Myval2._Myend = (char *)0x0;
  local_178.position = 0;
  local_148 = 0;
  uVar7 = (uint)((longlong)this_01 - (longlong)ppVar8 >> 6);
  local_190.data_._0_4_ =
       uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  local_178.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_178.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_178,(char *)&local_190,4);
  if (ppVar8 != this_01) {
    puVar20 = &(ppVar8->first)._Mypair._Myval2._Mysize;
    do {
      pppplVar2 = local_150;
      uVar7 = (uint)*puVar20;
      local_190.data_._0_4_ =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      pppplVar1 = (longlong ****)*local_150;
      tersetests::FakeStream::write((FakeStream *)pppplVar1[2],(char *)&local_190,4);
      if (*puVar20 != 0) {
        p_Var16 = (_String_val<std::_Simple_types<char>_> *)(puVar20 + -2);
        if (0xf < puVar20[1]) {
          p_Var16 = (_String_val<std::_Simple_types<char>_> *)(p_Var16->_Bx)._Ptr;
        }
        tersetests::FakeStream::write((FakeStream *)pppplVar1[2],(char *)p_Var16,*puVar20);
      }
      pppplVar2 = (longlong ****)*pppplVar2;
      uVar7 = (uint)puVar20[4];
      local_190.data_._0_4_ =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      tersetests::FakeStream::write((FakeStream *)pppplVar2[2],(char *)&local_190,4);
      if (puVar20[4] != 0) {
        puVar17 = puVar20 + 2;
        if (0xf < puVar20[5]) {
          puVar17 = (ulong64 *)*puVar17;
        }
        tersetests::FakeStream::write((FakeStream *)pppplVar2[2],(char *)puVar17,puVar20[4]);
      }
      ppVar8 = (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                *)(puVar20 + 6);
      puVar20 = puVar20 + 8;
    } while (ppVar8 != this_01);
  }
  _Size = (longlong)local_178.data._Mypair._Myval2._Mylast -
          (longlong)local_178.data._Mypair._Myval2._Myfirst;
  local_1b8[0] = '\0';
  local_1b8[1] = '\0';
  local_1b8[2] = '\0';
  local_1b8[3] = '\x02';
  local_1b8[4] = '\0';
  local_1b8[5] = '\0';
  local_1b8[6] = '\0';
  local_1b8[7] = '\x04';
  local_1b8[8] = 'a';
  local_1b8[9] = 'b';
  local_1b8[10] = 'c';
  local_1b8[0xb] = 'd';
  if (0x24 < _Size) {
    _Size = 0x24;
  }
  local_1b8[0xc] = '\0';
  local_1b8[0xd] = '\0';
  local_1b8[0xe] = '\0';
  local_1b8[0xf] = '\x04';
  local_1b8[0x10] = 'e';
  local_1b8[0x11] = 'f';
  local_1b8[0x12] = 'g';
  local_1b8[0x13] = 'h';
  local_1b8[0x14] = '\0';
  local_1b8[0x15] = '\0';
  local_1b8[0x16] = '\0';
  local_1b8[0x17] = '\x04';
  local_1b8[0x18] = 'a';
  local_1b8[0x19] = 'b';
  local_1b8[0x1a] = 'c';
  local_1b8[0x1b] = 'd';
  local_1b8[0x1c] = '\0';
  local_1b8[0x1d] = '\0';
  local_1b8[0x1e] = '\0';
  local_1b8[0x1f] = '\x04';
  local_1b8[0x20] = 'e';
  local_1b8[0x21] = 'f';
  local_1b8[0x22] = 'g';
  local_1b8[0x23] = 'h';
  local_178.position = 0;
  uVar4 = _UNK_15076add8;
  uVar5 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_58,local_178.data._Mypair._Myval2._Myfirst,_Size);
    local_178.position = _Size;
    uVar4 = _UNK_15076add8;
    uVar5 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar23 = local_1b8 + uVar22;
    puVar21 = local_58 + uVar22;
    if (*puVar21 == *puVar23) {
      testing::AssertionSuccess(&local_188);
    }
    else {
      pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar23,puVar21);
      pbVar10 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_98,puVar21,puVar23);
      testing::internal::EqFailure(&local_188,"bytes[i]","expected[i]",pbVar10,pbVar9,false);
      if (0xf < uStack_80) {
        pvVar3 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        uVar18 = uStack_80 + 1;
        pvVar12 = pvVar3;
        if (0xfff < uVar18) {
          pvVar12 = *(void **)((longlong)pvVar3 + -8);
          uVar18 = uStack_80 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar12))) goto LAB_14c5fbab5;
        }
        ::operator_delete(pvVar12,uVar18);
      }
      local_98._Buf[0] = '\0';
      local_88 = uVar5;
      uStack_80 = uVar4;
      if (0xf < local_60) {
        uVar18 = local_60 + 1;
        uVar13 = local_78._Ptr;
        if (0xfff < uVar18) {
          uVar13 = *(undefined8 *)(local_78._Ptr + -8);
          uVar18 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar13)) {
LAB_14c5fbab5:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar13,uVar18);
      }
    }
    uVar6._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
    if (local_188.success_ == false) {
      pMVar11 = (Message *)testing::Message::Message((Message *)&local_158);
      if (local_188.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar14 = "";
      }
      else {
        pcVar14 = (char *)local_188.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
          pcVar14 = *(char **)local_188.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_190,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x19d,pcVar14);
      testing::internal::AssertHelper::operator=(this_00,pMVar11);
      testing::internal::AssertHelper::~AssertHelper(&local_190);
      if (local_158._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar15 = (undefined8 *)
                  ((longlong)&(local_158._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_158._Myval2 + 4));
        (**(code **)*puVar15)(puVar15,1);
      }
      if (local_188.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_188.message_._Mypair._Myval2);
        ::operator_delete((void *)local_188.message_._Mypair._Myval2,0x20);
      }
      goto LAB_14c5fbb66;
    }
    if (local_188.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_188.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
    }
    uVar22 = uVar22 + 1;
    if (0x23 < uVar22) {
LAB_14c5fbb66:
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_178.data);
      std::
      vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
      ::_Tidy(&local_138);
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fbbc0

void * __thiscall
BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fbc00

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test>
::CreateTest(TestFactoryImpl<BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fbc40

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test>
::_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfPairOfStringsSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fbc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c5fc244) */
/* WARNING: Removing unreachable block (ram,0x00014c5fc259) */
/* WARNING: Removing unreachable block (ram,0x00014c5fc0f4) */
/* WARNING: Removing unreachable block (ram,0x00014c5fc10d) */
/* WARNING: Removing unreachable block (ram,0x00014c5fc26f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test::TestBody
          (BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test *this)

{
  ushort uVar1;
  void *pvVar2;
  ulong64 uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  uint uVar5;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar6;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *this_00;
  ushort *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  char *pcVar14;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar15;
  ulong64 uVar16;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar17;
  size_t _Size;
  ushort **ppuVar18;
  ulonglong uVar19;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *this_01;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar20;
  uchar *puVar21;
  uchar *puVar22;
  ulonglong uVar23;
  undefined1 auStackY_1a8 [32];
  uchar local_178 [32];
  AssertHelper local_158 [2];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_148;
  DefaultMemoryResource *local_128;
  ushort *local_120;
  ushort *local_118;
  ushort *puStack_110;
  undefined1 local_108 [16];
  ushort *puStack_f8;
  ushort *local_f0;
  size_t local_e8;
  AssertionResult local_e0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_c8;
  ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
  local_c0;
  undefined4 local_a8;
  undefined4 local_a4;
  _Bxty local_a0;
  ulong64 local_90;
  ulonglong uStack_88;
  _Bxty local_80;
  ulonglong local_68;
  uchar local_60 [32];
  ulonglong local_40;
  
  puVar11 = (ushort *)&local_a8;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
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
  local_a8 = 0x100004;
  local_a4 = 0x10000100;
  PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
          (**(code **)((longlong)
                       `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr + 8))
                    (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                      ::__l2::dmr,8,8);
  PVar20 = PVar6;
  do {
    uVar1 = *puVar11;
    puVar11 = puVar11 + 1;
    *(ushort *)PVar20 = uVar1;
    PVar20 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)((longlong)PVar20 + 2);
  } while ((_Bxty *)puVar11 != &local_a0);
  uVar23 = 0;
  local_148._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_148._Mypair._Myval2._Myfirst = (ushort *)0x0;
  uVar19 = (longlong)PVar20 - (longlong)PVar6 >> 1;
  local_148._Mypair._Myval2._Mylast = (ushort *)0x0;
  local_148._Mypair._Myval2._Myend = (ushort *)0x0;
  local_108._0_8_ = PVar6;
  if (uVar19 == 0) {
    local_128 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
    local_120 = (ushort *)0x0;
    local_118 = (ushort *)0x0;
    puStack_110 = (ushort *)0x0;
  }
  else {
    if (0x7fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
      std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      _Xlength();
    }
    local_148._Mypair._Myval2._Myfirst =
         (ushort *)
         (**(code **)((longlong)
                      `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                      ::__l2::dmr + 8))
                   (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                     ::__l2::dmr,uVar19 * 2,8);
    local_148._Mypair._Myval2._Myend = local_148._Mypair._Myval2._Myfirst + uVar19;
    local_148._Mypair._Myval2._Mylast = local_148._Mypair._Myval2._Myfirst;
    for (PVar15 = PVar6; PVar15 != PVar20;
        PVar15 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)((longlong)PVar15 + 2))
    {
      *local_148._Mypair._Myval2._Mylast = *(ushort *)PVar15;
      local_148._Mypair._Myval2._Mylast = local_148._Mypair._Myval2._Mylast + 1;
    }
    local_128 = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
    local_120 = (ushort *)0x0;
    local_118 = (ushort *)0x0;
    puStack_110 = (ushort *)0x0;
    local_120 = (ushort *)
                (**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,uVar19 * 2,8);
    puStack_110 = local_120 + uVar19;
    local_118 = local_120;
    for (; PVar6 != PVar20;
        PVar6 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)((longlong)PVar6 + 2)) {
      *local_118 = *(ushort *)PVar6;
      local_118 = local_118 + 1;
    }
  }
  pvVar7 = std::_Allocate<16,std::_Default_allocate_traits>(0x40);
  pvVar17 = &local_148;
  this_01 = pvVar7;
  do {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              (this_01,pvVar17);
    this_01 = this_01 + 1;
    pvVar17 = pvVar17 + 1;
  } while (pvVar17 !=
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)local_108);
  if (local_120 != (ushort *)0x0) {
    (**(code **)((longlong)*local_128 + 0x10))
              (local_128,local_120,((longlong)puStack_110 - (longlong)local_120 >> 1) * 2);
    local_120 = (ushort *)0x0;
    local_118 = (ushort *)0x0;
    puStack_110 = (ushort *)0x0;
  }
  if (local_148._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_148._Mypair._Myval1 + 0x10))
              (local_148._Mypair._Myval1,local_148._Mypair._Myval2._Myfirst,
               ((longlong)local_148._Mypair._Myval2._Myend -
                (longlong)local_148._Mypair._Myval2._Myfirst >> 1) * 2);
  }
  local_c0._padding_ = (longlong)&local_c0;
  local_f0 = (ushort *)0x0;
  local_c0.stream = (FakeStream *)(local_108 + 8);
  local_e8 = 0;
  local_c0._padding_ = 0;
  uVar5 = (uint)((longlong)this_01 - (longlong)pvVar7 >> 5);
  local_158[0].data_._0_4_ =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  local_108._8_8_ = (ushort *)0x0;
  puStack_f8 = (ushort *)0x0;
  tersetests::FakeStream::write((FakeStream *)(local_108 + 8),(char *)local_158,4);
  for (pvVar17 = pvVar7; pvVar17 != this_01; pvVar17 = pvVar17 + 1) {
    terse::
    ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
    ::process<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
              ((ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
                *)local_c0._padding_,pvVar17);
  }
  _Size = (longlong)puStack_f8 - local_108._8_8_;
  local_178[0] = '\0';
  local_178[1] = '\0';
  local_178[2] = '\0';
  local_178[3] = '\x02';
  local_178[4] = '\0';
  local_178[5] = '\0';
  local_178[6] = '\0';
  local_178[7] = '\x04';
  local_178[8] = '\0';
  local_178[9] = '\x04';
  local_178[10] = '\0';
  local_178[0xb] = '\x10';
  if (0x1c < _Size) {
    _Size = 0x1c;
  }
  local_178[0xc] = '\x01';
  local_178[0xd] = '\0';
  local_178[0xe] = '\x10';
  local_178[0xf] = '\0';
  local_178[0x10] = '\0';
  local_178[0x11] = '\0';
  local_178[0x12] = '\0';
  local_178[0x13] = '\x04';
  local_178[0x14] = '\0';
  local_178[0x15] = '\x04';
  local_178[0x16] = '\0';
  local_178[0x17] = '\x10';
  local_178[0x18] = '\x01';
  local_178[0x19] = '\0';
  local_178[0x1a] = '\x10';
  local_178[0x1b] = '\0';
  local_e8 = 0;
  uVar19 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_60,(void *)local_108._8_8_,_Size);
    local_e8 = _Size;
    uVar19 = _UNK_15076add8;
    uVar3 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar22 = local_178 + uVar23;
    puVar21 = local_60 + uVar23;
    if (*puVar21 == *puVar22) {
      testing::AssertionSuccess(&local_e0);
    }
    else {
      pbVar8 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,puVar22,puVar21);
      pbVar9 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_a0,puVar21,puVar22);
      testing::internal::EqFailure(&local_e0,"bytes[i]","expected[i]",pbVar9,pbVar8,false);
      if (0xf < uStack_88) {
        pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
        uVar16 = uStack_88 + 1;
        pvVar12 = pvVar2;
        if (0xfff < uVar16) {
          pvVar12 = *(void **)((longlong)pvVar2 + -8);
          uVar16 = uStack_88 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar12))) goto LAB_14c5fc126;
        }
        ::operator_delete(pvVar12,uVar16);
      }
      local_a0._Buf[0] = '\0';
      local_90 = uVar3;
      uStack_88 = uVar19;
      if (0xf < local_68) {
        uVar16 = local_68 + 1;
        uVar13 = local_80._Ptr;
        if (0xfff < uVar16) {
          uVar13 = *(undefined8 *)(local_80._Ptr + -8);
          uVar16 = local_68 + 0x28;
          if ((char *)0x1f < local_80._Ptr + (-8 - uVar13)) {
LAB_14c5fc126:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar13,uVar16);
      }
    }
    uVar4._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
    if (local_e0.success_ == false) {
      pMVar10 = (Message *)testing::Message::Message((Message *)&local_c8);
      if (local_e0.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar14 = "";
      }
      else {
        pcVar14 = (char *)local_e0.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
          pcVar14 = *(char **)local_e0.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (local_158,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x1b3,pcVar14);
      testing::internal::AssertHelper::operator=(this_00,pMVar10);
      testing::internal::AssertHelper::~AssertHelper(local_158);
      if (local_c8._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        (*(code *)**(undefined8 **)
                    ((longlong)&(local_c8._Myval2)->field_0x0 +
                    (longlong)*(int *)(*(longlong *)local_c8._Myval2 + 4)))();
      }
      if (local_e0.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_e0.message_._Mypair._Myval2);
        ::operator_delete((void *)local_e0.message_._Mypair._Myval2,0x20);
      }
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>
                ((vector<char,std::allocator<char>_> *)(local_108 + 8));
      if (pvVar7 == (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                     *)0x0) goto LAB_14c5fc27d;
      if (pvVar7 != this_01) {
        ppuVar18 = &(pvVar7->_Mypair)._Myval2._Myend;
        do {
          if (((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar18 + -2))->_Myfirst !=
              (ushort *)0x0) {
            (**(code **)(*(longlong *)ppuVar18[-3] + 0x10))();
            ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar18 + -2))->_Myfirst =
                 (ushort *)0x0;
            ppuVar18[-1] = (ushort *)0x0;
            *ppuVar18 = (ushort *)0x0;
          }
          pvVar17 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                     *)(ppuVar18 + 1);
          ppuVar18 = ppuVar18 + 4;
        } while (pvVar17 != this_01);
      }
      goto LAB_14c5fc272;
    }
    if (local_e0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_e0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar23 = uVar23 + 1;
    if (0x1b < uVar23) {
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>
                ((vector<char,std::allocator<char>_> *)(local_108 + 8));
      if (pvVar7 != (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                     *)0x0) {
        std::
        _Destroy_range<std::allocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
                  (pvVar7,this_01,
                   (allocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
                    *)&local_e0);
LAB_14c5fc272:
        ::operator_delete(pvVar7,0x40);
      }
LAB_14c5fc27d:
      if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_108._0_8_ !=
          (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
        (**(code **)((longlong)
                     `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                     ::__l2::dmr + 0x10))
                  (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr,local_108._0_8_,8);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fc320

void * __thiscall
BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test::
_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test *this,
          uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fc360

Test * __thiscall
testing::internal::
TestFactoryImpl<BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)&___7BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test__6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fc3a0

void * __thiscall
testing::internal::
TestFactoryImpl<BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_VectorOfVectorOfPrimitiveTypeSerialization_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fc3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_MixedNestedTypes_Test::TestBody
          (BinaryOutputArchiveTest_MixedNestedTypes_Test *this)

{
  Root *pRVar1;
  int iVar2;
  longlong ******pppppplVar3;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar4;
  longlong *****ppppplVar5;
  longlong ****pppplVar6;
  ushort *puVar7;
  longlong *plVar8;
  void *pvVar9;
  ushort uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  Root *pRVar17;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar18;
  longlong *******ppppppplVar19;
  longlong lVar20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar21;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar22;
  Message *pMVar23;
  AssertHelper *this_00;
  void *pvVar24;
  undefined8 uVar25;
  char *pcVar26;
  undefined8 *puVar27;
  _String_val<std::_Simple_types<char>_> *p_Var28;
  ulong64 uVar29;
  ushort *puVar30;
  size_t _Size;
  uchar *puVar31;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar32;
  ulonglong uVar33;
  uchar *puVar34;
  ulong64 *puVar35;
  undefined1 auStackY_2a8 [32];
  Message local_278 [2];
  Child local_268;
  Child local_228;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  MemoryResource local_198;
  vector<Root,pma::PolyAllocator<Root,8,pma::DefaultMemoryResource>_> local_190;
  AssertHelper local_170;
  AssertionResult local_168;
  FakeStream local_158;
  longlong *******local_138;
  undefined8 local_130;
  FakeStream *local_128;
  _Bxty local_118;
  undefined8 local_108;
  ulonglong uStack_100;
  vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_> local_f8;
  _Bxty local_d8;
  undefined8 local_c8;
  ulonglong uStack_c0;
  _Bxty local_b8;
  ulonglong local_a0;
  uchar local_98 [80];
  ulonglong local_48;
  
  uVar12 = _UNK_15076add8;
  uVar11 = ___xmm_000000000000000f0000000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_198 = (MemoryResource)&pma::AlignedMemoryResource::_vftable_;
  local_118._8_8_ = 0;
  local_118._Ptr = (char *)0x0;
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_108 = ___xmm_000000000000000f0000000000000000;
  uStack_100 = _UNK_15076add8;
  if ((*(int *)(lVar20 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<Child,8,pma::DefaultMemoryResource>::PolyAllocator<Child,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<Child,8,pma::DefaultMemoryResource>::PolyAllocator<Child,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<Child,8,pma::DefaultMemoryResource>::PolyAllocator<Child,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<Child,8,pma::DefaultMemoryResource>::
           PolyAllocator<Child,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<Child,8,pma::DefaultMemoryResource>::PolyAllocator<Child,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_f8._Mypair._Myval1 = (PolyAllocator<Child,8,pma::DefaultMemoryResource>)&local_198;
  local_f8._Mypair._Myval2._Myfirst = (Child *)0x0;
  local_f8._Mypair._Myval2._Mylast = (Child *)0x0;
  local_f8._Mypair._Myval2._Myend = (Child *)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_118,"root",4)
  ;
  Child::Child(&local_228,&local_198);
  local_278[0].ss_._Mypair._Myval2._0_2_ = 1;
  if (local_228.integers._Mypair._Myval2._Mylast == local_228.integers._Mypair._Myval2._Myend) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<unsigned_short>
              (&local_228.integers,local_228.integers._Mypair._Myval2._Mylast,(ushort *)local_278);
  }
  else {
    *local_228.integers._Mypair._Myval2._Mylast = 1;
    local_228.integers._Mypair._Myval2._Mylast = local_228.integers._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 2;
  if (local_228.integers._Mypair._Myval2._Mylast == local_228.integers._Mypair._Myval2._Myend) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<unsigned_short>
              (&local_228.integers,local_228.integers._Mypair._Myval2._Mylast,(ushort *)local_278);
  }
  else {
    *local_228.integers._Mypair._Myval2._Mylast = 2;
    local_228.integers._Mypair._Myval2._Mylast = local_228.integers._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 3;
  if (local_228.integers._Mypair._Myval2._Mylast == local_228.integers._Mypair._Myval2._Myend) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<unsigned_short>
              (&local_228.integers,local_228.integers._Mypair._Myval2._Mylast,(ushort *)local_278);
  }
  else {
    *local_228.integers._Mypair._Myval2._Mylast = 3;
    local_228.integers._Mypair._Myval2._Mylast = local_228.integers._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 0xd70a;
  local_278[0].ss_._Mypair._Myval2._2_2_ = 0x3c23;
  if (local_228.floats._Mypair._Myval2._Mylast == local_228.floats._Mypair._Myval2._Myend) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<float>
              (&local_228.floats,local_228.floats._Mypair._Myval2._Mylast,(float *)local_278);
  }
  else {
    *local_228.floats._Mypair._Myval2._Mylast = 0.01;
    local_228.floats._Mypair._Myval2._Mylast = local_228.floats._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 0x70a4;
  local_278[0].ss_._Mypair._Myval2._2_2_ = 0x3f7d;
  if (local_228.floats._Mypair._Myval2._Mylast == local_228.floats._Mypair._Myval2._Myend) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<float>
              (&local_228.floats,local_228.floats._Mypair._Myval2._Mylast,(float *)local_278);
  }
  else {
    *local_228.floats._Mypair._Myval2._Mylast = 0.99;
    local_228.floats._Mypair._Myval2._Mylast = local_228.floats._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 0xf5c3;
  local_278[0].ss_._Mypair._Myval2._2_2_ = 0x4048;
  if (local_228.floats._Mypair._Myval2._Mylast == local_228.floats._Mypair._Myval2._Myend) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<float>
              (&local_228.floats,local_228.floats._Mypair._Myval2._Mylast,(float *)local_278);
  }
  else {
    *local_228.floats._Mypair._Myval2._Mylast = 3.14;
    local_228.floats._Mypair._Myval2._Mylast = local_228.floats._Mypair._Myval2._Mylast + 1;
  }
  Child::Child(&local_268,&local_198);
  local_278[0].ss_._Mypair._Myval2._0_2_ = 1;
  if (local_268.integers._Mypair._Myval2._Mylast == local_268.integers._Mypair._Myval2._Myend) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<unsigned_short>
              (&local_268.integers,local_268.integers._Mypair._Myval2._Mylast,(ushort *)local_278);
  }
  else {
    *local_268.integers._Mypair._Myval2._Mylast = 1;
    local_268.integers._Mypair._Myval2._Mylast = local_268.integers._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 2;
  if (local_268.integers._Mypair._Myval2._Mylast == local_268.integers._Mypair._Myval2._Myend) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<unsigned_short>
              (&local_268.integers,local_268.integers._Mypair._Myval2._Mylast,(ushort *)local_278);
  }
  else {
    *local_268.integers._Mypair._Myval2._Mylast = 2;
    local_268.integers._Mypair._Myval2._Mylast = local_268.integers._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 3;
  if (local_268.integers._Mypair._Myval2._Mylast == local_268.integers._Mypair._Myval2._Myend) {
    std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<unsigned_short>
              (&local_268.integers,local_268.integers._Mypair._Myval2._Mylast,(ushort *)local_278);
  }
  else {
    *local_268.integers._Mypair._Myval2._Mylast = 3;
    local_268.integers._Mypair._Myval2._Mylast = local_268.integers._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 0xd70a;
  local_278[0].ss_._Mypair._Myval2._2_2_ = 0x3c23;
  if (local_268.floats._Mypair._Myval2._Mylast == local_268.floats._Mypair._Myval2._Myend) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<float>
              (&local_268.floats,local_268.floats._Mypair._Myval2._Mylast,(float *)local_278);
  }
  else {
    *local_268.floats._Mypair._Myval2._Mylast = 0.01;
    local_268.floats._Mypair._Myval2._Mylast = local_268.floats._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 0x70a4;
  local_278[0].ss_._Mypair._Myval2._2_2_ = 0x3f7d;
  if (local_268.floats._Mypair._Myval2._Mylast == local_268.floats._Mypair._Myval2._Myend) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<float>
              (&local_268.floats,local_268.floats._Mypair._Myval2._Mylast,(float *)local_278);
  }
  else {
    *local_268.floats._Mypair._Myval2._Mylast = 0.99;
    local_268.floats._Mypair._Myval2._Mylast = local_268.floats._Mypair._Myval2._Mylast + 1;
  }
  local_278[0].ss_._Mypair._Myval2._0_2_ = 0xf5c3;
  local_278[0].ss_._Mypair._Myval2._2_2_ = 0x4048;
  if (local_268.floats._Mypair._Myval2._Mylast == local_268.floats._Mypair._Myval2._Myend) {
    std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<float>
              (&local_268.floats,local_268.floats._Mypair._Myval2._Mylast,(float *)local_278);
  }
  else {
    *local_268.floats._Mypair._Myval2._Mylast = 3.14;
    local_268.floats._Mypair._Myval2._Mylast = local_268.floats._Mypair._Myval2._Mylast + 1;
  }
  pfVar16 = local_228.floats._Mypair._Myval2._Myend;
  pfVar15 = local_228.floats._Mypair._Myval2._Mylast;
  pfVar14 = local_228.floats._Mypair._Myval2._Myfirst;
  puVar13 = local_228.integers._Mypair._Myval2._Myend;
  puVar30 = local_228.integers._Mypair._Myval2._Mylast;
  puVar7 = local_228.integers._Mypair._Myval2._Myfirst;
  if (local_f8._Mypair._Myval2._Mylast == local_f8._Mypair._Myval2._Myend) {
    std::vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<Child>(&local_f8,local_f8._Mypair._Myval2._Mylast,&local_228);
  }
  else {
    local_228.integers._Mypair._Myval2._Myend = (ushort *)0x0;
    local_228.integers._Mypair._Myval2._Mylast = (ushort *)0x0;
    local_228.integers._Mypair._Myval2._Myfirst = (ushort *)0x0;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval1 =
         local_228.integers._Mypair._Myval1;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval2._Myfirst = puVar7;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval2._Mylast = puVar30;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval2._Myend = puVar13;
    local_228.floats._Mypair._Myval2._Myend = (float *)0x0;
    local_228.floats._Mypair._Myval2._Mylast = (float *)0x0;
    local_228.floats._Mypair._Myval2._Myfirst = (float *)0x0;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval1 = local_228.floats._Mypair._Myval1;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval2._Myfirst = pfVar14;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval2._Mylast = pfVar15;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval2._Myend = pfVar16;
    local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Mylast + 1;
  }
  pfVar16 = local_268.floats._Mypair._Myval2._Myend;
  pfVar15 = local_268.floats._Mypair._Myval2._Mylast;
  pfVar14 = local_268.floats._Mypair._Myval2._Myfirst;
  puVar13 = local_268.integers._Mypair._Myval2._Myend;
  puVar30 = local_268.integers._Mypair._Myval2._Mylast;
  puVar7 = local_268.integers._Mypair._Myval2._Myfirst;
  if (local_f8._Mypair._Myval2._Mylast == local_f8._Mypair._Myval2._Myend) {
    std::vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>::
    _Emplace_reallocate<Child>(&local_f8,local_f8._Mypair._Myval2._Mylast,&local_268);
  }
  else {
    local_268.integers._Mypair._Myval2._Myend = (ushort *)0x0;
    local_268.integers._Mypair._Myval2._Mylast = (ushort *)0x0;
    local_268.integers._Mypair._Myval2._Myfirst = (ushort *)0x0;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval1 =
         local_268.integers._Mypair._Myval1;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval2._Myfirst = puVar7;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval2._Mylast = puVar30;
    ((local_f8._Mypair._Myval2._Mylast)->integers)._Mypair._Myval2._Myend = puVar13;
    local_268.floats._Mypair._Myval2._Myend = (float *)0x0;
    local_268.floats._Mypair._Myval2._Mylast = (float *)0x0;
    local_268.floats._Mypair._Myval2._Myfirst = (float *)0x0;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval1 = local_268.floats._Mypair._Myval1;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval2._Myfirst = pfVar14;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval2._Mylast = pfVar15;
    ((local_f8._Mypair._Myval2._Mylast)->floats)._Mypair._Myval2._Myend = pfVar16;
    local_f8._Mypair._Myval2._Mylast = local_f8._Mypair._Myval2._Mylast + 1;
  }
  if ((*(int *)(lVar20 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<Root,8,pma::DefaultMemoryResource>::PolyAllocator<Root,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<Root,8,pma::DefaultMemoryResource>::PolyAllocator<Root,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<Root,8,pma::DefaultMemoryResource>::PolyAllocator<Root,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<Root,8,pma::DefaultMemoryResource>::
           PolyAllocator<Root,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<Root,8,pma::DefaultMemoryResource>::PolyAllocator<Root,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_190._Mypair._Myval1 = (PolyAllocator<Root,8,pma::DefaultMemoryResource>)&local_198;
  local_190._Mypair._Myval2._Myend = (Root *)0x0;
  local_190._Mypair._Myval2._Myfirst = (Root *)0x0;
  local_190._Mypair._Myval2._Mylast = (Root *)0x0;
  std::vector<Root,pma::PolyAllocator<Root,8,pma::DefaultMemoryResource>_>::
  _Emplace_reallocate<Root>(&local_190,(Root *)0x0,(Root *)&local_118);
  local_138 = (longlong *******)&local_138;
  local_158.data._Mypair._Myval2._Myend = (char *)0x0;
  local_128 = &local_158;
  local_158.position = 0;
  lVar20 = (longlong)local_190._Mypair._Myval2._Mylast -
           (longlong)local_190._Mypair._Myval2._Myfirst >> 6;
  uVar10 = (ushort)((ulonglong)lVar20 >> 8);
  local_278[0].ss_._Mypair._Myval2._0_2_ =
       (ushort)(byte)((ulonglong)lVar20 >> 0x18) | uVar10 & 0xff00;
  local_278[0].ss_._Mypair._Myval2._2_2_ =
       uVar10 & 0xff | (ushort)((uint)((int)lVar20 << 0x18) >> 0x10);
  local_158.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_158.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_130 = 0;
  tersetests::FakeStream::write(&local_158,(char *)local_278,4);
  local_170.data_ = (AssertHelperData *)local_190._Mypair._Myval2._Mylast;
  if (local_190._Mypair._Myval2._Myfirst != local_190._Mypair._Myval2._Mylast) {
    puVar35 = &((local_190._Mypair._Myval2._Myfirst)->name)._Mypair._Myval2._Mysize;
    do {
      ppppppplVar19 = local_138;
      iVar2 = (int)*puVar35;
      uVar10 = (ushort)((uint)iVar2 >> 8);
      local_278[0].ss_._Mypair._Myval2._0_2_ = (ushort)(byte)((uint)iVar2 >> 0x18) | uVar10 & 0xff00
      ;
      local_278[0].ss_._Mypair._Myval2._2_2_ =
           uVar10 & 0xff | (ushort)((uint)(iVar2 << 0x18) >> 0x10);
      pppppplVar3 = *local_138;
      tersetests::FakeStream::write((FakeStream *)pppppplVar3[2],(char *)local_278,4);
      if (*puVar35 != 0) {
        p_Var28 = (_String_val<std::_Simple_types<char>_> *)(puVar35 + -2);
        if (0xf < puVar35[1]) {
          p_Var28 = (_String_val<std::_Simple_types<char>_> *)(p_Var28->_Bx)._Ptr;
        }
        tersetests::FakeStream::write((FakeStream *)pppppplVar3[2],(char *)p_Var28,*puVar35);
      }
      pppppplVar3 = *ppppppplVar19;
      lVar20 = (longlong)(puVar35[4] - puVar35[3]) >> 6;
      uVar10 = (ushort)((ulonglong)lVar20 >> 8);
      local_278[0].ss_._Mypair._Myval2._0_2_ =
           (ushort)(byte)((ulonglong)lVar20 >> 0x18) | uVar10 & 0xff00;
      local_278[0].ss_._Mypair._Myval2._2_2_ =
           uVar10 & 0xff | (ushort)((uint)((int)lVar20 << 0x18) >> 0x10);
      tersetests::FakeStream::write((FakeStream *)pppppplVar3[2],(char *)local_278,4);
      pvVar4 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)puVar35[4];
      for (pvVar32 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                      *)puVar35[3]; pvVar32 != pvVar4; pvVar32 = pvVar32 + 2) {
        ppppplVar5 = *pppppplVar3;
        terse::
        ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
        ::process<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  ((ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
                    *)*ppppplVar5,pvVar32);
        pppplVar6 = *ppppplVar5;
        lVar20 = (longlong)pvVar32[1]._Mypair._Myval2._Mylast -
                 (longlong)pvVar32[1]._Mypair._Myval2._Myfirst >> 2;
        uVar10 = (ushort)((ulonglong)lVar20 >> 8);
        local_278[0].ss_._Mypair._Myval2._0_2_ =
             (ushort)(byte)((ulonglong)lVar20 >> 0x18) | uVar10 & 0xff00;
        local_278[0].ss_._Mypair._Myval2._2_2_ =
             uVar10 & 0xff | (ushort)((uint)((int)lVar20 << 0x18) >> 0x10);
        tersetests::FakeStream::write((FakeStream *)pppplVar6[2],(char *)local_278,4);
        puVar7 = pvVar32[1]._Mypair._Myval2._Mylast;
        for (puVar30 = pvVar32[1]._Mypair._Myval2._Myfirst; puVar30 != puVar7; puVar30 = puVar30 + 2
            ) {
          iVar2 = *(int *)puVar30;
          uVar10 = (ushort)((uint)iVar2 >> 8);
          local_278[0].ss_._Mypair._Myval2._0_2_ =
               (ushort)(byte)((uint)iVar2 >> 0x18) | uVar10 & 0xff00;
          local_278[0].ss_._Mypair._Myval2._2_2_ =
               uVar10 & 0xff | (ushort)((uint)(iVar2 << 0x18) >> 0x10);
          tersetests::FakeStream::write((FakeStream *)(*pppplVar6)[2],(char *)local_278,4);
        }
      }
      pRVar1 = (Root *)(puVar35 + 6);
      puVar35 = puVar35 + 8;
    } while (pRVar1 != (Root *)local_170.data_);
  }
  uVar33 = 0;
  _Size = (longlong)local_158.data._Mypair._Myval2._Mylast -
          (longlong)local_158.data._Mypair._Myval2._Myfirst;
  local_1e8 = 0x1000000;
  local_1e4 = 0x4000000;
  local_1e0 = 0x746f6f72;
  if (0x44 < _Size) {
    _Size = 0x44;
  }
  local_1dc = 0x2000000;
  local_1d8 = 0x3000000;
  local_1d4 = 0x2000100;
  local_1d0 = 0x300;
  local_1cc = 0x233c0300;
  local_1c8 = 0x7d3f0ad7;
  local_1c4 = 0x4840a470;
  local_1c0 = 0xc3f5;
  local_1bc = 0x1000300;
  local_1b8 = 0x3000200;
  local_1b4 = 0x3000000;
  local_1b0 = 0xad7233c;
  local_1ac = 0xa4707d3f;
  local_1a8 = 0xc3f54840;
  local_158.position = 0;
  if (_Size != 0) {
    memcpy(local_98,local_158.data._Mypair._Myval2._Myfirst,_Size);
    local_158.position = _Size;
  }
LAB_14c5fcab0:
  puVar34 = (uchar *)((longlong)&local_1e8 + uVar33);
  puVar31 = local_98 + uVar33;
  if (*puVar31 == *puVar34) {
    testing::AssertionSuccess(&local_168);
  }
  else {
    pbVar21 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_b8,puVar34,puVar31);
    pbVar22 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_d8,puVar31,puVar34);
    testing::internal::EqFailure(&local_168,"bytes[i]","expected[i]",pbVar22,pbVar21,false);
    if (0xf < uStack_c0) {
      pvVar9 = (void *)CONCAT71(local_d8._1_7_,local_d8._Buf[0]);
      uVar29 = uStack_c0 + 1;
      pvVar24 = pvVar9;
      if (0xfff < uVar29) {
        pvVar24 = *(void **)((longlong)pvVar9 + -8);
        uVar29 = uStack_c0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar24))) goto LAB_14c5fcc26;
      }
      ::operator_delete(pvVar24,uVar29);
    }
    local_d8._Buf[0] = '\0';
    local_c8 = uVar11;
    uStack_c0 = uVar12;
    if (0xf < local_a0) {
      uVar29 = local_a0 + 1;
      uVar25 = local_b8._Ptr;
      if (0xfff < uVar29) {
        uVar25 = *(undefined8 *)(local_b8._Ptr + -8);
        uVar29 = local_a0 + 0x28;
        if ((char *)0x1f < local_b8._Ptr + (-8 - uVar25)) {
LAB_14c5fcc26:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar25,uVar29);
    }
  }
  uVar18._Mypair._Myval2 = local_168.message_._Mypair._Myval2;
  if (local_168.success_ != false) {
    if (local_168.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_168.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar18._Mypair._Myval2,0x20);
    }
    uVar33 = uVar33 + 1;
    if (0x43 < uVar33) goto code_r0x00014c5fcbe4;
    goto LAB_14c5fcab0;
  }
  pMVar23 = (Message *)testing::Message::Message(local_278);
  if (local_168.message_._Mypair._Myval2 ==
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pcVar26 = "";
  }
  else {
    pcVar26 = (char *)local_168.message_._Mypair._Myval2;
    if (0xf < *(ulong64 *)((longlong)local_168.message_._Mypair._Myval2 + 0x18)) {
      pcVar26 = *(char **)local_168.message_._Mypair._Myval2;
    }
  }
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_170,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                       ,0x1e7,pcVar26);
  testing::internal::AssertHelper::operator=(this_00,pMVar23);
  testing::internal::AssertHelper::~AssertHelper(&local_170);
  plVar8 = (longlong *)
           CONCAT44(local_278[0].ss_._Mypair._Myval2._4_4_,
                    CONCAT22(local_278[0].ss_._Mypair._Myval2._2_2_,
                             (ushort)local_278[0].ss_._Mypair._Myval2));
  if (plVar8 != (longlong *)0x0) {
    puVar27 = (undefined8 *)((longlong)*(int *)(*plVar8 + 4) + (longlong)plVar8);
    (**(code **)*puVar27)(puVar27,1);
  }
  if (local_168.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_168.message_._Mypair._Myval2);
    ::operator_delete((void *)local_168.message_._Mypair._Myval2,0x20);
  }
  std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_158.data);
  pRVar17 = local_190._Mypair._Myval2._Mylast;
  pRVar1 = local_190._Mypair._Myval2._Myfirst;
  if (local_190._Mypair._Myval2._Myfirst == (Root *)0x0) goto LAB_14c5fcd38;
  for (; pRVar1 != pRVar17; pRVar1 = pRVar1 + 1) {
    std::vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>::
    ~vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>(&pRVar1->children);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&pRVar1->name);
  }
LAB_14c5fcd0e:
  (**(code **)((longlong)*(MemoryResource *)local_190._Mypair._Myval1 + 0x10))
            (local_190._Mypair._Myval1,local_190._Mypair._Myval2._Myfirst,
             (longlong)local_190._Mypair._Myval2._Myend -
             (longlong)local_190._Mypair._Myval2._Myfirst & 0xffffffffffffffc0,8);
  local_190._Mypair._Myval2._Myend = (Root *)0x0;
  local_190._Mypair._Myval2._Myfirst = (Root *)0x0;
  local_190._Mypair._Myval2._Mylast = (Root *)0x0;
LAB_14c5fcd38:
  if (local_268.floats._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)local_268.floats._Mypair._Myval1 + 0x10))
              (local_268.floats._Mypair._Myval1,local_268.floats._Mypair._Myval2._Myfirst,
               (longlong)local_268.floats._Mypair._Myval2._Myend -
               (longlong)local_268.floats._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_268.floats._Mypair._Myval2._Myfirst = (float *)0x0;
    local_268.floats._Mypair._Myval2._Mylast = (float *)0x0;
    local_268.floats._Mypair._Myval2._Myend = (float *)0x0;
  }
  if (local_268.integers._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_268.integers._Mypair._Myval1 + 0x10))
              (local_268.integers._Mypair._Myval1,local_268.integers._Mypair._Myval2._Myfirst,
               ((longlong)local_268.integers._Mypair._Myval2._Myend -
                (longlong)local_268.integers._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_268.integers._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_268.integers._Mypair._Myval2._Mylast = (ushort *)0x0;
    local_268.integers._Mypair._Myval2._Myend = (ushort *)0x0;
  }
  if (local_228.floats._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)(*(longlong *)local_228.floats._Mypair._Myval1 + 0x10))
              (local_228.floats._Mypair._Myval1,local_228.floats._Mypair._Myval2._Myfirst,
               (longlong)local_228.floats._Mypair._Myval2._Myend -
               (longlong)local_228.floats._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_228.floats._Mypair._Myval2._Myfirst = (float *)0x0;
    local_228.floats._Mypair._Myval2._Mylast = (float *)0x0;
    local_228.floats._Mypair._Myval2._Myend = (float *)0x0;
  }
  if (local_228.integers._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_228.integers._Mypair._Myval1 + 0x10))
              (local_228.integers._Mypair._Myval1,local_228.integers._Mypair._Myval2._Myfirst,
               ((longlong)local_228.integers._Mypair._Myval2._Myend -
                (longlong)local_228.integers._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_228.integers._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_228.integers._Mypair._Myval2._Mylast = (ushort *)0x0;
    local_228.integers._Mypair._Myval2._Myend = (ushort *)0x0;
  }
  std::vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>::
  ~vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>(&local_f8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_118);
  pma::MemoryResource::~MemoryResource(&local_198);
  return;
code_r0x00014c5fcbe4:
  std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_158.data);
  pRVar17 = local_190._Mypair._Myval2._Mylast;
  pRVar1 = local_190._Mypair._Myval2._Myfirst;
  if (local_190._Mypair._Myval2._Myfirst == (Root *)0x0) goto LAB_14c5fcd38;
  for (; pRVar1 != pRVar17; pRVar1 = pRVar1 + 1) {
    std::vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>::
    ~vector<Child,pma::PolyAllocator<Child,8,pma::DefaultMemoryResource>_>(&pRVar1->children);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&pRVar1->name);
  }
  goto LAB_14c5fcd0e;
}

// `scalar_deleting_destructor' @ 14c5fced0

void * __thiscall
BinaryOutputArchiveTest_MixedNestedTypes_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_MixedNestedTypes_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fcf10

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_MixedNestedTypes_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_MixedNestedTypes_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_MixedNestedTypes_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fcf50

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_MixedNestedTypes_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_MixedNestedTypes_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_MixedNestedTypes_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fcf90

void __thiscall
BinaryOutputArchiveTest_AttachUserData_Test::TestBody
          (BinaryOutputArchiveTest_AttachUserData_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  char *pcVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined4 local_res10 [2];
  AssertHelper local_res18;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res20;
  AssertionResult local_68;
  undefined8 ***local_58;
  undefined4 *local_50;
  void **local_48;
  void *local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 local_28;
  
  local_58 = &local_58;
  local_48 = &local_40;
  local_res10[0] = 0;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_50 = (undefined4 *)0x0;
  testing::AssertionSuccess(&local_68);
  uVar1._Mypair._Myval2 = local_68.message_._Mypair._Myval2;
  if (local_68.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
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
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res18,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                        ,0x1ee,pcVar4);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res18);
    if (local_res20._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_res20._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
    if (local_68.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_68.message_._Mypair._Myval2);
      ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
    }
    if (local_40 == (void *)0x0) {
      return;
    }
    uVar7 = local_30 - (longlong)local_40;
    pvVar6 = local_40;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)local_40 + -8);
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_68.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_68.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
    }
    local_50 = local_res10;
    testing::AssertionSuccess(&local_68);
    if (local_68.success_ == false) {
      pMVar2 = (Message *)testing::Message::Message((Message *)&local_res20);
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
      pAVar3 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_res18,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                          ,0x1f0,pcVar4);
      testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
      testing::internal::AssertHelper::~AssertHelper(&local_res18);
      if (local_res20._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar5 = (undefined8 *)
                 ((longlong)&(local_res20._Myval2)->field_0x0 +
                 (longlong)*(int *)(*(longlong *)local_res20._Myval2 + 4));
        (**(code **)*puVar5)(puVar5,1);
      }
      if (local_68.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_68.message_._Mypair._Myval2);
        ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
      }
      if (local_40 == (void *)0x0) {
        return;
      }
      uVar7 = local_30 - (longlong)local_40;
      pvVar6 = local_40;
      if (0xfff < uVar7) {
        uVar7 = uVar7 + 0x27;
        pvVar6 = *(void **)((longlong)local_40 + -8);
        if (0x1f < (ulonglong)
                   ((longlong)local_40 + (-8 - (longlong)*(void **)((longlong)local_40 + -8)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      if (local_68.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_68.message_._Mypair._Myval2);
        ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
      }
      if (local_40 == (void *)0x0) {
        return;
      }
      uVar7 = local_30 - (longlong)local_40;
      pvVar6 = local_40;
      if (0xfff < uVar7) {
        uVar7 = uVar7 + 0x27;
        pvVar6 = *(void **)((longlong)local_40 + -8);
        if (0x1f < (ulonglong)
                   ((longlong)local_40 + (-8 - (longlong)*(void **)((longlong)local_40 + -8)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
  }
  ::operator_delete(pvVar6,uVar7);
  return;
}

// `scalar_deleting_destructor' @ 14c5fd260

void * __thiscall
BinaryOutputArchiveTest_AttachUserData_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_AttachUserData_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fd2a0

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_AttachUserData_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_AttachUserData_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_AttachUserData_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fd2e0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_AttachUserData_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_AttachUserData_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_AttachUserData_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fd320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_SaveVersionedType_Test::TestBody
          (BinaryOutputArchiveTest_SaveVersionedType_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  longlong *****ppppplVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  size_t _Size;
  ulonglong uVar15;
  uchar *puVar16;
  ulonglong uVar17;
  int iVar18;
  uchar *puVar19;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [2];
  Message local_d0;
  AssertionResult local_c8;
  uchar local_b8 [8];
  FakeStream local_b0;
  longlong *****local_90;
  undefined8 local_88;
  FakeStream *local_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  AssertHelper local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar17 = 0;
  local_d8[0] = 0xd2040000;
  local_90 = (longlong *****)&local_90;
  local_b0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_80 = &local_b0;
  local_b0.position = 0;
  local_88 = 0;
  local_b0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_b0.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_b0,(char *)local_d8,4);
  ppppplVar5 = local_90;
  local_d8[0] = 0xd2040000;
  tersetests::FakeStream::write((FakeStream *)(*local_90)[2],(char *)local_d8,4);
  local_d8[0] = CONCAT22(local_d8[0]._2_2_,0xff00);
  tersetests::FakeStream::write((FakeStream *)(*ppppplVar5)[2],(char *)local_d8,2);
  pcVar11 = local_b0.data._Mypair._Myval2._Myfirst;
  uVar14 = (longlong)local_b0.data._Mypair._Myval2._Mylast -
           (longlong)local_b0.data._Mypair._Myval2._Myfirst;
  local_d8[0] = 0xd2040000;
  local_d0.ss_._Mypair._Myval2._0_4_ = 0xd2040000;
  local_d0.ss_._Mypair._Myval2._4_2_ = 0xff00;
  uVar15 = uVar14;
  if (4 < uVar14) {
    uVar15 = 4;
  }
  local_b0.position = 0;
  if (uVar15 != 0) {
    memcpy(local_b8,local_b0.data._Mypair._Myval2._Myfirst,uVar15);
    local_b0.position = uVar15;
  }
  uVar13 = local_b0.position;
  _Size = uVar14 - local_b0.position;
  if (6 < _Size) {
    _Size = 6;
  }
  uVar14 = uVar17;
  uVar15 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_38,pcVar11 + local_b0.position,_Size);
    local_b0.position = _Size + uVar13;
    uVar15 = _UNK_15076add8;
    uVar3 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar19 = (uchar *)((longlong)local_d8 + uVar14);
    puVar16 = local_b8 + uVar14;
    if (*puVar16 == *puVar19) {
      testing::AssertionSuccess(&local_c8);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,puVar19,puVar16);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar16,puVar19);
      testing::internal::EqFailure(&local_c8,"bytesv1[i]","expectedv1[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar13 = uStack_60 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5fd5a4;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar3;
      uStack_60 = uVar15;
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        uVar10 = local_58._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_58._Ptr + -8);
          uVar13 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar10)) {
LAB_14c5fd5a4:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_d0);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_c8.message_._Mypair._Myval2;
        }
      }
      iVar18 = 0x204;
      goto LAB_14c5fd726;
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 4);
  do {
    puVar19 = (uchar *)((longlong)&local_d0.ss_._Mypair._Myval2 + uVar17);
    puVar16 = (uchar *)((longlong)&local_38.data_ + uVar17);
    if (*puVar16 == *puVar19) {
      testing::AssertionSuccess(&local_c8);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,puVar19,puVar16);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar16,puVar19);
      testing::internal::EqFailure(&local_c8,"bytesv2[i]","expectedv2[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar13 = uStack_60 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5fd6ac;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar3;
      uStack_60 = uVar15;
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        uVar10 = local_58._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_58._Ptr + -8);
          uVar13 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar10)) {
LAB_14c5fd6ac:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_d0);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_c8.message_._Mypair._Myval2;
          iVar18 = 0x205;
          goto LAB_14c5fd726;
        }
      }
      iVar18 = 0x205;
LAB_14c5fd726:
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_38,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,iVar18,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_38);
      plVar1 = (longlong *)
               CONCAT26(local_d0.ss_._Mypair._Myval2._6_2_,
                        CONCAT24(local_d0.ss_._Mypair._Myval2._4_2_,
                                 local_d0.ss_._Mypair._Myval2._0_4_));
      if (plVar1 != (longlong *)0x0) {
        puVar12 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_c8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
      }
LAB_14c5fd78f:
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_b0.data);
      return;
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar17 = uVar17 + 1;
    if (5 < uVar17) goto LAB_14c5fd78f;
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fd7d0

void * __thiscall
BinaryOutputArchiveTest_SaveVersionedType_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_SaveVersionedType_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fd810

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_SaveVersionedType_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_SaveVersionedType_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_SaveVersionedType_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fd850

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_SaveVersionedType_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_SaveVersionedType_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_SaveVersionedType_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fd890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_StreamInsertionOperator_Test::TestBody
          (BinaryOutputArchiveTest_StreamInsertionOperator_Test *this)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  size_t _Size;
  uchar *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  undefined1 auStackY_f8 [32];
  Message local_c8;
  FakeStream local_c0;
  AssertionResult local_a0;
  longlong *****local_90;
  undefined8 local_88;
  FakeStream *local_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  AssertHelper local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar15 = 0;
  local_c8.ss_._Mypair._Myval2._0_4_ = 0xd2040000;
  local_90 = (longlong *****)&local_90;
  local_c0.data._Mypair._Myval2._Myend = (char *)0x0;
  local_80 = &local_c0;
  local_c0.position = 0;
  local_88 = 0;
  local_c0.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_c0.data._Mypair._Myval2._Mylast = (char *)0x0;
  tersetests::FakeStream::write(&local_c0,(char *)&local_c8,4);
  local_c8.ss_._Mypair._Myval2._0_4_ = 0x2e160000;
  tersetests::FakeStream::write((FakeStream *)(*local_90)[2],(char *)&local_c8,4);
  _Size = (longlong)local_c0.data._Mypair._Myval2._Mylast -
          (longlong)local_c0.data._Mypair._Myval2._Myfirst;
  local_c8.ss_._Mypair._Myval2._0_4_ = 0xd2040000;
  local_c8.ss_._Mypair._Myval2._4_4_ = 0x2e160000;
  local_c0.position = 0;
  if (8 < _Size) {
    _Size = 8;
  }
  uVar3 = _UNK_15076add8;
  uVar4 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(&local_38,local_c0.data._Mypair._Myval2._Myfirst,_Size);
    local_c0.position = _Size;
    uVar3 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar16 = (uchar *)((longlong)&local_c8.ss_._Mypair._Myval2 + uVar15);
    puVar14 = (uchar *)((longlong)&local_38.data_ + uVar15);
    if (*puVar14 == *puVar16) {
      testing::AssertionSuccess(&local_a0);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,puVar16,puVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar14,puVar16);
      testing::internal::EqFailure(&local_a0,"bytes[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar13 = uStack_60 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c5fdae0;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar4;
      uStack_60 = uVar3;
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        uVar10 = local_58._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_58._Ptr + -8);
          uVar13 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar10)) {
LAB_14c5fdae0:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar5._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
    if (local_a0.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message(&local_c8);
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
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_38,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x2c,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper(&local_38);
      plVar1 = (longlong *)
               CONCAT44(local_c8.ss_._Mypair._Myval2._4_4_,local_c8.ss_._Mypair._Myval2._0_4_);
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
      if (local_c0.data._Mypair._Myval2._Myfirst == (char *)0x0) {
        return;
      }
      uVar13 = (longlong)local_c0.data._Mypair._Myval2._Myend -
               (longlong)local_c0.data._Mypair._Myval2._Myfirst;
      pcVar11 = local_c0.data._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pcVar11 = *(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8);
        uVar13 = uVar13 + 0x27;
        if ((char *)0x1f < local_c0.data._Mypair._Myval2._Myfirst + (-8 - (longlong)pcVar11)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14c5fdbd4;
    }
    if (local_a0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_a0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 1;
    if (7 < uVar15) {
      if (local_c0.data._Mypair._Myval2._Myfirst != (char *)0x0) {
        uVar13 = (longlong)local_c0.data._Mypair._Myval2._Myend -
                 (longlong)local_c0.data._Mypair._Myval2._Myfirst;
        pcVar11 = local_c0.data._Mypair._Myval2._Myfirst;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          pcVar11 = *(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8);
          if ((char *)0x1f <
              local_c0.data._Mypair._Myval2._Myfirst +
              (-8 - (longlong)*(char **)(local_c0.data._Mypair._Myval2._Myfirst + -8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
LAB_14c5fdbd4:
        ::operator_delete(pcVar11,uVar13);
      }
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fdc10

void * __thiscall
BinaryOutputArchiveTest_StreamInsertionOperator_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_StreamInsertionOperator_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fdc50

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_StreamInsertionOperator_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_StreamInsertionOperator_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_StreamInsertionOperator_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fdc90

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_StreamInsertionOperator_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_StreamInsertionOperator_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_StreamInsertionOperator_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5fdcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
BinaryOutputArchiveTest_ArchiveOffset_Test::TestBody
          (BinaryOutputArchiveTest_ArchiveOffset_Test *this)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 uVar3;
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
  size_t _Size;
  uchar *puVar13;
  ulonglong uVar14;
  uchar *puVar15;
  undefined1 auStackY_1f8 [32];
  AssertHelper local_1b8;
  uchar local_1b0 [40];
  AssertionResult local_188;
  FakeStream local_178;
  undefined1 local_158 [16];
  FakeStream *local_148;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_140;
  ArchiveOffset<unsigned_int> local_138;
  ArchiveOffset<unsigned_int> local_120;
  ArchiveOffset<unsigned_int> local_108;
  uint local_f0;
  char local_ec [4];
  _Bxty local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  Proxy local_c8;
  Proxy local_c0;
  int local_b8 [2];
  Proxy local_b0;
  int local_a8 [4];
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  uchar local_58 [40];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar14 = 0;
  local_d0 = 0xf;
  local_138.value = 0;
  local_e8._8_8_ = 0;
  local_c8.target = &local_138;
  local_120.position = 0;
  local_138.proxy = &local_c8;
  local_120.value = 0;
  local_c0.target = &local_120;
  local_108.position = 0;
  local_120.proxy = &local_c0;
  local_108.value = 0;
  local_b0.target = &local_108;
  local_108.proxy = &local_b0;
  local_158._0_8_ = local_158;
  local_148 = &local_178;
  local_f0 = 0x4d2;
  local_ec[0] = 'x';
  local_d8 = 4;
  local_e8._Ptr = (char *)0x64636261;
  local_b8[0] = 0x100;
  local_a8[0] = 0x400;
  local_178.data._Mypair._Myval2._Myfirst = (char *)0x0;
  local_178.data._Mypair._Myval2._Mylast = (char *)0x0;
  local_178.data._Mypair._Myval2._Myend = (char *)0x0;
  local_178.position = 0;
  local_158._8_8_ = (void *)0x0;
  local_138.position = 0;
  local_1b8.data_._0_4_ = 0;
  tersetests::FakeStream::write(&local_178,(char *)&local_1b8,4);
  local_1b8.data_._0_4_ = 0;
  local_120.position = *(ulong64 *)(*(longlong *)(local_158._0_8_ + 0x10) + 0x18);
  tersetests::FakeStream::write(*(FakeStream **)(local_158._0_8_ + 0x10),(char *)&local_1b8,4);
  local_1b8.data_._0_4_ = 0;
  local_108.position = *(ulong64 *)(*(longlong *)(local_158._0_8_ + 0x10) + 0x18);
  tersetests::FakeStream::write(*(FakeStream **)(local_158._0_8_ + 0x10),(char *)&local_1b8,4);
  local_1b8.data_._0_4_ =
       local_f0 >> 0x18 | (local_f0 & 0xff0000) >> 8 | (local_f0 & 0xff00) << 8 | local_f0 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)(local_158._0_8_ + 0x10),(char *)&local_1b8,4);
  terse::Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>::
  dispatch<char_&,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,int_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,int_&>
            ((Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>
              *)local_158,local_ec,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e8,&local_c8,
             &local_c0,local_b8,&local_b0,local_a8);
  _Size = (longlong)local_178.data._Mypair._Myval2._Mylast -
          (longlong)local_178.data._Mypair._Myval2._Myfirst;
  local_1b0[0] = '\0';
  local_1b0[1] = '\0';
  local_1b0[2] = '\0';
  local_1b0[3] = '\x19';
  local_1b0[4] = '\0';
  local_1b0[5] = '\0';
  local_1b0[6] = '\0';
  local_1b0[7] = '\x19';
  local_1b0[8] = '\0';
  local_1b0[9] = '\0';
  local_1b0[10] = '\0';
  local_1b0[0xb] = '\x1d';
  if (0x21 < _Size) {
    _Size = 0x21;
  }
  local_1b0[0xc] = '\0';
  local_1b0[0xd] = '\0';
  local_1b0[0xe] = '\x04';
  local_1b0[0xf] = 0xd2;
  local_1b0[0x10] = 'x';
  local_1b0[0x11] = '\0';
  local_1b0[0x12] = '\0';
  local_1b0[0x13] = '\0';
  local_1b0[0x14] = '\x04';
  local_1b0[0x15] = 'a';
  local_1b0[0x16] = 'b';
  local_1b0[0x17] = 'c';
  local_1b0[0x18] = 'd';
  local_1b0[0x19] = '\0';
  local_1b0[0x1a] = '\0';
  local_1b0[0x1b] = '\x01';
  local_1b0[0x1c] = '\0';
  local_1b0[0x1d] = '\0';
  local_1b0[0x1e] = '\0';
  local_1b0[0x1f] = '\x04';
  local_1b0[0x20] = 0;
  local_178.position = 0;
  uVar2 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  if (_Size != 0) {
    memcpy(local_58,local_178.data._Mypair._Myval2._Myfirst,_Size);
    local_178.position = _Size;
    uVar2 = _UNK_15076add8;
    uVar3 = ___xmm_000000000000000f0000000000000000;
  }
  do {
    puVar15 = local_1b0 + uVar14;
    puVar13 = local_58 + uVar14;
    if (*puVar13 == *puVar15) {
      testing::AssertionSuccess(&local_188);
    }
    else {
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,puVar15,puVar13);
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_98,puVar13,puVar15);
      testing::internal::EqFailure(&local_188,"bytes[i]","expected[i]",pbVar6,pbVar5,false);
      if (0xf < uStack_80) {
        pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
        uVar12 = uStack_80 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_80 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c5fe02b;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_98._Buf[0] = '\0';
      local_88 = uVar3;
      uStack_80 = uVar2;
      if (0xf < local_60) {
        uVar12 = local_60 + 1;
        uVar9 = local_78._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_78._Ptr + -8);
          uVar12 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar9)) {
LAB_14c5fe02b:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
    if (local_188.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_140);
      if (local_188.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_188.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_188.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_1b8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\archives\\binary\\TestBinaryOutputArchive.cpp"
                           ,0x4a,pcVar10);
      testing::internal::AssertHelper::operator=(this_00,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_1b8);
      if (local_140._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_140._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_140._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_188.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_188.message_._Mypair._Myval2);
        ::operator_delete((void *)local_188.message_._Mypair._Myval2,0x20);
      }
      goto LAB_14c5fe0dc;
    }
    if (local_188.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_188.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar14 = uVar14 + 1;
    if (0x20 < uVar14) {
LAB_14c5fe0dc:
      std::vector<char,std::allocator<char>_>::~vector<char,std::allocator<char>_>(&local_178.data);
      if (local_b0.target != (ArchiveOffset<unsigned_int> *)0x0) {
        (local_b0.target)->proxy = (Proxy *)0x0;
      }
      if (local_c0.target != (ArchiveOffset<unsigned_int> *)0x0) {
        (local_c0.target)->proxy = (Proxy *)0x0;
      }
      if (local_c8.target != (ArchiveOffset<unsigned_int> *)0x0) {
        (local_c8.target)->proxy = (Proxy *)0x0;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e8);
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c5fe150

void * __thiscall
BinaryOutputArchiveTest_ArchiveOffset_Test::_scalar_deleting_destructor_
          (BinaryOutputArchiveTest_ArchiveOffset_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5fe190

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_ArchiveOffset_Test>::CreateTest
          (TestFactoryImpl<BinaryOutputArchiveTest_ArchiveOffset_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7BinaryOutputArchiveTest_ArchiveOffset_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5fe1d0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryOutputArchiveTest_ArchiveOffset_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryOutputArchiveTest_ArchiveOffset_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryOutputArchiveTest_ArchiveOffset_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<unsigned_char,unsigned_char> @ 14c5fe210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<unsigned_char,unsigned_char>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,uchar *param_3,
          uchar *param_4)

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
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5fe326;
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
LAB_14c5fe326:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<unsigned_char,unsigned_char> @ 14c5fe370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<unsigned_char,unsigned_char>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,uchar *param_3,
          uchar *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5fe461;
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
LAB_14c5fe461:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<unsigned_char,unsigned_char> @ 14c5fe4b0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<unsigned_char,unsigned_char>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          uchar *param_1,uchar *param_2)

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
  PrintTo(*param_1,(basic_ostream<char,std::char_traits<char>_> *)local_118);
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

// _Destroy_range<std::allocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_> @ 14c5fe660

void __cdecl
std::
_Destroy_range<std::allocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *param_1,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_2,allocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
                   *param_3)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  ushort *puVar2;
  ushort **ppuVar3;
  
  if (param_1 != param_2) {
    ppuVar3 = &(param_1->_Mypair)._Myval2._Myend;
    do {
      puVar2 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar3 + -2))->_Myfirst;
      if (puVar2 != (ushort *)0x0) {
        (**(code **)(*(longlong *)ppuVar3[-3] + 0x10))
                  (ppuVar3[-3],puVar2,((longlong)*ppuVar3 - (longlong)puVar2 >> 1) * 2,8);
        ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar3 + -2))->_Myfirst =
             (ushort *)0x0;
        ppuVar3[-1] = (ushort *)0x0;
        *ppuVar3 = (ushort *)0x0;
      }
      pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)(ppuVar3 + 1);
      ppuVar3 = ppuVar3 + 4;
    } while (pvVar1 != param_2);
  }
  return;
}

// _Emplace_reallocate<unsigned_short> @ 14c5fe6e0

ushort * __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
_Emplace_reallocate<unsigned_short>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *this,ushort *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ushort *puVar2;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar3;
  ushort *puVar4;
  longlong lVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  
  puVar2 = (this->_Mypair)._Myval2._Myfirst;
  lVar10 = (longlong)param_1 - (longlong)puVar2 >> 1;
  lVar5 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar2 >> 1;
  if (lVar5 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar2 >> 1;
  uVar1 = lVar5 + 1;
  uVar8 = 0x7fffffffffffffff;
  if ((uVar7 <= 0x7fffffffffffffff - (uVar7 >> 1)) && (uVar8 = (uVar7 >> 1) + uVar7, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  PVar3 = (this->_Mypair)._Myval1;
  puVar6 = (ushort *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar8 * 2,8);
  puVar6[lVar10] = *param_2;
  puVar2 = (this->_Mypair)._Myval2._Mylast;
  puVar9 = (this->_Mypair)._Myval2._Myfirst;
  puVar4 = puVar6;
  if (param_1 == puVar2) {
    for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
      *puVar4 = *puVar9;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    for (; puVar9 != param_1; puVar9 = puVar9 + 1) {
      *puVar4 = *puVar9;
      puVar4 = puVar4 + 1;
    }
    puVar2 = (this->_Mypair)._Myval2._Mylast;
    if (param_1 != puVar2) {
      puVar9 = param_1;
      do {
        *(ushort *)((longlong)(puVar6 + lVar10) + (2 - (longlong)param_1) + (longlong)puVar9) =
             *puVar9;
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar2);
    }
  }
  puVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar2 != (ushort *)0x0) {
    PVar3 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar3 + 0x10))
              (PVar3,puVar2,((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar2 >> 1) * 2,8
              );
  }
  (this->_Mypair)._Myval2._Myfirst = puVar6;
  (this->_Mypair)._Myval2._Mylast = puVar6 + uVar1;
  (this->_Mypair)._Myval2._Myend = puVar6 + uVar8;
  return puVar6 + lVar10;
}

// _Emplace_reallocate<float> @ 14c5fe870

float * __thiscall
std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
_Emplace_reallocate<float>
          (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *this,
          float *param_1,float *param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  
  pfVar2 = (this->_Mypair)._Myval2._Myfirst;
  lVar10 = (longlong)param_1 - (longlong)pfVar2 >> 2;
  lVar5 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2;
  if (lVar5 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar2 >> 2;
  uVar1 = lVar5 + 1;
  uVar8 = 0x3fffffffffffffff;
  if ((uVar7 <= 0x3fffffffffffffff - (uVar7 >> 1)) && (uVar8 = (uVar7 >> 1) + uVar7, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  PVar3 = (this->_Mypair)._Myval1;
  pfVar6 = (float *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar8 * 4,8);
  pfVar6[lVar10] = *param_2;
  pfVar2 = (this->_Mypair)._Myval2._Mylast;
  pfVar9 = (this->_Mypair)._Myval2._Myfirst;
  pfVar4 = pfVar6;
  if (param_1 == pfVar2) {
    for (; pfVar9 != pfVar2; pfVar9 = pfVar9 + 1) {
      *pfVar4 = *pfVar9;
      pfVar4 = pfVar4 + 1;
    }
  }
  else {
    for (; pfVar9 != param_1; pfVar9 = pfVar9 + 1) {
      *pfVar4 = *pfVar9;
      pfVar4 = pfVar4 + 1;
    }
    pfVar2 = (this->_Mypair)._Myval2._Mylast;
    if (param_1 != pfVar2) {
      pfVar9 = param_1;
      do {
        *(float *)((longlong)(pfVar6 + lVar10) + (4 - (longlong)param_1) + (longlong)pfVar9) =
             *pfVar9;
        pfVar9 = pfVar9 + 1;
      } while (pfVar9 != pfVar2);
    }
  }
  pfVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar2 != (float *)0x0) {
    PVar3 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar3 + 0x10))
              (PVar3,pfVar2,
               (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar2 & 0xfffffffffffffffc,8);
  }
  (this->_Mypair)._Myval2._Myfirst = pfVar6;
  (this->_Mypair)._Myval2._Mylast = pfVar6 + uVar1;
  (this->_Mypair)._Myval2._Myend = pfVar6 + uVar8;
  return pfVar6 + lVar10;
}

// dispatch<char_&,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,int_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,int_&> @ 14c5fe9f0

void __thiscall
terse::Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>::
dispatch<char_&,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,int_&,terse::ArchiveOffset<unsigned_int>::Proxy_&,int_&>
          (Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>
           *this,char *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,Proxy *param_3,
          Proxy *param_4,int *param_5,Proxy *param_6,int *param_7)

{
  BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1> *pBVar1;
  ulong64 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_res8 [2];
  
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,*param_1);
  tersetests::FakeStream::write(*(FakeStream **)&this->impl->field_0x10,(char *)local_res8,1);
  pBVar1 = this->impl;
  uVar4 = (uint)(param_2->_Mypair)._Myval2._Mysize;
  local_res8[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)local_res8,4);
  uVar2 = (param_2->_Mypair)._Myval2._Mysize;
  if (uVar2 != 0) {
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)param_2,uVar2);
  }
  pBVar1 = this->impl;
  uVar3 = *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  uVar4 = (uint)uVar3;
  param_3->target->value = uVar4;
  *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = param_3->target->position;
  local_res8[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)local_res8,4);
  *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = uVar3;
  pBVar1 = this->impl;
  uVar3 = *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  uVar4 = (uint)uVar3;
  param_4->target->value = uVar4;
  *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = param_4->target->position;
  param_4._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)&param_4,4);
  *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = uVar3;
  uVar4 = *param_5;
  param_4._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&this->impl->field_0x10,(char *)&param_4,4);
  pBVar1 = this->impl;
  uVar3 = *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  uVar4 = (uint)uVar3;
  param_6->target->value = uVar4;
  *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = param_6->target->position;
  param_4._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)&param_4,4);
  *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = uVar3;
  uVar4 = *param_7;
  param_4._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&this->impl->field_0x10,(char *)&param_4,4);
  return;
}

// dispatch<unsigned_int_&,terse::ArchiveSize<unsigned_int,unsigned_int>_&,terse::ArchiveSize<unsigned_int,unsigned_int>_&,terse::Anchor<unsigned_int>_&,int_&,char_&,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_&,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_&,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy> @ 14c5febb0

void __thiscall
terse::Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>::
dispatch<unsigned_int_&,terse::ArchiveSize<unsigned_int,unsigned_int>_&,terse::ArchiveSize<unsigned_int,unsigned_int>_&,terse::Anchor<unsigned_int>_&,int_&,char_&,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_&,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_&,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy>
          (Archive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>
           *this,uint *param_1,ArchiveSize<unsigned_int,unsigned_int> *param_2,
          ArchiveSize<unsigned_int,unsigned_int> *param_3,Anchor<unsigned_int> *param_4,int *param_5
          ,char *param_6,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_7,
          Proxy *param_8,Proxy *param_9)

{
  BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1> *pBVar1;
  ulong64 uVar2;
  undefined8 uVar3;
  uint uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint local_res8 [2];
  
  uVar4 = *param_1;
  local_res8[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&this->impl->field_0x10,(char *)local_res8,4);
  pBVar1 = this->impl;
  param_2->position = *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  local_res8[0] = 0;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)local_res8,4);
  pBVar1 = this->impl;
  local_res8[0] = 0;
  param_3->position = *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)local_res8,4);
  param_4->value = *(uint *)(*(longlong *)&this->impl->field_0x10 + 0x18);
  uVar4 = *param_5;
  param_4._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&this->impl->field_0x10,(char *)&param_4,4);
  param_4._0_4_ = CONCAT31(param_4._1_3_,*param_6);
  tersetests::FakeStream::write(*(FakeStream **)&this->impl->field_0x10,(char *)&param_4,1);
  pbVar5 = param_7;
  pBVar1 = this->impl;
  uVar4 = (uint)(param_7->_Mypair)._Myval2._Mysize;
  param_4._0_4_ = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)&param_4,4);
  uVar2 = (pbVar5->_Mypair)._Myval2._Mysize;
  if (uVar2 != 0) {
    if (0xf < (pbVar5->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar5->_Mypair)._Myval2._Bx._Ptr;
    }
    tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)pbVar5,uVar2);
  }
  pBVar1 = this->impl;
  uVar3 = *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  uVar4 = (int)uVar3 - param_8->base->value;
  param_8->target->value = uVar4;
  param_4._0_4_ =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
  *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = param_8->target->position;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)&param_4,4);
  *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = uVar3;
  pBVar1 = this->impl;
  uVar3 = *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18);
  uVar4 = (int)uVar3 - param_9->base->value;
  param_9->target->value = uVar4;
  param_4._0_4_ =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
  *(ulong64 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = param_9->target->position;
  tersetests::FakeStream::write(*(FakeStream **)&pBVar1->field_0x10,(char *)&param_4,4);
  *(undefined8 *)(*(longlong *)&pBVar1->field_0x10 + 0x18) = uVar3;
  return;
}

// process<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> @ 14c5fed90

void __thiscall
terse::
ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
::process<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          (ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 local_res8;
  
  uVar2 = (uint)((longlong)(param_1->_Mypair)._Myval2._Mylast -
                 (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 1);
  local_res8 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  tersetests::FakeStream::write(this->stream,(char *)&local_res8,4);
  puVar1 = (param_1->_Mypair)._Myval2._Mylast;
  for (puVar3 = (param_1->_Mypair)._Myval2._Myfirst; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    uVar2 = local_res8 >> 0x10;
    local_res8 = CONCAT22((short)uVar2,*puVar3 >> 8 | *puVar3 << 8);
    tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)&local_res8,2);
  }
  return;
}

// process<ComplexType> @ 14c5fee30

void __thiscall
terse::
ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
::process<ComplexType>
          (ExtendableBinaryOutputArchive<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>,tersetests::FakeStream,unsigned_int,unsigned_int,1>
           *this,ComplexType *param_1)

{
  uint uVar1;
  uint local_res8 [2];
  
  local_res8[0]._0_1_ = param_1->a;
  tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)local_res8,1);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,param_1->b);
  tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)local_res8,1);
  local_res8[0]._0_2_ = (ushort)param_1->c >> 8 | param_1->c << 8;
  tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1->d >> 8 | param_1->d << 8);
  tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)local_res8,2);
  uVar1 = param_1->e;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)local_res8,4);
  uVar1 = param_1->f;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)(this->_padding_ + 0x10),(char *)local_res8,4);
  return;
}

// save<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_> @ 14c5fef20

void __cdecl
save<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>
          (BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1> *param_1,
          SerializableByFreeLoadSave *param_2)

{
  uint uVar1;
  uint local_res8 [2];
  
  uVar1 = param_2->a;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)(*(longlong *)param_1 + 0x10),(char *)local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_2->b >> 8 | param_2->b << 8);
  tersetests::FakeStream::write(*(FakeStream **)(*(longlong *)param_1 + 0x10),(char *)local_res8,2);
  return;
}

// serialize<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_> @ 14c5fef90

void __cdecl
serialize<terse::BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1>_>
          (BinaryOutputArchive<tersetests::FakeStream,unsigned_int,unsigned_int,1> *param_1,
          SerializableByFreeSerialize *param_2)

{
  uint uVar1;
  uint local_res8 [2];
  
  uVar1 = param_2->a;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  tersetests::FakeStream::write(*(FakeStream **)(*(longlong *)param_1 + 0x10),(char *)local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_2->b >> 8 | param_2->b << 8);
  tersetests::FakeStream::write(*(FakeStream **)(*(longlong *)param_1 + 0x10),(char *)local_res8,2);
  return;
}

// Child @ 14c5ff000

Child * __thiscall Child::Child(Child *this,MemoryResource *param_1)

{
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::
             PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  PVar1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)param_1;
  if (param_1 == (MemoryResource *)0x0) {
    PVar1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
            &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  }
  (this->integers)._Mypair._Myval1 = PVar1;
  (this->integers)._Mypair._Myval2._Myfirst = (ushort *)0x0;
  (this->integers)._Mypair._Myval2._Mylast = (ushort *)0x0;
  (this->integers)._Mypair._Myval2._Myend = (ushort *)0x0;
  if (*piVar2 < `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
             PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_1 == (MemoryResource *)0x0) {
    param_1 = (MemoryResource *)
              &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  }
  (this->floats)._Mypair._Myval1 = (PolyAllocator<float,8,pma::DefaultMemoryResource>)param_1;
  (this->floats)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->floats)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->floats)._Mypair._Myval2._Myend = (float *)0x0;
  return this;
}

// ~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c5ff120

void __thiscall
std::
pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
::
~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&this->second);
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&this->first);
  return;
}

// _Tidy @ 14c5ff150

void __thiscall
std::
vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
::_Tidy(vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
        *this)

{
  pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  *ppVar1;
  ulong64 uVar2;
  pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
  *ppVar3;
  
  ppVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (ppVar3 != (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                 *)0x0) {
    ppVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; ppVar3 != ppVar1; ppVar3 = ppVar3 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&ppVar3->second);
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&ppVar3->first);
    }
    ppVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppVar3 & 0xffffffffffffffc0;
    ppVar1 = ppVar3;
    if (0xfff < uVar2) {
      ppVar1 = (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                *)ppVar3[-1].second._Mypair._Myval2._Myres;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppVar3 + (-8 - (longlong)ppVar1))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppVar1,uVar2);
    (this->_Mypair)._Myval2._Myfirst =
         (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          *)0x0;
  }
  return;
}

