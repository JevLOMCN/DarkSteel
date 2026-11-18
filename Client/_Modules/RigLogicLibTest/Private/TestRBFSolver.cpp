// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 19

// test_info_'' @ 141376930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'RBFSolverTest_AdditiveGaussianSwingAngle0_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VRBFSolverTest_AdditiveGaussianSwingAngle0_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                      ,0x7a);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                               ,0x7a);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x7a;
  RBFSolverTest_AdditiveGaussianSwingAngle0_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RBFSolverTest","AdditiveGaussianSwingAngle0",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RBFSolverTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141376b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'RBFSolverTest_InterpolativeGaussianSwingAngle0_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VRBFSolverTest_InterpolativeGaussianSwingAngle0_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                      ,0x1f);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                               ,0x1f);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x1f;
  RBFSolverTest_InterpolativeGaussianSwingAngle0_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RBFSolverTest","InterpolativeGaussianSwingAngle0",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RBFSolverTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// test_info_'' @ 141376d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'RBFSolverTest_InterpolativeGaussianSwingAngle1_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VRBFSolverTest_InterpolativeGaussianSwingAngle1_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::
           GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                      ,0x3c);
  p_Var4 = testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::
           GetSetUpCaseOrSuite("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                               ,0x3c);
  local_28 = 0;
  pcVar5 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  pcVar5[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar5;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(local_58._Ptr + 0x7c) = pcVar5[0x7c];
  local_38 = 0x3c;
  RBFSolverTest_InterpolativeGaussianSwingAngle1_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("RBFSolverTest","InterpolativeGaussianSwingAngle1",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,&testing::internal::TypeIdHelper<RBFSolverTest>::dummy_,
                  (_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2);
  ::operator_delete(pcVar5,0x80);
  return;
}

// SetUp @ 14c59cad0

void __thiscall _anon_36C83770::RBFSolverTest::SetUp(RBFSolverTest *this)

{
  (this->recipe).normalizeMethod = AlwaysNormalize;
  (this->recipe).twistAxis = X;
  (this->recipe).radius = 0.0;
  (this->recipe).isAutomaticRadius = true;
  (this->recipe).weightThreshold = 0.001;
  return;
}

// `scalar_deleting_destructor' @ 14c59caf0

void * __thiscall
_anon_36C83770::RBFSolverTest::_scalar_deleting_destructor_(RBFSolverTest *this,uint param_1)

{
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->memRes);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// TestBody @ 14c59cb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RBFSolverTest_InterpolativeGaussianSwingAngle0_Test::TestBody
          (RBFSolverTest_InterpolativeGaussianSwingAngle0_Test *this)

{
  undefined1 *puVar1;
  Type TVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  void *pvVar7;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar8;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  float *pfVar10;
  Message *pMVar11;
  AssertHelper *pAVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulonglong *puVar15;
  Type *pTVar16;
  float *pfVar17;
  undefined4 *puVar18;
  DefaultMemoryResource *pDVar19;
  DefaultMemoryResource *pDVar20;
  DefaultMemoryResource *pDVar21;
  undefined1 auStackY_208 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_1c8;
  undefined1 *local_1c0;
  AssertHelper local_1b8;
  longlong local_1b0;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_1a8;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_188;
  undefined4 *local_168;
  undefined4 *local_160;
  RBFSolverRecipe local_158;
  float *local_108;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [56];
  longlong *local_a0;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_98;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [4];
  
  pvVar7 = ThreadLocalStoragePointer;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_208;
  puVar1 = &this->field_0x10;
  *(undefined4 *)&this->field_0x18 = 1;
  *(undefined8 *)&this->field_0x1c = 2;
  lVar4 = *(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pDVar19 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    pDVar19 = (DefaultMemoryResource *)puVar1;
  }
  local_160 = (undefined4 *)(**(code **)((longlong)*pDVar19 + 8))(pDVar19,0x10,8);
  *local_160 = 0x3f800000;
  local_160[1] = 0x3f800000;
  local_160[2] = 0x3f800000;
  local_160[3] = 0x3f800000;
  *(undefined4 **)&this->field_0x50 = local_160;
  *(undefined8 *)&this->field_0x58 = 4;
  *(undefined2 *)&this->field_0x38 = 4;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_88 = ___xmm_3f800000000000000000000000000000;
  uStack_80 = _UNK_150689648;
  local_78 = ___xmm_3f3b9c203f29c337bdf5d24abdbfd700;
  uStack_70 = _UNK_1528938c8;
  local_68 = ___xmm_3f77cc08be4c7cd93db687963dfccfaf;
  uStack_60 = _UNK_152893928;
  local_58 = ___xmm_3f29c337bf3b9c203dbfd70ebdf5d24a;
  uStack_50 = _UNK_1528938a8;
  local_168 = (undefined4 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x40,8);
  puVar15 = &local_88;
  puVar18 = local_168;
  do {
    uVar5 = *puVar15;
    puVar15 = (ulonglong *)((longlong)puVar15 + 4);
    *puVar18 = (int)uVar5;
    puVar18 = puVar18 + 1;
  } while (puVar15 != local_48);
  *(undefined4 **)&this->field_0x40 = local_168;
  *(longlong *)&this->field_0x48 = (longlong)puVar18 - (longlong)local_168 >> 2;
  local_158.solverType = *(RBFSolverType *)&this->field_0x18;
  local_158.distanceMethod = *(RBFDistanceMethod *)&this->field_0x1c;
  local_158.weightFunction = *(RBFFunctionType *)&this->field_0x20;
  local_158.normalizeMethod = *(RBFNormalizeMethod *)&this->field_0x24;
  local_158.twistAxis = *(TwistAxis *)&this->field_0x28;
  local_158.isAutomaticRadius = (bool)this->field_0x2c;
  local_158._21_3_ = *(undefined3 *)&this->field_0x2d;
  local_158.radius = *(float *)&this->field_0x30;
  local_158.weightThreshold = *(float *)&this->field_0x34;
  local_158.rawControlCount = *(ushort *)&this->field_0x38;
  local_158._34_6_ = *(undefined6 *)&this->field_0x3a;
  local_158.targetValues.ptr = *(float **)&this->field_0x40;
  local_158.targetValues.sz = *(ulong64 *)&this->field_0x48;
  local_158.targetScales.ptr = *(float **)&this->field_0x50;
  local_158.targetScales.sz = *(ulong64 *)&this->field_0x58;
  rl4::RBFSolver::create
            ((unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)local_d8,
             &local_158,(MemoryResource *)puVar1);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_f8 = ___xmm_3f3b9c203f29c337bdf5d24abdbfd700;
  uStack_f0 = _UNK_1528938c8;
  local_188._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  pTVar16 = (Type *)&local_f8;
  local_188._Mypair._Myval2._Myend =
       (float *)&((AssertHelperData *)local_188._Mypair._Myval2._Myfirst)->line;
  local_188._Mypair._Myval2._Mylast = local_188._Mypair._Myval2._Myfirst;
  do {
    TVar2 = *pTVar16;
    pTVar16 = pTVar16 + 1;
    ((AssertHelperData *)local_188._Mypair._Myval2._Mylast)->type = TVar2;
    local_188._Mypair._Myval2._Mylast =
         (float *)&((AssertHelperData *)local_188._Mypair._Myval2._Mylast)->field_0x4;
  } while (pTVar16 != (Type *)&local_e8);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pDVar21 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    pDVar21 = (DefaultMemoryResource *)puVar1;
  }
  pbVar9 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
           (**(code **)((longlong)*pDVar21 + 8))(pDVar21,0x10,8);
  *(longlong *)pbVar9 = 0;
  (((vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
     *)&pbVar9->field_0x8)->_Mypair)._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pDVar20 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    pDVar20 = (DefaultMemoryResource *)puVar1;
  }
  pfVar10 = (float *)(**(code **)((longlong)*pDVar20 + 8))(pDVar20,0x10,8);
  uStack_100._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000004;
  pfVar10[0] = 0.0;
  pfVar10[1] = 0.0;
  pfVar10[2] = 0.0;
  pfVar10[3] = 0.0;
  local_1b8.data_ = (AssertHelperData *)local_188._Mypair._Myval2._Myfirst;
  local_1b0 = (longlong)local_188._Mypair._Myval2._Mylast -
              (longlong)local_188._Mypair._Myval2._Myfirst >> 2;
  local_1c0 = &DAT_00000004;
  local_1c8._Myval2 = pbVar9;
  local_108 = pfVar10;
  (**(code **)(*(longlong *)local_98 + 0x10))
            (local_98,&local_1b8,&local_1c8,(AssertionResult *)&local_108);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_1a8._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_e8 = ___xmm_00000000000000003f80000000000000;
  uStack_e0 = _UNK_150689508;
  local_1a8._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  pfVar17 = (float *)&local_e8;
  local_1a8._Mypair._Myval2._Myend = local_1a8._Mypair._Myval2._Myfirst + 4;
  local_1a8._Mypair._Myval2._Mylast = local_1a8._Mypair._Myval2._Myfirst;
  do {
    fVar3 = *pfVar17;
    pfVar17 = pfVar17 + 1;
    *local_1a8._Mypair._Myval2._Mylast = fVar3;
    dVar6 = __real_3f1a36e2e0000000;
    local_1a8._Mypair._Myval2._Mylast = local_1a8._Mypair._Myval2._Mylast + 1;
  } while (pfVar17 != (float *)local_d8);
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)*pfVar10,
             (double)*local_1a8._Mypair._Myval2._Myfirst,__real_3f1a36e2e0000000);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1c8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_1b8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x35,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper(&local_1b8);
    if (local_1c8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1c8._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_1c8._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)pfVar10[1],
             (double)local_1a8._Mypair._Myval2._Myfirst[1],dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1c8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_1b8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x35,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper(&local_1b8);
    if (local_1c8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1c8._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_1c8._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)pfVar10[2],
             (double)local_1a8._Mypair._Myval2._Myfirst[2],dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1c8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_1b8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x35,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper(&local_1b8);
    if (local_1c8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1c8._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_1c8._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)pfVar10[3],
             (double)local_1a8._Mypair._Myval2._Myfirst[3],dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1c8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_1b8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x35,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper(&local_1b8);
    if (local_1c8._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1c8._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_1c8._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  local_108 = (float *)___xmm_3f617775bef27e520000000000000000;
  uStack_100._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_1528938e8;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<float_const_*>(&local_188,(float *)&local_108,4);
  local_1b8.data_ = (AssertHelperData *)local_188._Mypair._Myval2._Myfirst;
  local_1b0 = (longlong)local_188._Mypair._Myval2._Mylast -
              (longlong)local_188._Mypair._Myval2._Myfirst >> 2;
  uStack_100._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000004;
  local_1c0 = &DAT_00000004;
  local_1c8._Myval2 = pbVar9;
  local_108 = pfVar10;
  (**(code **)(*(longlong *)local_98 + 0x10))
            (local_98,&local_1b8,&local_1c8,(AssertionResult *)&local_108);
  local_108 = (float *)___xmm_3ef60e523ee84ad8000000003d869b0a;
  uStack_100._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_152893f58;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<float_const_*>(&local_1a8,(float *)&local_108,4);
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)*pfVar10,
             (double)*local_1a8._Mypair._Myval2._Myfirst,dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1b8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1c8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x39,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c8);
    if (local_1b8.data_ != (AssertHelperData *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1b8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1b8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)pfVar10[1],
             (double)local_1a8._Mypair._Myval2._Myfirst[1],dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1b8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1c8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x39,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c8);
    if (local_1b8.data_ != (AssertHelperData *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1b8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1b8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)pfVar10[2],
             (double)local_1a8._Mypair._Myval2._Myfirst[2],dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1b8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1c8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x39,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c8);
    if (local_1b8.data_ != (AssertHelperData *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1b8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1b8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_108,"result[i]","expected[i]","0.0001f",(double)pfVar10[3],
             (double)local_1a8._Mypair._Myval2._Myfirst[3],dVar6);
  if (local_108._0_1_ == false) {
    pMVar11 = (Message *)testing::Message::Message((Message *)&local_1b8);
    if (uStack_100._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = (char *)uStack_100._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)uStack_100._Mypair._Myval2 + 0x18)) {
        pcVar14 = *(char **)uStack_100._Mypair._Myval2;
      }
    }
    pAVar12 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_1c8,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x39,pcVar14);
    testing::internal::AssertHelper::operator=(pAVar12,pMVar11);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_1c8);
    if (local_1b8.data_ != (AssertHelperData *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_1b8.data_)->type +
                (longlong)*(int *)(*(longlong *)local_1b8.data_ + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar8._Mypair._Myval2 = uStack_100._Mypair._Myval2;
  if (uStack_100._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uStack_100._Mypair._Myval2);
    ::operator_delete((void *)uVar8._Mypair._Myval2,0x20);
  }
  if (local_1a8._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_1a8._Mypair._Myval1 + 0x10))
              (local_1a8._Mypair._Myval1,local_1a8._Mypair._Myval2._Myfirst,
               (longlong)local_1a8._Mypair._Myval2._Myend -
               (longlong)local_1a8._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_1a8._Mypair._Myval2._Myfirst = (float *)0x0;
    local_1a8._Mypair._Myval2._Mylast = (float *)0x0;
    local_1a8._Mypair._Myval2._Myend = (float *)0x0;
  }
  (**(code **)((longlong)*pDVar20 + 0x10))(pDVar20,pfVar10,0x10,8);
  (**(code **)((longlong)*pDVar21 + 0x10))(pDVar21,pbVar9,0x10,8);
  if ((AssertHelperData *)local_188._Mypair._Myval2._Myfirst != (AssertHelperData *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_188._Mypair._Myval1 + 0x10))
              (local_188._Mypair._Myval1,local_188._Mypair._Myval2._Myfirst,
               (longlong)local_188._Mypair._Myval2._Myend -
               (longlong)local_188._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_188._Mypair._Myval2._Myend = (float *)0x0;
    local_188._Mypair._Myval2._Myfirst = (float *)0x0;
    local_188._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_98 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    local_1c8._Myval2 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_1c8);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != (longlong *)local_d8);
    local_a0 = (longlong *)0x0;
  }
  if (local_168 != (undefined4 *)0x0) {
    (**(code **)((longlong)
                 `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,local_168,0x40,8);
  }
  (**(code **)((longlong)*pDVar19 + 0x10))(pDVar19,local_160,0x10,8);
  return;
}

// `scalar_deleting_destructor' @ 14c59d8e0

void * __thiscall
RBFSolverTest_InterpolativeGaussianSwingAngle0_Test::_scalar_deleting_destructor_
          (RBFSolverTest_InterpolativeGaussianSwingAngle0_Test *this,uint param_1)

{
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// CreateTest @ 14c59d930

Test * __thiscall
testing::internal::TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle0_Test>::CreateTest
          (TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle0_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x60);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[4]._padding_ = 0;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[5]._padding_ = 0;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ = (longlong)&___7RBFSolverTest_InterpolativeGaussianSwingAngle0_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c59d990

void * __thiscall
testing::internal::TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle0_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle0_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle0_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c59d9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RBFSolverTest_InterpolativeGaussianSwingAngle1_Test::TestBody
          (RBFSolverTest_InterpolativeGaussianSwingAngle1_Test *this)

{
  undefined1 *puVar1;
  Type TVar2;
  float fVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar9;
  undefined8 *puVar10;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  undefined8 *puVar12;
  Message *pMVar13;
  AssertHelper *pAVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulonglong *puVar17;
  Type *pTVar18;
  float *pfVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  DefaultMemoryResource *pDVar22;
  DefaultMemoryResource *pDVar23;
  undefined1 auStackY_2a8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_268;
  undefined8 local_260;
  AssertHelper local_258;
  longlong local_250;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_248;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> local_228;
  undefined4 *local_208;
  DefaultMemoryResource *local_200;
  AssertionResult local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  RBFSolverRecipe local_1d8;
  undefined1 local_188 [56];
  longlong *local_150;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_148;
  float local_138 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [4];
  
  pvVar8 = ThreadLocalStoragePointer;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  puVar1 = &this->field_0x10;
  *(undefined4 *)&this->field_0x18 = 1;
  *(undefined8 *)&this->field_0x1c = 2;
  lVar4 = *(longlong *)((longlong)pvVar8 + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_200 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    local_200 = (DefaultMemoryResource *)puVar1;
  }
  puVar10 = (undefined8 *)(**(code **)((longlong)*local_200 + 8))(local_200,0x30,8);
  uVar7 = _UNK_15076b1f8;
  uVar6 = ___xmm_3f8000003f8000003f8000003f800000;
  *puVar10 = ___xmm_3f8000003f8000003f8000003f800000;
  puVar10[1] = uVar7;
  puVar10[2] = uVar6;
  puVar10[3] = uVar7;
  puVar10[4] = uVar6;
  puVar10[5] = uVar7;
  *(undefined8 **)&this->field_0x50 = puVar10;
  *(undefined8 *)&this->field_0x58 = 0xc;
  *(undefined2 *)&this->field_0x38 = 4;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_108 = ___xmm_3f800000000000000000000000000000;
  uStack_100 = _UNK_150689648;
  local_f8 = ___xmm_3f7e3116bc18db29bdf227adbb49ef29;
  uStack_f0 = _UNK_152893948;
  local_e8 = ___xmm_3f7d66a1be10ed7e3c2038dabc0ea298;
  uStack_e0 = _UNK_152893938;
  local_d8 = ___xmm_3f154cd7bcc638d8bf4fc08e3cd95b88;
  uStack_d0 = _UNK_152893898;
  local_c8 = ___xmm_3f7f3bf53d9c00ba3c55f1e9ba79983a;
  uStack_c0 = _UNK_152893968;
  local_b8 = ___xmm_3f3e8a723d34aaf2bf2a34b1bd384b36;
  uStack_b0 = _UNK_1528938d8;
  local_a8 = ___xmm_3f7eb54bbc4680a83dcbaed6bbb0c64e;
  uStack_a0 = _UNK_152893958;
  local_98 = ___xmm_3f6d8a1b3ebec9103c0e96603c204396;
  uStack_90 = _UNK_152893908;
  local_88 = ___xmm_3f732533bc7415a53e9ff3bbbc18171e;
  uStack_80 = _UNK_152893918;
  local_78 = ___xmm_3f6485d9baca701abee6c1b8bb7e7fbf;
  uStack_70 = _UNK_1528938f8;
  local_68 = ___xmm_3f330714bf36f56abc41118cbbbafc4c;
  uStack_60 = _UNK_1528938b8;
  local_58 = ___xmm_3f108d08bf5341f7bc55f3323a78dbb0;
  uStack_50 = _UNK_152893888;
  local_208 = (undefined4 *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0xc0,8);
  puVar17 = &local_108;
  puVar21 = local_208;
  do {
    uVar20 = *puVar17;
    puVar17 = (ulonglong *)((longlong)puVar17 + 4);
    *puVar21 = (int)uVar20;
    puVar21 = puVar21 + 1;
  } while (puVar17 != local_48);
  *(undefined4 **)&this->field_0x40 = local_208;
  *(longlong *)&this->field_0x48 = (longlong)puVar21 - (longlong)local_208 >> 2;
  local_1d8.solverType = *(RBFSolverType *)&this->field_0x18;
  local_1d8.distanceMethod = *(RBFDistanceMethod *)&this->field_0x1c;
  local_1d8.weightFunction = *(RBFFunctionType *)&this->field_0x20;
  local_1d8.normalizeMethod = *(RBFNormalizeMethod *)&this->field_0x24;
  local_1d8.twistAxis = *(TwistAxis *)&this->field_0x28;
  local_1d8.isAutomaticRadius = (bool)this->field_0x2c;
  local_1d8._21_3_ = *(undefined3 *)&this->field_0x2d;
  local_1d8.radius = *(float *)&this->field_0x30;
  local_1d8.weightThreshold = *(float *)&this->field_0x34;
  local_1d8.rawControlCount = *(ushort *)&this->field_0x38;
  local_1d8._34_6_ = *(undefined6 *)&this->field_0x3a;
  local_1d8.targetValues.ptr = *(float **)&this->field_0x40;
  local_1d8.targetValues.sz = *(ulong64 *)&this->field_0x48;
  local_1d8.targetScales.ptr = *(float **)&this->field_0x50;
  local_1d8.targetScales.sz = *(ulong64 *)&this->field_0x58;
  rl4::RBFSolver::create
            ((unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)local_188,
             &local_1d8,(MemoryResource *)puVar1);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_248._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_1e8 = ___xmm_3f330714bf36f56abc41118cbbbafc4c;
  uStack_1e0 = _UNK_1528938b8;
  local_248._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x10,8);
  pTVar18 = (Type *)&local_1e8;
  local_248._Mypair._Myval2._Myend =
       (float *)&((AssertHelperData *)local_248._Mypair._Myval2._Myfirst)->line;
  local_248._Mypair._Myval2._Mylast = local_248._Mypair._Myval2._Myfirst;
  do {
    TVar2 = *pTVar18;
    pTVar18 = pTVar18 + 1;
    ((AssertHelperData *)local_248._Mypair._Myval2._Mylast)->type = TVar2;
    local_248._Mypair._Myval2._Mylast =
         (float *)&((AssertHelperData *)local_248._Mypair._Myval2._Mylast)->field_0x4;
  } while ((RBFSolverRecipe *)pTVar18 != &local_1d8);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pDVar23 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    pDVar23 = (DefaultMemoryResource *)puVar1;
  }
  pbVar11 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
            (**(code **)((longlong)*pDVar23 + 8))(pDVar23,0x30,8);
  *(longlong *)pbVar11 = 0;
  (((vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>
     *)&pbVar11->field_0x8)->_Mypair)._Myval1 =
       (PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>
        )0x0;
  ((_Vector_val<std::_Simple_types<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>_>
    *)&pbVar11->field_0x10)->_Myfirst =
       (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)0x0;
  (pbVar11->_Stringbuffer)._padding_ = 0;
  (pbVar11->_Stringbuffer)._padding_ = 0;
  (pbVar11->_Stringbuffer)._padding_ = 0;
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pDVar22 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    pDVar22 = (DefaultMemoryResource *)puVar1;
  }
  puVar12 = (undefined8 *)(**(code **)((longlong)*pDVar22 + 8))(pDVar22,0x30,8);
  local_1f8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_0000000c;
  *puVar12 = 0;
  puVar12[1] = 0;
  local_260 = 0xc;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  local_258.data_ = (AssertHelperData *)local_248._Mypair._Myval2._Myfirst;
  local_250 = (longlong)local_248._Mypair._Myval2._Mylast -
              (longlong)local_248._Mypair._Myval2._Myfirst >> 2;
  local_268._Myval2 = pbVar11;
  local_1f8._0_8_ = puVar12;
  (**(code **)(*(longlong *)local_148 + 0x10))(local_148,&local_258,&local_268,&local_1f8);
  if ((*(int *)(lVar4 + 0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
           PolyAllocator<float,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_138[2] = 0.0;
  local_138[3] = 0.0;
  local_228._Mypair._Myval1 =
       (PolyAllocator<float,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  local_118 = ___xmm_000000003f8000000000000000000000;
  uStack_110 = _UNK_150689538;
  local_138[4] = 0.0;
  local_138[5] = 0.0;
  local_138[6] = 0.0;
  local_138[7] = 0.0;
  local_228._Mypair._Myval2._Myfirst =
       (float *)(**(code **)((longlong)
                             `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::dmr + 8))
                          (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                            ::__l2::dmr,0x30,8);
  pfVar19 = local_138;
  local_228._Mypair._Myval2._Myend = local_228._Mypair._Myval2._Myfirst + 0xc;
  local_228._Mypair._Myval2._Mylast = local_228._Mypair._Myval2._Myfirst;
  do {
    fVar3 = *pfVar19;
    pfVar19 = pfVar19 + 1;
    *local_228._Mypair._Myval2._Mylast = fVar3;
    dVar5 = __real_3f1a36e2e0000000;
    local_228._Mypair._Myval2._Mylast = local_228._Mypair._Myval2._Mylast + 1;
  } while (pfVar19 != (float *)&local_108);
  uVar20 = 0;
  do {
    testing::internal::DoubleNearPredFormat
              (&local_1f8,"result[i]","expected[i]","0.0001f",
               (double)*(float *)((longlong)puVar12 + uVar20),
               (double)*(float *)((longlong)local_228._Mypair._Myval2._Myfirst + uVar20),dVar5);
    if (local_1f8.success_ == false) {
      pMVar13 = (Message *)testing::Message::Message((Message *)&local_268);
      if (local_1f8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar16 = "";
      }
      else {
        pcVar16 = (char *)local_1f8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_1f8.message_._Mypair._Myval2 + 0x18)) {
          pcVar16 = *(char **)local_1f8.message_._Mypair._Myval2;
        }
      }
      pAVar14 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_258,kNonFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                           ,0x66,pcVar16);
      testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
      testing::internal::AssertHelper::~AssertHelper(&local_258);
      if (local_268._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar15 = (undefined8 *)
                  ((longlong)&(local_268._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_268._Myval2 + 4));
        (**(code **)*puVar15)(puVar15,1);
      }
    }
    uVar9._Mypair._Myval2 = local_1f8.message_._Mypair._Myval2;
    if (local_1f8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1f8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar9._Mypair._Myval2,0x20);
    }
    uVar20 = uVar20 + 4;
  } while (uVar20 < 0x30);
  local_1f8.success_ = __xmm_3d02c9b0bf2f0e2c3ec3cd6c3f1edf1c;
  local_1f8._1_7_ = _UNK_152893801;
  local_1f8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )_UNK_152893808;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<float_const_*>(&local_248,(float *)&local_1f8,4);
  local_258.data_ = (AssertHelperData *)local_248._Mypair._Myval2._Myfirst;
  local_250 = (longlong)local_248._Mypair._Myval2._Mylast -
              (longlong)local_248._Mypair._Myval2._Myfirst >> 2;
  local_1f8.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_0000000c;
  local_260 = 0xc;
  local_268._Myval2 = pbVar11;
  local_1f8._0_8_ = puVar12;
  (**(code **)(*(longlong *)local_148 + 0x10))(local_148,&local_258,&local_268,&local_1f8);
  local_1d8.solverType = ___xmm_3e593144000000000000000000000000;
  local_1d8.distanceMethod = _UNK_152893844;
  local_1d8.weightFunction = _UNK_152893848;
  local_1d8.normalizeMethod = _UNK_15289384c;
  local_1d8.rawControlCount = ___xmm_3ca303db3b5ecbd3000000003ef2a5c6;
  local_1d8._34_6_ = _UNK_1528937c2;
  local_1d8.targetValues.ptr = _UNK_1528937c8;
  local_1d8.twistAxis = ___xmm_3e8eddce00000000000000003c3ec106;
  local_1d8.isAutomaticRadius = UNK_152893874;
  local_1d8._21_3_ = _UNK_152893875;
  local_1d8.radius = _UNK_152893878;
  local_1d8.weightThreshold = _UNK_15289387c;
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<float_const_*>(&local_228,(float *)&local_1d8,0xc);
  uVar20 = 0;
  do {
    testing::internal::DoubleNearPredFormat
              (&local_1f8,"result[i]","expected[i]","0.0001f",
               (double)*(float *)((longlong)puVar12 + uVar20),
               (double)*(float *)((longlong)local_228._Mypair._Myval2._Myfirst + uVar20),dVar5);
    if (local_1f8.success_ == false) {
      pMVar13 = (Message *)testing::Message::Message((Message *)&local_258);
      if (local_1f8.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar16 = "";
      }
      else {
        pcVar16 = (char *)local_1f8.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_1f8.message_._Mypair._Myval2 + 0x18)) {
          pcVar16 = *(char **)local_1f8.message_._Mypair._Myval2;
        }
      }
      pAVar14 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          ((AssertHelper *)&local_268,kNonFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                           ,0x77,pcVar16);
      testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_268);
      if (local_258.data_ != (AssertHelperData *)0x0) {
        puVar15 = (undefined8 *)
                  ((longlong)&(local_258.data_)->type +
                  (longlong)*(int *)(*(longlong *)local_258.data_ + 4));
        (**(code **)*puVar15)(puVar15,1);
      }
    }
    uVar9._Mypair._Myval2 = local_1f8.message_._Mypair._Myval2;
    if (local_1f8.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_1f8.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar9._Mypair._Myval2,0x20);
    }
    uVar20 = uVar20 + 4;
  } while (uVar20 < 0x30);
  if (local_228._Mypair._Myval2._Myfirst != (float *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_228._Mypair._Myval1 + 0x10))
              (local_228._Mypair._Myval1,local_228._Mypair._Myval2._Myfirst,
               (longlong)local_228._Mypair._Myval2._Myend -
               (longlong)local_228._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_228._Mypair._Myval2._Myfirst = (float *)0x0;
    local_228._Mypair._Myval2._Mylast = (float *)0x0;
    local_228._Mypair._Myval2._Myend = (float *)0x0;
  }
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)((longlong)*pDVar22 + 0x10))(pDVar22,puVar12,0x30,8);
  }
  if (pbVar11 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    (**(code **)((longlong)*pDVar23 + 0x10))(pDVar23,pbVar11,0x30,8);
  }
  if ((AssertHelperData *)local_248._Mypair._Myval2._Myfirst != (AssertHelperData *)0x0) {
    (**(code **)((longlong)*(DefaultMemoryResource *)local_248._Mypair._Myval1 + 0x10))
              (local_248._Mypair._Myval1,local_248._Mypair._Myval2._Myfirst,
               (longlong)local_248._Mypair._Myval2._Myend -
               (longlong)local_248._Mypair._Myval2._Myfirst & 0xfffffffffffffffc,8);
    local_248._Mypair._Myval2._Myend = (float *)0x0;
    local_248._Mypair._Myval2._Myfirst = (float *)0x0;
    local_248._Mypair._Myval2._Mylast = (float *)0x0;
  }
  if (local_148 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    local_268._Myval2 = local_148;
    if (local_150 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_150 + 0x10))(local_150,&local_268);
  }
  if (local_150 != (longlong *)0x0) {
    (**(code **)(*local_150 + 0x20))(local_150,local_150 != (longlong *)local_188);
    local_150 = (longlong *)0x0;
  }
  if (local_208 != (undefined4 *)0x0) {
    (**(code **)((longlong)
                 `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,local_208,0xc0,8);
  }
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)((longlong)*local_200 + 0x10))(local_200,puVar10,0x30,8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c59e300

void * __thiscall
RBFSolverTest_InterpolativeGaussianSwingAngle1_Test::_scalar_deleting_destructor_
          (RBFSolverTest_InterpolativeGaussianSwingAngle1_Test *this,uint param_1)

{
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// CreateTest @ 14c59e350

Test * __thiscall
testing::internal::TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle1_Test>::CreateTest
          (TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle1_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x60);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[4]._padding_ = 0;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[5]._padding_ = 0;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ = (longlong)&___7RBFSolverTest_InterpolativeGaussianSwingAngle1_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c59e3b0

void * __thiscall
testing::internal::TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle1_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle1_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<RBFSolverTest_InterpolativeGaussianSwingAngle1_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c59e3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
RBFSolverTest_AdditiveGaussianSwingAngle0_Test::TestBody
          (RBFSolverTest_AdditiveGaussianSwingAngle0_Test *this)

{
  undefined1 *puVar1;
  unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *__return_storage_ptr__;
  longlong lVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  Type *pTVar14;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar15;
  AssertHelperData *pAVar16;
  undefined4 *puVar17;
  DefaultMemoryResource *pDVar18;
  undefined1 auStackY_1d8 [32];
  float *local_198;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_190;
  PolyAllocator<float,8,pma::DefaultMemoryResource> local_188;
  undefined8 local_180;
  AssertHelper local_178;
  longlong local_170;
  RBFSolver *local_168;
  MemoryResource *local_160;
  AssertHelperData *local_158;
  RBFSolverRecipe local_148;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [72];
  unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *local_a0;
  RBFSolver *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  function<void___cdecl(rl4::RBFSolver_*)> local_78;
  
  __return_storage_ptr__ =
       (unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)
       (local_e8 + 0x10);
  local_78._48_8_ = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar12 = (ulonglong)_tls_index;
  puVar1 = &this->field_0x10;
  *(undefined8 *)&this->field_0x1c = 2;
  *(undefined4 *)&this->field_0x18 = 0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  pDVar18 = &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    pDVar18 = (DefaultMemoryResource *)puVar1;
  }
  puVar5 = (undefined4 *)(**(code **)(*(longlong *)&pDVar18->field_0x0 + 8))(pDVar18,0x10,8);
  *puVar5 = 0x3f800000;
  puVar5[1] = 0x3f800000;
  puVar5[2] = 0x3f800000;
  puVar5[3] = 0x3f800000;
  *(undefined4 **)&this->field_0x50 = puVar5;
  *(undefined8 *)&this->field_0x58 = 4;
  *(undefined2 *)&this->field_0x38 = 4;
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_88 = ___xmm_3f800000000000000000000000000000;
  uStack_80 = _UNK_150689648;
  local_78._0_8_ = ___xmm_3f3b9c203f29c337bdf5d24abdbfd700;
  local_78._8_8_ = _UNK_1528938c8;
  local_78._16_8_ = ___xmm_3f77cc08be4c7cd93db687963dfccfaf;
  local_78._24_8_ = _UNK_152893928;
  local_78._32_8_ = ___xmm_3f29c337bf3b9c203dbfd70ebdf5d24a;
  local_78._40_8_ = _UNK_1528938a8;
  puVar6 = (undefined4 *)
           (**(code **)((longlong)
                        `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                        ::__l2::dmr + 8))
                     (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                       ::__l2::dmr,0x40,8);
  puVar13 = &local_88;
  puVar17 = puVar6;
  do {
    *puVar17 = *(undefined4 *)puVar13;
    puVar13 = (undefined8 *)((longlong)puVar13 + 4);
    puVar17 = puVar17 + 1;
  } while (puVar13 != (undefined8 *)&local_78.field_0x30);
  *(undefined4 **)&this->field_0x40 = puVar6;
  *(longlong *)&this->field_0x48 = (longlong)puVar17 - (longlong)puVar6 >> 2;
  local_148.solverType = *(RBFSolverType *)&this->field_0x18;
  local_148.distanceMethod = *(RBFDistanceMethod *)&this->field_0x1c;
  local_148.weightFunction = *(RBFFunctionType *)&this->field_0x20;
  local_148.normalizeMethod = *(RBFNormalizeMethod *)&this->field_0x24;
  local_148.twistAxis = *(TwistAxis *)&this->field_0x28;
  local_148.isAutomaticRadius = (bool)this->field_0x2c;
  local_148._21_3_ = *(undefined3 *)&this->field_0x2d;
  local_148.radius = *(float *)&this->field_0x30;
  local_148.weightThreshold = *(float *)&this->field_0x34;
  local_148.rawControlCount = *(ushort *)&this->field_0x38;
  local_148._34_6_ = *(undefined6 *)&this->field_0x3a;
  local_148.targetValues.ptr = *(float **)&this->field_0x40;
  local_148.targetValues.sz = *(ulong64 *)&this->field_0x48;
  local_148.targetScales.ptr = *(float **)&this->field_0x50;
  local_148.targetScales.sz = *(ulong64 *)&this->field_0x58;
  rl4::RBFSolver::create(__return_storage_ptr__,&local_148,(MemoryResource *)puVar1);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_e8._0_8_ = ___xmm_3f3b9c203f29c337bdf5d24abdbfd700;
  local_e8._8_8_ = _UNK_1528938c8;
  local_158 = (AssertHelperData *)
              (**(code **)((longlong)
                           `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::dmr + 8))
                        (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                          ::__l2::dmr,0x10,8);
  pTVar14 = (Type *)local_e8;
  pAVar16 = local_158;
  do {
    pAVar16->type = *pTVar14;
    pTVar14 = pTVar14 + 1;
    pAVar16 = (AssertHelperData *)&pAVar16->field_0x4;
  } while ((unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)pTVar14 !=
           __return_storage_ptr__);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_168 = (RBFSolver *)
              &`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    local_168 = (RBFSolver *)puVar1;
  }
  local_160 = (MemoryResource *)(**(code **)(local_168->_padding_ + 8))(local_168,0x10,8);
  *local_160 = (MemoryResource)0x0;
  local_160[1] = (MemoryResource)0x0;
  pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::
  PolyAllocator<float,8,pma::DefaultMemoryResource>(&local_188);
  PVar15.pMemRes = local_188.pMemRes;
  if (puVar1 != (undefined1 *)0x0) {
    PVar15.pMemRes = (MemoryResource *)puVar1;
  }
  pfVar7 = (float *)(**(code **)(*(longlong *)&(PVar15.pMemRes)->field_0x0 + 8))
                              (PVar15.pMemRes,0x10,8);
  local_190._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )&DAT_00000004;
  local_180 = 4;
  pfVar7[0] = 0.0;
  pfVar7[1] = 0.0;
  pfVar7[2] = 0.0;
  pfVar7[3] = 0.0;
  local_188.pMemRes = local_160;
  local_178.data_ = local_158;
  local_170 = (longlong)pAVar16 - (longlong)local_158 >> 2;
  local_198 = pfVar7;
  (**(code **)(local_98->_padding_ + 0x10))(local_98,&local_178,&local_188,&local_198);
  if (*(int *)(lVar2 + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
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
  local_f8 = ___xmm_3e0720c93e5667b63ed538ef3e7805a3;
  uStack_f0 = _UNK_152893f48;
  pfVar8 = (float *)(**(code **)((longlong)
                                 `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                 ::__l2::dmr + 8))
                              (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                                ::__l2::dmr,0x10,8);
  dVar3 = __real_3f1a36e2e0000000;
  puVar13 = &local_f8;
  do {
    *(undefined4 *)((longlong)puVar13 + ((longlong)pfVar8 - (longlong)&local_f8)) =
         *(undefined4 *)puVar13;
    puVar13 = (undefined8 *)((longlong)puVar13 + 4);
  } while (puVar13 != (undefined8 *)local_e8);
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_198,"result[i]","expected[i]","0.0001f",(double)*pfVar7,
             (double)*pfVar8,__real_3f1a36e2e0000000);
  if (local_198._0_1_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_188);
    if (local_190._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_190._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_190._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_178,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x94,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper(&local_178);
    if (local_188.pMemRes != (MemoryResource *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_188.pMemRes)->field_0x0 +
                (longlong)*(int *)((longlong)*local_188.pMemRes + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar4._Mypair._Myval2 = local_190._Mypair._Myval2;
  if (local_190._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_198,"result[i]","expected[i]","0.0001f",(double)pfVar7[1],
             (double)pfVar8[1],dVar3);
  if (local_198._0_1_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_188);
    if (local_190._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_190._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_190._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_178,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x94,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper(&local_178);
    if (local_188.pMemRes != (MemoryResource *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_188.pMemRes)->field_0x0 +
                (longlong)*(int *)((longlong)*local_188.pMemRes + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar4._Mypair._Myval2 = local_190._Mypair._Myval2;
  if (local_190._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_198,"result[i]","expected[i]","0.0001f",(double)pfVar7[2],
             (double)pfVar8[2],dVar3);
  if (local_198._0_1_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_188);
    if (local_190._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_190._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_190._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_178,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x94,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper(&local_178);
    if (local_188.pMemRes != (MemoryResource *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_188.pMemRes)->field_0x0 +
                (longlong)*(int *)((longlong)*local_188.pMemRes + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar4._Mypair._Myval2 = local_190._Mypair._Myval2;
  if (local_190._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  testing::internal::DoubleNearPredFormat
            ((AssertionResult *)&local_198,"result[i]","expected[i]","0.0001f",(double)pfVar7[3],
             (double)pfVar8[3],dVar3);
  if (local_198._0_1_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_188);
    if (local_190._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)local_190._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_190._Mypair._Myval2 + 0x18)) {
        pcVar11 = *(char **)local_190._Mypair._Myval2;
      }
    }
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_178,kNonFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFSolver.cpp"
                         ,0x94,pcVar11);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper(&local_178);
    if (local_188.pMemRes != (MemoryResource *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)&(local_188.pMemRes)->field_0x0 +
                (longlong)*(int *)((longlong)*local_188.pMemRes + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  uVar4._Mypair._Myval2 = local_190._Mypair._Myval2;
  if (local_190._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_190._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  (**(code **)((longlong)
               `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr + 0x10))
            (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr,pfVar8,0x10,8);
  (**(code **)(*(longlong *)&(PVar15.pMemRes)->field_0x0 + 0x10))(PVar15.pMemRes,pfVar7,0x10,8);
  (**(code **)(local_168->_padding_ + 0x10))(local_168,local_160,0x10,8);
  if (local_158 != (AssertHelperData *)0x0) {
    (**(code **)((longlong)
                 `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,local_158,0x10,8);
  }
  if (local_98 != (RBFSolver *)0x0) {
    local_168 = local_98;
    if (local_a0 == (unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)0x0
       ) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)&(local_a0->_Mypair)._Myval1 + 0x10))(local_a0,&local_168);
  }
  if (local_a0 != (unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)0x0)
  {
    (**(code **)(*(longlong *)&(local_a0->_Mypair)._Myval1 + 0x20))
              (local_a0,local_a0 != __return_storage_ptr__);
    local_a0 = (unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *)0x0;
  }
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)((longlong)
                 `public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr + 0x10))
              (&`public:___cdecl_pma::impl::PolyAllocator<float,8,pma::DefaultMemoryResource>::PolyAllocator<float,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr,puVar6,0x40,8);
  }
  (**(code **)(*(longlong *)&pDVar18->field_0x0 + 0x10))(pDVar18,puVar5,0x10,8);
  return;
}

// `scalar_deleting_destructor' @ 14c59ed00

void * __thiscall
RBFSolverTest_AdditiveGaussianSwingAngle0_Test::_scalar_deleting_destructor_
          (RBFSolverTest_AdditiveGaussianSwingAngle0_Test *this,uint param_1)

{
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// CreateTest @ 14c59ed50

Test * __thiscall
testing::internal::TestFactoryImpl<RBFSolverTest_AdditiveGaussianSwingAngle0_Test>::CreateTest
          (TestFactoryImpl<RBFSolverTest_AdditiveGaussianSwingAngle0_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x60);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[4]._padding_ = 0;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00[5]._padding_ = 0;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ = (longlong)&___7RBFSolverTest_AdditiveGaussianSwingAngle0_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c59edb0

void * __thiscall
testing::internal::TestFactoryImpl<RBFSolverTest_AdditiveGaussianSwingAngle0_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<RBFSolverTest_AdditiveGaussianSwingAngle0_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<RBFSolverTest_AdditiveGaussianSwingAngle0_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetSetUpCaseOrSuite @ 14c59edf0

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::GetSetUpCaseOrSuite
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

// GetTearDownCaseOrSuite @ 14c59ee90

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<`anonymous_namespace'::RBFSolverTest>::GetTearDownCaseOrSuite
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

