// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 15

// test_info_'' @ 141327cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'PSDNetTest_OutputsAreClamped_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VPSDNetTest_OutputsAreClamped_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                      ,8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                      ,8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7a;
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
  *(undefined2 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_2_;
  pcVar6[0x7a] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007a;
  uStack_40 = _UNK_152882938;
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
  *(local_58._Ptr + 0x7a) = pcVar6[0x7a];
  local_38 = 8;
  PSDNetTest_OutputsAreClamped_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("PSDNetTest","OutputsAreClamped",(char *)0x0,(char *)0x0,(CodeLocation *)&local_58
                  ,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141327ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'PSDNetTest_OutputsKeepExistingProduct_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VPSDNetTest_OutputsKeepExistingProduct_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                      ,0x1f);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                      ,0x1f);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7a;
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
  *(undefined2 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_2_;
  pcVar6[0x7a] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007a;
  uStack_40 = _UNK_152882938;
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
  *(local_58._Ptr + 0x7a) = pcVar6[0x7a];
  local_38 = 0x1f;
  PSDNetTest_OutputsKeepExistingProduct_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("PSDNetTest","OutputsKeepExistingProduct",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141328100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'PSDNetTest_RowsSpecifyDestinationIndex_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VPSDNetTest_RowsSpecifyDestinationIndex_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                      ,0x36);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                      ,0x36);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7a;
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
  *(undefined2 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_2_;
  pcVar6[0x7a] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007a;
  uStack_40 = _UNK_152882938;
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
  *(local_58._Ptr + 0x7a) = pcVar6[0x7a];
  local_38 = 0x36;
  PSDNetTest_RowsSpecifyDestinationIndex_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("PSDNetTest","RowsSpecifyDestinationIndex",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c475890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall PSDNetTest_OutputsAreClamped_Test::TestBody(PSDNetTest_OutputsAreClamped_Test *this)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *this_00;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort *puVar11;
  ulong64 uVar12;
  float *pfVar13;
  ushort **ppuVar14;
  ulonglong uVar15;
  float *pfVar16;
  undefined1 auStackY_208 [32];
  AssertHelper local_1c8;
  undefined8 local_1c0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1b8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_198;
  vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_> local_178;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_158;
  undefined1 local_138 [160];
  DefaultMemoryResource *local_98 [2];
  undefined2 *local_88;
  undefined2 *puStack_80;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_138._8_8_ = &pma::AlignedMemoryResource::_vftable_;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) <
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
  local_1c8.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if ((*(int *)(lVar2 + 0x9d4c) <
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
  local_98[0] = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_98[1] = (DefaultMemoryResource *)
                (**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,2,8);
  uVar15 = 0;
  local_88 = (undefined2 *)((longlong)local_98[1] + 2);
  *(ushort *)local_98[1] = 0;
  local_78._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_98;
  local_78._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_78;
  puStack_80 = local_88;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_198,&local_78,
             (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_1c8);
  if (local_98[1] != (DefaultMemoryResource *)0x0) {
    (**(code **)((longlong)*local_98[0] + 0x10))
              (local_98[0],local_98[1],((longlong)puStack_80 - (longlong)local_98[1] >> 1) * 2,8);
  }
  if ((*(int *)(lVar2 + 0x9d4c) <
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
  local_1c8.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if ((*(int *)(lVar2 + 0x9d4c) <
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
  local_98[0] = &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
  local_98[1] = (DefaultMemoryResource *)
                (**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,2,8);
  local_88 = (undefined2 *)((longlong)local_98[1] + 2);
  *(ushort *)local_98[1] = 1;
  local_78._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_98;
  local_78._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_78;
  puStack_80 = local_88;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1b8,&local_78,
             (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_1c8);
  if (local_98[1] != (DefaultMemoryResource *)0x0) {
    (**(code **)((longlong)*local_98[0] + 0x10))
              (local_98[0],local_98[1],((longlong)puStack_80 - (longlong)local_98[1] >> 1) * 2,8);
  }
  if ((*(int *)(lVar2 + 0x9d4c) <
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
  local_158._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_158._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,2,8);
  local_158._Mypair._Myval2._Mylast = local_158._Mypair._Myval2._Myfirst + 1;
  *local_158._Mypair._Myval2._Myfirst = 0;
  local_158._Mypair._Myval2._Myend = local_158._Mypair._Myval2._Mylast;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_78._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_78._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &DAT_00000001;
  local_68 = 0x42c80000;
  local_178._Mypair._Myval1 =
       (PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_178._Mypair._Myval2._Myfirst =
       (PSD *)(**(code **)(`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x18,8);
  local_178._Mypair._Myval2._Mylast = local_178._Mypair._Myval2._Myfirst + 1;
  (local_178._Mypair._Myval2._Myfirst)->offset = (ulong64)local_78._First;
  (local_178._Mypair._Myval2._Myfirst)->size = (ulong64)local_78._Last;
  *(ulonglong *)&(local_178._Mypair._Myval2._Myfirst)->weight = CONCAT44(uStack_64,local_68);
  local_178._Mypair._Myval2._Myend = local_178._Mypair._Myval2._Mylast;
  rl4::PSDNet::PSDNet((PSDNet *)(local_138 + 0x10),&local_198,&local_1b8,&local_158,&local_178,1,1);
  local_78._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       local_138;
  local_1c0 = 0x3dcccccd;
  local_98[0] = (DefaultMemoryResource *)&local_1c0;
  local_138._0_8_ = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0;
  local_1c8.data_._0_4_ = 0x3f800000;
  local_78._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &DAT_00000002;
  local_98[1] = (DefaultMemoryResource *)&DAT_00000002;
  rl4::PSDNet::calculate
            ((PSDNet *)(local_138 + 0x10),(ArrayView<float> *)local_98,(ArrayView<float> *)&local_78
             ,0);
  puVar4 = _UNK_15076add8;
  puVar3 = ___xmm_000000000000000f0000000000000000;
LAB_14c475ba0:
  pfVar16 = (float *)((longlong)&local_1c8.data_ + uVar15);
  if (*pfVar16 == *(float *)((longlong)&local_1c0 + uVar15 + 4)) {
    testing::AssertionSuccess((AssertionResult *)&local_78);
  }
  else {
    pfVar13 = (float *)((longlong)&local_1c0 + uVar15 + 4);
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,pfVar16,pfVar13);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98,
                        pfVar13,pfVar16);
    testing::internal::EqFailure
              ((AssertionResult *)&local_78,"(inputs + 1ul)[i]","expected[i]",pbVar6,pbVar5,false);
    if (&DAT_0000000f < puStack_80) {
      puVar11 = (ushort *)((longlong)puStack_80 + 1);
      PVar8 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_98[0];
      if ((ushort *)0xfff < puVar11) {
        PVar8 = *(PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> *)
                 ((longlong)local_98[0] + -8);
        puVar11 = puStack_80 + 0x14;
        if ((char *)0x1f < (char *)((longlong)local_98[0] + (-8 - (longlong)PVar8)))
        goto LAB_14c475dd6;
      }
      ::operator_delete((void *)PVar8,(ulong64)puVar11);
    }
    local_98[0] = (DefaultMemoryResource *)((ulonglong)local_98[0] & 0xffffffffffffff00);
    local_88 = puVar3;
    puStack_80 = puVar4;
    if (0xf < local_40) {
      uVar12 = local_40 + 1;
      uVar9 = local_58._Ptr;
      if (0xfff < uVar12) {
        uVar9 = *(undefined8 *)(local_58._Ptr + -8);
        uVar12 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar9)) {
LAB_14c475dd6:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar9,uVar12);
    }
  }
  pvVar1 = local_78._Last;
  if ((char)local_78._First != '\0') goto code_r0x00014c475cb0;
  pMVar7 = (Message *)testing::Message::Message((Message *)local_98);
  if (local_78._Last ==
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    pcVar10 = "";
  }
  else {
    pcVar10 = (char *)local_78._Last;
    if (&DAT_0000000f < ((local_78._Last)->_Mypair)._Myval2._Myend) {
      pcVar10 = (((_String_val<std::_Simple_types<char>_> *)&((local_78._Last)->_Mypair)._Myval1)->
                _Bx)._Ptr;
    }
  }
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_1c8,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                       ,0x1c,pcVar10);
  testing::internal::AssertHelper::operator=(this_00,pMVar7);
  testing::internal::AssertHelper::~AssertHelper(&local_1c8);
  if ((PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)local_98[0] !=
      (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0) {
    (*(code *)**(undefined8 **)
                ((longlong)local_98[0] + (longlong)*(int *)(*(longlong *)local_98[0] + 4)))
              ((char *)((longlong)local_98[0] + (longlong)*(int *)(*(longlong *)local_98[0] + 4)),1)
    ;
  }
  pvVar1 = local_78._Last;
  if (local_78._Last !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78._Last);
    ::operator_delete(pvVar1,0x20);
  }
  rl4::PSDNet::~PSDNet((PSDNet *)(local_138 + 0x10));
  if (local_178._Mypair._Myval2._Myfirst != (PSD *)0x0) {
    (**(code **)(*(undefined **)local_178._Mypair._Myval1 + 0x10))
              (local_178._Mypair._Myval1,local_178._Mypair._Myval2._Myfirst,
               (((longlong)local_178._Mypair._Myval2._Myend -
                (longlong)local_178._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
    local_178._Mypair._Myval2._Myend = (PSD *)0x0;
    local_178._Mypair._Myval2._Myfirst = (PSD *)0x0;
    local_178._Mypair._Myval2._Mylast = (PSD *)0x0;
  }
  if (local_158._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_158._Mypair._Myval1 + 0x10))
              (local_158._Mypair._Myval1,local_158._Mypair._Myval2._Myfirst,
               ((longlong)local_158._Mypair._Myval2._Myend -
                (longlong)local_158._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_158._Mypair._Myval2._Myend = (ushort *)0x0;
    local_158._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_158._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_1b8._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    if (local_1b8._Mypair._Myval2._Myfirst != local_1b8._Mypair._Myval2._Mylast) {
      ppuVar14 = &((local_1b8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
      do {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar14 + -2))->_Myfirst;
        if (puVar3 != (ushort *)0x0) {
          (**(code **)(*(longlong *)ppuVar14[-3] + 0x10))
                    (ppuVar14[-3],puVar3,((longlong)*ppuVar14 - (longlong)puVar3 >> 1) * 2,8);
          ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar14 + -2))->_Myfirst =
               (ushort *)0x0;
          ppuVar14[-1] = (ushort *)0x0;
          *ppuVar14 = (ushort *)0x0;
        }
        pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)(ppuVar14 + 1);
        ppuVar14 = ppuVar14 + 4;
      } while (pvVar1 != local_1b8._Mypair._Myval2._Mylast);
    }
    (**(code **)(*(longlong *)local_1b8._Mypair._Myval1 + 0x10))
              (local_1b8._Mypair._Myval1,local_1b8._Mypair._Myval2._Myfirst,
               (longlong)local_1b8._Mypair._Myval2._Myend -
               (longlong)local_1b8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    local_1b8._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_1b8._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_1b8._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  if (local_198._Mypair._Myval2._Myfirst ==
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) goto LAB_14c47601f;
  if (local_198._Mypair._Myval2._Myfirst != local_198._Mypair._Myval2._Mylast) {
    ppuVar14 = &((local_198._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
    do {
      puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar14 + -2))->_Myfirst;
      if (puVar3 != (ushort *)0x0) {
        (**(code **)(*(longlong *)ppuVar14[-3] + 0x10))
                  (ppuVar14[-3],puVar3,((longlong)*ppuVar14 - (longlong)puVar3 >> 1) * 2,8);
        ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar14 + -2))->_Myfirst =
             (ushort *)0x0;
        ppuVar14[-1] = (ushort *)0x0;
        *ppuVar14 = (ushort *)0x0;
      }
      pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)(ppuVar14 + 1);
      ppuVar14 = ppuVar14 + 4;
    } while (pvVar1 != local_198._Mypair._Myval2._Mylast);
  }
  goto LAB_14c475ff6;
code_r0x00014c475cb0:
  if (local_78._Last !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_78._Last);
    ::operator_delete(pvVar1,0x20);
  }
  uVar15 = uVar15 + 4;
  if (3 < uVar15) {
    rl4::PSDNet::~PSDNet((PSDNet *)(local_138 + 0x10));
    if (local_178._Mypair._Myval2._Myfirst != (PSD *)0x0) {
      (**(code **)(*(undefined **)local_178._Mypair._Myval1 + 0x10))
                (local_178._Mypair._Myval1,local_178._Mypair._Myval2._Myfirst,
                 (((longlong)local_178._Mypair._Myval2._Myend -
                  (longlong)local_178._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
      local_178._Mypair._Myval2._Myend = (PSD *)0x0;
      local_178._Mypair._Myval2._Myfirst = (PSD *)0x0;
      local_178._Mypair._Myval2._Mylast = (PSD *)0x0;
    }
    if (local_158._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)((longlong)*(DefaultMemoryResource *)local_158._Mypair._Myval1 + 0x10))
                (local_158._Mypair._Myval1,local_158._Mypair._Myval2._Myfirst,
                 ((longlong)local_158._Mypair._Myval2._Myend -
                  (longlong)local_158._Mypair._Myval2._Myfirst >> 1) * 2,8);
      local_158._Mypair._Myval2._Myend = (ushort *)0x0;
      local_158._Mypair._Myval2._Myfirst = (ushort *)0x0;
      local_158._Mypair._Myval2._Mylast = (ushort *)0x0;
    }
    if (local_1b8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_1b8._Mypair._Myval2._Myfirst,local_1b8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_1b8);
      (**(code **)(*(longlong *)local_1b8._Mypair._Myval1 + 0x10))
                (local_1b8._Mypair._Myval1,local_1b8._Mypair._Myval2._Myfirst,
                 (longlong)local_1b8._Mypair._Myval2._Myend -
                 (longlong)local_1b8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_1b8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1b8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1b8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
    if (local_198._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_198._Mypair._Myval2._Myfirst,local_198._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_198);
LAB_14c475ff6:
      (**(code **)(*(longlong *)local_198._Mypair._Myval1 + 0x10))
                (local_198._Mypair._Myval1,local_198._Mypair._Myval2._Myfirst,
                 (longlong)local_198._Mypair._Myval2._Myend -
                 (longlong)local_198._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_198._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_198._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_198._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
LAB_14c47601f:
    pma::MemoryResource::~MemoryResource((MemoryResource *)(local_138 + 8));
    return;
  }
  goto LAB_14c475ba0;
}

// `scalar_deleting_destructor' @ 14c4761b0

void * __thiscall
PSDNetTest_OutputsAreClamped_Test::_scalar_deleting_destructor_
          (PSDNetTest_OutputsAreClamped_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c4761f0

Test * __thiscall
testing::internal::TestFactoryImpl<PSDNetTest_OutputsAreClamped_Test>::CreateTest
          (TestFactoryImpl<PSDNetTest_OutputsAreClamped_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7PSDNetTest_OutputsAreClamped_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c476230

void * __thiscall
testing::internal::TestFactoryImpl<PSDNetTest_OutputsAreClamped_Test>::_scalar_deleting_destructor_
          (TestFactoryImpl<PSDNetTest_OutputsAreClamped_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<PSDNetTest_OutputsAreClamped_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c476270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PSDNetTest_OutputsKeepExistingProduct_Test::TestBody
          (PSDNetTest_OutputsKeepExistingProduct_Test *this)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  ushort uVar2;
  longlong lVar3;
  AssertHelperData **ppAVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  undefined8 uVar11;
  char *pcVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  ulong64 uVar15;
  float *pfVar16;
  ushort **ppuVar17;
  ulonglong uVar18;
  float *pfVar19;
  undefined1 auStackY_238 [32];
  ushort local_1f8 [2];
  undefined1 local_1f4 [4];
  AssertHelper local_1f0;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1e8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1c8;
  vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_> local_1a8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_188;
  MemoryResource local_168 [2];
  PSDNet local_158;
  _Bxty local_c8;
  ushort *local_b8;
  ushort *puStack_b0;
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  _Bxty local_88;
  ulonglong local_70;
  float local_68 [4];
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  
  local_58._Mypair._Myval2._Mylast = (ushort *)(__security_cookie.value ^ (ulonglong)auStackY_238);
  local_168[0] = (MemoryResource)&pma::AlignedMemoryResource::_vftable_;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) <
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
  local_1f0.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if ((*(int *)(lVar3 + 0x9d4c) <
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
  uVar18 = 0;
  local_1f8[0] = 0;
  local_1f8[1] = 1;
  local_c8._Ptr =
       (char *)&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_b8 = (ushort *)
             (**(code **)((longlong)
                          `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr + 8))
                       (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::dmr,4,8);
  local_c8._8_8_ = local_b8;
  puVar13 = local_1f8;
  puStack_b0 = local_b8 + 2;
  do {
    uVar2 = *puVar13;
    puVar13 = puVar13 + 1;
    *local_b8 = uVar2;
    local_b8 = local_b8 + 1;
  } while (puVar13 != (ushort *)local_1f4);
  local_a8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_c8;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_a8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1c8,&local_a8,
             (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_1f0);
  if ((ushort *)local_c8._8_8_ != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_c8._Ptr + 0x10))
              (local_c8._Ptr,local_c8._8_8_,((longlong)puStack_b0 - local_c8._8_8_ >> 1) * 2,8);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
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
  local_1f0.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if ((*(int *)(lVar3 + 0x9d4c) <
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
  local_c8._Ptr =
       (char *)&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_c8._8_8_ =
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,2,8);
  local_b8 = (ushort *)(local_c8._8_8_ + 2);
  *(undefined2 *)local_c8._8_8_ = 2;
  local_a8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_c8;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_a8;
  puStack_b0 = local_b8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1e8,&local_a8,
             (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_1f0);
  if ((undefined2 *)local_c8._8_8_ != (undefined2 *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_c8._Ptr + 0x10))
              (local_c8._Ptr,local_c8._8_8_,((longlong)puStack_b0 - local_c8._8_8_ >> 1) * 2,8);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
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
  local_1f4 = (undefined1  [4])0x10000;
  local_188._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_188._Mypair._Myval2._Mylast =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  local_188._Mypair._Myval2._Myfirst = local_188._Mypair._Myval2._Mylast;
  pAVar10 = (AssertHelper *)local_1f4;
  local_188._Mypair._Myval2._Myend = local_188._Mypair._Myval2._Mylast + 2;
  do {
    ppAVar4 = &pAVar10->data_;
    pAVar10 = (AssertHelper *)((longlong)&pAVar10->data_ + 2);
    *local_188._Mypair._Myval2._Mylast = *(ushort *)ppAVar4;
    local_188._Mypair._Myval2._Mylast = local_188._Mypair._Myval2._Mylast + 1;
  } while (pAVar10 != &local_1f0);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_a8._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       0x0;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &DAT_00000002;
  local_98 = 0x42200000;
  local_1a8._Mypair._Myval1 =
       (PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1a8._Mypair._Myval2._Myfirst =
       (PSD *)(**(code **)(`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x18,8);
  local_1a8._Mypair._Myval2._Mylast = local_1a8._Mypair._Myval2._Myfirst + 1;
  (local_1a8._Mypair._Myval2._Myfirst)->offset = (ulong64)local_a8._First;
  (local_1a8._Mypair._Myval2._Myfirst)->size = (ulong64)local_a8._Last;
  *(ulonglong *)&(local_1a8._Mypair._Myval2._Myfirst)->weight = CONCAT44(uStack_94,local_98);
  local_1a8._Mypair._Myval2._Myend = local_1a8._Mypair._Myval2._Mylast;
  rl4::PSDNet::PSDNet(&local_158,&local_1c8,&local_1e8,&local_188,&local_1a8,2,2);
  local_a8._First = &local_58;
  local_68[0] = 0.1;
  local_c8._Ptr = (char *)local_68;
  local_68[1] = 0.2;
  local_68[2] = 0.0;
  local_58._Mypair._Myval1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0;
  local_58._Mypair._Myval2._Myfirst._0_4_ = 0;
  local_1f0.data_._0_4_ = 0x3f4ccccd;
  local_a8._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &DAT_00000003;
  local_c8._8_8_ = 3;
  rl4::PSDNet::calculate(&local_158,(ArrayView<float> *)&local_c8,(ArrayView<float> *)&local_a8,0);
  puVar6 = _UNK_15076add8;
  puVar5 = ___xmm_000000000000000f0000000000000000;
LAB_14c4765e0:
  pfVar19 = (float *)((longlong)&local_1f0.data_ + uVar18);
  if (*pfVar19 == *(float *)((longlong)local_68 + uVar18 + 8)) {
    testing::AssertionSuccess((AssertionResult *)&local_a8);
  }
  else {
    pfVar16 = (float *)((longlong)local_68 + uVar18 + 8);
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                        ,pfVar19,pfVar16);
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8
                        ,pfVar16,pfVar19);
    testing::internal::EqFailure
              ((AssertionResult *)&local_a8,"(inputs + 2ul)[i]","expected[i]",pbVar8,pbVar7,false);
    if (&DAT_0000000f < puStack_b0) {
      puVar14 = (undefined2 *)((longlong)puStack_b0 + 1);
      uVar11 = local_c8._Ptr;
      if ((undefined2 *)0xfff < puVar14) {
        uVar11 = *(undefined8 *)(local_c8._Ptr + -8);
        puVar14 = puStack_b0 + 0x14;
        if ((char *)0x1f < local_c8._Ptr + (-8 - uVar11)) goto LAB_14c47681b;
      }
      ::operator_delete((void *)uVar11,(ulong64)puVar14);
    }
    local_c8._Ptr = local_c8._Ptr & 0xffffffffffffff00;
    local_b8 = puVar5;
    puStack_b0 = puVar6;
    if (0xf < local_70) {
      uVar15 = local_70 + 1;
      uVar11 = local_88._Ptr;
      if (0xfff < uVar15) {
        uVar11 = *(undefined8 *)(local_88._Ptr + -8);
        uVar15 = local_70 + 0x28;
        if ((char *)0x1f < local_88._Ptr + (-8 - uVar11)) {
LAB_14c47681b:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11,uVar15);
    }
  }
  pvVar1 = local_a8._Last;
  if ((char)local_a8._First != '\0') goto code_r0x00014c4766f5;
  pMVar9 = (Message *)testing::Message::Message((Message *)&local_c8._Ptr);
  if (local_a8._Last ==
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    pcVar12 = "";
  }
  else {
    pcVar12 = (char *)local_a8._Last;
    if (&DAT_0000000f < ((local_a8._Last)->_Mypair)._Myval2._Myend) {
      pcVar12 = (((_String_val<std::_Simple_types<char>_> *)&((local_a8._Last)->_Mypair)._Myval1)->
                _Bx)._Ptr;
    }
  }
  pAVar10 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_1f0,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                       ,0x33,pcVar12);
  testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
  testing::internal::AssertHelper::~AssertHelper(&local_1f0);
  if ((float *)local_c8._Ptr != (float *)0x0) {
    (*(code *)**(undefined8 **)(local_c8._Ptr + *(int *)(*(longlong *)local_c8._Ptr + 4)))
              (local_c8._Ptr + *(int *)(*(longlong *)local_c8._Ptr + 4),1);
  }
  pvVar1 = local_a8._Last;
  if (local_a8._Last !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._Last);
    ::operator_delete(pvVar1,0x20);
  }
  rl4::PSDNet::~PSDNet(&local_158);
  if (local_1a8._Mypair._Myval2._Myfirst != (PSD *)0x0) {
    (**(code **)(*(undefined **)local_1a8._Mypair._Myval1 + 0x10))
              (local_1a8._Mypair._Myval1,local_1a8._Mypair._Myval2._Myfirst,
               (((longlong)local_1a8._Mypair._Myval2._Myend -
                (longlong)local_1a8._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
    local_1a8._Mypair._Myval2._Myend = (PSD *)0x0;
    local_1a8._Mypair._Myval2._Myfirst = (PSD *)0x0;
    local_1a8._Mypair._Myval2._Mylast = (PSD *)0x0;
  }
  if (local_188._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_188._Mypair._Myval1 + 0x10))
              (local_188._Mypair._Myval1,local_188._Mypair._Myval2._Myfirst,
               ((longlong)local_188._Mypair._Myval2._Myend -
                (longlong)local_188._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_188._Mypair._Myval2._Myend = (ushort *)0x0;
    local_188._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_188._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_1e8._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    if (local_1e8._Mypair._Myval2._Myfirst != local_1e8._Mypair._Myval2._Mylast) {
      ppuVar17 = &((local_1e8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
      do {
        puVar13 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar17 + -2))->_Myfirst;
        if (puVar13 != (ushort *)0x0) {
          (**(code **)(*(longlong *)ppuVar17[-3] + 0x10))
                    (ppuVar17[-3],puVar13,((longlong)*ppuVar17 - (longlong)puVar13 >> 1) * 2,8);
          ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar17 + -2))->_Myfirst =
               (ushort *)0x0;
          ppuVar17[-1] = (ushort *)0x0;
          *ppuVar17 = (ushort *)0x0;
        }
        pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)(ppuVar17 + 1);
        ppuVar17 = ppuVar17 + 4;
      } while (pvVar1 != local_1e8._Mypair._Myval2._Mylast);
    }
    (**(code **)(*(longlong *)local_1e8._Mypair._Myval1 + 0x10))
              (local_1e8._Mypair._Myval1,local_1e8._Mypair._Myval2._Myfirst,
               (longlong)local_1e8._Mypair._Myval2._Myend -
               (longlong)local_1e8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    local_1e8._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_1e8._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_1e8._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  if (local_1c8._Mypair._Myval2._Myfirst ==
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) goto LAB_14c476a60;
  if (local_1c8._Mypair._Myval2._Myfirst != local_1c8._Mypair._Myval2._Mylast) {
    ppuVar17 = &((local_1c8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
    do {
      puVar13 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar17 + -2))->_Myfirst;
      if (puVar13 != (ushort *)0x0) {
        (**(code **)(*(longlong *)ppuVar17[-3] + 0x10))
                  (ppuVar17[-3],puVar13,((longlong)*ppuVar17 - (longlong)puVar13 >> 1) * 2,8);
        ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar17 + -2))->_Myfirst =
             (ushort *)0x0;
        ppuVar17[-1] = (ushort *)0x0;
        *ppuVar17 = (ushort *)0x0;
      }
      pvVar1 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)(ppuVar17 + 1);
      ppuVar17 = ppuVar17 + 4;
    } while (pvVar1 != local_1c8._Mypair._Myval2._Mylast);
  }
  goto LAB_14c476a37;
code_r0x00014c4766f5:
  if (local_a8._Last !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._Last);
    ::operator_delete(pvVar1,0x20);
  }
  uVar18 = uVar18 + 4;
  if (3 < uVar18) {
    rl4::PSDNet::~PSDNet(&local_158);
    if (local_1a8._Mypair._Myval2._Myfirst != (PSD *)0x0) {
      (**(code **)(*(undefined **)local_1a8._Mypair._Myval1 + 0x10))
                (local_1a8._Mypair._Myval1,local_1a8._Mypair._Myval2._Myfirst,
                 (((longlong)local_1a8._Mypair._Myval2._Myend -
                  (longlong)local_1a8._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
      local_1a8._Mypair._Myval2._Myend = (PSD *)0x0;
      local_1a8._Mypair._Myval2._Myfirst = (PSD *)0x0;
      local_1a8._Mypair._Myval2._Mylast = (PSD *)0x0;
    }
    if (local_188._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)((longlong)*(DefaultMemoryResource *)local_188._Mypair._Myval1 + 0x10))
                (local_188._Mypair._Myval1,local_188._Mypair._Myval2._Myfirst,
                 ((longlong)local_188._Mypair._Myval2._Myend -
                  (longlong)local_188._Mypair._Myval2._Myfirst >> 1) * 2,8);
      local_188._Mypair._Myval2._Myend = (ushort *)0x0;
      local_188._Mypair._Myval2._Myfirst = (ushort *)0x0;
      local_188._Mypair._Myval2._Mylast = (ushort *)0x0;
    }
    if (local_1e8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_1e8._Mypair._Myval2._Myfirst,local_1e8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_1e8);
      (**(code **)(*(longlong *)local_1e8._Mypair._Myval1 + 0x10))
                (local_1e8._Mypair._Myval1,local_1e8._Mypair._Myval2._Myfirst,
                 (longlong)local_1e8._Mypair._Myval2._Myend -
                 (longlong)local_1e8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_1e8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1e8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1e8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
    if (local_1c8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_1c8._Mypair._Myval2._Myfirst,local_1c8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_1c8);
LAB_14c476a37:
      (**(code **)(*(longlong *)local_1c8._Mypair._Myval1 + 0x10))
                (local_1c8._Mypair._Myval1,local_1c8._Mypair._Myval2._Myfirst,
                 (longlong)local_1c8._Mypair._Myval2._Myend -
                 (longlong)local_1c8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_1c8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1c8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1c8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
LAB_14c476a60:
    pma::MemoryResource::~MemoryResource(local_168);
    return;
  }
  goto LAB_14c4765e0;
}

// `scalar_deleting_destructor' @ 14c476bf0

void * __thiscall
PSDNetTest_OutputsKeepExistingProduct_Test::_scalar_deleting_destructor_
          (PSDNetTest_OutputsKeepExistingProduct_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c476c30

Test * __thiscall
testing::internal::TestFactoryImpl<PSDNetTest_OutputsKeepExistingProduct_Test>::CreateTest
          (TestFactoryImpl<PSDNetTest_OutputsKeepExistingProduct_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7PSDNetTest_OutputsKeepExistingProduct_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c476c70

void * __thiscall
testing::internal::TestFactoryImpl<PSDNetTest_OutputsKeepExistingProduct_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<PSDNetTest_OutputsKeepExistingProduct_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<PSDNetTest_OutputsKeepExistingProduct_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c476cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PSDNetTest_RowsSpecifyDestinationIndex_Test::TestBody
          (PSDNetTest_RowsSpecifyDestinationIndex_Test *this)

{
  char **ppcVar1;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  _Bxty *p_Var9;
  undefined8 uVar10;
  char *pcVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulong64 uVar14;
  ushort **ppuVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined1 auStackY_268 [32];
  AssertHelper local_228;
  ushort local_220 [12];
  initializer_list<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
  local_208;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1f8;
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  local_1d8;
  vector<rl4::PSD,pma::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>_> local_1b8;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_198;
  MemoryResource local_178 [2];
  PSDNet local_168;
  _Bxty local_d8;
  ushort *local_c8;
  ushort *puStack_c0;
  _Bxty local_b8;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  _Bxty local_88;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> local_58;
  
  local_58._Mypair._Myval2._Mylast = (ushort *)(__security_cookie.value ^ (ulonglong)auStackY_268);
  local_178[0] = (MemoryResource)&pma::AlignedMemoryResource::_vftable_;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) <
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
  local_228.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if ((*(int *)(lVar4 + 0x9d4c) <
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
  uVar16 = 0;
  local_220[0] = 0;
  local_220[1] = 1;
  local_d8._Ptr =
       (char *)&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_d8._8_8_ =
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  puVar12 = local_220;
  puStack_c0 = (ushort *)(local_d8._8_8_ + 4);
  local_c8 = (ushort *)local_d8._8_8_;
  do {
    uVar3 = *puVar12;
    puVar12 = puVar12 + 1;
    *local_c8 = uVar3;
    local_c8 = local_c8 + 1;
  } while (puVar12 != local_220 + 2);
  local_208._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_d8;
  local_208._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_b8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1d8,&local_208,
             (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_228);
  if ((ushort *)local_d8._8_8_ != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_d8._Ptr + 0x10))
              (local_d8._Ptr,local_d8._8_8_,((longlong)puStack_c0 - local_d8._8_8_ >> 1) * 2,8);
  }
  if ((*(int *)(lVar4 + 0x9d4c) <
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
  local_228.data_ =
       (AssertHelperData *)
       &`public:___cdecl_pma::impl::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if ((*(int *)(lVar4 + 0x9d4c) <
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
  local_220[2] = 2;
  local_220[3] = 3;
  local_d8._Ptr =
       (char *)&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  local_d8._8_8_ =
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  puVar12 = local_220 + 2;
  puStack_c0 = (ushort *)(local_d8._8_8_ + 4);
  local_c8 = (ushort *)local_d8._8_8_;
  do {
    uVar3 = *puVar12;
    puVar12 = puVar12 + 1;
    *local_c8 = uVar3;
    local_c8 = local_c8 + 1;
  } while (puVar12 != local_220 + 4);
  local_208._First =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_d8;
  local_208._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &local_b8;
  std::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  ::
  vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
            (&local_1f8,&local_208,
             (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
              *)&local_228);
  if ((ushort *)local_d8._8_8_ != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_d8._Ptr + 0x10))
              (local_d8._Ptr,local_d8._8_8_,((longlong)puStack_c0 - local_d8._8_8_ >> 1) * 2,8);
  }
  if ((*(int *)(lVar4 + 0x9d4c) <
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
  local_220[4] = 0;
  local_220[5] = 1;
  local_198._Mypair._Myval1 =
       (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_198._Mypair._Myval2._Myfirst =
       (ushort *)
       (**(code **)((longlong)
                    `public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                    ::__l2::dmr + 8))
                 (&`public:___cdecl_pma::impl::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::dmr,4,8);
  puVar12 = local_220 + 4;
  local_198._Mypair._Myval2._Myend = local_198._Mypair._Myval2._Myfirst + 2;
  local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Myfirst;
  do {
    uVar3 = *puVar12;
    puVar12 = puVar12 + 1;
    *local_198._Mypair._Myval2._Mylast = uVar3;
    local_198._Mypair._Myval2._Mylast = local_198._Mypair._Myval2._Mylast + 1;
  } while (puVar12 != local_220 + 6);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_b8._Ptr = (char *)0x0;
  local_b8._8_8_ = 1;
  local_a8 = 0x40800000;
  local_a0 = 1;
  local_98 = 1;
  local_90 = 0x40400000;
  local_1b8._Mypair._Myval1 =
       (PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1b8._Mypair._Myval2._Myfirst =
       (PSD *)(**(code **)(`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::PSD,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x30,8);
  local_1b8._Mypair._Myval2._Myend = local_1b8._Mypair._Myval2._Myfirst + 2;
  p_Var9 = &local_b8;
  local_1b8._Mypair._Myval2._Mylast = local_1b8._Mypair._Myval2._Myfirst;
  do {
    pcVar11 = (&p_Var9->_Ptr)[1];
    (local_1b8._Mypair._Myval2._Mylast)->offset = (ulong64)p_Var9->_Ptr;
    (local_1b8._Mypair._Myval2._Mylast)->size = (ulong64)pcVar11;
    ppcVar1 = &p_Var9->_Ptr + 2;
    p_Var9 = (_Bxty *)(&p_Var9->_Ptr + 3);
    *(char **)&(local_1b8._Mypair._Myval2._Mylast)->weight = *ppcVar1;
    local_1b8._Mypair._Myval2._Mylast = local_1b8._Mypair._Myval2._Mylast + 1;
  } while (p_Var9 != &local_88);
  rl4::PSDNet::PSDNet(&local_168,&local_1d8,&local_1f8,&local_198,&local_1b8,2,2);
  local_208._First = &local_58;
  local_68 = ___xmm_00000000000000003e4ccccd3dcccccd;
  uStack_60 = _UNK_152882928;
  local_d8._Ptr = (char *)&local_68;
  local_228.data_ = (AssertHelperData *)0x3f19999a3ecccccd;
  local_208._Last =
       (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
       &DAT_00000004;
  local_d8._8_8_ = (ushort *)0x4;
  local_58._Mypair._Myval1 = (PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>)0x0;
  local_58._Mypair._Myval2._Myfirst = (ushort *)0x0;
  rl4::PSDNet::calculate(&local_168,(ArrayView<float> *)&local_d8,(ArrayView<float> *)&local_208,0);
  puVar5 = _UNK_15076add8;
  puVar12 = ___xmm_000000000000000f0000000000000000;
LAB_14c477090:
  pfVar17 = (float *)((longlong)&local_228.data_ + uVar16);
  if (*pfVar17 == *(float *)((longlong)&uStack_60 + uVar16)) {
    testing::AssertionSuccess((AssertionResult *)&local_208);
  }
  else {
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                        ,pfVar17,(float *)((longlong)&uStack_60 + uVar16));
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<float,float>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8
                        ,(float *)((longlong)&uStack_60 + uVar16),pfVar17);
    testing::internal::EqFailure
              ((AssertionResult *)&local_208,"(inputs + 2ul)[i]","expected[i]",pbVar7,pbVar6,false);
    if (&DAT_0000000f < puStack_c0) {
      puVar13 = (ushort *)((longlong)puStack_c0 + 1);
      uVar10 = local_d8._Ptr;
      if ((ushort *)0xfff < puVar13) {
        uVar10 = *(DefaultMemoryResource *)(local_d8._Ptr + -8);
        puVar13 = puStack_c0 + 0x14;
        if ((char *)0x1f < local_d8._Ptr + (-8 - uVar10)) goto LAB_14c4772c7;
      }
      ::operator_delete((void *)uVar10,(ulong64)puVar13);
    }
    local_d8._Ptr = local_d8._Ptr & 0xffffffffffffff00;
    local_c8 = puVar12;
    puStack_c0 = puVar5;
    if (0xf < local_70) {
      uVar14 = local_70 + 1;
      uVar10 = local_88._Ptr;
      if (0xfff < uVar14) {
        uVar10 = *(undefined8 *)(local_88._Ptr + -8);
        uVar14 = local_70 + 0x28;
        if ((char *)0x1f < local_88._Ptr + (-8 - uVar10)) {
LAB_14c4772c7:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar10,uVar14);
    }
  }
  pvVar2 = local_208._Last;
  if ((char)local_208._First != '\0') goto code_r0x00014c4771a8;
  pMVar8 = (Message *)testing::Message::Message((Message *)&local_d8);
  if (local_208._Last ==
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    pcVar11 = "";
  }
  else {
    pcVar11 = (char *)local_208._Last;
    if (&DAT_0000000f < ((local_208._Last)->_Mypair)._Myval2._Myend) {
      pcVar11 = (((_String_val<std::_Simple_types<char>_> *)&((local_208._Last)->_Mypair)._Myval1)->
                _Bx)._Ptr;
    }
  }
  this_00 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_228,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\controls\\TestPSDNet.cpp"
                       ,0x4a,pcVar11);
  testing::internal::AssertHelper::operator=(this_00,pMVar8);
  testing::internal::AssertHelper::~AssertHelper(&local_228);
  if ((DefaultMemoryResource)local_d8._Ptr != (DefaultMemoryResource)0x0) {
    (*(code *)**(undefined8 **)
                (local_d8._Ptr + *(int *)((longlong)*(DefaultMemoryResource *)local_d8._Ptr + 4)))
              (local_d8._Ptr + *(int *)((longlong)*(DefaultMemoryResource *)local_d8._Ptr + 4),1);
  }
  pvVar2 = local_208._Last;
  if (local_208._Last !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_208._Last);
    ::operator_delete(pvVar2,0x20);
  }
  rl4::PSDNet::~PSDNet(&local_168);
  if (local_1b8._Mypair._Myval2._Myfirst != (PSD *)0x0) {
    (**(code **)(*(undefined **)local_1b8._Mypair._Myval1 + 0x10))
              (local_1b8._Mypair._Myval1,local_1b8._Mypair._Myval2._Myfirst,
               (((longlong)local_1b8._Mypair._Myval2._Myend -
                (longlong)local_1b8._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
    local_1b8._Mypair._Myval2._Myend = (PSD *)0x0;
    local_1b8._Mypair._Myval2._Myfirst = (PSD *)0x0;
    local_1b8._Mypair._Myval2._Mylast = (PSD *)0x0;
  }
  if (local_198._Mypair._Myval2._Myfirst != (ushort *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_198._Mypair._Myval1 + 0x10))
              (local_198._Mypair._Myval1,local_198._Mypair._Myval2._Myfirst,
               ((longlong)local_198._Mypair._Myval2._Myend -
                (longlong)local_198._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_198._Mypair._Myval2._Myend = (ushort *)0x0;
    local_198._Mypair._Myval2._Myfirst = (ushort *)0x0;
    local_198._Mypair._Myval2._Mylast = (ushort *)0x0;
  }
  if (local_1f8._Mypair._Myval2._Myfirst !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    if (local_1f8._Mypair._Myval2._Myfirst != local_1f8._Mypair._Myval2._Mylast) {
      ppuVar15 = &((local_1f8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
      do {
        puVar12 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar15 + -2))->_Myfirst;
        if (puVar12 != (ushort *)0x0) {
          (**(code **)(*(longlong *)ppuVar15[-3] + 0x10))
                    (ppuVar15[-3],puVar12,((longlong)*ppuVar15 - (longlong)puVar12 >> 1) * 2,8);
          ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar15 + -2))->_Myfirst =
               (ushort *)0x0;
          ppuVar15[-1] = (ushort *)0x0;
          *ppuVar15 = (ushort *)0x0;
        }
        pvVar2 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)(ppuVar15 + 1);
        ppuVar15 = ppuVar15 + 4;
      } while (pvVar2 != local_1f8._Mypair._Myval2._Mylast);
    }
    (**(code **)(*(longlong *)local_1f8._Mypair._Myval1 + 0x10))
              (local_1f8._Mypair._Myval1,local_1f8._Mypair._Myval2._Myfirst,
               (longlong)local_1f8._Mypair._Myval2._Myend -
               (longlong)local_1f8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
    local_1f8._Mypair._Myval2._Myend =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_1f8._Mypair._Myval2._Myfirst =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
    local_1f8._Mypair._Myval2._Mylast =
         (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
         0x0;
  }
  if (local_1d8._Mypair._Myval2._Myfirst ==
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) goto LAB_14c477509;
  if (local_1d8._Mypair._Myval2._Myfirst != local_1d8._Mypair._Myval2._Mylast) {
    ppuVar15 = &((local_1d8._Mypair._Myval2._Myfirst)->_Mypair)._Myval2._Myend;
    do {
      puVar12 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar15 + -2))->_Myfirst;
      if (puVar12 != (ushort *)0x0) {
        (**(code **)(*(longlong *)ppuVar15[-3] + 0x10))
                  (ppuVar15[-3],puVar12,((longlong)*ppuVar15 - (longlong)puVar12 >> 1) * 2,8);
        ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar15 + -2))->_Myfirst =
             (ushort *)0x0;
        ppuVar15[-1] = (ushort *)0x0;
        *ppuVar15 = (ushort *)0x0;
      }
      pvVar2 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                *)(ppuVar15 + 1);
      ppuVar15 = ppuVar15 + 4;
    } while (pvVar2 != local_1d8._Mypair._Myval2._Mylast);
  }
  goto LAB_14c4774e2;
code_r0x00014c4771a8:
  if (local_208._Last !=
      (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)0x0
     ) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_208._Last);
    ::operator_delete(pvVar2,0x20);
  }
  uVar16 = uVar16 + 4;
  if (7 < uVar16) {
    rl4::PSDNet::~PSDNet(&local_168);
    if (local_1b8._Mypair._Myval2._Myfirst != (PSD *)0x0) {
      (**(code **)(*(undefined **)local_1b8._Mypair._Myval1 + 0x10))
                (local_1b8._Mypair._Myval1,local_1b8._Mypair._Myval2._Myfirst,
                 (((longlong)local_1b8._Mypair._Myval2._Myend -
                  (longlong)local_1b8._Mypair._Myval2._Myfirst) / 0x18) * 0x18,8);
      local_1b8._Mypair._Myval2._Myend = (PSD *)0x0;
      local_1b8._Mypair._Myval2._Myfirst = (PSD *)0x0;
      local_1b8._Mypair._Myval2._Mylast = (PSD *)0x0;
    }
    if (local_198._Mypair._Myval2._Myfirst != (ushort *)0x0) {
      (**(code **)((longlong)*(DefaultMemoryResource *)local_198._Mypair._Myval1 + 0x10))
                (local_198._Mypair._Myval1,local_198._Mypair._Myval2._Myfirst,
                 ((longlong)local_198._Mypair._Myval2._Myend -
                  (longlong)local_198._Mypair._Myval2._Myfirst >> 1) * 2,8);
      local_198._Mypair._Myval2._Myend = (ushort *)0x0;
      local_198._Mypair._Myval2._Myfirst = (ushort *)0x0;
      local_198._Mypair._Myval2._Mylast = (ushort *)0x0;
    }
    if (local_1f8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_1f8._Mypair._Myval2._Myfirst,local_1f8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_1f8);
      (**(code **)(*(longlong *)local_1f8._Mypair._Myval1 + 0x10))
                (local_1f8._Mypair._Myval1,local_1f8._Mypair._Myval2._Myfirst,
                 (longlong)local_1f8._Mypair._Myval2._Myend -
                 (longlong)local_1f8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_1f8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1f8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1f8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
    if (local_1d8._Mypair._Myval2._Myfirst !=
        (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *)
        0x0) {
      std::
      _Destroy_range<pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                (local_1d8._Mypair._Myval2._Myfirst,local_1d8._Mypair._Myval2._Mylast,
                 (PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>
                  *)&local_1d8);
LAB_14c4774e2:
      (**(code **)(*(longlong *)local_1d8._Mypair._Myval1 + 0x10))
                (local_1d8._Mypair._Myval1,local_1d8._Mypair._Myval2._Myfirst,
                 (longlong)local_1d8._Mypair._Myval2._Myend -
                 (longlong)local_1d8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0,8);
      local_1d8._Mypair._Myval2._Myend =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1d8._Mypair._Myval2._Myfirst =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
      local_1d8._Mypair._Myval2._Mylast =
           (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            *)0x0;
    }
LAB_14c477509:
    pma::MemoryResource::~MemoryResource(local_178);
    return;
  }
  goto LAB_14c477090;
}

// `scalar_deleting_destructor' @ 14c4776a0

void * __thiscall
PSDNetTest_RowsSpecifyDestinationIndex_Test::_scalar_deleting_destructor_
          (PSDNetTest_RowsSpecifyDestinationIndex_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c4776e0

Test * __thiscall
testing::internal::TestFactoryImpl<PSDNetTest_RowsSpecifyDestinationIndex_Test>::CreateTest
          (TestFactoryImpl<PSDNetTest_RowsSpecifyDestinationIndex_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7PSDNetTest_RowsSpecifyDestinationIndex_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c477720

void * __thiscall
testing::internal::TestFactoryImpl<PSDNetTest_RowsSpecifyDestinationIndex_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<PSDNetTest_RowsSpecifyDestinationIndex_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<PSDNetTest_RowsSpecifyDestinationIndex_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

