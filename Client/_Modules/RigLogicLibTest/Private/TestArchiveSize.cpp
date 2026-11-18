// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 48

// test_info_'' @ 14139c7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ArchiveSizeTest_MoveAfterTemporaryProxy_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VArchiveSizeTest_MoveAfterTemporaryProxy_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                      ,0x53);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                      ,0x53);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7f;
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
  *(undefined2 *)(pcVar6 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar6[0x7e] = ::s_C__Workspace_UnrealEngine_Engin[0x7e];
  pcVar6[0x7f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007f;
  uStack_40 = _UNK_1528844b8;
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
  local_38 = 0x53;
  ArchiveSizeTest_MoveAfterTemporaryProxy_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArchiveSizeTest","MoveAfterTemporaryProxy",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139ca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ArchiveSizeTest_MoveInstances_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VArchiveSizeTest_MoveInstances_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                      ,0x3f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                      ,0x3f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7f;
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
  *(undefined2 *)(pcVar6 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar6[0x7e] = ::s_C__Workspace_UnrealEngine_Engin[0x7e];
  pcVar6[0x7f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007f;
  uStack_40 = _UNK_1528844b8;
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
  local_38 = 0x3f;
  ArchiveSizeTest_MoveInstances_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArchiveSizeTest","MoveInstances",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 14139cc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ArchiveSizeTest_SwapInstances_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VArchiveSizeTest_SwapInstances_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                      ,0x2e);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                      ,0x2e);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7f;
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
  *(undefined2 *)(pcVar6 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar6[0x7e] = ::s_C__Workspace_UnrealEngine_Engin[0x7e];
  pcVar6[0x7f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007f;
  uStack_40 = _UNK_1528844b8;
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
  local_38 = 0x2e;
  ArchiveSizeTest_SwapInstances_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ArchiveSizeTest","SwapInstances",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c60f7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ArchiveSizeTest_SwapInstances_Test::TestBody(ArchiveSizeTest_SwapInstances_Test *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  void *pvVar2;
  Proxy *pPVar3;
  undefined4 uVar4;
  uint uVar5;
  Proxy *pPVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  int iVar14;
  undefined1 auStackY_1d8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_1a8;
  ArchiveSize<unsigned_int,unsigned_int> local_1a0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_188 [2];
  undefined1 local_178 [16];
  Proxy *local_168;
  ArchiveSize<unsigned_int,unsigned_int> local_160;
  undefined1 local_148 [16];
  undefined1 *local_138;
  undefined1 local_130 [8];
  Anchor<unsigned_int> *local_128 [2];
  undefined1 local_118 [16];
  Proxy *local_108;
  ArchiveSize<unsigned_int,unsigned_int> local_100;
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  undefined1 local_d0 [8];
  Anchor<unsigned_int> *local_c8 [2];
  ArchiveSizeMoveTest local_b8;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_d0 = (undefined1  [8])local_118;
  local_c8[0] = (Anchor<unsigned_int> *)local_e8;
  local_118._0_8_ = 0;
  local_108 = (Proxy *)local_d0;
  local_118._8_4_ = 0;
  local_d8 = local_d0;
  local_100.position = 0;
  local_130 = (undefined1  [8])local_178;
  local_128[0] = (Anchor<unsigned_int> *)local_148;
  local_168 = (Proxy *)local_130;
  local_138 = local_130;
  local_100.value = 0;
  local_100.proxy = (Proxy *)0x0;
  local_e8._0_4_ = 0;
  local_e8._8_8_ = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  local_178._0_8_ = 0;
  local_178._8_4_ = 0;
  local_160.position = 0;
  local_160.value = 0;
  local_160.proxy = (Proxy *)0x0;
  local_148._0_4_ = 0;
  local_148._8_8_ = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  ArchiveSizeMoveTest::ArchiveSizeMoveTest(&local_b8,(ArchiveSizeMoveTest *)local_118);
  local_1a0.position = local_118._0_8_;
  local_1a0.value = local_118._8_4_;
  local_1a0.proxy = local_108;
  if (local_108 != (Proxy *)0x0) {
    local_108->target = &local_1a0;
  }
  pPVar3 = local_1a0.proxy;
  local_118._0_8_ = local_178._0_8_;
  local_118._8_4_ = local_178._8_4_;
  local_108 = local_168;
  if (local_168 != (Proxy *)0x0) {
    local_168->target = (ArchiveSize<unsigned_int,unsigned_int> *)local_118;
  }
  pPVar6 = local_100.proxy;
  uVar5 = local_100.value;
  uVar13 = local_100.position;
  local_178._0_8_ = local_1a0.position;
  local_178._8_4_ = local_1a0.value;
  if (local_1a0.proxy != (Proxy *)0x0) {
    (local_1a0.proxy)->target = (ArchiveSize<unsigned_int,unsigned_int> *)local_178;
  }
  local_1a0.position = local_100.position;
  local_1a0.value = local_100.value;
  local_1a0.proxy = local_100.proxy;
  if (local_100.proxy != (Proxy *)0x0) {
    (local_100.proxy)->target = &local_1a0;
  }
  local_100.position = local_160.position;
  local_100.value = local_160.value;
  local_100.proxy = local_160.proxy;
  if (local_160.proxy != (Proxy *)0x0) {
    (local_160.proxy)->target = &local_100;
  }
  local_160.position = uVar13;
  local_160.value = uVar5;
  local_160.proxy = pPVar6;
  if (pPVar6 != (Proxy *)0x0) {
    pPVar6->target = &local_160;
  }
  local_168 = pPVar3;
  std::swap<terse::Anchor<unsigned_int>,0>
            ((Anchor<unsigned_int> *)local_e8,(Anchor<unsigned_int> *)local_148);
  std::swap<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy,0>
            ((Proxy *)local_d0,(Proxy *)local_130);
  pPVar6 = local_160.proxy;
  uVar5 = local_160.value;
  uVar13 = local_160.position;
  pPVar3 = local_168;
  uVar4 = local_178._8_4_;
  uVar10 = local_178._0_8_;
  if (local_168 != (Proxy *)0x0) {
    local_168->target = &local_1a0;
  }
  local_178._0_8_ = local_b8.size1.position;
  local_178._8_4_ = local_b8.size1.value;
  local_168 = local_b8.size1.proxy;
  if (local_b8.size1.proxy != (Proxy *)0x0) {
    (local_b8.size1.proxy)->target = (ArchiveSize<unsigned_int,unsigned_int> *)local_178;
  }
  local_b8.size1.position = uVar10;
  local_b8.size1.value = uVar4;
  local_b8.size1.proxy = pPVar3;
  if (pPVar3 != (Proxy *)0x0) {
    pPVar3->target = &local_b8.size1;
  }
  local_1a0.position = local_160.position;
  local_1a0.value = local_160.value;
  local_1a0.proxy = local_160.proxy;
  if (local_160.proxy != (Proxy *)0x0) {
    (local_160.proxy)->target = &local_1a0;
  }
  local_160.position = local_b8.size2.position;
  local_160.value = local_b8.size2.value;
  local_160.proxy = local_b8.size2.proxy;
  if (local_b8.size2.proxy != (Proxy *)0x0) {
    (local_b8.size2.proxy)->target = &local_160;
  }
  local_b8.size2.position = uVar13;
  local_b8.size2.value = uVar5;
  local_b8.size2.proxy = pPVar6;
  if (pPVar6 != (Proxy *)0x0) {
    pPVar6->target = &local_b8.size2;
  }
  std::swap<terse::Anchor<unsigned_int>,0>((Anchor<unsigned_int> *)local_148,&local_b8.anchor1);
  std::swap<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy,0>
            ((Proxy *)local_130,&local_b8.proxy1);
  if (local_b8.proxy1.target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    (local_b8.proxy1.target)->proxy = (Proxy *)0x0;
  }
  if (local_b8.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_b8.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_b8.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  local_1a8._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_d0;
  if (local_108 == (Proxy *)local_d0) {
    testing::AssertionSuccess((AssertionResult *)&local_1a0);
  }
  else {
    testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
               (Proxy **)&local_1a8);
    testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               &local_108);
    testing::internal::EqFailure
              ((AssertionResult *)&local_1a0,"instance1.size1.proxy","&instance1.proxy1",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar13 = uStack_40 + 1;
      pvVar9 = pvVar2;
      if (0xfff < uVar13) {
        pvVar9 = *(void **)((longlong)pvVar2 + -8);
        uVar13 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c60fbb5;
      }
      ::operator_delete(pvVar9,uVar13);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar13 = local_20 + 1;
      uVar10 = local_38._Ptr;
      if (0xfff < uVar13) {
        uVar10 = *(undefined8 *)(local_38._Ptr + -8);
        uVar13 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar10)) {
LAB_14c60fbb5:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar13);
    }
  }
  if ((char)local_1a0.position == '\0') {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
    pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "";
    }
    else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
      pcVar11 = *(char **)pcVar11;
    }
    iVar14 = 0x34;
LAB_14c61032a:
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)local_188,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                        ,iVar14,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_188);
    local_188[0]._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )local_1a8._Myval2;
  }
  else {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0
    ;
    if (local_100.proxy == (Proxy *)0x0) {
      testing::AssertionSuccess((AssertionResult *)&local_1a0);
    }
    else {
      testing::internal::
      CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
                ((AssertionResult *)&local_1a0,"instance1.size2.proxy","nullptr",&local_100.proxy,
                 &local_1a8._Myval2);
    }
    if ((char)local_1a0.position == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
      pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
        iVar14 = 0x35;
        goto LAB_14c61032a;
      }
      iVar14 = 0x35;
      goto LAB_14c61032a;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_118;
    if (local_d0 == (undefined1  [8])local_118) {
      testing::AssertionSuccess((AssertionResult *)&local_1a0);
    }
    else {
      testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                 (ArchiveSize<unsigned_int,unsigned_int> **)&local_1a8);
      testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 (ArchiveSize<unsigned_int,unsigned_int> **)local_d0);
      testing::internal::EqFailure
                ((AssertionResult *)&local_1a0,"instance1.proxy1.target","&instance1.size1",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false)
      ;
      if (0xf < uStack_40) {
        pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
        uVar13 = uStack_40 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_40 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c60fd63;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_58._Buf[0] = '\0';
      local_48 = ___xmm_000000000000000f0000000000000000;
      uStack_40 = _UNK_15076add8;
      if (0xf < local_20) {
        uVar13 = local_20 + 1;
        uVar10 = local_38._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_38._Ptr + -8);
          uVar13 = local_20 + 0x28;
          if ((char *)0x1f < local_38._Ptr + (-8 - uVar10)) {
LAB_14c60fd63:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    if ((char)local_1a0.position == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
      pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
        iVar14 = 0x36;
        goto LAB_14c61032a;
      }
      iVar14 = 0x36;
      goto LAB_14c61032a;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_e8;
    if (local_c8[0] == (Anchor<unsigned_int> *)local_e8) {
      testing::AssertionSuccess((AssertionResult *)&local_1a0);
    }
    else {
      testing::PrintToString<terse::Anchor<unsigned_int>_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                 (Anchor<unsigned_int> **)&local_1a8);
      testing::PrintToString<terse::Anchor<unsigned_int>_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 local_c8);
      testing::internal::EqFailure
                ((AssertionResult *)&local_1a0,"instance1.proxy1.base","&instance1.anchor1",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false)
      ;
      if (0xf < uStack_40) {
        pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
        uVar13 = uStack_40 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_40 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c60fea7;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_58._Buf[0] = '\0';
      local_48 = ___xmm_000000000000000f0000000000000000;
      uStack_40 = _UNK_15076add8;
      if (0xf < local_20) {
        uVar13 = local_20 + 1;
        uVar10 = local_38._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_38._Ptr + -8);
          uVar13 = local_20 + 0x28;
          if ((char *)0x1f < local_38._Ptr + (-8 - uVar10)) {
LAB_14c60fea7:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    if ((char)local_1a0.position == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
      pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
        iVar14 = 0x37;
        goto LAB_14c61032a;
      }
      iVar14 = 0x37;
      goto LAB_14c61032a;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_130;
    if (local_168 == (Proxy *)local_130) {
      testing::AssertionSuccess((AssertionResult *)&local_1a0);
    }
    else {
      testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                 (Proxy **)&local_1a8);
      testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 &local_168);
      testing::internal::EqFailure
                ((AssertionResult *)&local_1a0,"instance2.size1.proxy","&instance2.proxy1",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false)
      ;
      if (0xf < uStack_40) {
        pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
        uVar13 = uStack_40 + 1;
        pvVar9 = pvVar2;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar2 + -8);
          uVar13 = uStack_40 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar9))) goto LAB_14c60ffed;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_58._Buf[0] = '\0';
      local_48 = ___xmm_000000000000000f0000000000000000;
      uStack_40 = _UNK_15076add8;
      if (0xf < local_20) {
        uVar13 = local_20 + 1;
        uVar10 = local_38._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_38._Ptr + -8);
          uVar13 = local_20 + 0x28;
          if ((char *)0x1f < local_38._Ptr + (-8 - uVar10)) {
LAB_14c60ffed:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    if ((char)local_1a0.position == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
      pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
        iVar14 = 0x39;
        goto LAB_14c61032a;
      }
      iVar14 = 0x39;
      goto LAB_14c61032a;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0
    ;
    if (local_160.proxy == (Proxy *)0x0) {
      testing::AssertionSuccess((AssertionResult *)&local_1a0);
    }
    else {
      testing::internal::
      CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
                ((AssertionResult *)&local_1a0,"instance2.size2.proxy","nullptr",&local_160.proxy,
                 &local_1a8._Myval2);
    }
    if ((char)local_1a0.position == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
      pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
        iVar14 = 0x3a;
        goto LAB_14c61032a;
      }
      iVar14 = 0x3a;
      goto LAB_14c61032a;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_178;
    testing::internal::EqHelper::
    Compare<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*,0>
              ((AssertionResult *)&local_1a0,"instance2.proxy1.target","&instance2.size1",
               (ArchiveSize<unsigned_int,unsigned_int> **)local_130,
               (ArchiveSize<unsigned_int,unsigned_int> **)&local_1a8);
    if ((char)local_1a0.position == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_1a8);
      pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
        iVar14 = 0x3b;
        goto LAB_14c61032a;
      }
      iVar14 = 0x3b;
      goto LAB_14c61032a;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1)
      ;
      ::operator_delete(pbVar1,0x20);
    }
    local_1a8._Myval2 =
         (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_148;
    testing::internal::EqHelper::
    Compare<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*,0>
              ((AssertionResult *)&local_1a0,"instance2.proxy1.base","&instance2.anchor1",local_128,
               (Anchor<unsigned_int> **)&local_1a8);
    if ((char)local_1a0.position != '\0') goto LAB_14c610378;
    pMVar7 = (Message *)testing::Message::Message((Message *)local_188);
    pcVar11 = (char *)CONCAT44(local_1a0._12_4_,local_1a0.value);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "";
    }
    else if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
      pcVar11 = *(char **)pcVar11;
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_1a8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                        ,0x3c,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1a8);
  }
  if (local_188[0]._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar12 = (undefined8 *)
              ((longlong)
               &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                local_188[0]._Mypair._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_188[0]._Mypair._Myval2 + 4));
    (**(code **)*puVar12)(puVar12,1);
  }
LAB_14c610378:
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           CONCAT44(local_1a0._12_4_,local_1a0.value);
  if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar1);
    ::operator_delete(pbVar1,0x20);
  }
  if (local_130 != (undefined1  [8])0x0) {
    *(Proxy **)((longlong)local_130 + 0x10) = (Proxy *)0x0;
  }
  if (local_128[0] != (Anchor<unsigned_int> *)0x0) {
    local_128[0]->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved
    ;
    local_128[0]->onMoveCallbackData = (void *)0x0;
  }
  if (local_d0 != (undefined1  [8])0x0) {
    *(Proxy **)((longlong)local_d0 + 0x10) = (Proxy *)0x0;
  }
  if (local_c8[0] != (Anchor<unsigned_int> *)0x0) {
    local_c8[0]->onMoveCallbackData = (void *)0x0;
    local_c8[0]->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c610410

void * __thiscall
ArchiveSizeTest_SwapInstances_Test::_scalar_deleting_destructor_
          (ArchiveSizeTest_SwapInstances_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c610450

Test * __thiscall
testing::internal::TestFactoryImpl<ArchiveSizeTest_SwapInstances_Test>::CreateTest
          (TestFactoryImpl<ArchiveSizeTest_SwapInstances_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArchiveSizeTest_SwapInstances_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c610490

void * __thiscall
testing::internal::TestFactoryImpl<ArchiveSizeTest_SwapInstances_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ArchiveSizeTest_SwapInstances_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ArchiveSizeTest_SwapInstances_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c6104d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c6105c9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ArchiveSizeTest_MoveInstances_Test::TestBody(ArchiveSizeTest_MoveInstances_Test *this)

{
  Proxy *pPVar1;
  Anchor<unsigned_int> *pAVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  Anchor<unsigned_int> **ppAVar11;
  ulong64 uVar12;
  ArchiveSizeMoveTest *pAVar13;
  Proxy **ppPVar14;
  undefined1 auStackY_118 [32];
  AssertHelper local_e8;
  vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_> local_e0;
  AssertionResult local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  ArchiveSizeMoveTest local_b0;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e0._Mypair._Myval2._Myfirst = ::operator_new(0xb0);
  local_b0.anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  local_b0.size1.position = 0;
  local_b0.size1.value = 0;
  pPVar1 = &(local_e0._Mypair._Myval2._Myfirst)->proxy1;
  local_b0.size2.position = 0;
  local_e0._Mypair._Myval2._Myend = local_e0._Mypair._Myval2._Myfirst + 2;
  local_b0.size2.value = 0;
  pPVar1->target = &(local_e0._Mypair._Myval2._Myfirst)->size1;
  ((local_e0._Mypair._Myval2._Myfirst)->size1).proxy = pPVar1;
  ((local_e0._Mypair._Myval2._Myfirst)->proxy1).base = &(local_e0._Mypair._Myval2._Myfirst)->anchor1
  ;
  ((local_e0._Mypair._Myval2._Myfirst)->size1).position = 0;
  ((local_e0._Mypair._Myval2._Myfirst)->size1).value = 0;
  ((local_e0._Mypair._Myval2._Myfirst)->size2).position = 0;
  ((local_e0._Mypair._Myval2._Myfirst)->size2).value = 0;
  ((local_e0._Mypair._Myval2._Myfirst)->size2).proxy = (Proxy *)0x0;
  ((local_e0._Mypair._Myval2._Myfirst)->anchor1).value = 0;
  ((local_e0._Mypair._Myval2._Myfirst)->anchor1).onMoveCallbackData = pPVar1;
  ((local_e0._Mypair._Myval2._Myfirst)->anchor1).onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  local_e0._Mypair._Myval2._Myfirst[1].size1.position = 0;
  local_e0._Mypair._Myval2._Myfirst[1].size1.value = 0;
  pPVar1 = &local_e0._Mypair._Myval2._Myfirst[1].proxy1;
  local_e0._Mypair._Myval2._Myfirst[1].size2.position = 0;
  local_e0._Mypair._Myval2._Myfirst[1].size2.value = 0;
  local_e0._Mypair._Myval2._Myfirst[1].size2.proxy = (Proxy *)0x0;
  local_e0._Mypair._Myval2._Myfirst[1].anchor1.value = 0;
  pPVar1->target = &local_e0._Mypair._Myval2._Myfirst[1].size1;
  local_e0._Mypair._Myval2._Myfirst[1].proxy1.base = &local_e0._Mypair._Myval2._Myfirst[1].anchor1;
  local_e0._Mypair._Myval2._Myfirst[1].size1.proxy = pPVar1;
  local_e0._Mypair._Myval2._Myfirst[1].anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  local_e0._Mypair._Myval2._Myfirst[1].anchor1.onMoveCallbackData = pPVar1;
  local_e0._Mypair._Myval2._Mylast = local_e0._Mypair._Myval2._Myfirst + 2;
  local_b0.proxy1.target = &local_b0.size1;
  local_b0.proxy1.base = &local_b0.anchor1;
  local_b0.size1.proxy = &local_b0.proxy1;
  local_b0.anchor1.onMoveCallbackData = &local_b0.proxy1;
  local_b0.size2.proxy = (Proxy *)0x0;
  local_b0.anchor1.value = 0;
  std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::
  _Emplace_reallocate<ArchiveSizeMoveTest>(&local_e0,local_e0._Mypair._Myval2._Mylast,&local_b0);
  if ((ArchiveSizeMoveTest *)local_b0.proxy1.target != (ArchiveSizeMoveTest *)0x0) {
    ((ArchiveSize<unsigned_int,unsigned_int> *)&(local_b0.proxy1.target)->position)->proxy =
         (Proxy *)0x0;
  }
  if (local_b0.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_b0.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_b0.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  local_b0.proxy1.target = &local_b0.size1;
  local_b0.size1.position = 0;
  local_b0.proxy1.base = &local_b0.anchor1;
  local_b0.size1.proxy = &local_b0.proxy1;
  local_b0.anchor1.onMoveCallbackData = &local_b0.proxy1;
  local_b0.size1.value = 0;
  local_b0.size2.position = 0;
  local_b0.size2.value = 0;
  local_b0.size2.proxy = (Proxy *)0x0;
  local_b0.anchor1.value = 0;
  local_b0.anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  if (local_e0._Mypair._Myval2._Mylast == local_e0._Mypair._Myval2._Myend) {
    std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::
    _Emplace_reallocate<ArchiveSizeMoveTest>(&local_e0,local_e0._Mypair._Myval2._Mylast,&local_b0);
  }
  else {
    ArchiveSizeMoveTest::ArchiveSizeMoveTest(local_e0._Mypair._Myval2._Mylast,&local_b0);
    local_e0._Mypair._Myval2._Mylast = local_e0._Mypair._Myval2._Mylast + 1;
  }
  if ((ArchiveSizeMoveTest *)local_b0.proxy1.target != (ArchiveSizeMoveTest *)0x0) {
    ((ArchiveSize<unsigned_int,unsigned_int> *)&(local_b0.proxy1.target)->position)->proxy =
         (Proxy *)0x0;
  }
  if (local_b0.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_b0.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_b0.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  local_b0.proxy1.target = &local_b0.size1;
  local_b0.size1.position = 0;
  local_b0.proxy1.base = &local_b0.anchor1;
  local_b0.size1.proxy = &local_b0.proxy1;
  local_b0.anchor1.onMoveCallbackData = &local_b0.proxy1;
  local_b0.size1.value = 0;
  local_b0.size2.position = 0;
  local_b0.size2.value = 0;
  local_b0.size2.proxy = (Proxy *)0x0;
  local_b0.anchor1.value = 0;
  local_b0.anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  if (local_e0._Mypair._Myval2._Mylast == local_e0._Mypair._Myval2._Myend) {
    std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::
    _Emplace_reallocate<ArchiveSizeMoveTest>(&local_e0,local_e0._Mypair._Myval2._Mylast,&local_b0);
  }
  else {
    ArchiveSizeMoveTest::ArchiveSizeMoveTest(local_e0._Mypair._Myval2._Mylast,&local_b0);
    local_e0._Mypair._Myval2._Mylast = local_e0._Mypair._Myval2._Mylast + 1;
  }
  if ((ArchiveSizeMoveTest *)local_b0.proxy1.target != (ArchiveSizeMoveTest *)0x0) {
    ((ArchiveSize<unsigned_int,unsigned_int> *)&(local_b0.proxy1.target)->position)->proxy =
         (Proxy *)0x0;
  }
  if (local_b0.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_b0.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_b0.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  local_b0.proxy1.target = &local_b0.size1;
  local_b0.size1.position = 0;
  local_b0.proxy1.base = &local_b0.anchor1;
  local_b0.size1.proxy = &local_b0.proxy1;
  local_b0.anchor1.onMoveCallbackData = &local_b0.proxy1;
  local_b0.size1.value = 0;
  local_b0.size2.position = 0;
  local_b0.size2.value = 0;
  local_b0.size2.proxy = (Proxy *)0x0;
  local_b0.anchor1.value = 0;
  local_b0.anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  if (local_e0._Mypair._Myval2._Mylast == local_e0._Mypair._Myval2._Myend) {
    std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::
    _Emplace_reallocate<ArchiveSizeMoveTest>(&local_e0,local_e0._Mypair._Myval2._Mylast,&local_b0);
  }
  else {
    ArchiveSizeMoveTest::ArchiveSizeMoveTest(local_e0._Mypair._Myval2._Mylast,&local_b0);
    local_e0._Mypair._Myval2._Mylast = local_e0._Mypair._Myval2._Mylast + 1;
  }
  if ((ArchiveSizeMoveTest *)local_b0.proxy1.target != (ArchiveSizeMoveTest *)0x0) {
    ((ArchiveSize<unsigned_int,unsigned_int> *)&(local_b0.proxy1.target)->position)->proxy =
         (Proxy *)0x0;
  }
  if (local_b0.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_b0.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_b0.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  local_b0.proxy1.target = &local_b0.size1;
  local_b0.size1.position = 0;
  local_b0.proxy1.base = &local_b0.anchor1;
  local_b0.size1.proxy = &local_b0.proxy1;
  local_b0.anchor1.onMoveCallbackData = &local_b0.proxy1;
  local_b0.size1.value = 0;
  local_b0.size2.position = 0;
  local_b0.size2.value = 0;
  local_b0.size2.proxy = (Proxy *)0x0;
  local_b0.anchor1.value = 0;
  local_b0.anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  if (local_e0._Mypair._Myval2._Mylast == local_e0._Mypair._Myval2._Myend) {
    std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::
    _Emplace_reallocate<ArchiveSizeMoveTest>(&local_e0,local_e0._Mypair._Myval2._Mylast,&local_b0);
  }
  else {
    ArchiveSizeMoveTest::ArchiveSizeMoveTest(local_e0._Mypair._Myval2._Mylast,&local_b0);
    local_e0._Mypair._Myval2._Mylast = local_e0._Mypair._Myval2._Mylast + 1;
  }
  if ((ArchiveSizeMoveTest *)local_b0.proxy1.target != (ArchiveSizeMoveTest *)0x0) {
    ((ArchiveSize<unsigned_int,unsigned_int> *)&(local_b0.proxy1.target)->position)->proxy =
         (Proxy *)0x0;
  }
  pAVar2 = local_b0.proxy1.base;
  if (local_b0.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_b0.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    pAVar2->onMoveCallbackData = (void *)0x0;
  }
  ppPVar14 = &local_e0._Mypair._Myval2._Myfirst[1].size1.proxy;
  local_e8.data_ = (AssertHelperData *)&local_e0._Mypair._Myval2._Myfirst[1].proxy1;
  if ((AssertHelperData *)*ppPVar14 == local_e8.data_) {
    testing::AssertionSuccess(&local_c8);
  }
  else {
    testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
               (Proxy **)&local_e8);
    testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,ppPVar14
              );
    testing::internal::EqFailure
              (&local_c8,"instances[1].size1.proxy","&instances[1].proxy1",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false);
    if (0xf < uStack_40) {
      pvVar3 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar12 = uStack_40 + 1;
      pvVar7 = pvVar3;
      if (0xfff < uVar12) {
        pvVar7 = *(void **)((longlong)pvVar3 + -8);
        uVar12 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) goto LAB_14c610975;
      }
      ::operator_delete(pvVar7,uVar12);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar12 = local_20 + 1;
      uVar8 = local_38._Ptr;
      if (0xfff < uVar12) {
        uVar8 = *(undefined8 *)(local_38._Ptr + -8);
        uVar12 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar8)) {
LAB_14c610975:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar8,uVar12);
    }
  }
  uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
  if (local_c8.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
    if (local_c8.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_b8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                        ,0x48,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
    if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
      puVar10 = (undefined8 *)
                ((longlong)
                 &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->position +
                (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
      (**(code **)*puVar10)(puVar10,1);
    }
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
    }
    if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
      return;
    }
    if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
      ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
      do {
        if (((Proxy *)(ppAVar11 + -1))->target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
          ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
        }
        pAVar2 = *ppAVar11;
        if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
          pAVar2->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved
          ;
          pAVar2->onMoveCallbackData = (void *)0x0;
        }
        pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
        ppAVar11 = ppAVar11 + 0xb;
      } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
    }
    uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
              (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
    pAVar13 = local_e0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar12) {
      pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
      uVar12 = uVar12 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13))
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  else {
    if (local_c8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_c8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    ppPVar14 = &local_e0._Mypair._Myval2._Myfirst[1].size2.proxy;
    local_e8.data_ = (AssertHelperData *)0x0;
    if (*ppPVar14 == (Proxy *)0x0) {
      testing::AssertionSuccess(&local_c8);
    }
    else {
      testing::internal::
      CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
                (&local_c8,"instances[1].size2.proxy","nullptr",ppPVar14,&local_e8.data_);
    }
    uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
    if (local_c8.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
      if (local_c8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
        }
      }
      pAVar6 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_b8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                          ,0x49,pcVar9);
      testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
      if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
        puVar10 = (undefined8 *)
                  ((longlong)
                   &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->position +
                  (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
        (**(code **)*puVar10)(puVar10,1);
      }
      if (local_c8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c8.message_._Mypair._Myval2);
        ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
      }
      if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
        return;
      }
      if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
        ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
        do {
          if (((Proxy *)(ppAVar11 + -1))->target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
            ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
          }
          pAVar2 = *ppAVar11;
          if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
            pAVar2->onMoveCallback =
                 terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
            pAVar2->onMoveCallbackData = (void *)0x0;
          }
          pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
          ppAVar11 = ppAVar11 + 0xb;
        } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
      }
      uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
      pAVar13 = local_e0._Mypair._Myval2._Myfirst;
      if (0xfff < uVar12) {
        pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
        uVar12 = uVar12 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
    }
    else {
      if (local_c8.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_c8.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      local_e8.data_ = (AssertHelperData *)(local_e0._Mypair._Myval2._Myfirst + 1);
      testing::internal::EqHelper::
      Compare<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*,0>
                (&local_c8,"instances[1].proxy1.target","&instances[1].size1",
                 &local_e0._Mypair._Myval2._Myfirst[1].proxy1.target,
                 (ArchiveSize<unsigned_int,unsigned_int> **)&local_e8);
      uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
      if (local_c8.success_ == false) {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
        if (local_c8.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar9 = "";
        }
        else {
          pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
            pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
          }
        }
        pAVar6 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_b8,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                            ,0x4a,pcVar9);
        testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
        if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
          puVar10 = (undefined8 *)
                    ((longlong)
                     &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->position
                    + (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
          (**(code **)*puVar10)(puVar10,1);
        }
        if (local_c8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c8.message_._Mypair._Myval2);
          ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
        }
        if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
          return;
        }
        if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
          ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
          do {
            if (((Proxy *)(ppAVar11 + -1))->target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0)
            {
              ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
            }
            pAVar2 = *ppAVar11;
            if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
              pAVar2->onMoveCallback =
                   terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
              pAVar2->onMoveCallbackData = (void *)0x0;
            }
            pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
            ppAVar11 = ppAVar11 + 0xb;
          } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
        }
        uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                  (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
        pAVar13 = local_e0._Mypair._Myval2._Myfirst;
        if (0xfff < uVar12) {
          pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
          uVar12 = uVar12 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      else {
        if (local_c8.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c8.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_e8.data_ = (AssertHelperData *)&local_e0._Mypair._Myval2._Myfirst[1].anchor1;
        testing::internal::EqHelper::
        Compare<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*,0>
                  (&local_c8,"instances[1].proxy1.base","&instances[1].anchor1",
                   &local_e0._Mypair._Myval2._Myfirst[1].proxy1.base,
                   (Anchor<unsigned_int> **)&local_e8);
        uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
        if (local_c8.success_ == false) {
          pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
          if (local_c8.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar9 = "";
          }
          else {
            pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
              pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
            }
          }
          pAVar6 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             ((AssertHelper *)&local_b8,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                              ,0x4b,pcVar9);
          testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
          testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
          if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->
                        position + (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
            (**(code **)*puVar10)(puVar10,1);
          }
          if (local_c8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_c8.message_._Mypair._Myval2);
            ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
          }
          if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
            return;
          }
          if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
            ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
            do {
              if (((Proxy *)(ppAVar11 + -1))->target !=
                  (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
                ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
              }
              pAVar2 = *ppAVar11;
              if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
                pAVar2->onMoveCallback =
                     terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
                pAVar2->onMoveCallbackData = (void *)0x0;
              }
              pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
              ppAVar11 = ppAVar11 + 0xb;
            } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
          }
          uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                    (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
          pAVar13 = local_e0._Mypair._Myval2._Myfirst;
          if (0xfff < uVar12) {
            pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
            uVar12 = uVar12 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
        else {
          if (local_c8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_c8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          local_e8.data_ = (AssertHelperData *)&local_e0._Mypair._Myval2._Myfirst[2].proxy1;
          testing::internal::EqHelper::
          Compare<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,0>
                    (&local_c8,"instances[2].size1.proxy","&instances[2].proxy1",
                     &local_e0._Mypair._Myval2._Myfirst[2].size1.proxy,(Proxy **)&local_e8);
          uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
          if (local_c8.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
            if (local_c8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar9 = "";
            }
            else {
              pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
              }
            }
            pAVar6 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               ((AssertHelper *)&local_b8,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                                ,0x4d,pcVar9);
            testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
            testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
            if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->
                          position + (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
              (**(code **)*puVar10)(puVar10,1);
            }
            if (local_c8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_c8.message_._Mypair._Myval2);
              ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
            }
            if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
              return;
            }
            if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
              ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
              do {
                if (((Proxy *)(ppAVar11 + -1))->target !=
                    (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
                  ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
                }
                pAVar2 = *ppAVar11;
                if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
                  pAVar2->onMoveCallback =
                       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
                  pAVar2->onMoveCallbackData = (void *)0x0;
                }
                pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
                ppAVar11 = ppAVar11 + 0xb;
              } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
            }
            uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                      (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
            pAVar13 = local_e0._Mypair._Myval2._Myfirst;
            if (0xfff < uVar12) {
              pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
              uVar12 = uVar12 + 0x27;
              if (0x1f < (ulonglong)
                         ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
          }
          else {
            if (local_c8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_c8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            ppPVar14 = &local_e0._Mypair._Myval2._Myfirst[2].size2.proxy;
            local_e8.data_ = (AssertHelperData *)0x0;
            if (*ppPVar14 == (Proxy *)0x0) {
              testing::AssertionSuccess(&local_c8);
            }
            else {
              testing::internal::
              CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
                        (&local_c8,"instances[2].size2.proxy","nullptr",ppPVar14,&local_e8.data_);
            }
            uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
            if (local_c8.success_ == false) {
              pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
              if (local_c8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar9 = "";
              }
              else {
                pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
                }
              }
              pAVar6 = (AssertHelper *)
                       testing::internal::AssertHelper::AssertHelper
                                 ((AssertHelper *)&local_b8,kFatalFailure,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                                  ,0x4e,pcVar9);
              testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
              testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
              if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->
                            position + (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
                (**(code **)*puVar10)(puVar10,1);
              }
              if (local_c8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_c8.message_._Mypair._Myval2);
                ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
              }
              if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
                return;
              }
              if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
                ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
                do {
                  if (((Proxy *)(ppAVar11 + -1))->target !=
                      (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
                    ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
                  }
                  pAVar2 = *ppAVar11;
                  if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
                    pAVar2->onMoveCallback =
                         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
                    pAVar2->onMoveCallbackData = (void *)0x0;
                  }
                  pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
                  ppAVar11 = ppAVar11 + 0xb;
                } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
              }
              uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                        (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
              pAVar13 = local_e0._Mypair._Myval2._Myfirst;
              if (0xfff < uVar12) {
                pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
                uVar12 = uVar12 + 0x27;
                if (0x1f < (ulonglong)
                           ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13)))
                {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
            }
            else {
              if (local_c8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_c8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
              }
              local_e8.data_ = (AssertHelperData *)(local_e0._Mypair._Myval2._Myfirst + 2);
              testing::internal::EqHelper::
              Compare<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*,0>
                        (&local_c8,"instances[2].proxy1.target","&instances[2].size1",
                         &local_e0._Mypair._Myval2._Myfirst[2].proxy1.target,
                         (ArchiveSize<unsigned_int,unsigned_int> **)&local_e8);
              uVar4._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              if (local_c8.success_ == false) {
                pMVar5 = (Message *)testing::Message::Message((Message *)&local_e8);
                if (local_c8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar9 = "";
                }
                else {
                  pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
                  }
                }
                pAVar6 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   ((AssertHelper *)&local_b8,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                                    ,0x4f,pcVar9);
                testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
                testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_b8);
                if ((ArchiveSizeMoveTest *)local_e8.data_ != (ArchiveSizeMoveTest *)0x0) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             &((ArchiveSize<unsigned_int,unsigned_int> *)&(local_e8.data_)->type)->
                              position + (longlong)*(int *)(*(longlong *)local_e8.data_ + 4));
                  (**(code **)*puVar10)(puVar10,1);
                }
                if (local_c8.message_._Mypair._Myval2 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_c8.message_._Mypair._Myval2);
                  ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
                }
                if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
                  return;
                }
                if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
                  ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
                  do {
                    if (((Proxy *)(ppAVar11 + -1))->target !=
                        (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
                      ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
                    }
                    pAVar2 = *ppAVar11;
                    if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
                      pAVar2->onMoveCallback =
                           terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
                      pAVar2->onMoveCallbackData = (void *)0x0;
                    }
                    pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
                    ppAVar11 = ppAVar11 + 0xb;
                  } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
                }
                uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                          (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
                pAVar13 = local_e0._Mypair._Myval2._Myfirst;
                if (0xfff < uVar12) {
                  pAVar13 = (ArchiveSizeMoveTest *)local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base
                  ;
                  uVar12 = uVar12 + 0x27;
                  if (0x1f < (ulonglong)
                             ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pAVar13)
                             )) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
              }
              else {
                if (local_c8.message_._Mypair._Myval2 !=
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_c8.message_._Mypair._Myval2);
                  ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
                }
                local_e8.data_ = (AssertHelperData *)&local_e0._Mypair._Myval2._Myfirst[2].anchor1;
                testing::internal::EqHelper::
                Compare<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*,0>
                          (&local_c8,"instances[2].proxy1.base","&instances[2].anchor1",
                           &local_e0._Mypair._Myval2._Myfirst[2].proxy1.base,
                           (Anchor<unsigned_int> **)&local_e8);
                if (local_c8.success_ == false) {
                  pMVar5 = (Message *)testing::Message::Message((Message *)&local_b8);
                  if (local_c8.message_._Mypair._Myval2 ==
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    pcVar9 = "";
                  }
                  else {
                    pcVar9 = (char *)local_c8.message_._Mypair._Myval2;
                    if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                      pcVar9 = *(char **)local_c8.message_._Mypair._Myval2;
                    }
                  }
                  pAVar6 = (AssertHelper *)
                           testing::internal::AssertHelper::AssertHelper
                                     (&local_e8,kFatalFailure,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\types\\TestArchiveSize.cpp"
                                      ,0x50,pcVar9);
                  testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
                  testing::internal::AssertHelper::~AssertHelper(&local_e8);
                  if (local_b8._Mypair._Myval2 !=
                      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
                  {
                    puVar10 = (undefined8 *)
                              ((longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4) +
                              (longlong)local_b8._Mypair._Myval2);
                    (**(code **)*puVar10)(puVar10,1);
                  }
                  if (local_c8.message_._Mypair._Myval2 !=
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)local_c8.message_._Mypair._Myval2);
                    ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
                  }
                  if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
                    return;
                  }
                  if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
                    ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
                    do {
                      if (((Proxy *)(ppAVar11 + -1))->target !=
                          (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
                        ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
                      }
                      pAVar2 = *ppAVar11;
                      if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
                        pAVar2->onMoveCallback =
                             terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
                        pAVar2->onMoveCallbackData = (void *)0x0;
                      }
                      pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
                      ppAVar11 = ppAVar11 + 0xb;
                    } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
                  }
                  uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                            (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
                  pAVar13 = local_e0._Mypair._Myval2._Myfirst;
                  if (0xfff < uVar12) {
                    pAVar13 = (ArchiveSizeMoveTest *)
                              local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
                    uVar12 = uVar12 + 0x27;
                    if (0x1f < (ulonglong)
                               ((longlong)local_e0._Mypair._Myval2._Myfirst +
                               (-8 - (longlong)pAVar13))) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                  }
                }
                else {
                  if (local_c8.message_._Mypair._Myval2 !=
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                    _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)local_c8.message_._Mypair._Myval2);
                    ::operator_delete((void *)local_c8.message_._Mypair._Myval2,0x20);
                  }
                  if (local_e0._Mypair._Myval2._Myfirst == (ArchiveSizeMoveTest *)0x0) {
                    return;
                  }
                  if (local_e0._Mypair._Myval2._Myfirst != local_e0._Mypair._Myval2._Mylast) {
                    ppAVar11 = &((local_e0._Mypair._Myval2._Myfirst)->proxy1).base;
                    do {
                      if (((Proxy *)(ppAVar11 + -1))->target !=
                          (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
                        ((Proxy *)(ppAVar11 + -1))->target->proxy = (Proxy *)0x0;
                      }
                      pAVar2 = *ppAVar11;
                      if (pAVar2 != (Anchor<unsigned_int> *)0x0) {
                        pAVar2->onMoveCallback =
                             terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
                        pAVar2->onMoveCallbackData = (void *)0x0;
                      }
                      pAVar13 = (ArchiveSizeMoveTest *)(ppAVar11 + 1);
                      ppAVar11 = ppAVar11 + 0xb;
                    } while (pAVar13 != local_e0._Mypair._Myval2._Mylast);
                  }
                  uVar12 = (((longlong)local_e0._Mypair._Myval2._Myend -
                            (longlong)local_e0._Mypair._Myval2._Myfirst) / 0x58) * 0x58;
                  pAVar13 = local_e0._Mypair._Myval2._Myfirst;
                  if (0xfff < uVar12) {
                    pAVar13 = (ArchiveSizeMoveTest *)
                              local_e0._Mypair._Myval2._Myfirst[-1].proxy1.base;
                    uVar12 = uVar12 + 0x27;
                    if (0x1f < (ulonglong)
                               ((longlong)local_e0._Mypair._Myval2._Myfirst +
                               (-8 - (longlong)pAVar13))) {
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
    }
  }
  ::operator_delete(pAVar13,uVar12);
  return;
}

// `scalar_deleting_destructor' @ 14c6117d0

void * __thiscall
ArchiveSizeTest_MoveInstances_Test::_scalar_deleting_destructor_
          (ArchiveSizeTest_MoveInstances_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c611810

Test * __thiscall
testing::internal::TestFactoryImpl<ArchiveSizeTest_MoveInstances_Test>::CreateTest
          (TestFactoryImpl<ArchiveSizeTest_MoveInstances_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArchiveSizeTest_MoveInstances_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c611850

void * __thiscall
testing::internal::TestFactoryImpl<ArchiveSizeTest_MoveInstances_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<ArchiveSizeTest_MoveInstances_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ArchiveSizeTest_MoveInstances_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c611890

void __thiscall
ArchiveSizeTest_MoveAfterTemporaryProxy_Test::TestBody
          (ArchiveSizeTest_MoveAfterTemporaryProxy_Test *this)

{
  ArchiveSizeMoveTest local_c8;
  ArchiveSizeMoveTest local_68;
  
  local_c8.proxy1.target = &local_c8.size1;
  local_c8.size1.position = 0;
  local_c8.size1.value = 0;
  local_c8.size2.position = 0;
  local_c8.size2.value = 0;
  local_c8.anchor1.value = 0;
  local_c8.proxy1.base = &local_c8.anchor1;
  local_c8.size1.proxy = &local_c8.proxy1;
  local_c8.anchor1.onMoveCallbackData = &local_c8.proxy1;
  local_c8.anchor1.onMoveCallback =
       terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  local_c8.size2.proxy = (Proxy *)0x0;
  ArchiveSizeMoveTest::ArchiveSizeMoveTest(&local_68,&local_c8);
  if (local_68.proxy1.target != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    (local_68.proxy1.target)->proxy = (Proxy *)0x0;
  }
  if (local_68.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_68.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_68.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  if ((ArchiveSizeMoveTest *)local_c8.proxy1.target != (ArchiveSizeMoveTest *)0x0) {
    ((ArchiveSize<unsigned_int,unsigned_int> *)&(local_c8.proxy1.target)->position)->proxy =
         (Proxy *)0x0;
  }
  if (local_c8.proxy1.base != (Anchor<unsigned_int> *)0x0) {
    (local_c8.proxy1.base)->onMoveCallback =
         terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    (local_c8.proxy1.base)->onMoveCallbackData = (void *)0x0;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c611960

void * __thiscall
ArchiveSizeTest_MoveAfterTemporaryProxy_Test::_scalar_deleting_destructor_
          (ArchiveSizeTest_MoveAfterTemporaryProxy_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c6119a0

Test * __thiscall
testing::internal::TestFactoryImpl<ArchiveSizeTest_MoveAfterTemporaryProxy_Test>::CreateTest
          (TestFactoryImpl<ArchiveSizeTest_MoveAfterTemporaryProxy_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ArchiveSizeTest_MoveAfterTemporaryProxy_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c6119e0

void * __thiscall
testing::internal::TestFactoryImpl<ArchiveSizeTest_MoveAfterTemporaryProxy_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ArchiveSizeTest_MoveAfterTemporaryProxy_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ArchiveSizeTest_MoveAfterTemporaryProxy_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*> @ 14c611a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          Anchor<unsigned_int> **param_3,Anchor<unsigned_int> **param_4)

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
    PrintToString<terse::Anchor<unsigned_int>_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::Anchor<unsigned_int>_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c611b1d;
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
LAB_14c611b1d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*> @ 14c611b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArchiveSize<unsigned_int,unsigned_int> **param_3,
          ArchiveSize<unsigned_int,unsigned_int> **param_4)

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
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c611c5d;
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
LAB_14c611c5d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t> @ 14c611ca0

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,Proxy **param_3,
          void **param_4)

{
                    /* WARNING: Load size is inaccurate */
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CmpHelperEQ<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c611cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c611ded;
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
LAB_14c611ded:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*> @ 14c611e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          Anchor<unsigned_int> **param_3,Anchor<unsigned_int> **param_4)

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
  PrintToString<terse::Anchor<unsigned_int>_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<terse::Anchor<unsigned_int>_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c611f18;
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
LAB_14c611f18:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*> @ 14c611f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArchiveSize<unsigned_int,unsigned_int> **param_3,
          ArchiveSize<unsigned_int,unsigned_int> **param_4)

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
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c612048;
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
LAB_14c612048:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t> @ 14c612090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
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
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c6122dd;
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
LAB_14c6122dd:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar5);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c612330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c612418;
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
LAB_14c612418:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// Compare<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*,0> @ 14c612460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          Anchor<unsigned_int> **param_3,Anchor<unsigned_int> **param_4)

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
    PrintToString<terse::Anchor<unsigned_int>_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::Anchor<unsigned_int>_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c61255a;
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
LAB_14c61255a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// Compare<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*,0> @ 14c6125a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ArchiveSize<unsigned_int,unsigned_int> **param_3,
          ArchiveSize<unsigned_int,unsigned_int> **param_4)

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
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c61269a;
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
LAB_14c61269a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// Compare<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,0> @ 14c6126e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,0>
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
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c6127da;
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
LAB_14c6127da:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<terse::Anchor<unsigned_int>_> @ 14c612820

void __cdecl
testing::internal::DefaultPrintTo<terse::Anchor<unsigned_int>_>
          (WrapPrinterType<1> param_1,Anchor<unsigned_int> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (Anchor<unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c612834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// DefaultPrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>_> @ 14c612850

void __cdecl
testing::internal::DefaultPrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>_>
          (WrapPrinterType<1> param_1,ArchiveSize<unsigned_int,unsigned_int> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c612864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// DefaultPrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy> @ 14c612880

void __cdecl
testing::internal::DefaultPrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy>
          (WrapPrinterType<1> param_1,Proxy *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (Proxy *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c612894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// FormatForComparisonFailureMessage<std::nullptr_t,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c6128b0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::nullptr_t,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
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

// FormatForComparisonFailureMessage<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*> @ 14c612a60

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<terse::Anchor<unsigned_int>_*,terse::Anchor<unsigned_int>_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Anchor<unsigned_int> **param_1,Anchor<unsigned_int> **param_2)

{
  PrintToString<terse::Anchor<unsigned_int>_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*> @ 14c612a80

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<terse::ArchiveSize<unsigned_int,unsigned_int>_*,terse::ArchiveSize<unsigned_int,unsigned_int>_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ArchiveSize<unsigned_int,unsigned_int> **param_1,
          ArchiveSize<unsigned_int,unsigned_int> **param_2)

{
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t> @ 14c612aa0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,std::nullptr_t>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Proxy **param_1,void **param_2)

{
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c612ac0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*,terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Proxy **param_1,Proxy **param_2)

{
  PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<terse::Anchor<unsigned_int>_*> @ 14c612ae0

void __cdecl
testing::internal::PrintTo<terse::Anchor<unsigned_int>_*>
          (Anchor<unsigned_int> **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (Anchor<unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c612afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>_*> @ 14c612b10

void __cdecl
testing::internal::PrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
          (ArchiveSize<unsigned_int,unsigned_int> **param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c612b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c612b40

void __cdecl
testing::internal::PrintTo<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
          (Proxy **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (Proxy *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c612b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintToString<terse::Anchor<unsigned_int>_*> @ 14c612b70

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<terse::Anchor<unsigned_int>_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Anchor<unsigned_int> **param_1)

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
  if (*param_1 == (Anchor<unsigned_int> *)0x0) {
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

// PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*> @ 14c612d30

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ArchiveSize<unsigned_int,unsigned_int> **param_1)

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
  if (*param_1 == (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
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

// PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c612ef0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Proxy **param_1)

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
  if (*param_1 == (Proxy *)0x0) {
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

// UniversalPrint<terse::Anchor<unsigned_int>_*> @ 14c6130b0

void __cdecl
testing::internal::UniversalPrint<terse::Anchor<unsigned_int>_*>
          (Anchor<unsigned_int> **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (Anchor<unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6130ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// UniversalPrint<terse::ArchiveSize<unsigned_int,unsigned_int>_*> @ 14c6130e0

void __cdecl
testing::internal::UniversalPrint<terse::ArchiveSize<unsigned_int,unsigned_int>_*>
          (ArchiveSize<unsigned_int,unsigned_int> **param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6130fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// UniversalPrint<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*> @ 14c613110

void __cdecl
testing::internal::UniversalPrint<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy_*>
          (Proxy **param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (Proxy *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c61312a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// _Emplace_reallocate<ArchiveSizeMoveTest> @ 14c613140

ArchiveSizeMoveTest * __thiscall
std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::
_Emplace_reallocate<ArchiveSizeMoveTest>
          (vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_> *this,
          ArchiveSizeMoveTest *param_1,ArchiveSizeMoveTest *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ArchiveSize<unsigned_int,unsigned_int> *pAVar3;
  Anchor<unsigned_int> *pAVar4;
  longlong lVar5;
  ArchiveSizeMoveTest *pAVar6;
  ArchiveSizeMoveTest *pAVar7;
  ulonglong uVar8;
  ArchiveSizeMoveTest *pAVar9;
  ulong64 uVar10;
  ArchiveSizeMoveTest *pAVar11;
  ArchiveSizeMoveTest *this_00;
  
  pAVar9 = (this->_Mypair)._Myval2._Myfirst;
  lVar5 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pAVar9) / 0x58;
  if (lVar5 == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar5 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar9) / 0x58;
  if (0x2e8ba2e8ba2e8ba - (uVar2 >> 1) < uVar2) {
    uVar8 = 0x2e8ba2e8ba2e8ba;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar1;
    if (uVar1 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x2e8ba2e8ba2e8ba < uVar8) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pAVar7 = _Allocate<16,std::_Default_allocate_traits>(uVar8 * 0x58);
  this_00 = pAVar7 + ((longlong)param_1 - (longlong)pAVar9) / 0x58;
  ArchiveSizeMoveTest::ArchiveSizeMoveTest(this_00,param_2);
  pAVar9 = (this->_Mypair)._Myval2._Mylast;
  pAVar11 = (this->_Mypair)._Myval2._Myfirst;
  pAVar6 = pAVar7;
  if (param_1 == pAVar9) {
    for (; pAVar11 != pAVar9; pAVar11 = pAVar11 + 1) {
      ArchiveSizeMoveTest::ArchiveSizeMoveTest(pAVar6,pAVar11);
      pAVar6 = pAVar6 + 1;
    }
  }
  else {
    for (; pAVar11 != param_1; pAVar11 = pAVar11 + 1) {
      ArchiveSizeMoveTest::ArchiveSizeMoveTest(pAVar6,pAVar11);
      pAVar6 = pAVar6 + 1;
    }
    pAVar9 = (this->_Mypair)._Myval2._Mylast;
    pAVar11 = this_00;
    for (; param_1 != pAVar9; param_1 = param_1 + 1) {
      pAVar11 = pAVar11 + 1;
      ArchiveSizeMoveTest::ArchiveSizeMoveTest(pAVar11,param_1);
    }
  }
  pAVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (pAVar9 != (ArchiveSizeMoveTest *)0x0) {
    pAVar11 = (this->_Mypair)._Myval2._Mylast;
    for (; pAVar9 != pAVar11; pAVar9 = pAVar9 + 1) {
      pAVar3 = (pAVar9->proxy1).target;
      if (pAVar3 != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
        pAVar3->proxy = (Proxy *)0x0;
      }
      pAVar4 = (pAVar9->proxy1).base;
      if (pAVar4 != (Anchor<unsigned_int> *)0x0) {
        pAVar4->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
        pAVar4->onMoveCallbackData = (void *)0x0;
      }
    }
    pAVar9 = (this->_Mypair)._Myval2._Myfirst;
    uVar10 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar9) / 0x58) * 0x58;
    pAVar11 = pAVar9;
    if (0xfff < uVar10) {
      pAVar11 = (ArchiveSizeMoveTest *)pAVar9[-1].proxy1.base;
      uVar10 = uVar10 + 0x27;
      if (0x1f < (ulonglong)((longlong)pAVar9 + (-8 - (longlong)pAVar11))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pAVar11,uVar10);
  }
  (this->_Mypair)._Myval2._Myfirst = pAVar7;
  (this->_Mypair)._Myval2._Mylast = pAVar7 + uVar1;
  (this->_Mypair)._Myval2._Myend = pAVar7 + uVar8;
  return this_00;
}

// swap<terse::Anchor<unsigned_int>,0> @ 14c6133b0

void __cdecl
std::swap<terse::Anchor<unsigned_int>,0>
          (Anchor<unsigned_int> *param_1,Anchor<unsigned_int> *param_2)

{
  uint uVar1;
  _func___cdecl_void_Anchor<unsigned_int>_ptr_void_ptr *p_Var2;
  void *pvVar3;
  _func___cdecl_void_Anchor<unsigned_int>_ptr_void_ptr *p_Var4;
  void *pvVar5;
  Anchor<unsigned_int> local_28;
  
  local_28.value = param_1->value;
  local_28.onMoveCallback = param_1->onMoveCallback;
  local_28.onMoveCallbackData = param_1->onMoveCallbackData;
  param_1->value = 0;
  param_1->onMoveCallback = (_func___cdecl_void_Anchor<unsigned_int>_ptr_void_ptr *)0x0;
  param_1->onMoveCallbackData = (void *)0x0;
  if (local_28.onMoveCallback != (_func___cdecl_void_Anchor<unsigned_int>_ptr_void_ptr *)0x0) {
    (*local_28.onMoveCallback)(&local_28,local_28.onMoveCallbackData);
  }
  uVar1 = param_1->value;
  param_1->value = param_2->value;
  param_2->value = uVar1;
  p_Var2 = param_1->onMoveCallback;
  param_1->onMoveCallback = param_2->onMoveCallback;
  param_2->onMoveCallback = p_Var2;
  pvVar3 = param_1->onMoveCallbackData;
  param_1->onMoveCallbackData = param_2->onMoveCallbackData;
  param_2->onMoveCallbackData = pvVar3;
  if (param_1->onMoveCallback != (_func___cdecl_void_Anchor<unsigned_int>_ptr_void_ptr *)0x0) {
    (*param_1->onMoveCallback)(param_1,param_1->onMoveCallbackData);
  }
  uVar1 = param_2->value;
  param_2->value = local_28.value;
  p_Var2 = param_2->onMoveCallback;
  pvVar3 = param_2->onMoveCallbackData;
  param_2->onMoveCallback = local_28.onMoveCallback;
  param_2->onMoveCallbackData = local_28.onMoveCallbackData;
  if (local_28.onMoveCallback != (_func___cdecl_void_Anchor<unsigned_int>_ptr_void_ptr *)0x0) {
    local_28.value = uVar1;
    p_Var4 = local_28.onMoveCallback;
    local_28.onMoveCallback = p_Var2;
    pvVar5 = local_28.onMoveCallbackData;
    local_28.onMoveCallbackData = pvVar3;
    (*p_Var4)(param_2,pvVar5);
  }
  return;
}

// swap<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy,0> @ 14c613490

void __cdecl
std::swap<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy,0>(Proxy *param_1,Proxy *param_2)

{
  ArchiveSize<unsigned_int,unsigned_int> *pAVar1;
  Anchor<unsigned_int> *pAVar2;
  ArchiveSize<unsigned_int,unsigned_int> *pAVar3;
  Anchor<unsigned_int> *pAVar4;
  Proxy local_18;
  
  pAVar1 = param_1->target;
  pAVar2 = param_1->base;
  param_1->target = (ArchiveSize<unsigned_int,unsigned_int> *)0x0;
  param_1->base = (Anchor<unsigned_int> *)0x0;
  pAVar1->proxy = &local_18;
  pAVar2->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  pAVar2->onMoveCallbackData = &local_18;
  pAVar3 = param_1->target;
  param_1->target = param_2->target;
  param_2->target = pAVar3;
  pAVar4 = param_1->base;
  param_1->base = param_2->base;
  param_2->base = pAVar4;
  param_1->target->proxy = param_1;
  pAVar4 = param_1->base;
  pAVar4->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  pAVar4->onMoveCallbackData = param_1;
  pAVar3 = param_2->target;
  pAVar4 = param_2->base;
  param_2->base = pAVar2;
  param_2->target = pAVar1;
  pAVar1->proxy = param_2;
  pAVar2 = param_2->base;
  pAVar2->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
  pAVar2->onMoveCallbackData = param_2;
  if (pAVar3 != (ArchiveSize<unsigned_int,unsigned_int> *)0x0) {
    pAVar3->proxy = (Proxy *)0x0;
  }
  if (pAVar4 != (Anchor<unsigned_int> *)0x0) {
    pAVar4->onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved;
    pAVar4->onMoveCallbackData = (void *)0x0;
  }
  return;
}

// ArchiveSizeMoveTest @ 14c613560

ArchiveSizeMoveTest * __thiscall
ArchiveSizeMoveTest::ArchiveSizeMoveTest(ArchiveSizeMoveTest *this,ArchiveSizeMoveTest *param_1)

{
  Proxy *pPVar1;
  Anchor<unsigned_int> *pAVar2;
  ArchiveSize<unsigned_int,unsigned_int> *pAVar3;
  ArchiveSize<unsigned_int,unsigned_int> *pAVar4;
  uint uVar5;
  ulong64 uVar6;
  Proxy *pPVar7;
  ArchiveSize<unsigned_int,unsigned_int> local_28;
  
  (this->proxy1).target = &this->size1;
  pPVar1 = &this->proxy1;
  (this->size2).position = 0;
  (this->size2).value = 0;
  pAVar2 = &this->anchor1;
  (this->size2).proxy = (Proxy *)0x0;
  pAVar3 = &this->size2;
  pAVar2->value = 0;
  (this->proxy1).base = pAVar2;
  (this->anchor1).onMoveCallback = terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy::onBaseMoved
  ;
  (this->anchor1).onMoveCallbackData = pPVar1;
  (this->size1).position = 0;
  (this->size1).value = 0;
  (this->size1).proxy = (Proxy *)0x0;
  if (pPVar1 != (Proxy *)0x0) {
    pPVar1->target = &local_28;
  }
  uVar6 = (this->size1).position;
  (this->size1).position = (param_1->size1).position;
  (param_1->size1).position = uVar6;
  uVar5 = (this->size1).value;
  (this->size1).value = (param_1->size1).value;
  (param_1->size1).value = uVar5;
  pPVar7 = (this->size1).proxy;
  (this->size1).proxy = (param_1->size1).proxy;
  (param_1->size1).proxy = pPVar7;
  pPVar7 = (this->size1).proxy;
  if (pPVar7 != (Proxy *)0x0) {
    pPVar7->target = &this->size1;
  }
  (param_1->size1).position = 0;
  (param_1->size1).value = 0;
  (param_1->size1).proxy = pPVar1;
  if (pPVar1 != (Proxy *)0x0) {
    pPVar1->target = &param_1->size1;
  }
  local_28.position = pAVar3->position;
  pAVar4 = &param_1->size2;
  local_28.proxy = (this->size2).proxy;
  local_28.value = (this->size2).value;
  (this->size2).value = 0;
  pAVar3->position = 0;
  (this->size2).proxy = (Proxy *)0x0;
  if (local_28.proxy != (Proxy *)0x0) {
    (local_28.proxy)->target = &local_28;
  }
  uVar6 = pAVar3->position;
  pAVar3->position = pAVar4->position;
  pAVar4->position = uVar6;
  uVar5 = (this->size2).value;
  (this->size2).value = (param_1->size2).value;
  (param_1->size2).value = uVar5;
  pPVar7 = (this->size2).proxy;
  (this->size2).proxy = (param_1->size2).proxy;
  (param_1->size2).proxy = pPVar7;
  pPVar7 = (this->size2).proxy;
  if (pPVar7 != (Proxy *)0x0) {
    pPVar7->target = pAVar3;
  }
  pAVar4->position = local_28.position;
  (param_1->size2).value = local_28.value;
  (param_1->size2).proxy = local_28.proxy;
  if (local_28.proxy != (Proxy *)0x0) {
    (local_28.proxy)->target = pAVar4;
  }
  std::swap<terse::Anchor<unsigned_int>,0>(pAVar2,&param_1->anchor1);
  std::swap<terse::ArchiveSize<unsigned_int,unsigned_int>::Proxy,0>(pPVar1,&param_1->proxy1);
  return this;
}

// _Xlength @ 14c613700

void __cdecl std::vector<ArchiveSizeMoveTest,std::allocator<ArchiveSizeMoveTest>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

