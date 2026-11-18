// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 31

// test_info_'' @ 14131f870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryStreamWriterTest_SetControlName_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryStreamWriterTest_SetControlName_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                      ,0x11);
  p_Var4 = testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                      ,0x11);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7e;
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
  *(undefined2 *)(pcVar5 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar5[0x7e] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007e;
  uStack_40 = _UNK_152879108;
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
  *(undefined2 *)(local_58._Ptr + 0x7c) = *(undefined2 *)(pcVar5 + 0x7c);
  *(local_58._Ptr + 0x7e) = pcVar5[0x7e];
  local_38 = 0x11;
  BinaryStreamWriterTest_SetControlName_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryStreamWriterTest","SetControlName",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,
                  &testing::internal::TypeIdHelper<BinaryStreamWriterTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 14131faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'BinaryStreamWriterTest_SetJointRowCount_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VBinaryStreamWriterTest_SetJointRowCount_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                      ,0x1b);
  p_Var4 = testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                      ,0x1b);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7e;
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
  *(undefined2 *)(pcVar5 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar5[0x7e] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007e;
  uStack_40 = _UNK_152879108;
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
  *(undefined2 *)(local_58._Ptr + 0x7c) = *(undefined2 *)(pcVar5 + 0x7c);
  *(local_58._Ptr + 0x7e) = pcVar5[0x7e];
  local_38 = 0x1b;
  BinaryStreamWriterTest_SetJointRowCount_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryStreamWriterTest","SetJointRowCount",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,
                  &testing::internal::TypeIdHelper<BinaryStreamWriterTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 14131fcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'BinaryStreamWriterTest_SetName_Test::test_info___(void)

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
              &___7__TestFactoryImpl_VBinaryStreamWriterTest_SetName_Test___internal_testing__6B_;
  }
  p_Var3 = testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                      ,7);
  p_Var4 = testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                      ,7);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7e;
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
  *(undefined2 *)(pcVar5 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar5[0x7e] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007e;
  uStack_40 = _UNK_152879108;
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
  *(undefined2 *)(local_58._Ptr + 0x7c) = *(undefined2 *)(pcVar5 + 0x7c);
  *(local_58._Ptr + 0x7e) = pcVar5[0x7e];
  local_38 = 7;
  BinaryStreamWriterTest_SetName_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("BinaryStreamWriterTest","SetName",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,
                  &testing::internal::TypeIdHelper<BinaryStreamWriterTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// SetUp @ 14c3181e0

void __thiscall BinaryStreamWriterTest::SetUp(BinaryStreamWriterTest *this)

{
  MemoryStream *pMVar1;
  BoundedIOStream *pBVar2;
  MemoryStream *pMVar3;
  BinaryStreamWriter *pBVar4;
  BinaryStreamReader *pBVar5;
  
  pMVar3 = trio::MemoryStream::create((MemoryResource *)0x0);
  pMVar1 = (this->stream).ptr;
  (this->stream).ptr = pMVar3;
  if (pMVar1 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar1);
  }
  pBVar4 = dna::BinaryStreamWriter::create
                     ((BoundedIOStream *)(this->stream).ptr,(MemoryResource *)&this->memRes);
  pBVar2 = (BoundedIOStream *)(this->stream).ptr;
  this->writer = pBVar4;
  pBVar5 = dna::BinaryStreamReader::create(pBVar2,All,Preserve,0,(MemoryResource *)&this->memRes);
  this->reader = pBVar5;
  return;
}

// TearDown @ 14c318250

void __thiscall BinaryStreamWriterTest::TearDown(BinaryStreamWriterTest *this)

{
  dna::BinaryStreamReader::destroy(this->reader);
  dna::BinaryStreamWriter::destroy(this->writer);
  return;
}

// `scalar_deleting_destructor' @ 14c318280

void * __thiscall
BinaryStreamWriterTest::_scalar_deleting_destructor_(BinaryStreamWriterTest *this,uint param_1)

{
  MemoryStream *pMVar1;
  
  this->_padding_ = (longlong)&___7BinaryStreamWriterTest__6B_;
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->memRes);
  pMVar1 = (this->stream).ptr;
  if (pMVar1 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar1);
    (this->stream).ptr = (MemoryStream *)0x0;
  }
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// TestBody @ 14c3182f0

void __thiscall
BinaryStreamWriterTest_SetName_Test::TestBody(BinaryStreamWriterTest_SetName_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  AssertHelper local_res8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res10;
  AssertionResult local_28;
  char *local_18 [2];
  
  plVar2 = (longlong *)
           (*(longlong *)&this->field_0x20 + 8 +
           (longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4));
  (**(code **)(*plVar2 + 0x60))(plVar2,1);
  plVar2 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4) +
           *(longlong *)&this->field_0x20 + 8);
  (**(code **)(*plVar2 + 0x18))(plVar2,"test");
  (**(code **)(**(longlong **)&this->field_0x20 + 0xd0))();
  (**(code **)(**(longlong **)&this->field_0x28 + 0xe0))();
  plVar2 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x28 + 8) + 4) +
           *(longlong *)&this->field_0x28 + 8);
  (**(code **)(*plVar2 + 0x18))(plVar2,local_18);
  pcVar3 = "";
  if (local_18[0] != (char *)0x0) {
    pcVar3 = local_18[0];
  }
  testing::internal::CmpHelperSTREQ(&local_28,"gotName","\"test\"",pcVar3,"test");
  if (local_28.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message((Message *)&local_res10);
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
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                         ,0xe,pcVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res8);
    if (local_res10._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar4 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)local_res10._Mypair._Myval2 + 4) +
               (longlong)local_res10._Mypair._Myval2);
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c318460

void * __thiscall
BinaryStreamWriterTest_SetName_Test::_scalar_deleting_destructor_
          (BinaryStreamWriterTest_SetName_Test *this,uint param_1)

{
  *(undefined ***)this = &___7BinaryStreamWriterTest__6B_;
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x18);
  if (*(MemoryStream **)&this->field_0x10 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(*(MemoryStream **)&this->field_0x10);
    *(undefined8 *)&this->field_0x10 = 0;
  }
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CreateTest @ 14c3184d0

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryStreamWriterTest_SetName_Test>::CreateTest
          (TestFactoryImpl<BinaryStreamWriterTest_SetName_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = 0;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&___7DefaultMemoryResource_pma__6B_;
    this_00->_padding_ = (longlong)&___7BinaryStreamWriterTest_SetName_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c318530

void * __thiscall
testing::internal::TestFactoryImpl<BinaryStreamWriterTest_SetName_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryStreamWriterTest_SetName_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryStreamWriterTest_SetName_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c318570

void __thiscall
BinaryStreamWriterTest_SetControlName_Test::TestBody
          (BinaryStreamWriterTest_SetControlName_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  Message *pMVar2;
  AssertHelper *pAVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  AssertHelper local_res8;
  Message local_res10;
  AssertionResult local_28;
  undefined1 local_18 [16];
  
  plVar4 = (longlong *)
           (*(longlong *)&this->field_0x20 + 8 +
           (longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4));
  (**(code **)(*plVar4 + 0x60))(plVar4,1);
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4) + 8 +
           *(longlong *)&this->field_0x20);
  (**(code **)(*plVar4 + 0x98))(plVar4,0,"test");
  (**(code **)(**(longlong **)&this->field_0x20 + 0xd0))();
  (**(code **)(**(longlong **)&this->field_0x28 + 0xe0))();
  local_res10.ss_._Mypair._Myval2._0_4_ = 1;
  local_res8.data_._0_2_ =
       (**(code **)(*(longlong *)
                     ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x28 + 8) + 4) +
                     *(longlong *)&this->field_0x28 + 8) + 0x98))();
  if ((short)local_res8.data_ == 1) {
    testing::AssertionSuccess(&local_28);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_long>
              (&local_28,"reader->getRawControlCount()","1ul",(ushort *)&local_res8,
               (ulong *)&local_res10);
  }
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message(&local_res10);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res8,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                        ,0x17,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res8);
    plVar4 = (longlong *)
             CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_);
    if (plVar4 != (longlong *)0x0) {
      puVar5 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_28.message_._Mypair._Myval2;
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  plVar4 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x28 + 8) + 4) +
           *(longlong *)&this->field_0x28 + 8);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_18,0);
  pcVar6 = "";
  if ((char *)*plVar4 != (char *)0x0) {
    pcVar6 = (char *)*plVar4;
  }
  testing::internal::CmpHelperSTREQ
            (&local_28,"reader->getRawControlName(0ul)","\"test\"",pcVar6,"test");
  if (local_28.success_ == false) {
    pMVar2 = (Message *)testing::Message::Message(&local_res10);
    if (local_28.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_28.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_28.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_28.message_._Mypair._Myval2;
      }
    }
    pAVar3 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res8,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                        ,0x18,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar3,pMVar2);
    testing::internal::AssertHelper::~AssertHelper(&local_res8);
    plVar4 = (longlong *)
             CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_);
    if (plVar4 != (longlong *)0x0) {
      puVar5 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_28.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_28.message_._Mypair._Myval2);
    ::operator_delete((void *)local_28.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c3187f0

void * __thiscall
BinaryStreamWriterTest_SetControlName_Test::_scalar_deleting_destructor_
          (BinaryStreamWriterTest_SetControlName_Test *this,uint param_1)

{
  *(undefined ***)this = &___7BinaryStreamWriterTest__6B_;
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x18);
  if (*(MemoryStream **)&this->field_0x10 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(*(MemoryStream **)&this->field_0x10);
    *(undefined8 *)&this->field_0x10 = 0;
  }
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CreateTest @ 14c318860

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryStreamWriterTest_SetControlName_Test>::CreateTest
          (TestFactoryImpl<BinaryStreamWriterTest_SetControlName_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = 0;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&___7DefaultMemoryResource_pma__6B_;
    this_00->_padding_ = (longlong)&___7BinaryStreamWriterTest_SetControlName_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c3188c0

void * __thiscall
testing::internal::TestFactoryImpl<BinaryStreamWriterTest_SetControlName_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryStreamWriterTest_SetControlName_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryStreamWriterTest_SetControlName_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c318900

void __thiscall
BinaryStreamWriterTest_SetJointRowCount_Test::TestBody
          (BinaryStreamWriterTest_SetJointRowCount_Test *this)

{
  Message *pMVar1;
  AssertHelper *this_00;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  AssertHelper local_res8;
  Message local_res10 [3];
  AssertionResult local_18;
  
  plVar2 = (longlong *)
           (*(longlong *)&this->field_0x20 + 8 +
           (longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 4));
  (**(code **)(*plVar2 + 0x60))(plVar2,1);
  plVar2 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x20 + 8) + 8) + 8 +
           *(longlong *)&this->field_0x20);
  (**(code **)(*plVar2 + 0x50))(plVar2,1);
  (**(code **)(**(longlong **)&this->field_0x20 + 0xd0))();
  (**(code **)(**(longlong **)&this->field_0x28 + 0xe0))();
  local_res10[0].ss_._Mypair._Myval2._0_4_ = 1;
  local_res8.data_._0_2_ =
       (**(code **)(*(longlong *)
                     ((longlong)*(int *)(*(longlong *)(*(longlong *)&this->field_0x28 + 8) + 8) +
                     *(longlong *)&this->field_0x28 + 8) + 0x50))();
  if ((short)local_res8.data_ == 1) {
    testing::AssertionSuccess(&local_18);
  }
  else {
    testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_long>
              (&local_18,"reader->getJointRowCount()","1ul",(ushort *)&local_res8,
               (ulong *)local_res10);
  }
  if (local_18.success_ == false) {
    pMVar1 = (Message *)testing::Message::Message(local_res10);
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
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\dnatests\\TestBinaryStreamWriter.cpp"
                         ,0x21,pcVar3);
    testing::internal::AssertHelper::operator=(this_00,pMVar1);
    testing::internal::AssertHelper::~AssertHelper(&local_res8);
    plVar2 = (longlong *)
             CONCAT44(local_res10[0].ss_._Mypair._Myval2._4_4_,
                      local_res10[0].ss_._Mypair._Myval2._0_4_);
    if (plVar2 != (longlong *)0x0) {
      puVar4 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar4)(puVar4,1);
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

// `scalar_deleting_destructor' @ 14c318a70

void * __thiscall
BinaryStreamWriterTest_SetJointRowCount_Test::_scalar_deleting_destructor_
          (BinaryStreamWriterTest_SetJointRowCount_Test *this,uint param_1)

{
  *(undefined ***)this = &___7BinaryStreamWriterTest__6B_;
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x18);
  if (*(MemoryStream **)&this->field_0x10 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(*(MemoryStream **)&this->field_0x10);
    *(undefined8 *)&this->field_0x10 = 0;
  }
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CreateTest @ 14c318ae0

Test * __thiscall
testing::internal::TestFactoryImpl<BinaryStreamWriterTest_SetJointRowCount_Test>::CreateTest
          (TestFactoryImpl<BinaryStreamWriterTest_SetJointRowCount_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = 0;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&___7DefaultMemoryResource_pma__6B_;
    this_00->_padding_ = (longlong)&___7BinaryStreamWriterTest_SetJointRowCount_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c318b40

void * __thiscall
testing::internal::TestFactoryImpl<BinaryStreamWriterTest_SetJointRowCount_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<BinaryStreamWriterTest_SetJointRowCount_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<BinaryStreamWriterTest_SetJointRowCount_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<unsigned_short,unsigned_long> @ 14c318b80

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<unsigned_short,unsigned_long>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,ushort *param_3,
          ulong *param_4)

{
  if ((uint)*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperEQFailure<unsigned_short,unsigned_long>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<unsigned_short,unsigned_long> @ 14c318bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<unsigned_short,unsigned_long>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,ushort *param_3,
          ulong *param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong64 uVar3;
  char *pcVar4;
  undefined1 auStackY_2e8 [32];
  int iStack_29c;
  undefined1 local_298 [16];
  undefined1 local_288 [8];
  undefined1 local_280 [24];
  char **local_268;
  char **local_260;
  char **local_248;
  char **local_240;
  int *local_230;
  char *local_218;
  uint local_210;
  basic_ios<char,std::char_traits<char>_> local_200;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_298._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_288 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_200);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_298,
             (basic_streambuf<char,std::char_traits<char>_> *)local_280);
  *(undefined ***)(local_298 + *(int *)(local_298._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_29c + (longlong)*(int *)(local_298._0_8_ + 4)) =
       *(int *)(local_298._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_280);
  local_280._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_218 = (char *)0x0;
  local_210 = 0;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_288,*param_4);
  local_78._8_8_ = 0;
  local_78._Ptr = (char *)0x0;
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if ((((byte)local_210 & 0x22) == 2) || (pcVar4 = *local_240, pcVar4 == (char *)0x0)) {
    if (((local_210 & 4) == 0) && (*local_248 != (char *)0x0)) {
      pcVar2 = *local_268;
      pcVar4 = *local_248 + ((longlong)*local_230 - (longlong)pcVar2);
    }
    else {
      pcVar4 = (char *)0x0;
      pcVar2 = (char *)0x0;
    }
  }
  else {
    if (pcVar4 < local_218) {
      pcVar4 = local_218;
    }
    pcVar2 = *local_260;
    pcVar4 = pcVar4 + -(longlong)pcVar2;
  }
  if (pcVar2 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,pcVar2,
               (ulong64)pcVar4);
  }
  *(undefined ***)(local_298 + *(int *)(local_298._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_29c + (longlong)*(int *)(local_298._0_8_ + 4)) =
       *(int *)(local_298._0_8_ + 4) + -0x98;
  local_280._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_280);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_280);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_280 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_200)
  ;
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
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_118 = (char *)0x0;
  local_110 = 0;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_188,*param_3);
  local_98._8_8_ = 0;
  local_98._Ptr = (char *)0x0;
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  if ((((local_110 & 2) == 0) || ((local_110 & 0x20) != 0)) &&
     (pcVar4 = *local_140, pcVar4 != (char *)0x0)) {
    if (pcVar4 < local_118) {
      pcVar4 = local_118;
    }
    pcVar2 = *local_160;
    pcVar4 = pcVar4 + -(longlong)pcVar2;
  }
  else if (((local_110 & 4) == 0) && (*local_148 != (char *)0x0)) {
    pcVar2 = *local_168;
    pcVar4 = *local_148 + ((longlong)*local_130 - (longlong)pcVar2);
  }
  else {
    pcVar4 = (char *)0x0;
    pcVar2 = (char *)0x0;
  }
  if (pcVar2 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,pcVar2,
               (ulong64)pcVar4);
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
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,false);
  if (0xf < uStack_80) {
    uVar3 = uStack_80 + 1;
    uVar1 = local_98._Ptr;
    if (0xfff < uVar3) {
      uVar1 = *(undefined8 *)(local_98._Ptr + -8);
      uVar3 = uStack_80 + 0x28;
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar1)) goto LAB_14c318fb1;
    }
    ::operator_delete((void *)uVar1,uVar3);
  }
  local_98._Ptr = local_98._Ptr & 0xffffffffffffff00;
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  if (0xf < uStack_60) {
    uVar3 = uStack_60 + 1;
    uVar1 = local_78._Ptr;
    if (0xfff < uVar3) {
      uVar1 = *(undefined8 *)(local_78._Ptr + -8);
      uVar3 = uStack_60 + 0x28;
      if ((char *)0x1f < local_78._Ptr + (-8 - uVar1)) {
LAB_14c318fb1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar1,uVar3);
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<unsigned_short> @ 14c319000

void __cdecl
testing_internal::DefaultPrintNonContainerTo<unsigned_short>
          (ushort *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c319009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// DefaultPrintTo<unsigned_short> @ 14c319020

void __cdecl
testing::internal::DefaultPrintTo<unsigned_short>
          (WrapPrinterType<3> param_1,ushort *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014c319026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*param_2);
  return;
}

// FormatForComparisonFailureMessage<unsigned_short,unsigned_long> @ 14c319040

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<unsigned_short,unsigned_long>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ushort *param_1,ulong *param_2)

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
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
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

// FormatForComparisonFailureMessage<unsigned_long,unsigned_short> @ 14c3191f0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<unsigned_long,unsigned_short>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ulong *param_1,ushort *param_2)

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
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
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

// GetTypeId<BinaryStreamWriterTest> @ 14c3193a0

void * __cdecl testing::internal::GetTypeId<BinaryStreamWriterTest>(void)

{
  return &TypeIdHelper<BinaryStreamWriterTest>::dummy_;
}

// PrintTo<unsigned_short> @ 14c3193b0

void __cdecl
testing::internal::PrintTo<unsigned_short>
          (ushort *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c3193b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintToString<unsigned_short> @ 14c3193d0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<unsigned_short>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          ushort *param_1)

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
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
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

// UniversalPrint<unsigned_short> @ 14c319580

void __cdecl
testing::internal::UniversalPrint<unsigned_short>
          (ushort *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014c319589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// ~BinaryStreamWriterTest @ 14c3195a0

void __thiscall BinaryStreamWriterTest::~BinaryStreamWriterTest(BinaryStreamWriterTest *this)

{
  MemoryStream *pMVar1;
  
  this->_padding_ = (longlong)&___7BinaryStreamWriterTest__6B_;
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->memRes);
  pMVar1 = (this->stream).ptr;
  if (pMVar1 != (MemoryStream *)0x0) {
    trio::MemoryStream::destroy(pMVar1);
    (this->stream).ptr = (MemoryStream *)0x0;
  }
  testing::Test::~Test((Test *)this);
  return;
}

// GetSetUpCaseOrSuite @ 14c3195f0

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetSetUpCaseOrSuite
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

// GetTearDownCaseOrSuite @ 14c319690

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<BinaryStreamWriterTest>::GetTearDownCaseOrSuite
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

