// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 31

// test_info_'' @ 14139c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ArchiveOffsetTest_MoveAfterTemporaryProxy_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VArchiveOffsetTest_MoveAfterTemporaryProxy_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                      ,0x4b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                      ,0x4b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x81;
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
  pcVar6[0x80] = ::s_C__Workspace_UnrealEngine_Engin[0x80];
  pcVar6[0x81] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000081;
  uStack_40 = _UNK_1528815f8;
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
  *(undefined2 *)(local_58._Ptr + 0x80) = *(undefined2 *)(pcVar6 + 0x80);
  local_38 = 0x4b;
  ArchiveOffsetTest_MoveAfterTemporaryProxy_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArchiveOffsetTest","MoveAfterTemporaryProxy",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139c3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ArchiveOffsetTest_MoveInstances_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VArchiveOffsetTest_MoveInstances_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                      ,0x39);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                      ,0x39);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x81;
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
  pcVar6[0x80] = ::s_C__Workspace_UnrealEngine_Engin[0x80];
  pcVar6[0x81] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000081;
  uStack_40 = _UNK_1528815f8;
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
  *(undefined2 *)(local_58._Ptr + 0x80) = *(undefined2 *)(pcVar6 + 0x80);
  local_38 = 0x39;
  ArchiveOffsetTest_MoveInstances_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArchiveOffsetTest","MoveInstances",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 14139c5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ArchiveOffsetTest_SwapInstances_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VArchiveOffsetTest_SwapInstances_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                      ,0x2a);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                      ,0x2a);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x81;
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
  pcVar6[0x80] = ::s_C__Workspace_UnrealEngine_Engin[0x80];
  pcVar6[0x81] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000081;
  uStack_40 = _UNK_1528815f8;
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
  *(undefined2 *)(local_58._Ptr + 0x80) = *(undefined2 *)(pcVar6 + 0x80);
  local_38 = 0x2a;
  ArchiveOffsetTest_SwapInstances_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArchiveOffsetTest","SwapInstances",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c60cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c60d011) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ArchiveOffsetTest_SwapInstances_Test::TestBody(ArchiveOffsetTest_SwapInstances_Test *this)

{
  void *pvVar1;
  Proxy *pPVar2;
  Proxy *pPVar3;
  undefined1 auVar4 [8];
  undefined1 auVar5 [8];
  Message *pMVar6;
  AssertHelper *pAVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  int iVar13;
  undefined1 auStackY_138 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_108;
  undefined1 local_100 [16];
  Proxy *local_f0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_e8;
  undefined1 local_e0 [16];
  Proxy *local_d0;
  ArchiveOffset<unsigned_int> local_c8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  Proxy *local_98;
  ArchiveOffset<unsigned_int> local_90;
  undefined1 local_78 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70;
  _Bxty local_50;
  Proxy *local_40;
  ArchiveOffset<unsigned_int> local_38;
  Proxy local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_78 = (undefined1  [8])local_a8;
  local_98 = (Proxy *)local_78;
  local_a8._0_8_ = 0;
  local_b0 = (undefined1  [8])local_e0;
  local_a8._8_4_ = 0;
  local_d0 = (Proxy *)local_b0;
  local_90.position = 0;
  local_90.value = 0;
  local_90.proxy = (Proxy *)0x0;
  local_e0._0_8_ = 0;
  local_e0._8_4_ = 0;
  local_c8.position = 0;
  local_c8.value = 0;
  local_c8.proxy = (Proxy *)0x0;
  ArchiveOffsetMoveTest::ArchiveOffsetMoveTest
            ((ArchiveOffsetMoveTest *)&local_50,(ArchiveOffsetMoveTest *)local_a8);
  local_f0 = local_98;
  if (local_98 != (Proxy *)0x0) {
    local_98->target = (ArchiveOffset<unsigned_int> *)local_100;
  }
  local_a8._0_8_ = local_e0._0_8_;
  local_a8._8_4_ = local_e0._8_4_;
  local_98 = local_d0;
  if (local_d0 != (Proxy *)0x0) {
    local_d0->target = (ArchiveOffset<unsigned_int> *)local_a8;
  }
  auVar5 = local_78;
  pPVar2 = local_90.proxy;
  auVar4 = local_b0;
  if (local_f0 != (Proxy *)0x0) {
    local_f0->target = (ArchiveOffset<unsigned_int> *)local_e0;
  }
  if (local_90.proxy != (Proxy *)0x0) {
    (local_90.proxy)->target = (ArchiveOffset<unsigned_int> *)local_100;
  }
  local_90.position = local_c8.position;
  local_90.value = local_c8.value;
  local_90.proxy = local_c8.proxy;
  if (local_c8.proxy != (Proxy *)0x0) {
    (local_c8.proxy)->target = &local_90;
  }
  local_c8.proxy = pPVar2;
  if (pPVar2 != (Proxy *)0x0) {
    pPVar2->target = &local_c8;
  }
  local_78 = (undefined1  [8])0x0;
  *(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
    **)((longlong)auVar5 + 0x10) = &local_108;
  local_b0 = local_78;
  local_78 = auVar4;
  local_d0 = local_f0;
  *(Proxy **)((longlong)auVar4 + 0x10) = (Proxy *)local_78;
  pPVar3 = local_c8.proxy;
  pPVar2 = local_d0;
  *(Proxy **)((longlong)auVar5 + 0x10) = (Proxy *)local_b0;
  if (local_b0 != (undefined1  [8])0x0) {
    *(Proxy **)((longlong)local_b0 + 0x10) = (Proxy *)0x0;
  }
  if (local_d0 != (Proxy *)0x0) {
    local_d0->target = (ArchiveOffset<unsigned_int> *)local_100;
  }
  local_e0._0_8_ = local_50._Ptr;
  local_e0._8_4_ = local_50._8_4_;
  local_d0 = local_40;
  if (local_40 != (Proxy *)0x0) {
    local_40->target = (ArchiveOffset<unsigned_int> *)local_e0;
  }
  if (pPVar2 != (Proxy *)0x0) {
    pPVar2->target = (ArchiveOffset<unsigned_int> *)&local_50;
  }
  local_f0 = local_c8.proxy;
  if (local_c8.proxy != (Proxy *)0x0) {
    (local_c8.proxy)->target = (ArchiveOffset<unsigned_int> *)local_100;
  }
  local_c8.position = local_38.position;
  local_c8.value = local_38.value;
  local_c8.proxy = local_38.proxy;
  if (local_38.proxy != (Proxy *)0x0) {
    (local_38.proxy)->target = &local_c8;
  }
  if (pPVar3 != (Proxy *)0x0) {
    pPVar3->target = &local_38;
  }
  *(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
    **)((longlong)auVar5 + 0x10) = &local_108;
  local_b0 = (undefined1  [8])local_20.target;
  (local_20.target)->proxy = (Proxy *)local_b0;
  local_20.target = (ArchiveOffset<unsigned_int> *)auVar5;
  *(Proxy **)((longlong)auVar5 + 0x10) = &local_20;
  if (local_20.target != (ArchiveOffset<unsigned_int> *)0x0) {
    (local_20.target)->proxy = (Proxy *)0x0;
  }
  local_108._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_78;
  if (local_98 == (Proxy *)local_78) {
    testing::AssertionSuccess((AssertionResult *)local_100);
  }
  else {
    testing::PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
               (Proxy **)&local_108);
    testing::PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>(&local_70,&local_98);
    testing::internal::EqFailure
              ((AssertionResult *)local_100,"instance1.offset1.proxy","&instance1.proxy1",&local_70,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,false);
    if (0xf < local_70._Mypair._Myval2._Myres) {
      pvVar1 = (void *)CONCAT71(local_70._Mypair._Myval2._Bx._1_7_,
                                local_70._Mypair._Myval2._Bx._Buf[0]);
      uVar12 = local_70._Mypair._Myval2._Myres + 1;
      pvVar8 = pvVar1;
      if (0xfff < uVar12) {
        pvVar8 = *(void **)((longlong)pvVar1 + -8);
        uVar12 = local_70._Mypair._Myval2._Myres + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c60d103;
      }
      ::operator_delete(pvVar8,uVar12);
    }
    local_70._Mypair._Myval2._Bx._Buf[0] = '\0';
    local_70._Mypair._Myval2._Mysize = (ulong64)___xmm_000000000000000f0000000000000000;
    local_70._Mypair._Myval2._Myres = _UNK_15076add8;
    if (0xf < local_38.position) {
      uVar12 = local_38.position + 1;
      uVar9 = local_50._Ptr;
      if (0xfff < uVar12) {
        uVar9 = *(undefined8 *)(local_50._Ptr + -8);
        uVar12 = local_38.position + 0x28;
        if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
LAB_14c60d103:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar9,uVar12);
    }
  }
  uVar9 = local_100._8_8_;
  if (local_100[0] == false) {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)local_100._8_8_;
      if (0xf < *(ulong64 *)(local_100._8_8_ + 0x18)) {
        pcVar10 = *(char **)local_100._8_8_;
      }
    }
    iVar13 = 0x30;
LAB_14c60d6f1:
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_e8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                        ,iVar13,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_e8);
    local_e8._Myval2 = local_108._Myval2;
  }
  else {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_)
      ;
      ::operator_delete((void *)uVar9,0x20);
    }
    local_108._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0
    ;
    if (local_90.proxy == (Proxy *)0x0) {
      testing::AssertionSuccess((AssertionResult *)local_100);
    }
    else {
      testing::internal::
      CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
                ((AssertionResult *)local_100,"instance1.offset2.proxy","nullptr",&local_90.proxy,
                 &local_108._Myval2);
    }
    uVar9 = local_100._8_8_;
    if (local_100[0] == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_100._8_8_;
        if (0xf < *(ulong64 *)(local_100._8_8_ + 0x18)) {
          pcVar10 = *(char **)local_100._8_8_;
          iVar13 = 0x31;
          goto LAB_14c60d6f1;
        }
      }
      iVar13 = 0x31;
      goto LAB_14c60d6f1;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_)
      ;
      ::operator_delete((void *)uVar9,0x20);
    }
    local_108._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_a8;
    if (local_78 == (undefined1  [8])local_a8) {
      testing::AssertionSuccess((AssertionResult *)local_100);
    }
    else {
      testing::PrintToString<terse::ArchiveOffset<unsigned_int>_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                 (ArchiveOffset<unsigned_int> **)&local_108);
      testing::PrintToString<terse::ArchiveOffset<unsigned_int>_*>
                (&local_70,(ArchiveOffset<unsigned_int> **)local_78);
      testing::internal::EqFailure
                ((AssertionResult *)local_100,"instance1.proxy1.target","&instance1.offset1",
                 &local_70,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,false)
      ;
      if (0xf < local_70._Mypair._Myval2._Myres) {
        pvVar1 = (void *)CONCAT71(local_70._Mypair._Myval2._Bx._1_7_,
                                  local_70._Mypair._Myval2._Bx._Buf[0]);
        uVar12 = local_70._Mypair._Myval2._Myres + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = local_70._Mypair._Myval2._Myres + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c60d293;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_70._Mypair._Myval2._Bx._Buf[0] = '\0';
      local_70._Mypair._Myval2._Mysize = (ulong64)___xmm_000000000000000f0000000000000000;
      local_70._Mypair._Myval2._Myres = _UNK_15076add8;
      if (0xf < local_38.position) {
        uVar12 = local_38.position + 1;
        uVar9 = local_50._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_50._Ptr + -8);
          uVar12 = local_38.position + 0x28;
          if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
LAB_14c60d293:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar9 = local_100._8_8_;
    if (local_100[0] == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_100._8_8_;
        if (0xf < *(ulong64 *)(local_100._8_8_ + 0x18)) {
          pcVar10 = *(char **)local_100._8_8_;
          iVar13 = 0x32;
          goto LAB_14c60d6f1;
        }
      }
      iVar13 = 0x32;
      goto LAB_14c60d6f1;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_)
      ;
      ::operator_delete((void *)uVar9,0x20);
    }
    local_108._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_b0;
    if (local_d0 == (Proxy *)local_b0) {
      testing::AssertionSuccess((AssertionResult *)local_100);
    }
    else {
      testing::PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                 (Proxy **)&local_108);
      testing::PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>(&local_70,&local_d0);
      testing::internal::EqFailure
                ((AssertionResult *)local_100,"instance2.offset1.proxy","&instance2.proxy1",
                 &local_70,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,false)
      ;
      if (0xf < local_70._Mypair._Myval2._Myres) {
        pvVar1 = (void *)CONCAT71(local_70._Mypair._Myval2._Bx._1_7_,
                                  local_70._Mypair._Myval2._Bx._Buf[0]);
        uVar12 = local_70._Mypair._Myval2._Myres + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = local_70._Mypair._Myval2._Myres + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c60d3bb;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_70._Mypair._Myval2._Bx._Buf[0] = '\0';
      local_70._Mypair._Myval2._Mysize = (ulong64)___xmm_000000000000000f0000000000000000;
      local_70._Mypair._Myval2._Myres = _UNK_15076add8;
      if (0xf < local_38.position) {
        uVar12 = local_38.position + 1;
        uVar9 = local_50._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_50._Ptr + -8);
          uVar12 = local_38.position + 0x28;
          if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
LAB_14c60d3bb:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    uVar9 = local_100._8_8_;
    if (local_100[0] == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_100._8_8_;
        if (0xf < *(ulong64 *)(local_100._8_8_ + 0x18)) {
          pcVar10 = *(char **)local_100._8_8_;
          iVar13 = 0x34;
          goto LAB_14c60d6f1;
        }
      }
      iVar13 = 0x34;
      goto LAB_14c60d6f1;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_)
      ;
      ::operator_delete((void *)uVar9,0x20);
    }
    local_108._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0
    ;
    if (local_c8.proxy == (Proxy *)0x0) {
      testing::AssertionSuccess((AssertionResult *)local_100);
    }
    else {
      testing::internal::
      CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
                ((AssertionResult *)local_100,"instance2.offset2.proxy","nullptr",&local_c8.proxy,
                 &local_108._Myval2);
    }
    uVar9 = local_100._8_8_;
    if (local_100[0] == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_100._8_8_;
        if (0xf < *(ulong64 *)(local_100._8_8_ + 0x18)) {
          pcVar10 = *(char **)local_100._8_8_;
          iVar13 = 0x35;
          goto LAB_14c60d6f1;
        }
      }
      iVar13 = 0x35;
      goto LAB_14c60d6f1;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_)
      ;
      ::operator_delete((void *)uVar9,0x20);
    }
    local_108._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_e0;
    if (local_b0 == (undefined1  [8])local_e0) {
      testing::AssertionSuccess((AssertionResult *)local_100);
    }
    else {
      testing::PrintToString<terse::ArchiveOffset<unsigned_int>_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                 (ArchiveOffset<unsigned_int> **)&local_108);
      testing::PrintToString<terse::ArchiveOffset<unsigned_int>_*>
                (&local_70,(ArchiveOffset<unsigned_int> **)local_b0);
      testing::internal::EqFailure
                ((AssertionResult *)local_100,"instance2.proxy1.target","&instance2.offset1",
                 &local_70,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,false)
      ;
      if (0xf < local_70._Mypair._Myval2._Myres) {
        pvVar1 = (void *)CONCAT71(local_70._Mypair._Myval2._Bx._1_7_,
                                  local_70._Mypair._Myval2._Bx._Buf[0]);
        uVar12 = local_70._Mypair._Myval2._Myres + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar12) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = local_70._Mypair._Myval2._Myres + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c60d545;
        }
        ::operator_delete(pvVar8,uVar12);
      }
      local_70._Mypair._Myval2._Bx._Buf[0] = '\0';
      local_70._Mypair._Myval2._Mysize = (ulong64)___xmm_000000000000000f0000000000000000;
      local_70._Mypair._Myval2._Myres = _UNK_15076add8;
      if (0xf < local_38.position) {
        uVar12 = local_38.position + 1;
        uVar9 = local_50._Ptr;
        if (0xfff < uVar12) {
          uVar9 = *(undefined8 *)(local_50._Ptr + -8);
          uVar12 = local_38.position + 0x28;
          if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
LAB_14c60d545:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar12);
      }
    }
    if (local_100[0] != false) goto LAB_14c60d73f;
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_e8);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)local_100._8_8_;
      if (0xf < *(ulong64 *)(local_100._8_8_ + 0x18)) {
        pcVar10 = *(char **)local_100._8_8_;
      }
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_108,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                        ,0x36,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_108);
  }
  if (local_e8._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar11 = (undefined8 *)
              ((longlong)&(local_e8._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_e8._Myval2 + 4));
    (**(code **)*puVar11)(puVar11,1);
  }
LAB_14c60d73f:
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_ !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_100._8_8_);
    ::operator_delete((void *)local_100._8_8_,0x20);
  }
  if (local_b0 != (undefined1  [8])0x0) {
    *(Proxy **)((longlong)local_b0 + 0x10) = (Proxy *)0x0;
  }
  if (local_78 != (undefined1  [8])0x0) {
    *(Proxy **)((longlong)local_78 + 0x10) = (Proxy *)0x0;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60d7b0

void * __thiscall
ArchiveOffsetTest_SwapInstances_Test::_scalar_deleting_destructor_
          (ArchiveOffsetTest_SwapInstances_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60d7f0

Test * __thiscall
testing::internal::TestFactoryImpl<ArchiveOffsetTest_SwapInstances_Test>::CreateTest
          (TestFactoryImpl<ArchiveOffsetTest_SwapInstances_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArchiveOffsetTest_SwapInstances_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60d830

void * __thiscall
testing::internal::TestFactoryImpl<ArchiveOffsetTest_SwapInstances_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArchiveOffsetTest_SwapInstances_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ArchiveOffsetTest_SwapInstances_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c60d870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c60d918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ArchiveOffsetTest_MoveInstances_Test::TestBody(ArchiveOffsetTest_MoveInstances_Test *this)

{
  ArchiveOffset<unsigned_int> *pAVar1;
  void *pvVar2;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar3;
  Message *pMVar4;
  AssertHelper *pAVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  ArchiveOffsetMoveTest *pAVar11;
  Proxy **ppPVar12;
  undefined1 auStackY_d8 [32];
  AssertHelper local_a8;
  vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_> local_a0;
  AssertionResult local_88;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_78;
  _Bxty local_70;
  Proxy *local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined8 local_48;
  Proxy local_40;
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a0._Mypair._Myval2._Myfirst = ::operator_new(0x70);
  local_70._Ptr = (char *)0x0;
  local_70._8_4_ = 0;
  local_58 = 0;
  local_a0._Mypair._Myval2._Myend = local_a0._Mypair._Myval2._Myfirst + 2;
  local_50 = 0;
  ((local_a0._Mypair._Myval2._Myfirst)->proxy1).target =
       &(local_a0._Mypair._Myval2._Myfirst)->offset1;
  ((local_a0._Mypair._Myval2._Myfirst)->offset1).proxy =
       &(local_a0._Mypair._Myval2._Myfirst)->proxy1;
  ((local_a0._Mypair._Myval2._Myfirst)->offset1).position = 0;
  ((local_a0._Mypair._Myval2._Myfirst)->offset1).value = 0;
  ((local_a0._Mypair._Myval2._Myfirst)->offset2).position = 0;
  ((local_a0._Mypair._Myval2._Myfirst)->offset2).value = 0;
  ((local_a0._Mypair._Myval2._Myfirst)->offset2).proxy = (Proxy *)0x0;
  local_a0._Mypair._Myval2._Myfirst[1].offset1.position = 0;
  local_a0._Mypair._Myval2._Myfirst[1].offset1.value = 0;
  local_a0._Mypair._Myval2._Myfirst[1].offset2.position = 0;
  local_a0._Mypair._Myval2._Myfirst[1].offset2.value = 0;
  local_a0._Mypair._Myval2._Myfirst[1].offset2.proxy = (Proxy *)0x0;
  local_a0._Mypair._Myval2._Myfirst[1].proxy1.target = &local_a0._Mypair._Myval2._Myfirst[1].offset1
  ;
  local_a0._Mypair._Myval2._Myfirst[1].offset1.proxy = &local_a0._Mypair._Myval2._Myfirst[1].proxy1;
  local_a0._Mypair._Myval2._Mylast = local_a0._Mypair._Myval2._Myfirst + 2;
  local_40.target = (ArchiveOffset<unsigned_int> *)&local_70;
  local_60 = &local_40;
  local_48 = 0;
  std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::
  _Emplace_reallocate<ArchiveOffsetMoveTest>
            (&local_a0,local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
  if ((_Bxty *)local_40.target != (_Bxty *)0x0) {
    (local_40.target)->proxy = (Proxy *)0x0;
  }
  local_40.target = (ArchiveOffset<unsigned_int> *)&local_70;
  local_70._Ptr = (char *)0x0;
  local_60 = &local_40;
  local_70._8_4_ = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (local_a0._Mypair._Myval2._Mylast == local_a0._Mypair._Myval2._Myend) {
    std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::
    _Emplace_reallocate<ArchiveOffsetMoveTest>
              (&local_a0,local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
  }
  else {
    ArchiveOffsetMoveTest::ArchiveOffsetMoveTest
              (local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
    local_a0._Mypair._Myval2._Mylast = local_a0._Mypair._Myval2._Mylast + 1;
  }
  if ((_Bxty *)local_40.target != (_Bxty *)0x0) {
    (local_40.target)->proxy = (Proxy *)0x0;
  }
  local_40.target = (ArchiveOffset<unsigned_int> *)&local_70;
  local_70._Ptr = (char *)0x0;
  local_60 = &local_40;
  local_70._8_4_ = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (local_a0._Mypair._Myval2._Mylast == local_a0._Mypair._Myval2._Myend) {
    std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::
    _Emplace_reallocate<ArchiveOffsetMoveTest>
              (&local_a0,local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
  }
  else {
    ArchiveOffsetMoveTest::ArchiveOffsetMoveTest
              (local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
    local_a0._Mypair._Myval2._Mylast = local_a0._Mypair._Myval2._Mylast + 1;
  }
  if ((_Bxty *)local_40.target != (_Bxty *)0x0) {
    (local_40.target)->proxy = (Proxy *)0x0;
  }
  local_40.target = (ArchiveOffset<unsigned_int> *)&local_70;
  local_70._Ptr = (char *)0x0;
  local_60 = &local_40;
  local_70._8_4_ = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (local_a0._Mypair._Myval2._Mylast == local_a0._Mypair._Myval2._Myend) {
    std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::
    _Emplace_reallocate<ArchiveOffsetMoveTest>
              (&local_a0,local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
  }
  else {
    ArchiveOffsetMoveTest::ArchiveOffsetMoveTest
              (local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
    local_a0._Mypair._Myval2._Mylast = local_a0._Mypair._Myval2._Mylast + 1;
  }
  if ((_Bxty *)local_40.target != (_Bxty *)0x0) {
    (local_40.target)->proxy = (Proxy *)0x0;
  }
  local_40.target = (ArchiveOffset<unsigned_int> *)&local_70;
  local_70._Ptr = (char *)0x0;
  local_60 = &local_40;
  local_70._8_4_ = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  if (local_a0._Mypair._Myval2._Mylast == local_a0._Mypair._Myval2._Myend) {
    std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::
    _Emplace_reallocate<ArchiveOffsetMoveTest>
              (&local_a0,local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
  }
  else {
    ArchiveOffsetMoveTest::ArchiveOffsetMoveTest
              (local_a0._Mypair._Myval2._Mylast,(ArchiveOffsetMoveTest *)&local_70);
    local_a0._Mypair._Myval2._Mylast = local_a0._Mypair._Myval2._Mylast + 1;
  }
  if ((_Bxty *)local_40.target != (_Bxty *)0x0) {
    (local_40.target)->proxy = (Proxy *)0x0;
  }
  ppPVar12 = &local_a0._Mypair._Myval2._Myfirst[1].offset1.proxy;
  local_a8.data_ = (AssertHelperData *)&local_a0._Mypair._Myval2._Myfirst[1].proxy1;
  if ((AssertHelperData *)*ppPVar12 == local_a8.data_) {
    testing::AssertionSuccess(&local_88);
  }
  else {
    testing::PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
               (Proxy **)&local_a8);
    testing::PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,ppPVar12
              );
    testing::internal::EqFailure
              (&local_88,"instances[1].offset1.proxy","&instances[1].proxy1",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,false);
    if (0xf < uStack_20) {
      pvVar2 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
      uVar10 = uStack_20 + 1;
      pvVar6 = pvVar2;
      if (0xfff < uVar10) {
        pvVar6 = *(void **)((longlong)pvVar2 + -8);
        uVar10 = uStack_20 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14c60dbc0;
      }
      ::operator_delete(pvVar6,uVar10);
    }
    local_38._Buf[0] = '\0';
    local_28 = ___xmm_000000000000000f0000000000000000;
    uStack_20 = _UNK_15076add8;
    if (0xf < local_58) {
      uVar10 = local_58 + 1;
      uVar7 = local_70._Ptr;
      if (0xfff < uVar10) {
        uVar7 = *(undefined8 *)(local_70._Ptr + -8);
        uVar10 = local_58 + 0x28;
        if ((char *)0x1f < local_70._Ptr + (-8 - uVar7)) {
LAB_14c60dbc0:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar7,uVar10);
    }
  }
  uVar3._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_a8);
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
    pAVar5 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_78,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                        ,0x42,pcVar8);
    testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
    if (local_a8.data_ != (AssertHelperData *)0x0) {
      puVar9 = (undefined8 *)
               ((longlong)&((ArchiveOffset<unsigned_int> *)&(local_a8.data_)->type)->position +
               (longlong)*(int *)(*(longlong *)local_a8.data_ + 4));
      (**(code **)*puVar9)(puVar9,1);
    }
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
    }
    pAVar11 = local_a0._Mypair._Myval2._Myfirst;
    if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
      return;
    }
    for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
      pAVar1 = (pAVar11->proxy1).target;
      if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
        pAVar1->proxy = (Proxy *)0x0;
      }
    }
    uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
              (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
    pAVar11 = local_a0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar10) {
      pAVar11 = (ArchiveOffsetMoveTest *)local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target;
      uVar10 = uVar10 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11))
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
    }
    ppPVar12 = &local_a0._Mypair._Myval2._Myfirst[1].offset2.proxy;
    local_a8.data_ = (AssertHelperData *)0x0;
    if (*ppPVar12 == (Proxy *)0x0) {
      testing::AssertionSuccess(&local_88);
    }
    else {
      testing::internal::
      CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
                (&local_88,"instances[1].offset2.proxy","nullptr",ppPVar12,&local_a8.data_);
    }
    uVar3._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
    if (local_88.success_ == false) {
      pMVar4 = (Message *)testing::Message::Message((Message *)&local_a8);
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
      pAVar5 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_78,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                          ,0x43,pcVar8);
      testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
      if (local_a8.data_ != (AssertHelperData *)0x0) {
        puVar9 = (undefined8 *)
                 ((longlong)&((ArchiveOffset<unsigned_int> *)&(local_a8.data_)->type)->position +
                 (longlong)*(int *)(*(longlong *)local_a8.data_ + 4));
        (**(code **)*puVar9)(puVar9,1);
      }
      if (local_88.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_88.message_._Mypair._Myval2);
        ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
      }
      pAVar11 = local_a0._Mypair._Myval2._Myfirst;
      if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
        return;
      }
      for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
        pAVar1 = (pAVar11->proxy1).target;
        if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
          pAVar1->proxy = (Proxy *)0x0;
        }
      }
      uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
                (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
      pAVar11 = local_a0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar10) {
        pAVar11 = (ArchiveOffsetMoveTest *)local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target;
        uVar10 = uVar10 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      if (local_88.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_88.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
      }
      local_a8.data_ = (AssertHelperData *)(local_a0._Mypair._Myval2._Myfirst + 1);
      testing::internal::EqHelper::
      Compare<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*,0>
                (&local_88,"instances[1].proxy1.target","&instances[1].offset1",
                 &local_a0._Mypair._Myval2._Myfirst[1].proxy1.target,
                 (ArchiveOffset<unsigned_int> **)&local_a8);
      uVar3._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
      if (local_88.success_ == false) {
        pMVar4 = (Message *)testing::Message::Message((Message *)&local_a8);
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
        pAVar5 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_78,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                            ,0x44,pcVar8);
        testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
        if (local_a8.data_ != (AssertHelperData *)0x0) {
          puVar9 = (undefined8 *)
                   ((longlong)&((ArchiveOffset<unsigned_int> *)&(local_a8.data_)->type)->position +
                   (longlong)*(int *)(*(longlong *)local_a8.data_ + 4));
          (**(code **)*puVar9)(puVar9,1);
        }
        if (local_88.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_88.message_._Mypair._Myval2);
          ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
        }
        pAVar11 = local_a0._Mypair._Myval2._Myfirst;
        if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
          return;
        }
        for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
          pAVar1 = (pAVar11->proxy1).target;
          if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
            pAVar1->proxy = (Proxy *)0x0;
          }
        }
        uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
                  (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
        pAVar11 = local_a0._Mypair._Myval2._Myfirst;
        if (0xfff < uVar10) {
          pAVar11 = (ArchiveOffsetMoveTest *)local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target;
          uVar10 = uVar10 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      else {
        if (local_88.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_88.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
        }
        local_a8.data_ = (AssertHelperData *)&local_a0._Mypair._Myval2._Myfirst[2].proxy1;
        testing::internal::EqHelper::
        Compare<terse::ArchiveOffset<unsigned_int>::Proxy_*,terse::ArchiveOffset<unsigned_int>::Proxy_*,0>
                  (&local_88,"instances[2].offset1.proxy","&instances[2].proxy1",
                   &local_a0._Mypair._Myval2._Myfirst[2].offset1.proxy,(Proxy **)&local_a8);
        uVar3._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
        if (local_88.success_ == false) {
          pMVar4 = (Message *)testing::Message::Message((Message *)&local_a8);
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
          pAVar5 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_78,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                              ,0x46,pcVar8);
          testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
          if (local_a8.data_ != (AssertHelperData *)0x0) {
            puVar9 = (undefined8 *)
                     ((longlong)&((ArchiveOffset<unsigned_int> *)&(local_a8.data_)->type)->position
                     + (longlong)*(int *)(*(longlong *)local_a8.data_ + 4));
            (**(code **)*puVar9)(puVar9,1);
          }
          if (local_88.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_88.message_._Mypair._Myval2);
            ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
          }
          pAVar11 = local_a0._Mypair._Myval2._Myfirst;
          if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
            return;
          }
          for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
            pAVar1 = (pAVar11->proxy1).target;
            if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
              pAVar1->proxy = (Proxy *)0x0;
            }
          }
          uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
                    (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
          pAVar11 = local_a0._Mypair._Myval2._Myfirst;
          if (0xfff < uVar10) {
            pAVar11 = (ArchiveOffsetMoveTest *)local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target;
            uVar10 = uVar10 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
        else {
          if (local_88.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_88.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
          }
          ppPVar12 = &local_a0._Mypair._Myval2._Myfirst[2].offset2.proxy;
          local_a8.data_ = (AssertHelperData *)0x0;
          if (*ppPVar12 == (Proxy *)0x0) {
            testing::AssertionSuccess(&local_88);
          }
          else {
            testing::internal::
            CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
                      (&local_88,"instances[2].offset2.proxy","nullptr",ppPVar12,&local_a8.data_);
          }
          uVar3._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
          if (local_88.success_ == false) {
            pMVar4 = (Message *)testing::Message::Message((Message *)&local_a8);
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
            pAVar5 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_78,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                                ,0x47,pcVar8);
            testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
            if (local_a8.data_ != (AssertHelperData *)0x0) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        &((ArchiveOffset<unsigned_int> *)&(local_a8.data_)->type)->position +
                       (longlong)*(int *)(*(longlong *)local_a8.data_ + 4));
              (**(code **)*puVar9)(puVar9,1);
            }
            if (local_88.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_88.message_._Mypair._Myval2);
              ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
            }
            pAVar11 = local_a0._Mypair._Myval2._Myfirst;
            if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
              return;
            }
            for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
              pAVar1 = (pAVar11->proxy1).target;
              if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
                pAVar1->proxy = (Proxy *)0x0;
              }
            }
            uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
                      (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
            pAVar11 = local_a0._Mypair._Myval2._Myfirst;
            if (0xfff < uVar10) {
              pAVar11 = (ArchiveOffsetMoveTest *)local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target
              ;
              uVar10 = uVar10 + 0x27;
              if (0x1f < (ulonglong)
                         ((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
          }
          else {
            if (local_88.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_88.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar3._Mypair._Myval2,0x20);
            }
            local_a8.data_ = (AssertHelperData *)(local_a0._Mypair._Myval2._Myfirst + 2);
            testing::internal::EqHelper::
            Compare<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*,0>
                      (&local_88,"instances[2].proxy1.target","&instances[2].offset1",
                       &local_a0._Mypair._Myval2._Myfirst[2].proxy1.target,
                       (ArchiveOffset<unsigned_int> **)&local_a8);
            if (local_88.success_ == false) {
              pMVar4 = (Message *)testing::Message::Message((Message *)&local_78);
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
              pAVar5 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 (&local_a8,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveOffset.cpp"
                                  ,0x48,pcVar8);
              testing::internal::AssertHelper::operator=(pAVar5,pMVar4);
              testing::internal::AssertHelper::~AssertHelper(&local_a8);
              if (local_78._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar9 = (undefined8 *)
                         ((longlong)&(local_78._Myval2)->field_0x0 +
                         (longlong)*(int *)(*(longlong *)local_78._Myval2 + 4));
                (**(code **)*puVar9)(puVar9,1);
              }
              if (local_88.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_88.message_._Mypair._Myval2);
                ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
              }
              pAVar11 = local_a0._Mypair._Myval2._Myfirst;
              if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
                return;
              }
              for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
                pAVar1 = (pAVar11->proxy1).target;
                if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
                  pAVar1->proxy = (Proxy *)0x0;
                }
              }
              uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
                        (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
              pAVar11 = local_a0._Mypair._Myval2._Myfirst;
              if (0xfff < uVar10) {
                pAVar11 = (ArchiveOffsetMoveTest *)
                          local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target;
                uVar10 = uVar10 + 0x27;
                if (0x1f < (ulonglong)
                           ((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
            else {
              if (local_88.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_88.message_._Mypair._Myval2);
                ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
              }
              pAVar11 = local_a0._Mypair._Myval2._Myfirst;
              if (local_a0._Mypair._Myval2._Myfirst == (ArchiveOffsetMoveTest *)0x0) {
                return;
              }
              for (; pAVar11 != local_a0._Mypair._Myval2._Mylast; pAVar11 = pAVar11 + 1) {
                pAVar1 = (pAVar11->proxy1).target;
                if (pAVar1 != (ArchiveOffset<unsigned_int> *)0x0) {
                  pAVar1->proxy = (Proxy *)0x0;
                }
              }
              uVar10 = (((longlong)local_a0._Mypair._Myval2._Myend -
                        (longlong)local_a0._Mypair._Myval2._Myfirst) / 0x38) * 0x38;
              pAVar11 = local_a0._Mypair._Myval2._Myfirst;
              if (0xfff < uVar10) {
                pAVar11 = (ArchiveOffsetMoveTest *)
                          local_a0._Mypair._Myval2._Myfirst[-1].proxy1.target;
                uVar10 = uVar10 + 0x27;
                if (0x1f < (ulonglong)
                           ((longlong)local_a0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar11)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
          }
        }
      }
    }
  }
  ::operator_delete(pAVar11,uVar10);
  return;
}

// `scalar_deleting_destructor' @ 14c60e5b0

void * __thiscall
ArchiveOffsetTest_MoveInstances_Test::_scalar_deleting_destructor_
          (ArchiveOffsetTest_MoveInstances_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60e5f0

Test * __thiscall
testing::internal::TestFactoryImpl<ArchiveOffsetTest_MoveInstances_Test>::CreateTest
          (TestFactoryImpl<ArchiveOffsetTest_MoveInstances_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArchiveOffsetTest_MoveInstances_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60e630

void * __thiscall
testing::internal::TestFactoryImpl<ArchiveOffsetTest_MoveInstances_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArchiveOffsetTest_MoveInstances_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ArchiveOffsetTest_MoveInstances_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c60e670

void __thiscall
ArchiveOffsetTest_MoveAfterTemporaryProxy_Test::TestBody
          (ArchiveOffsetTest_MoveAfterTemporaryProxy_Test *this)

{
  ArchiveOffsetMoveTest local_78;
  ArchiveOffsetMoveTest local_40;
  
  local_78.proxy1.target = &local_78.offset1;
  local_78.offset1.position = 0;
  local_78.offset1.value = 0;
  local_78.offset2.position = 0;
  local_78.offset2.value = 0;
  local_78.offset1.proxy = &local_78.proxy1;
  local_78.offset2.proxy = (Proxy *)0x0;
  ArchiveOffsetMoveTest::ArchiveOffsetMoveTest(&local_40,&local_78);
  if (local_40.proxy1.target != (ArchiveOffset<unsigned_int> *)0x0) {
    (local_40.proxy1.target)->proxy = (Proxy *)0x0;
  }
  if ((ArchiveOffsetMoveTest *)local_78.proxy1.target != (ArchiveOffsetMoveTest *)0x0) {
    (local_78.proxy1.target)->proxy = (Proxy *)0x0;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c60e6e0

void * __thiscall
ArchiveOffsetTest_MoveAfterTemporaryProxy_Test::_scalar_deleting_destructor_
          (ArchiveOffsetTest_MoveAfterTemporaryProxy_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c60e720

Test * __thiscall
testing::internal::TestFactoryImpl<ArchiveOffsetTest_MoveAfterTemporaryProxy_Test>::CreateTest
          (TestFactoryImpl<ArchiveOffsetTest_MoveAfterTemporaryProxy_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArchiveOffsetTest_MoveAfterTemporaryProxy_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c60e760

void * __thiscall
testing::internal::TestFactoryImpl<ArchiveOffsetTest_MoveAfterTemporaryProxy_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArchiveOffsetTest_MoveAfterTemporaryProxy_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ArchiveOffsetTest_MoveAfterTemporaryProxy_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*> @ 14c60e7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArchiveOffset<unsigned_int> **param_3,ArchiveOffset<unsigned_int> **param_4)

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
    PrintToString<terse::ArchiveOffset<unsigned_int>_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveOffset<unsigned_int>_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c60e89d;
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
LAB_14c60e89d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t> @ 14c60e8e0

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,Proxy **param_3,
          void **param_4)

{
                    /* WARNING: Load size is inaccurate */
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*> @ 14c60e930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArchiveOffset<unsigned_int> **param_3,ArchiveOffset<unsigned_int> **param_4)

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
  PrintToString<terse::ArchiveOffset<unsigned_int>_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<terse::ArchiveOffset<unsigned_int>_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c60ea18;
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
LAB_14c60ea18:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t> @ 14c60ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,Proxy **param_3,
          void **param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong64 uVar5;
  char *pcVar6;
  undefined1 auStackY_1e8 [32];
  int iStack_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  char **local_168;
  char **local_160;
  char **local_148;
  char **local_140;
  int *local_130;
  char *local_118;
  uint local_110;
  basic_ios<char,std::char_traits<char>_> local_100;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_198._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_188 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_100);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_198,
             (basic_streambuf<char,std::char_traits<char>_> *)local_180);
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
  local_118 = (char *)0x0;
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_110 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_188,"(nullptr)");
  local_98._8_8_ = 0;
  local_98._Ptr = (char *)0x0;
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  if ((((byte)local_110 & 0x22) == 2) || (pcVar6 = *local_140, pcVar6 == (char *)0x0)) {
    if (((local_110 & 4) == 0) && (*local_148 != (char *)0x0)) {
      pcVar4 = *local_168;
      pcVar6 = *local_148 + ((longlong)*local_130 - (longlong)pcVar4);
    }
    else {
      pcVar6 = (char *)0x0;
      pcVar4 = (char *)0x0;
    }
  }
  else {
    if (pcVar6 < local_118) {
      pcVar6 = local_118;
    }
    pcVar4 = *local_160;
    pcVar6 = pcVar6 + -(longlong)pcVar4;
  }
  if (pcVar4 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,pcVar4,
               (ulong64)pcVar6);
  }
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_180);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_180 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_100)
  ;
  PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar5) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c60ecad;
    }
    ::operator_delete(pvVar2,uVar5);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < uStack_80) {
    uVar5 = uStack_80 + 1;
    uVar3 = local_98._Ptr;
    if (0xfff < uVar5) {
      uVar3 = *(undefined8 *)(local_98._Ptr + -8);
      uVar5 = uStack_80 + 0x28;
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar3)) {
LAB_14c60ecad:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar5);
  }
  return __return_storage_ptr__;
}

// Compare<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*,0> @ 14c60ed00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArchiveOffset<unsigned_int> **param_3,ArchiveOffset<unsigned_int> **param_4)

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
    PrintToString<terse::ArchiveOffset<unsigned_int>_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveOffset<unsigned_int>_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c60edfa;
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
LAB_14c60edfa:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// Compare<terse::ArchiveOffset<unsigned_int>::Proxy_*,terse::ArchiveOffset<unsigned_int>::Proxy_*,0> @ 14c60ee40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<terse::ArchiveOffset<unsigned_int>::Proxy_*,terse::ArchiveOffset<unsigned_int>::Proxy_*,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,Proxy **param_3,
          Proxy **param_4)

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
    PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c60ef3a;
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
LAB_14c60ef3a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<terse::ArchiveOffset<unsigned_int>_> @ 14c60ef80

void __cdecl
testing::internal::DefaultPrintTo<terse::ArchiveOffset<unsigned_int>_>
          (WrapPrinterType<1> param_1,ArchiveOffset<unsigned_int> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (ArchiveOffset<unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c60ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// FormatForComparisonFailureMessage<std::nullptr_t,terse::ArchiveOffset<unsigned_int>::Proxy_*> @ 14c60efb0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::nullptr_t,terse::ArchiveOffset<unsigned_int>::Proxy_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          void **param_1,Proxy **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined1 local_100 [24];
  char **local_e8;
  char **local_e0;
  char **local_c8;
  char **local_c0;
  int *local_b0;
  char *local_98;
  uint local_90;
  basic_ios<char,std::char_traits<char>_> local_80;
  
  local_118._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_108 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_80);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)local_100);
  *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
       *(int *)(local_118._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_100);
  local_98 = (char *)0x0;
  local_100._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_90 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_108,"(nullptr)");
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_90 & 0x22) == 2) || (pcVar2 = *local_c0, pcVar2 == (char *)0x0)) {
    if (((local_90 & 4) == 0) && (*local_c8 != (char *)0x0)) {
      pcVar1 = *local_e8;
      pcVar2 = *local_c8 + ((longlong)*local_b0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_98) {
      pcVar2 = local_98;
    }
    pcVar1 = *local_e0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
       *(int *)(local_118._0_8_ + 4) + -0x98;
  local_100._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_100);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_100);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_100 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_80);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*> @ 14c60f160

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<terse::ArchiveOffset<unsigned_int>_*,terse::ArchiveOffset<unsigned_int>_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ArchiveOffset<unsigned_int> **param_1,ArchiveOffset<unsigned_int> **param_2)

{
  PrintToString<terse::ArchiveOffset<unsigned_int>_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t> @ 14c60f180

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<terse::ArchiveOffset<unsigned_int>::Proxy_*,std::nullptr_t>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Proxy **param_1,void **param_2)

{
  PrintToString<terse::ArchiveOffset<unsigned_int>::Proxy_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<terse::ArchiveOffset<unsigned_int>_*> @ 14c60f1a0

void __cdecl
testing::internal::PrintTo<terse::ArchiveOffset<unsigned_int>_*>
          (ArchiveOffset<unsigned_int> **param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (ArchiveOffset<unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c60f1ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintToString<terse::ArchiveOffset<unsigned_int>_*> @ 14c60f1d0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<terse::ArchiveOffset<unsigned_int>_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ArchiveOffset<unsigned_int> **param_1)

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
  if (*param_1 == (ArchiveOffset<unsigned_int> *)0x0) {
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

// UniversalPrint<terse::ArchiveOffset<unsigned_int>_*> @ 14c60f390

void __cdecl
testing::internal::UniversalPrint<terse::ArchiveOffset<unsigned_int>_*>
          (ArchiveOffset<unsigned_int> **param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (ArchiveOffset<unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c60f3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// _Emplace_reallocate<ArchiveOffsetMoveTest> @ 14c60f3c0

ArchiveOffsetMoveTest * __thiscall
std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::
_Emplace_reallocate<ArchiveOffsetMoveTest>
          (vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_> *this,
          ArchiveOffsetMoveTest *param_1,ArchiveOffsetMoveTest *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ArchiveOffset<unsigned_int> *pAVar3;
  longlong lVar4;
  ArchiveOffsetMoveTest *pAVar5;
  ArchiveOffsetMoveTest *pAVar6;
  ArchiveOffsetMoveTest *pAVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ArchiveOffsetMoveTest *pAVar10;
  ArchiveOffsetMoveTest *this_00;
  
  pAVar7 = (this->_Mypair)._Myval2._Myfirst;
  uVar9 = 0x492492492492492;
  lVar4 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pAVar7) / 0x38;
  if (lVar4 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar7) / 0x38;
  if (uVar2 <= 0x492492492492492 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x492492492492492 < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pAVar6 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x38);
  this_00 = pAVar6 + ((longlong)param_1 - (longlong)pAVar7) / 0x38;
  ArchiveOffsetMoveTest::ArchiveOffsetMoveTest(this_00,param_2);
  pAVar7 = (this->_Mypair)._Myval2._Mylast;
  pAVar10 = (this->_Mypair)._Myval2._Myfirst;
  pAVar5 = pAVar6;
  if (param_1 == pAVar7) {
    for (; pAVar10 != pAVar7; pAVar10 = pAVar10 + 1) {
      ArchiveOffsetMoveTest::ArchiveOffsetMoveTest(pAVar5,pAVar10);
      pAVar5 = pAVar5 + 1;
    }
  }
  else {
    for (; pAVar10 != param_1; pAVar10 = pAVar10 + 1) {
      ArchiveOffsetMoveTest::ArchiveOffsetMoveTest(pAVar5,pAVar10);
      pAVar5 = pAVar5 + 1;
    }
    pAVar7 = (this->_Mypair)._Myval2._Mylast;
    pAVar10 = this_00;
    for (; param_1 != pAVar7; param_1 = param_1 + 1) {
      pAVar10 = pAVar10 + 1;
      ArchiveOffsetMoveTest::ArchiveOffsetMoveTest(pAVar10,param_1);
    }
  }
  pAVar7 = (this->_Mypair)._Myval2._Myfirst;
  if (pAVar7 != (ArchiveOffsetMoveTest *)0x0) {
    pAVar10 = (this->_Mypair)._Myval2._Mylast;
    for (; pAVar7 != pAVar10; pAVar7 = pAVar7 + 1) {
      pAVar3 = (pAVar7->proxy1).target;
      if (pAVar3 != (ArchiveOffset<unsigned_int> *)0x0) {
        pAVar3->proxy = (Proxy *)0x0;
      }
    }
    pAVar7 = (this->_Mypair)._Myval2._Myfirst;
    uVar8 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar7) / 0x38) * 0x38;
    pAVar10 = pAVar7;
    if (0xfff < uVar8) {
      pAVar10 = (ArchiveOffsetMoveTest *)pAVar7[-1].proxy1.target;
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pAVar7 + (-8 - (longlong)pAVar10))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pAVar10,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = pAVar6;
  (this->_Mypair)._Myval2._Mylast = pAVar6 + uVar1;
  (this->_Mypair)._Myval2._Myend = pAVar6 + uVar9;
  return this_00;
}

// ArchiveOffsetMoveTest @ 14c60f610

ArchiveOffsetMoveTest * __thiscall
ArchiveOffsetMoveTest::ArchiveOffsetMoveTest
          (ArchiveOffsetMoveTest *this,ArchiveOffsetMoveTest *param_1)

{
  Proxy *pPVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  Proxy *pPVar5;
  ulong64 uVar6;
  Proxy *pPVar7;
  ArchiveOffset<unsigned_int> *pAVar8;
  ArchiveOffset<unsigned_int> *pAVar9;
  Proxy local_res8;
  ArchiveOffset<unsigned_int> local_28;
  
  (this->proxy1).target = &this->offset1;
  pPVar1 = &this->proxy1;
  (this->offset2).position = 0;
  (this->offset2).value = 0;
  pAVar8 = &this->offset2;
  (this->offset2).proxy = (Proxy *)0x0;
  (this->offset1).position = 0;
  (this->offset1).value = 0;
  (this->offset1).proxy = (Proxy *)0x0;
  if (pPVar1 != (Proxy *)0x0) {
    pPVar1->target = &local_28;
  }
  uVar4 = (this->offset1).position;
  (this->offset1).position = (param_1->offset1).position;
  (param_1->offset1).position = uVar4;
  uVar2 = (this->offset1).value;
  (this->offset1).value = (param_1->offset1).value;
  (param_1->offset1).value = uVar2;
  pPVar5 = (this->offset1).proxy;
  (this->offset1).proxy = (param_1->offset1).proxy;
  (param_1->offset1).proxy = pPVar5;
  pPVar5 = (this->offset1).proxy;
  if (pPVar5 != (Proxy *)0x0) {
    pPVar5->target = &this->offset1;
  }
  (param_1->offset1).position = 0;
  (param_1->offset1).value = 0;
  (param_1->offset1).proxy = pPVar1;
  if (pPVar1 != (Proxy *)0x0) {
    pPVar1->target = &param_1->offset1;
  }
  uVar4 = pAVar8->position;
  pAVar9 = &param_1->offset2;
  pPVar5 = (this->offset2).proxy;
  uVar2 = (this->offset2).value;
  (this->offset2).value = 0;
  pAVar8->position = 0;
  (this->offset2).proxy = (Proxy *)0x0;
  if (pPVar5 != (Proxy *)0x0) {
    pPVar5->target = &local_28;
  }
  uVar6 = pAVar8->position;
  pAVar8->position = pAVar9->position;
  pAVar9->position = uVar6;
  uVar3 = (this->offset2).value;
  (this->offset2).value = (param_1->offset2).value;
  (param_1->offset2).value = uVar3;
  pPVar7 = (this->offset2).proxy;
  (this->offset2).proxy = (param_1->offset2).proxy;
  (param_1->offset2).proxy = pPVar7;
  pPVar7 = (this->offset2).proxy;
  if (pPVar7 != (Proxy *)0x0) {
    pPVar7->target = pAVar8;
  }
  pAVar9->position = uVar4;
  (param_1->offset2).value = uVar2;
  (param_1->offset2).proxy = pPVar5;
  if (pPVar5 != (Proxy *)0x0) {
    pPVar5->target = pAVar9;
  }
  pAVar8 = pPVar1->target;
  pPVar5 = &param_1->proxy1;
  pPVar1->target = (ArchiveOffset<unsigned_int> *)0x0;
  pAVar8->proxy = &local_res8;
  pAVar9 = pPVar1->target;
  pPVar1->target = pPVar5->target;
  pPVar5->target = pAVar9;
  pPVar1->target->proxy = pPVar1;
  pAVar9 = pPVar5->target;
  pPVar5->target = pAVar8;
  pAVar8->proxy = pPVar5;
  if (pAVar9 != (ArchiveOffset<unsigned_int> *)0x0) {
    pAVar9->proxy = (Proxy *)0x0;
  }
  return this;
}

// _Xlength @ 14c60f7b0

void __cdecl
std::vector<ArchiveOffsetMoveTest,std::allocator<ArchiveOffsetMoveTest>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

