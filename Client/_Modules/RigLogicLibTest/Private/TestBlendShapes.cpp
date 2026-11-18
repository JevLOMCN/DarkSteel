// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 32

// gtest_registering_dummy_'' @ 1413267f0

void __cdecl
`dynamic_initializer_for_'BlendShapesTest_Calculate_Test::gtest_registering_dummy___(void)

{
  BlendShapesTest_Calculate_Test::gtest_registering_dummy_ =
       BlendShapesTest_Calculate_Test::AddToRegistry();
  return;
}

// `dynamic_initializer_for_'gtest_BlendShapesTestBlendShapesTest_dummy_'' @ 141326810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_BlendShapesTestBlendShapesTest_dummy___(void)

{
  InstantiationInfo **ppIVar1;
  InstantiationInfo *pIVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint3 uVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint7 uVar10;
  ulonglong uVar11;
  UnitTest *this;
  ParameterizedTestSuiteRegistry *this_00;
  char *pcVar12;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *pPVar13;
  void *pvVar14;
  ulong64 uVar15;
  undefined1 auStackY_e8 [32];
  _Bxty local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  _Bxty local_68;
  ulong64 local_58;
  ulong64 uStack_50;
  code *local_48;
  code *local_40;
  char *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this = testing::UnitTest::GetInstance();
  this_00 = testing::UnitTest::parameterized_test_registry(this);
  uStack_88 = 0;
  pcVar12 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_80 = 0x82;
  *(undefined8 *)pcVar12 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar12 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_78 = 0x8f;
  *(undefined8 *)(pcVar12 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar12 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar12 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar12 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar12 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar12 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar12 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar12 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar12 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar12 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar12 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar12 + 0x68) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar12 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar12 + 0x78) = uVar3;
  *(undefined2 *)(pcVar12 + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_2_;
  pcVar12[0x82] = '\0';
  local_b8._8_8_ = 0;
  local_90 = pcVar12;
  local_b8._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_a8 = ___xmm_000000000000008f0000000000000082;
  uStack_a0 = _UNK_152881b98;
  uVar3 = *(undefined8 *)(pcVar12 + 8);
  *(undefined8 *)local_b8._Ptr = *(undefined8 *)pcVar12;
  *(undefined8 *)(local_b8._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x18);
  *(undefined8 *)(local_b8._Ptr + 0x10) = *(undefined8 *)(pcVar12 + 0x10);
  *(undefined8 *)(local_b8._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x28);
  *(undefined8 *)(local_b8._Ptr + 0x20) = *(undefined8 *)(pcVar12 + 0x20);
  *(undefined8 *)(local_b8._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x38);
  *(undefined8 *)(local_b8._Ptr + 0x30) = *(undefined8 *)(pcVar12 + 0x30);
  *(undefined8 *)(local_b8._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x48);
  *(undefined8 *)(local_b8._Ptr + 0x40) = *(undefined8 *)(pcVar12 + 0x40);
  *(undefined8 *)(local_b8._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x58);
  *(undefined8 *)(local_b8._Ptr + 0x50) = *(undefined8 *)(pcVar12 + 0x50);
  *(undefined8 *)(local_b8._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x68);
  *(undefined8 *)(local_b8._Ptr + 0x60) = *(undefined8 *)(pcVar12 + 0x60);
  *(undefined8 *)(local_b8._Ptr + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(pcVar12 + 0x78);
  *(undefined8 *)(local_b8._Ptr + 0x70) = *(undefined8 *)(pcVar12 + 0x70);
  *(undefined8 *)(local_b8._Ptr + 0x78) = uVar3;
  *(undefined2 *)(local_b8._Ptr + 0x80) = *(undefined2 *)(pcVar12 + 0x80);
  *(local_b8._Ptr + 0x82) = pcVar12[0x82];
  local_98 = 0x3c;
  pPVar13 = testing::internal::ParameterizedTestSuiteRegistry::
            GetTestSuitePatternHolder<_anonymous_namespace_::BlendShapesTest>
                      (this_00,"BlendShapesTest",(CodeLocation *)&local_b8);
  uVar9 = s_BlendShapesTest._8_4_;
  uVar8 = s_BlendShapesTest._4_4_;
  uVar7 = s_BlendShapesTest._0_4_;
  uVar6 = _UNK_150676968;
  uVar15 = ___xmm_000000000000000f000000000000000f;
  uStack_88._0_7_ =
       CONCAT16(s_BlendShapesTest[0xe],CONCAT24(s_BlendShapesTest._12_2_,s_BlendShapesTest._8_4_));
  uVar10 = (uint7)uStack_88;
  uStack_88 = (ulonglong)(uint7)uStack_88;
  uVar11 = uStack_88;
  uVar5 = (uint3)(uVar10 >> 0x20);
  uStack_88._4_4_ = (uint)uVar5;
  local_48 = gtest_BlendShapesTestBlendShapesTest_EvalGenerator_;
  local_58 = ___xmm_000000000000000f000000000000000f;
  uStack_50 = _UNK_150676968;
  local_68._Buf[0] = s_BlendShapesTest[0];
  local_68._Buf[1] = s_BlendShapesTest[1];
  local_68._Buf[2] = s_BlendShapesTest[2];
  local_68._Buf[3] = s_BlendShapesTest[3];
  local_68._Buf[4] = s_BlendShapesTest[4];
  local_68._Buf[5] = s_BlendShapesTest[5];
  local_68._Buf[6] = s_BlendShapesTest[6];
  local_68._Buf[7] = s_BlendShapesTest[7];
  local_68._Buf[8] = s_BlendShapesTest[8];
  local_68._Buf[9] = s_BlendShapesTest[9];
  local_68._Buf[10] = s_BlendShapesTest[10];
  local_68._Buf[0xb] = s_BlendShapesTest[0xb];
  local_68._12_4_ = uStack_88._4_4_;
  pIVar2 = (pPVar13->instantiations_)._Mypair._Myval2._Mylast;
  local_40 = gtest_BlendShapesTestBlendShapesTest_EvalGenerateName_;
  local_38 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\blendshapes\\TestBlendShapes.cpp"
  ;
  local_30 = 0x3c;
  uStack_88 = uVar11;
  if (pIVar2 == (pPVar13->instantiations_)._Mypair._Myval2._Myend) {
    std::
    vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_>
    ::
    _Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>
              (&pPVar13->instantiations_,pIVar2,(InstantiationInfo *)&local_68);
  }
  else {
    (pIVar2->name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pIVar2->name)._Mypair._Myval2._Bx + 8) = 0;
    (pIVar2->name)._Mypair._Myval2._Mysize = 0;
    (pIVar2->name)._Mypair._Myval2._Myres = 0;
    (pIVar2->name)._Mypair._Myval2._Bx._Ptr = (char *)CONCAT44(uVar8,uVar7);
    *(ulonglong *)((longlong)&(pIVar2->name)._Mypair._Myval2._Bx + 8) =
         (ulonglong)CONCAT34(uVar5,uVar9);
    (pIVar2->name)._Mypair._Myval2._Mysize = uVar15;
    (pIVar2->name)._Mypair._Myval2._Myres = uVar6;
    local_58 = 0;
    local_68._0_4_ = uVar7 & 0xffffff00;
    pIVar2->generator = gtest_BlendShapesTestBlendShapesTest_EvalGenerator_;
    pIVar2->name_func = gtest_BlendShapesTestBlendShapesTest_EvalGenerateName_;
    pIVar2->file = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\blendshapes\\TestBlendShapes.cpp"
    ;
    pIVar2->line = 0x3c;
    ppIVar1 = &(pPVar13->instantiations_)._Mypair._Myval2._Mylast;
    *ppIVar1 = *ppIVar1 + 1;
  }
  if (0xf < uStack_50) {
    pvVar4 = (void *)CONCAT44(local_68._4_4_,local_68._0_4_);
    uVar15 = uStack_50 + 1;
    pvVar14 = pvVar4;
    if (0xfff < uVar15) {
      pvVar14 = *(void **)((longlong)pvVar4 + -8);
      uVar15 = uStack_50 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar14))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar14,uVar15);
  }
  gtest_BlendShapesTestBlendShapesTest_dummy_ = 0;
  operator_delete(pcVar12,0x90);
  return;
}

// CreateTest @ 14c4673b0

Test * __thiscall
testing::internal::ParameterizedTestFactory<BlendShapesTest_Calculate_Test>::CreateTest
          (ParameterizedTestFactory<BlendShapesTest_Calculate_Test> *this)

{
  Test *this_00;
  
  WithParamInterface<unsigned_short>::parameter_ = &this->parameter_;
  this_00 = ::operator_new(0x18);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&BlendShapesTest_Calculate_Test::_vftable__for__testing__Test__;
    this_00[1]._padding_ =
         (longlong)
         &BlendShapesTest_Calculate_Test::
          _vftable__for__testing__WithParamInterface<unsigned_short>__;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c467410

void * __thiscall
testing::internal::ParameterizedTestFactory<BlendShapesTest_Calculate_Test>::
_scalar_deleting_destructor_
          (ParameterizedTestFactory<BlendShapesTest_Calculate_Test> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c467450

void * __thiscall
_anon_BBED59A5::BlendShapesTest::_scalar_deleting_destructor_(BlendShapesTest *this,uint param_1)

{
  *(undefined ***)&this->field_0x10 = &___7__WithParamInterface_G_testing__6B_;
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// TestBody @ 14c4674a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall BlendShapesTest_Calculate_Test::TestBody(BlendShapesTest_Calculate_Test *this)

{
  ushort uVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool bVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  float *_Dst;
  ulonglong uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  uint uVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  float *pfVar18;
  float *pfVar19;
  ulonglong uVar20;
  undefined1 auStackY_298 [32];
  AssertHelper local_268;
  undefined1 local_260 [16];
  AssertHelper local_250;
  _Bxty local_248;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_238;
  void *local_230 [2];
  longlong local_220 [3];
  undefined1 local_208 [160];
  longlong *local_168;
  undefined1 local_158 [56];
  longlong *local_120;
  AssertHelperData *local_118;
  longlong local_108 [7];
  longlong *local_d0;
  AssertHelperData *local_c8;
  _Bxty local_b8;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [56];
  longlong *local_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar4 = testing::internal::IsTrue
                    (testing::WithParamInterface<unsigned_short>::parameter_ != (ushort *)0x0);
  if (!bVar4) {
    testing::internal::GTestLog::GTestLog
              ((GTestLog *)&local_268,GTEST_FATAL,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\gtest.h"
               ,0x741);
    pbVar5 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition parameter_ != nullptr failed. ");
    pbVar5 = std::operator<<<std::char_traits<char>_>
                       (pbVar5,"GetParam() can only be called inside a value-parameterized test ");
    std::operator<<<std::char_traits<char>_>
              (pbVar5,"-- did you intend to write TEST_P instead of TEST_F?");
    testing::internal::GTestLog::~GTestLog((GTestLog *)&local_268);
  }
  uVar20 = 0;
  uVar1 = *testing::WithParamInterface<unsigned_short>::parameter_;
  local_260._0_8_ = &pma::AlignedMemoryResource::_vftable_;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_98,0,0xf,0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_268.data_ = (AssertHelperData *)local_260;
  local_248._Ptr = (char *)0x0;
  local_248._8_8_ = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (local_60 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_60 + 0x10))(local_60,local_108,&local_248,&local_268);
  (**(code **)((longlong)*(ControlsInputInstance *)local_c8 + 0x28))(local_c8,local_230);
  memmove(local_230[0],&rltests::blendShapeInputs,0x3c);
  rltests::BlendShapesFactory::createTestBlendShapes
            ((BlendShapesImpl *)local_208,(MemoryResource *)local_260);
  rl4::BlendShapesImpl::createInstance
            ((BlendShapesImpl *)local_208,
             (unique_ptr<rl4::BlendShapesOutputInstance,std::function<void___cdecl(rl4::BlendShapesOutputInstance_*)>_>
              *)local_158,(MemoryResource *)local_260);
  rl4::BlendShapesImpl::calculate
            ((BlendShapesImpl *)local_208,(ControlsInputInstance *)local_c8,
             (BlendShapesOutputInstance *)local_118,uVar1);
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x28);
  memmove(_Dst,&rltests::blendShapeOutputs,0x28);
  uVar11 = 0;
  local_260._8_4_ = 0;
  local_260._12_4_ = 0;
  pfVar19 = _Dst + rltests::LODs[uVar1];
  uVar6 = uVar20;
  do {
    uVar12 = uVar6 + 1;
    if (local_260[uVar6 + 8] != local_260[uVar6 + 0xc]) {
      uVar11 = -(uint)((byte)local_260[uVar6 + 8] < (byte)local_260[uVar6 + 0xc]) | 1;
      break;
    }
    uVar6 = uVar12;
  } while (uVar12 != 4);
  uVar6 = (longlong)(_Dst + 10) - (longlong)pfVar19;
  if (uVar11 == 0) {
    uVar6 = uVar6 & 0xfffffffffffffffc;
  }
  else {
    uVar6 = uVar6 + 3 >> 2;
    if (_Dst + 10 < pfVar19) {
      uVar6 = uVar20;
    }
    if (uVar6 == 0) goto LAB_14c467703;
    uVar6 = uVar6 << 2;
  }
  memset(pfVar19,0,uVar6);
LAB_14c467703:
  (**(code **)((longlong)*(BlendShapesOutputInstance *)local_118 + 8))(local_118,local_220);
  uVar6 = _UNK_15076add8;
  uVar3 = ___xmm_000000000000000f0000000000000000;
  pfVar19 = _Dst;
  do {
    pfVar18 = (float *)((local_220[0] - (longlong)_Dst) + (longlong)pfVar19);
    if (*pfVar19 == *pfVar18) {
      testing::AssertionSuccess((AssertionResult *)&local_248);
    }
    else {
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,pfVar19,pfVar18);
      pbVar8 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_b8,pfVar18,pfVar19);
      testing::internal::EqFailure
                ((AssertionResult *)&local_248,"outputBuffer[i]","expected[i]",pbVar8,pbVar7,false);
      if (0xf < uStack_a0) {
        pvVar2 = (void *)CONCAT71(local_b8._1_7_,local_b8._Buf[0]);
        uVar17 = uStack_a0 + 1;
        pvVar13 = pvVar2;
        if (0xfff < uVar17) {
          pvVar13 = *(void **)((longlong)pvVar2 + -8);
          uVar17 = uStack_a0 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13))) goto LAB_14c4679ae;
        }
        ::operator_delete(pvVar13,uVar17);
      }
      local_b8._Buf[0] = '\0';
      local_a8 = uVar3;
      uStack_a0 = uVar6;
      if (0xf < local_40) {
        uVar17 = local_40 + 1;
        uVar14 = local_58._Ptr;
        if (0xfff < uVar17) {
          uVar14 = *(undefined8 *)(local_58._Ptr + -8);
          uVar17 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar14)) {
LAB_14c4679ae:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar14,uVar17);
      }
    }
    uVar14 = local_248._8_8_;
    if (local_248._Buf[0] == '\0') {
      pMVar9 = (Message *)testing::Message::Message((Message *)&local_238);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_248._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = local_248._8_8_;
        if (0xf < *(ulong64 *)(local_248._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
          pcVar15 = *local_248._8_8_;
        }
      }
      pAVar10 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_268,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\blendshapes\\TestBlendShapes.cpp"
                           ,0x38,pcVar15);
      testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
      testing::internal::AssertHelper::~AssertHelper(&local_268);
      if (local_238._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar16 = (undefined8 *)
                  ((longlong)&(local_238._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_238._Myval2 + 4));
        (**(code **)*puVar16)(puVar16,1);
      }
      uVar3 = local_248._8_8_;
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_248._8_8_ !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_248._8_8_);
        ::operator_delete((void *)uVar3,0x20);
      }
      if (_Dst != (float *)0x0) {
        ::operator_delete(_Dst,0x28);
      }
      if (local_118 != (AssertHelperData *)0x0) {
        local_250.data_ = local_118;
        if (local_120 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)(*local_120 + 0x10))(local_120,&local_250);
      }
      if (local_120 != (longlong *)0x0) {
        (**(code **)(*local_120 + 0x20))(local_120,local_120 != (longlong *)local_158);
        local_120 = (longlong *)0x0;
      }
      if (local_168 != (longlong *)0x0) {
        (**(code **)(*local_168 + 0x20))(local_168,local_168 != (longlong *)(local_208 + 0x68));
        local_168 = (longlong *)0x0;
      }
      if ((ushort *)local_208._80_8_ != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_208._72_8_ + 0x10))
                  (local_208._72_8_,local_208._80_8_,
                   ((longlong)(local_208._96_8_ - local_208._80_8_) >> 1) * 2,8);
        local_208._96_8_ = (ushort *)0x0;
        local_208._80_8_ = (ushort *)0x0;
        local_208._88_8_ = (ushort *)0x0;
      }
      if ((ushort *)local_208._48_8_ != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_208._40_8_ + 0x10))
                  (local_208._40_8_,local_208._48_8_,
                   ((longlong)(local_208._64_8_ - local_208._48_8_) >> 1) * 2,8);
        local_208._64_8_ = (ushort *)0x0;
        local_208._48_8_ = (ushort *)0x0;
        local_208._56_8_ = (ushort *)0x0;
      }
      if ((ushort *)local_208._16_8_ != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_208._8_8_ + 0x10))
                  (local_208._8_8_,local_208._16_8_,
                   ((longlong)(local_208._32_8_ - local_208._16_8_) >> 1) * 2,8);
        local_208._32_8_ = (ushort *)0x0;
        local_208._16_8_ = (ushort *)0x0;
        local_208._24_8_ = (ushort *)0x0;
      }
      rl4::BlendShapes::~BlendShapes((BlendShapes *)local_208);
      if (local_c8 == (AssertHelperData *)0x0) goto LAB_14c467ba1;
      local_250.data_ = local_c8;
      if (local_d0 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      pAVar10 = &local_250;
      goto LAB_14c467b9b;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_248._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_248._8_8_)
      ;
      ::operator_delete((void *)uVar14,0x20);
    }
    uVar20 = uVar20 + 1;
    pfVar19 = pfVar19 + 1;
    if (9 < uVar20) {
      if (_Dst != (float *)0x0) {
        ::operator_delete(_Dst,0x28);
      }
      if (local_118 != (AssertHelperData *)0x0) {
        local_268.data_ = local_118;
        if (local_120 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)(*local_120 + 0x10))(local_120,&local_268);
      }
      if (local_120 != (longlong *)0x0) {
        (**(code **)(*local_120 + 0x20))(local_120,local_120 != (longlong *)local_158);
        local_120 = (longlong *)0x0;
      }
      if (local_168 != (longlong *)0x0) {
        (**(code **)(*local_168 + 0x20))(local_168,local_168 != (longlong *)(local_208 + 0x68));
        local_168 = (longlong *)0x0;
      }
      if ((ushort *)local_208._80_8_ != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_208._72_8_ + 0x10))
                  (local_208._72_8_,local_208._80_8_,
                   ((longlong)(local_208._96_8_ - local_208._80_8_) >> 1) * 2,8);
        local_208._96_8_ = (ushort *)0x0;
        local_208._80_8_ = (ushort *)0x0;
        local_208._88_8_ = (ushort *)0x0;
      }
      if ((ushort *)local_208._48_8_ != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_208._40_8_ + 0x10))
                  (local_208._40_8_,local_208._48_8_,
                   ((longlong)(local_208._64_8_ - local_208._48_8_) >> 1) * 2,8);
        local_208._64_8_ = (ushort *)0x0;
        local_208._48_8_ = (ushort *)0x0;
        local_208._56_8_ = (ushort *)0x0;
      }
      if ((ushort *)local_208._16_8_ != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_208._8_8_ + 0x10))
                  (local_208._8_8_,local_208._16_8_,
                   ((longlong)(local_208._32_8_ - local_208._16_8_) >> 1) * 2,8);
        local_208._32_8_ = (ushort *)0x0;
        local_208._16_8_ = (ushort *)0x0;
        local_208._24_8_ = (ushort *)0x0;
      }
      rl4::BlendShapes::~BlendShapes((BlendShapes *)local_208);
      if (local_c8 != (AssertHelperData *)0x0) {
        local_268.data_ = local_c8;
        if (local_d0 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar10 = &local_268;
LAB_14c467b9b:
        (**(code **)(*local_d0 + 0x10))(local_d0,pAVar10);
      }
LAB_14c467ba1:
      if (local_d0 != (longlong *)0x0) {
        (**(code **)(*local_d0 + 0x20))(local_d0,local_d0 != local_108);
        local_d0 = (longlong *)0x0;
      }
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 0x20))(local_60,local_60 != (longlong *)local_98);
        local_60 = (longlong *)0x0;
      }
      pma::MemoryResource::~MemoryResource((MemoryResource *)local_260);
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c467ca0

void * __thiscall
BlendShapesTest_Calculate_Test::_scalar_deleting_destructor_
          (BlendShapesTest_Calculate_Test *this,uint param_1)

{
  *(undefined ***)&this->field_0x10 = &___7__WithParamInterface_G_testing__6B_;
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// GetTestSuiteName @ 14c467cf0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::
GetTestSuiteName(ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *this)

{
  return &this->test_suite_name_;
}

// GetTestSuiteTypeId @ 14c467d00

void * __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::
GetTestSuiteTypeId(ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *this)

{
  return &TypeIdHelper<BlendShapesTest>::dummy_;
}

// RegisterTests @ 14c467d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::RegisterTests
          (ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  size_t _Size;
  ulonglong uVar4;
  code *pcVar5;
  void *pvVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *pPVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  _Bxty *p_Var15;
  longlong *plVar16;
  longlong *plVar17;
  ushort *puVar18;
  _Bxty *p_Var19;
  basic_ostream<char,std::char_traits<char>_> *pbVar20;
  _Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*> *p_Var21;
  undefined2 *puVar22;
  TestFactoryBase *pTVar23;
  void *pvVar24;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  char *pcVar29;
  ulong64 uVar30;
  ulonglong uVar31;
  _Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*> *p_Var32;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar33;
  InstantiationInfo *pIVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  char *pcVar37;
  InstantiationInfo *_Src;
  _Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*> *p_Var38;
  _Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*> *p_Var39;
  undefined1 auStackY_308 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_2b0;
  _Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_2a8;
  char *local_298;
  GTestLog local_290;
  GTestLog local_28c;
  GTestLog local_288;
  GTestLog local_284;
  char *local_280;
  ulong64 local_278;
  InstantiationInfo *local_270;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *local_268;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *local_260;
  _func___cdecl_basic_string<char,std::char_traits<char>,std::allocator<char>_>_TestParamInfo<unsigned_short>_ptr
  *local_258;
  longlong *local_250;
  _Ref_count_base *local_248;
  longlong *local_240;
  longlong *local_238;
  TestParamInfo<unsigned_short> local_230;
  int iStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  undefined1 local_200 [24];
  char **local_1e8;
  char **local_1e0;
  char **local_1c8;
  char **local_1c0;
  int *local_1b0;
  char *local_198;
  uint local_190;
  basic_ios<char,std::char_traits<char>_> local_180;
  CodeLocation local_118;
  _Bxty local_f0;
  ulonglong local_e0;
  ulonglong local_d8;
  _Bxty local_d0;
  undefined1 *local_c0;
  ulonglong uStack_b8;
  _Bxty local_b0;
  undefined1 *local_a0;
  ulonglong uStack_98;
  _Bxty local_88;
  undefined1 *local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  undefined1 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  uVar9 = _UNK_15076add8;
  puVar8 = ___xmm_000000000000000f0000000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  psVar33 = (this->tests_)._Mypair._Myval2._Myfirst;
  local_268 = this;
  if (psVar33 != (this->tests_)._Mypair._Myval2._Mylast) {
    do {
      if (*(longlong *)&psVar33->field_0x8 != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)&psVar33->field_0x8 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_280 = *(char **)psVar33;
      pIVar34 = (this->instantiations_)._Mypair._Myval2._Myfirst;
      local_248 = *(_Ref_count_base **)&psVar33->field_0x8;
      local_270 = pIVar34;
      local_260 = psVar33;
      if (pIVar34 != (this->instantiations_)._Mypair._Myval2._Mylast) {
        do {
          local_270 = pIVar34;
          (*pIVar34->generator)((ParamGenerator<unsigned_short> *)&local_240);
          local_258 = pIVar34->name_func;
          _Size = (pIVar34->name)._Mypair._Myval2._Mysize;
          local_298 = pIVar34->file;
          iVar3 = pIVar34->line;
          local_b0._8_8_ = 0;
          local_b0._Ptr = (char *)0x0;
          local_a0 = puVar8;
          uStack_98 = uVar9;
          if (_Size != 0) {
            if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlen_string();
            }
            _Src = pIVar34;
            if (0xf < (pIVar34->name)._Mypair._Myval2._Myres) {
              _Src = (InstantiationInfo *)(pIVar34->name)._Mypair._Myval2._Bx._Ptr;
            }
            puVar2 = (undefined1 *)(_Size + 1);
            uVar31 = 0xf;
            p_Var15 = &local_d0;
            local_d0._Ptr = (char *)0x0;
            local_d0._8_8_ = 0;
            if (&DAT_0000000f < puVar2) {
              uVar31 = (ulonglong)puVar2 | 0xf;
              if (uVar31 < 0x8000000000000000) {
                if (uVar31 < 0x16) {
                  uVar31 = 0x16;
                }
              }
              else {
                uVar31 = 0x7fffffffffffffff;
              }
              p_Var15 = std::_Allocate<16,std::_Default_allocate_traits>(uVar31 + 1);
              local_d0._Ptr = (char *)p_Var15;
            }
            local_c0 = puVar2;
            uStack_b8 = uVar31;
            memcpy(p_Var15,_Src,_Size);
            p_Var15->_Buf[_Size] = '/';
            p_Var15->_Buf[(longlong)puVar2] = '\0';
            if (0xf < uStack_98) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Deallocate_for_capacity((allocator<char> *)local_b0._Buf,local_b0._Ptr,uStack_98);
            }
            local_b0._Ptr = local_d0._Ptr;
            local_d0._Ptr = local_d0._Ptr & 0xffffffffffffff00;
            local_b0._8_8_ = local_d0._8_8_;
            local_a0 = local_c0;
            uStack_98 = uStack_b8;
            local_c0 = puVar8;
            uStack_b8 = uVar9;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0)
            ;
          }
          pcVar37 = local_280;
          if (0xf < *(ulonglong *)(local_280 + 0x18)) {
            pcVar37 = *(char **)local_280;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0,
                     pcVar37,*(ulong64 *)(local_280 + 0x10));
          uVar30 = 0;
          local_278 = 0;
          local_2a8._Myhead =
               (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                *)0x0;
          local_2a8._Mysize = 0;
          local_2a8._Myhead = ::operator_new(0x40);
          (local_2a8._Myhead)->_Left = local_2a8._Myhead;
          (local_2a8._Myhead)->_Parent = local_2a8._Myhead;
          (local_2a8._Myhead)->_Right = local_2a8._Myhead;
          (local_2a8._Myhead)->_Color = '\x01';
          (local_2a8._Myhead)->_Isnil = '\x01';
          plVar16 = (longlong *)(**(code **)(*local_240 + 8))();
          local_250 = plVar16;
          while( true ) {
            plVar17 = (longlong *)(**(code **)(*local_240 + 0x10))();
            if ((plVar16 == plVar17) ||
               (cVar11 = (**(code **)(*plVar16 + 0x28))(plVar16,plVar17), cVar11 != '\0')) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (plVar17 != (longlong *)0x0) {
              (**(code **)*plVar17)(plVar17,1);
            }
            if (!bVar12) break;
            testing::Message::Message((Message *)&local_2b0);
            puVar18 = (ushort *)(**(code **)(*plVar16 + 0x20))(plVar16);
            local_230.param = *puVar18;
            local_230.index = uVar30;
            (*local_258)((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_f0,&local_230);
            if (local_e0 == 0) {
LAB_14c467fce:
              bVar12 = false;
            }
            else {
              uVar31 = 0;
              if (local_e0 != 0) {
                p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
                do {
                  p_Var19 = &local_f0;
                  if (0xf < local_d8) {
                    p_Var19 = p_Var15;
                  }
                  iVar13 = isalnum((int)p_Var19->_Buf[uVar31]);
                  p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
                  if (iVar13 == 0) {
                    p_Var19 = &local_f0;
                    if (0xf < local_d8) {
                      p_Var19 = p_Var15;
                    }
                    if (p_Var19->_Buf[uVar31] != '_') goto LAB_14c467fce;
                  }
                  uVar31 = uVar31 + 1;
                } while (uVar31 < local_e0);
              }
              bVar12 = true;
            }
            bVar12 = IsTrue(bVar12);
            if (!bVar12) {
              GTestLog::GTestLog(&local_290,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-param-util.h"
                                 ,0x22d);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition IsValidParamName(param_name) failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,"Parameterized test name \'");
              p_Var15 = &local_f0;
              if (0xf < local_d8) {
                p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
              }
              pbVar20 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                                  (pbVar20,p_Var15->_Buf,local_e0);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,"\' is invalid, in ");
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,local_298);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20," line ");
              pbVar20 = (basic_ostream<char,std::char_traits<char>_> *)
                        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar3);
              std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        (pbVar20,std::endl<char,std::char_traits<char>_>);
              GTestLog::~GTestLog(&local_290);
            }
            uVar35 = local_d8;
            uVar31 = local_e0;
            p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
            p_Var21 = (local_2a8._Myhead)->_Parent;
            cVar11 = p_Var21->_Isnil;
            p_Var39 = local_2a8._Myhead;
            while (cVar11 == '\0') {
              uVar4 = (p_Var21->_Myval)._Mypair._Myval2._Mysize;
              pbVar25 = &p_Var21->_Myval;
              p_Var19 = &local_f0;
              if (0xf < uVar35) {
                p_Var19 = p_Var15;
              }
              if (0xf < (p_Var21->_Myval)._Mypair._Myval2._Myres) {
                pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (pbVar25->_Mypair)._Myval2._Bx._Ptr;
              }
              uVar36 = uVar4;
              if (uVar31 < uVar4) {
                uVar36 = uVar31;
              }
              iVar13 = memcmp(pbVar25,p_Var19,uVar36);
              p_Var38 = p_Var21;
              if (iVar13 == 0) {
                if (uVar4 < uVar31) {
LAB_14c4684f7:
                  p_Var21 = (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                             *)&p_Var21->_Right;
                  p_Var38 = p_Var39;
                }
              }
              else if (iVar13 < 0) goto LAB_14c4684f7;
              p_Var21 = p_Var21->_Left;
              p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
              p_Var39 = p_Var38;
              cVar11 = p_Var21->_Isnil;
            }
            if (p_Var39->_Isnil == '\0') {
              pbVar25 = &p_Var39->_Myval;
              uVar4 = (p_Var39->_Myval)._Mypair._Myval2._Mysize;
              if (0xf < (p_Var39->_Myval)._Mypair._Myval2._Myres) {
                pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (pbVar25->_Mypair)._Myval2._Bx._Ptr;
              }
              p_Var19 = &local_f0;
              if (0xf < uVar35) {
                p_Var19 = p_Var15;
              }
              uVar35 = uVar31;
              if (uVar4 < uVar31) {
                uVar35 = uVar4;
              }
              iVar13 = memcmp(p_Var19,pbVar25,uVar35);
              if (iVar13 == 0) {
                if (uVar31 < uVar4) goto LAB_14c4681cc;
              }
              else if (iVar13 < 0) goto LAB_14c4681cc;
              bVar12 = false;
            }
            else {
LAB_14c4681cc:
              bVar12 = true;
            }
            bVar12 = IsTrue(bVar12);
            if (!bVar12) {
              GTestLog::GTestLog(&local_28c,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-param-util.h"
                                 ,0x232);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition test_param_names.count(param_name) == 0 failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,"Duplicate parameterized test name \'");
              p_Var15 = &local_f0;
              if (0xf < local_d8) {
                p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
              }
              pbVar20 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                                  (pbVar20,p_Var15->_Buf,local_e0);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,"\', in ");
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,local_298);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20," line ");
              pbVar20 = (basic_ostream<char,std::char_traits<char>_> *)
                        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar3);
              std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        (pbVar20,std::endl<char,std::char_traits<char>_>);
              GTestLog::~GTestLog(&local_28c);
            }
            uVar35 = local_d8;
            uVar31 = local_e0;
            uVar14 = 0;
            local_88._Ptr = (char *)local_2a8._Myhead;
            p_Var21 = (local_2a8._Myhead)->_Parent;
            p_Var39 = local_2a8._Myhead;
            if (p_Var21->_Isnil == '\0') {
              p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
              p_Var38 = p_Var21;
              do {
                p_Var21 = p_Var38;
                uVar4 = (p_Var21->_Myval)._Mypair._Myval2._Mysize;
                pbVar25 = &p_Var21->_Myval;
                p_Var19 = &local_f0;
                if (0xf < uVar35) {
                  p_Var19 = p_Var15;
                }
                if (0xf < (p_Var21->_Myval)._Mypair._Myval2._Myres) {
                  pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (pbVar25->_Mypair)._Myval2._Bx._Ptr;
                }
                uVar36 = uVar4;
                if (uVar31 < uVar4) {
                  uVar36 = uVar31;
                }
                iVar13 = memcmp(pbVar25,p_Var19,uVar36);
                if (iVar13 == 0) {
                  if (uVar31 <= uVar4) goto LAB_14c468314;
LAB_14c468513:
                  uVar14 = 0;
                  p_Var32 = (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                             *)&p_Var21->_Right;
                }
                else {
                  if (iVar13 < 0) goto LAB_14c468513;
LAB_14c468314:
                  uVar14 = 1;
                  p_Var32 = p_Var21;
                  p_Var39 = p_Var21;
                }
                p_Var38 = p_Var32->_Left;
                psVar33 = local_260;
                pIVar34 = local_270;
              } while (p_Var32->_Left->_Isnil == '\0');
            }
            uVar27 = local_88._Ptr;
            local_d0._8_4_ = uVar14;
            local_d0._Ptr = (char *)p_Var21;
            if ((p_Var39->_Isnil != '\0') ||
               (bVar12 = std::
                         less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                         ::operator()((less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                                       *)&local_2a8,
                                      (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_f0,&p_Var39->_Myval), bVar12)) {
              if (local_2a8._Mysize == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::_Throw_tree_length_error();
              }
              p_Var21 = ::operator_new(0x40);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        (&p_Var21->_Myval,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_f0);
              p_Var21->_Left =
                   (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                    *)uVar27;
              p_Var21->_Parent =
                   (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                    *)uVar27;
              p_Var21->_Right =
                   (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                    *)uVar27;
              local_88._Ptr = local_d0._Ptr;
              local_88._8_8_ = local_d0._8_8_;
              p_Var21->_Color = '\0';
              p_Var21->_Isnil = '\0';
              std::
              _Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ::_Insert_node(&local_2a8,
                             (_Tree_id<std::_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>_*>
                              *)&local_88,p_Var21);
              uVar31 = local_e0;
            }
            pcVar37 = local_280;
            if (*(ulong64 *)(local_280 + 0x30) != 0) {
              pcVar29 = local_280 + 0x20;
              if (0xf < *(ulonglong *)(local_280 + 0x38)) {
                pcVar29 = *(char **)pcVar29;
              }
              std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        ((basic_ostream<char,std::char_traits<char>_> *)
                         ((longlong)local_2b0._Mypair._Myval2 + 0x10),pcVar29,
                         *(ulong64 *)(local_280 + 0x30));
              std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)
                         ((longlong)local_2b0._Mypair._Myval2 + 0x10),"/");
              uVar31 = local_e0;
            }
            p_Var15 = &local_f0;
            if (0xf < local_d8) {
              p_Var15 = (_Bxty *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
            }
            std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       ((longlong)local_2b0._Mypair._Myval2 + 0x10),p_Var15->_Buf,uVar31);
            plVar16 = local_250;
            plVar17 = *(longlong **)(pcVar37 + 0x40);
            pcVar5 = *(code **)(*plVar17 + 8);
            puVar22 = (undefined2 *)(**(code **)(*local_250 + 0x20))(local_250);
            pTVar23 = (TestFactoryBase *)(*pcVar5)(plVar17,*puVar22);
            bVar12 = IsTrue(true);
            pcVar37 = local_298;
            if (!bVar12) {
              GTestLog::GTestLog(&local_288,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                                 ,0x213);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition !test_case_fp || !test_suite_fp failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,
                                   "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                                  );
              pcVar37 = local_298;
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,local_298);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,":");
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar3);
              GTestLog::~GTestLog(&local_288);
            }
            bVar12 = IsTrue(true);
            if (!bVar12) {
              GTestLog::GTestLog(&local_284,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                                 ,0x204);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition !test_case_fp || !test_suite_fp failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,
                                   "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                                  );
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,pcVar37);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,":");
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar3);
              GTestLog::~GTestLog(&local_284);
            }
            pPVar10 = local_268;
            pvVar24 = (void *)(**(code **)(local_268->_padding_ + 0x10))(local_268);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      (&local_118.file,&(pPVar10->code_location_).file);
            local_118.line = (pPVar10->code_location_).line;
            puVar18 = (ushort *)(**(code **)(*plVar16 + 0x20))(plVar16);
            local_218._0_8_ =
                 &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                  _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
            local_208 = (undefined1  [8])
                        &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>
                         ::_vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
            std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                      (&local_180);
            std::basic_iostream<char,std::char_traits<char>_>::
            basic_iostream<char,std::char_traits<char>_>
                      ((basic_iostream<char,std::char_traits<char>_> *)local_218,
                       (basic_streambuf<char,std::char_traits<char>_> *)local_200);
            *(undefined ***)(local_218 + *(int *)(local_218._0_8_ + 4)) =
                 std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable
            ;
            *(int *)((longlong)&iStack_21c + (longlong)*(int *)(local_218._0_8_ + 4)) =
                 *(int *)(local_218._0_8_ + 4) + -0x98;
            std::basic_streambuf<char,std::char_traits<char>_>::
            basic_streambuf<char,std::char_traits<char>_>
                      ((basic_streambuf<char,std::char_traits<char>_> *)local_200);
            local_200._0_8_ =
                 std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
            local_198 = (char *)0x0;
            local_190 = 0;
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      ((basic_ostream<char,std::char_traits<char>_> *)local_208,*puVar18);
            local_c0 = (undefined1 *)0x0;
            local_88._8_8_ = 0;
            local_88._Ptr = (char *)0x0;
            local_78 = puVar8;
            uStack_70 = uVar9;
            local_d0._Ptr = (char *)0x0;
            local_d0._8_8_ = 0;
            if ((((byte)local_190 & 0x22) == 2) || (pcVar37 = *local_1c0, pcVar37 == (char *)0x0)) {
              if (((local_190 & 4) == 0) && (*local_1c8 != (char *)0x0)) {
                pcVar29 = *local_1e8;
                pcVar37 = *local_1c8 + ((longlong)*local_1b0 - (longlong)pcVar29);
              }
              else {
                pcVar37 = (char *)0x0;
                pcVar29 = (char *)0x0;
              }
            }
            else {
              if (pcVar37 < local_198) {
                pcVar37 = local_198;
              }
              pcVar29 = *local_1e0;
              pcVar37 = pcVar37 + -(longlong)pcVar29;
            }
            if (pcVar29 != (char *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_88,pcVar29,(ulong64)pcVar37);
            }
            *(undefined ***)(local_218 + *(int *)(local_218._0_8_ + 4)) =
                 std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable
            ;
            *(int *)((longlong)&iStack_21c + (longlong)*(int *)(local_218._0_8_ + 4)) =
                 *(int *)(local_218._0_8_ + 4) + -0x98;
            local_200._0_8_ =
                 std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
            std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                      ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_200);
            std::basic_streambuf<char,std::char_traits<char>_>::
            ~basic_streambuf<char,std::char_traits<char>_>
                      ((basic_streambuf<char,std::char_traits<char>_> *)local_200);
            std::basic_iostream<char,std::char_traits<char>_>::
            ~basic_iostream<char,std::char_traits<char>_>
                      ((basic_iostream<char,std::char_traits<char>_> *)(local_200 + 8));
            std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                      (&local_180);
            uVar27 = &local_88;
            if (0xf < uStack_70) {
              uVar27 = local_88._Ptr;
            }
            pbVar25 = testing::Message::GetString
                                ((Message *)&local_2b0,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_68);
            if (0xf < (pbVar25->_Mypair)._Myval2._Myres) {
              pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar25->_Mypair)._Myval2._Bx._Ptr;
            }
            uVar26 = &local_b0;
            if (0xf < uStack_98) {
              uVar26 = local_b0._Ptr;
            }
            MakeAndRegisterTestInfo
                      ((char *)uVar26,(char *)pbVar25,(char *)0x0,(char *)uVar27,&local_118,pvVar24,
                       (_func_void *)0x0,(_func_void *)0x0,pTVar23);
            if (0xf < uStack_50) {
              pvVar6 = (void *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
              uVar30 = uStack_50 + 1;
              pvVar24 = pvVar6;
              if (0xfff < uVar30) {
                pvVar24 = *(void **)((longlong)pvVar6 + -8);
                uVar30 = uStack_50 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar24)))
                goto LAB_14c468a70;
              }
              ::operator_delete(pvVar24,uVar30);
            }
            local_68._Buf[0] = '\0';
            local_58 = puVar8;
            uStack_50 = uVar9;
            if (0xf < uStack_70) {
              uVar30 = uStack_70 + 1;
              uVar27 = local_88._Ptr;
              if (0xfff < uVar30) {
                uVar27 = *(undefined8 *)(local_88._Ptr + -8);
                uVar30 = uStack_70 + 0x28;
                if ((char *)0x1f < local_88._Ptr + (-8 - uVar27)) {
LAB_14c468a70:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar27,uVar30);
            }
            if (0xf < local_d8) {
              pvVar6 = (void *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
              uVar30 = local_d8 + 1;
              pvVar24 = pvVar6;
              if (0xfff < uVar30) {
                pvVar24 = *(void **)((longlong)pvVar6 + -8);
                uVar30 = local_d8 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar24))) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete(pvVar24,uVar30);
            }
            local_e0 = 0;
            local_d8 = 0xf;
            local_f0._Buf[0] = '\0';
            if (local_2b0._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar28 = (undefined8 *)
                        ((longlong)local_2b0._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_2b0._Mypair._Myval2 + 4));
              (**(code **)*puVar28)(puVar28,1);
            }
            (**(code **)(*plVar16 + 0x10))(plVar16);
            uVar30 = local_278 + 1;
            local_278 = uVar30;
          }
          if (plVar16 != (longlong *)0x0) {
            (**(code **)*plVar16)(plVar16,1);
          }
          cVar11 = (local_2a8._Myhead)->_Parent->_Isnil;
          p_Var21 = (local_2a8._Myhead)->_Parent;
          while (cVar11 == '\0') {
            std::
            _Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ::
            _Erase_tree<std::allocator<std::_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>_>_>
                      (&local_2a8,
                       (allocator<std::_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>_>
                        *)&local_2a8,p_Var21->_Right);
            p_Var39 = p_Var21->_Left;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&p_Var21->_Myval);
            ::operator_delete(p_Var21,0x40);
            p_Var21 = p_Var39;
            cVar11 = p_Var39->_Isnil;
          }
          ::operator_delete(local_2a8._Myhead,0x40);
          if (0xf < uStack_98) {
            uVar30 = uStack_98 + 1;
            uVar27 = local_b0._Ptr;
            if (0xfff < uVar30) {
              uVar27 = *(undefined8 *)(local_b0._Ptr + -8);
              uVar30 = uStack_98 + 0x28;
              if ((char *)0x1f < local_b0._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar27,uVar30);
          }
          plVar16 = local_238;
          local_b0._Ptr = local_b0._Ptr & 0xffffffffffffff00;
          local_a0 = puVar8;
          uStack_98 = uVar9;
          if (local_238 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_238 + 1;
            lVar7 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_238)(local_238);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
          }
          pIVar34 = pIVar34 + 1;
          this = local_268;
          local_270 = pIVar34;
        } while (pIVar34 != (local_268->instantiations_)._Mypair._Myval2._Mylast);
      }
      if (local_248 != (_Ref_count_base *)0x0) {
        std::_Ref_count_base::_Decref(local_248);
      }
      psVar33 = psVar33 + 1;
    } while (psVar33 != (this->tests_)._Mypair._Myval2._Mylast);
  }
  return;
}

// `scalar_deleting_destructor'`adjustor{16}'_(unsigned_int)___ptr64 @ 14c468ac8

void [thunk]:`anonymous_namespace'::BlendShapesTest::
     _scalar_deleting_destructor__adjustor_16____unsigned_int____ptr64
               (longlong param_1,uint param_2)

{
  _anon_BBED59A5::BlendShapesTest::_scalar_deleting_destructor_
            ((BlendShapesTest *)(param_1 + -0x10),param_2);
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14c468ad8

/* [thunk]:public: virtual void * __ptr64 __cdecl BlendShapesTest_Calculate_Test::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
BlendShapesTest_Calculate_Test::_vector_deleting_destructor__adjustor_16__
          (BlendShapesTest_Calculate_Test *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((BlendShapesTest_Calculate_Test *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// _Destroy @ 14c468af0

void __thiscall
std::
_Ref_count<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>
::_Destroy(_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
           *this)

{
  TestInfo *this_00;
  TestMetaFactoryBase<unsigned_short> *pTVar1;
  
  this_00 = this->_Ptr;
  if (this_00 != (TestInfo *)0x0) {
    pTVar1 = (this_00->test_meta_factory)._Mypair._Myval2;
    if (pTVar1 != (TestMetaFactoryBase<unsigned_short> *)0x0) {
      (**(code **)*pTVar1)(pTVar1,1);
    }
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&this_00->test_base_name);
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&this_00->test_suite_base_name);
    ::operator_delete(this_00,0x48);
    return;
  }
  return;
}

// _Delete_this @ 14c468b50

void __thiscall
std::
_Ref_count<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>
::_Delete_this(_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
               *this)

{
  if (this != (_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
               *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c468b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c468b70

void * __thiscall
std::
_Ref_count<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>
::_scalar_deleting_destructor_
          (_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c468ba0

void * __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::
_scalar_deleting_destructor_
          (ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *this,uint param_1)

{
  std::
  vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_>
  ::
  ~vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
            (&this->instantiations_);
  std::
  vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_>
  ::
  ~vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
            (&this->tests_);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&(this->code_location_).file);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->test_suite_name_);
  this->_padding_ = (longlong)&___7ParameterizedTestSuiteInfoBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// CreateTestFactory @ 14c468c10

TestFactoryBase * __thiscall
testing::internal::TestMetaFactory<BlendShapesTest_Calculate_Test>::CreateTestFactory
          (TestMetaFactory<BlendShapesTest_Calculate_Test> *this,ushort param_1)

{
  TestFactoryBase *pTVar1;
  
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TestFactoryBase *)0x0) {
    *(ushort *)(pTVar1 + 1) = param_1;
    *pTVar1 = (TestFactoryBase)
              &
              ___7__ParameterizedTestFactory_VBlendShapesTest_Calculate_Test___internal_testing__6B_
    ;
    return pTVar1;
  }
  return (TestFactoryBase *)0x0;
}

// `scalar_deleting_destructor' @ 14c468c50

void * __thiscall
testing::internal::TestMetaFactory<BlendShapesTest_Calculate_Test>::_scalar_deleting_destructor_
          (TestMetaFactory<BlendShapesTest_Calculate_Test> *this,uint param_1)

{
  *this = (TestMetaFactory<BlendShapesTest_Calculate_Test>)
          &___7__TestMetaFactoryBase_G_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetTestSuitePatternHolder<`anonymous_namespace'::BlendShapesTest> @ 14c468c90

ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> * __thiscall
testing::internal::ParameterizedTestSuiteRegistry::
GetTestSuitePatternHolder<_anonymous_namespace_::BlendShapesTest>
          (ParameterizedTestSuiteRegistry *this,char *param_1,CodeLocation *param_2)

{
  ParameterizedTestSuiteInfoBase ***pppPVar1;
  ParameterizedTestSuiteInfoBase **ppPVar2;
  int iVar3;
  undefined8 *_Buf1;
  size_t sVar4;
  bool *pbVar5;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *pPVar6;
  size_t sVar7;
  CodeLocation *pCVar8;
  ParameterizedTestSuiteInfoBase **ppPVar9;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *local_58;
  CodeLocation local_50;
  
  ppPVar9 = (this->test_suite_infos_)._Mypair._Myval2._Myfirst;
  ppPVar2 = (this->test_suite_infos_)._Mypair._Myval2._Mylast;
  do {
    if (ppPVar9 == ppPVar2) {
LAB_14c468d20:
      pPVar6 = ::operator_new(0x80);
      if (pPVar6 == (ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *)0x0) {
        pPVar6 = (ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *)0x0;
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_50.file,&param_2->file);
        local_50.line = param_2->line;
        pPVar6->_padding_ = (longlong)&ParameterizedTestSuiteInfo<BlendShapesTest>::_vftable_;
        (pPVar6->test_suite_name_)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(pPVar6->test_suite_name_)._Mypair._Myval2._Bx + 8) = 0;
        (pPVar6->test_suite_name_)._Mypair._Myval2._Mysize = 0;
        (pPVar6->test_suite_name_)._Mypair._Myval2._Myres = 0;
        sVar7 = strlen(param_1);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>(&pPVar6->test_suite_name_,param_1,sVar7);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&(pPVar6->code_location_).file,&local_50.file);
        (pPVar6->code_location_).line = local_50.line;
        (pPVar6->tests_)._Mypair._Myval2._Myfirst =
             (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
              *)0x0;
        (pPVar6->tests_)._Mypair._Myval2._Mylast =
             (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
              *)0x0;
        (pPVar6->tests_)._Mypair._Myval2._Myend =
             (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
              *)0x0;
        (pPVar6->instantiations_)._Mypair._Myval2._Myfirst = (InstantiationInfo *)0x0;
        (pPVar6->instantiations_)._Mypair._Myval2._Mylast = (InstantiationInfo *)0x0;
        (pPVar6->instantiations_)._Mypair._Myval2._Myend = (InstantiationInfo *)0x0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_50.file);
      }
      ppPVar9 = (this->test_suite_infos_)._Mypair._Myval2._Mylast;
      local_58 = pPVar6;
      if (ppPVar9 == (this->test_suite_infos_)._Mypair._Myval2._Myend) {
        std::
        vector<testing::internal::ParameterizedTestSuiteInfoBase_*,std::allocator<testing::internal::ParameterizedTestSuiteInfoBase_*>_>
        ::_Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfoBase_*>
                  (&this->test_suite_infos_,ppPVar9,(ParameterizedTestSuiteInfoBase **)&local_58);
      }
      else {
        *ppPVar9 = (ParameterizedTestSuiteInfoBase *)pPVar6;
        pppPVar1 = &(this->test_suite_infos_)._Mypair._Myval2._Mylast;
        *pppPVar1 = *pppPVar1 + 1;
      }
LAB_14c468de0:
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&param_2->file);
      return pPVar6;
    }
    _Buf1 = (undefined8 *)(**(code **)((longlong)**ppPVar9 + 8))();
    sVar4 = strlen(param_1);
    sVar7 = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((sVar7 == sVar4) && ((sVar7 == 0 || (iVar3 = memcmp(_Buf1,param_1,sVar7), iVar3 == 0)))) {
      pbVar5 = (bool *)(**(code **)((longlong)**ppPVar9 + 0x10))();
      if (pbVar5 != &TypeIdHelper<BlendShapesTest>::dummy_) {
        pCVar8 = CodeLocation::CodeLocation(&local_50,param_2);
        ReportInvalidTestSuiteType(param_1,pCVar8);
                    /* WARNING: Subroutine does not return */
        posix::Abort();
      }
      pPVar6 = (ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *)*ppPVar9;
      if (pPVar6 != (ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *)0x0)
      goto LAB_14c468de0;
      goto LAB_14c468d20;
    }
    ppPVar9 = ppPVar9 + 1;
  } while( true );
}

// Values<unsigned_int,unsigned_int,unsigned_int,unsigned_int> @ 14c468e30

ValueArray<unsigned_int,unsigned_int,unsigned_int,unsigned_int> * __cdecl
testing::Values<unsigned_int,unsigned_int,unsigned_int,unsigned_int>
          (ValueArray<unsigned_int,unsigned_int,unsigned_int,unsigned_int> *__return_storage_ptr__,
          uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)&(__return_storage_ptr__->v_).field_0xc = param_4;
  *(uint *)&__return_storage_ptr__->v_ = param_1;
  *(uint *)&(__return_storage_ptr__->v_).field_0x4 = param_2;
  *(uint *)&(__return_storage_ptr__->v_).field_0x8 = param_3;
  return __return_storage_ptr__;
}

// _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_> @ 14c468e50

void __cdecl
std::
_Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
          (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
           *param_1,
          shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
          *param_2,allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
                   *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return;
}

// _Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo> @ 14c468ed0

InstantiationInfo * __thiscall
std::
vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_>
::
_Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>
          (vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
           *this,InstantiationInfo *param_1,InstantiationInfo *param_2)

{
  undefined8 *puVar1;
  InstantiationInfo *pIVar2;
  undefined8 uVar3;
  InstantiationInfo *pIVar4;
  ulonglong uVar5;
  InstantiationInfo *pIVar6;
  InstantiationInfo *pIVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  InstantiationInfo *pIVar11;
  InstantiationInfo *pIVar12;
  ulonglong uVar13;
  
  pIVar11 = (this->_Mypair)._Myval2._Myfirst;
  lVar9 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pIVar11 >> 6;
  if (lVar9 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar10 = lVar9 + 1;
  uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar11 >> 6;
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar13 = 0x3ffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar13 = uVar10;
    if (uVar10 <= uVar5) {
      uVar13 = uVar5;
    }
    if (0x3ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pIVar4 = _Allocate<16,std::_Default_allocate_traits>(uVar13 * 0x40);
  uVar5 = (longlong)param_1 - (longlong)pIVar11 & 0xffffffffffffffc0;
  puVar1 = (undefined8 *)((longlong)&(pIVar4->name)._Mypair._Myval2._Bx + uVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  pIVar2 = (InstantiationInfo *)((pIVar4->name)._Mypair._Myval2._Bx._Buf + uVar5);
  (pIVar2->name)._Mypair._Myval2._Mysize = 0;
  pIVar11 = pIVar2 + 1;
  (pIVar2->name)._Mypair._Myval2._Myres = 0;
  uVar3 = *(undefined8 *)((longlong)&(param_2->name)._Mypair._Myval2._Bx + 8);
  (pIVar2->name)._Mypair._Myval2._Bx._Ptr = (param_2->name)._Mypair._Myval2._Bx._Ptr;
  *(undefined8 *)((longlong)&(pIVar2->name)._Mypair._Myval2._Bx + 8) = uVar3;
  uVar8 = (param_2->name)._Mypair._Myval2._Myres;
  (pIVar2->name)._Mypair._Myval2._Mysize = (param_2->name)._Mypair._Myval2._Mysize;
  (pIVar2->name)._Mypair._Myval2._Myres = uVar8;
  (param_2->name)._Mypair._Myval2._Bx._Buf[0] = '\0';
  (param_2->name)._Mypair._Myval2._Mysize = 0;
  (param_2->name)._Mypair._Myval2._Myres = 0xf;
  pIVar2->generator = param_2->generator;
  pIVar2->name_func = param_2->name_func;
  pIVar2->file = param_2->file;
  pIVar2->line = param_2->line;
  pIVar7 = (this->_Mypair)._Myval2._Mylast;
  pIVar6 = (this->_Mypair)._Myval2._Myfirst;
  pIVar12 = pIVar4;
  if (param_1 != pIVar7) {
    _Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
              (pIVar6,param_1,pIVar4,
               (allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>
                *)this);
    pIVar7 = (this->_Mypair)._Myval2._Mylast;
    pIVar6 = param_1;
    pIVar12 = pIVar11;
  }
  _Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
            (pIVar6,pIVar7,pIVar12,
             (allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>
              *)this);
  pIVar11 = (this->_Mypair)._Myval2._Myfirst;
  if (pIVar11 != (InstantiationInfo *)0x0) {
    pIVar6 = (this->_Mypair)._Myval2._Mylast;
    for (; pIVar11 != pIVar6; pIVar11 = pIVar11 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&pIVar11->name);
    }
    pIVar11 = (this->_Mypair)._Myval2._Myfirst;
    uVar8 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar11 & 0xffffffffffffffc0;
    pIVar6 = pIVar11;
    if (0xfff < uVar8) {
      pIVar6 = *(InstantiationInfo **)&pIVar11[-1].line;
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pIVar11 + (-8 - (longlong)pIVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pIVar6,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = pIVar4;
  (this->_Mypair)._Myval2._Mylast = pIVar4 + uVar10;
  (this->_Mypair)._Myval2._Myend = pIVar4 + uVar13;
  return pIVar2;
}

// _Emplace_reallocate<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_> @ 14c4690c0

shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
* __thiscall
std::
vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_>
::
_Emplace_reallocate<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
          (vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
           *this,shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                 *param_1,
          shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
          *param_2)

{
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar1;
  ulonglong uVar2;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar3;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar8;
  ulonglong uVar9;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar10;
  
  psVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar6 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)psVar3 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar7 = lVar6 + 1;
  uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)psVar3 >> 4;
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar9 = 0xfffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar7;
    if (uVar7 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0xfffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  psVar1 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x10);
  psVar10 = (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
             *)(&psVar1->field_0x0 + ((longlong)param_1 - (longlong)psVar3 & 0xfffffffffffffff0));
  *(undefined8 *)psVar10 = 0;
  *(undefined8 *)&psVar10->field_0x8 = 0;
  *(undefined8 *)psVar10 = *(undefined8 *)param_2;
  *(undefined8 *)&psVar10->field_0x8 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)&param_2->field_0x8 = 0;
  psVar4 = (this->_Mypair)._Myval2._Mylast;
  psVar3 = (this->_Mypair)._Myval2._Myfirst;
  psVar8 = psVar1;
  if (param_1 != psVar4) {
    _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
              (psVar3,param_1,psVar1,
               (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
                *)this);
    psVar4 = (this->_Mypair)._Myval2._Mylast;
    psVar3 = param_1;
    psVar8 = psVar10 + 1;
  }
  _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
            (psVar3,psVar4,psVar8,
             (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
              *)this);
  psVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (psVar3 != (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                 *)0x0) {
    _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
              (psVar3,(this->_Mypair)._Myval2._Mylast,
               (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
                *)this);
    psVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)psVar3 & 0xfffffffffffffff0;
    psVar4 = psVar3;
    if (0xfff < uVar5) {
      psVar4 = *(shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                 **)&psVar3[-1].field_0x8;
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)psVar3 + (-8 - (longlong)psVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(psVar4,uVar5);
  }
  (this->_Mypair)._Myval2._Myfirst = psVar1;
  (this->_Mypair)._Myval2._Mylast = psVar1 + uVar7;
  (this->_Mypair)._Myval2._Myend = psVar1 + uVar9;
  return psVar10;
}

// _Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_> @ 14c469260

InstantiationInfo * __cdecl
std::
_Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
          (InstantiationInfo *param_1,InstantiationInfo *param_2,InstantiationInfo *param_3,
          allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>
          *param_4)

{
  ulong64 *puVar1;
  InstantiationInfo *pIVar2;
  ulong64 uVar3;
  InstantiationInfo *pIVar4;
  ulong64 *puVar5;
  
  pIVar4 = param_3;
  if (param_1 != param_2) {
    puVar5 = &(param_1->name)._Mypair._Myval2._Mysize;
    do {
      puVar1 = puVar5 + 8;
      (pIVar4->name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pIVar4->name)._Mypair._Myval2._Bx + 8) = 0;
      *(undefined8 *)((longlong)param_3 + (-0x40 - (longlong)param_1) + (longlong)puVar1) = 0;
      *(undefined8 *)((longlong)param_3 + (-0x38 - (longlong)param_1) + (longlong)puVar1) = 0;
      uVar3 = puVar5[-1];
      (pIVar4->name)._Mypair._Myval2._Bx._Ptr =
           (((_String_val<std::_Simple_types<char>_> *)(puVar5 + -2))->_Bx)._Ptr;
      *(ulong64 *)((longlong)&(pIVar4->name)._Mypair._Myval2._Bx + 8) = uVar3;
      uVar3 = puVar5[1];
      (pIVar4->name)._Mypair._Myval2._Mysize = *puVar5;
      (pIVar4->name)._Mypair._Myval2._Myres = uVar3;
      (((_String_val<std::_Simple_types<char>_> *)(puVar5 + -2))->_Bx)._Buf[0] = '\0';
      pIVar4 = pIVar4 + 1;
      *puVar5 = 0;
      puVar5[1] = 0xf;
      *(ulong64 *)((longlong)param_3 + (-0x30 - (longlong)param_1) + (longlong)puVar1) = puVar5[2];
      *(ulong64 *)((longlong)param_3 + (-0x28 - (longlong)param_1) + (longlong)puVar1) = puVar5[3];
      *(ulong64 *)((longlong)param_3 + (-0x20 - (longlong)param_1) + (longlong)puVar1) = puVar5[4];
      *(int *)((longlong)param_3 + (-0x18 - (longlong)param_1) + (longlong)puVar1) = (int)puVar5[5];
      pIVar2 = (InstantiationInfo *)(puVar5 + 6);
      puVar5 = puVar1;
    } while (pIVar2 != param_2);
  }
  return pIVar4;
}

// _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_> @ 14c4692f0

shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
* __cdecl std::
          _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
                    (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                     *param_1,
                    shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                    *param_2,shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                             *param_3,
                    allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
                    *param_4)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = (longlong)param_1 - (longlong)param_3;
    do {
      *(undefined8 *)param_3 = 0;
      *(undefined8 *)&param_3->field_0x8 = 0;
      *(undefined8 *)param_3 = *(undefined8 *)(lVar1 + (longlong)param_3);
      *(undefined8 *)&param_3->field_0x8 = *(undefined8 *)(lVar1 + 8 + (longlong)param_3);
      *(undefined8 *)(lVar1 + (longlong)param_3) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)param_3) = 0;
      param_3 = param_3 + 1;
    } while ((shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
              *)(lVar1 + (longlong)param_3) != param_2);
  }
  _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
            (param_3,param_3,param_4);
  return param_3;
}

// ~vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_> @ 14c469360

void __thiscall
std::
vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_>
::
~vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
          (vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::InstantiationInfo>_>
           *this)

{
  InstantiationInfo *pIVar1;
  ulong64 uVar2;
  InstantiationInfo *pIVar3;
  
  pIVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (pIVar3 != (InstantiationInfo *)0x0) {
    pIVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; pIVar3 != pIVar1; pIVar3 = pIVar3 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&pIVar3->name);
    }
    pIVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pIVar3 & 0xffffffffffffffc0;
    pIVar1 = pIVar3;
    if (0xfff < uVar2) {
      pIVar1 = *(InstantiationInfo **)&pIVar3[-1].line;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)pIVar3 + (-8 - (longlong)pIVar1))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pIVar1,uVar2);
    (this->_Mypair)._Myval2._Myfirst = (InstantiationInfo *)0x0;
    (this->_Mypair)._Myval2._Mylast = (InstantiationInfo *)0x0;
    (this->_Mypair)._Myval2._Myend = (InstantiationInfo *)0x0;
  }
  return;
}

// ~vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_> @ 14c469410

void __thiscall
std::
vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_>
::
~vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
          (vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
           *this)

{
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar1;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar2;
  ulong64 uVar3;
  
  psVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (psVar1 != (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                 *)0x0) {
    _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>_>
              (psVar1,(this->_Mypair)._Myval2._Mylast,
               (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
                *)this);
    psVar1 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)psVar1 & 0xfffffffffffffff0;
    psVar2 = psVar1;
    if (0xfff < uVar3) {
      psVar2 = *(shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                 **)&psVar1[-1].field_0x8;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)psVar1 + (-8 - (longlong)psVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(psVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
          *)0x0;
  }
  return;
}

// AddToRegistry @ 14c4694a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl BlendShapesTest_Calculate_Test::AddToRegistry(void)

{
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  **ppsVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
  *psVar5;
  undefined8 uVar6;
  longlong lVar7;
  UnitTest *this;
  ParameterizedTestSuiteRegistry *this_00;
  char *pcVar8;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest> *pPVar9;
  undefined8 *puVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined1 auStack_88 [48];
  _Bxty local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  this = testing::UnitTest::GetInstance();
  this_00 = testing::UnitTest::parameterized_test_registry(this);
  local_28 = (longlong *)0x0;
  pcVar8 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x82;
  *(undefined8 *)pcVar8 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar8 + 8) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
  *(undefined8 *)(pcVar8 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar8 + 0x18) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  local_58._8_8_ = 0;
  *(undefined8 *)(pcVar8 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar8 + 0x28) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar8 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar8 + 0x38) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar8 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar8 + 0x48) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar8 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar8 + 0x58) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar8 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar8 + 0x68) = uVar6;
  uVar6 = ::s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar8 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar8 + 0x78) = uVar6;
  *(undefined2 *)(pcVar8 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_2_;
  pcVar8[0x82] = '\0';
  local_30 = pcVar8;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000082;
  uStack_40 = _UNK_152881b98;
  uVar6 = *(undefined8 *)(pcVar8 + 8);
  local_38 = 0x1b;
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar8;
  *(undefined8 *)(local_58._Ptr + 8) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar8 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar8 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar8 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar8 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar8 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar8 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar6;
  uVar6 = *(undefined8 *)(pcVar8 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar8 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar6;
  *(undefined2 *)(local_58._Ptr + 0x80) = *(undefined2 *)(pcVar8 + 0x80);
  *(local_58._Ptr + 0x82) = pcVar8[0x82];
  pPVar9 = testing::internal::ParameterizedTestSuiteRegistry::
           GetTestSuitePatternHolder<_anonymous_namespace_::BlendShapesTest>
                     (this_00,"BlendShapesTest",(CodeLocation *)&local_58);
  puVar10 = ::operator_new(8);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = &___7__TestMetaFactory_VBlendShapesTest_Calculate_Test___internal_testing__6B_;
  }
  pcVar11 = ::operator_new(0x48);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11[0x10] = '\x0f';
    pcVar11[0x11] = '\0';
    pcVar11[0x12] = '\0';
    pcVar11[0x13] = '\0';
    pcVar11[0x14] = '\0';
    pcVar11[0x15] = '\0';
    pcVar11[0x16] = '\0';
    pcVar11[0x17] = '\0';
    pcVar11[0x18] = '\x0f';
    pcVar11[0x19] = '\0';
    pcVar11[0x1a] = '\0';
    pcVar11[0x1b] = '\0';
    pcVar11[0x1c] = '\0';
    pcVar11[0x1d] = '\0';
    pcVar11[0x1e] = '\0';
    pcVar11[0x1f] = '\0';
    *(undefined8 *)pcVar11 = s_BlendShapesTest._0_8_;
    *(undefined4 *)(pcVar11 + 8) = s_BlendShapesTest._8_4_;
    *(undefined2 *)(pcVar11 + 0xc) = s_BlendShapesTest._12_2_;
    pcVar11[0xe] = s_BlendShapesTest[0xe];
    pcVar11[0xf] = '\0';
    pcVar11[0x20] = '\0';
    pcVar11[0x21] = '\0';
    pcVar11[0x22] = '\0';
    pcVar11[0x23] = '\0';
    pcVar11[0x24] = '\0';
    pcVar11[0x25] = '\0';
    pcVar11[0x26] = '\0';
    pcVar11[0x27] = '\0';
    pcVar11[0x28] = '\0';
    pcVar11[0x29] = '\0';
    pcVar11[0x2a] = '\0';
    pcVar11[0x2b] = '\0';
    pcVar11[0x2c] = '\0';
    pcVar11[0x2d] = '\0';
    pcVar11[0x2e] = '\0';
    pcVar11[0x2f] = '\0';
    pcVar11[0x30] = '\t';
    pcVar11[0x31] = '\0';
    pcVar11[0x32] = '\0';
    pcVar11[0x33] = '\0';
    pcVar11[0x34] = '\0';
    pcVar11[0x35] = '\0';
    pcVar11[0x36] = '\0';
    pcVar11[0x37] = '\0';
    pcVar11[0x38] = '\x0f';
    pcVar11[0x39] = '\0';
    pcVar11[0x3a] = '\0';
    pcVar11[0x3b] = '\0';
    pcVar11[0x3c] = '\0';
    pcVar11[0x3d] = '\0';
    pcVar11[0x3e] = '\0';
    pcVar11[0x3f] = '\0';
    *(undefined8 *)(pcVar11 + 0x20) = s_Calculate._0_8_;
    pcVar11[0x28] = s_Calculate[8];
    pcVar11[0x29] = '\0';
    *(undefined8 **)(pcVar11 + 0x40) = puVar10;
  }
  local_28 = ::operator_new(0x18);
  if (local_28 != (longlong *)0x0) {
    *(undefined4 *)(local_28 + 1) = 1;
    *local_28 = (longlong)
                &std::
                 _Ref_count<testing::internal::ParameterizedTestSuiteInfo<BlendShapesTest>::TestInfo>
                 ::_vftable_;
    *(undefined4 *)((longlong)local_28 + 0xc) = 1;
    local_28[2] = (longlong)pcVar11;
  }
  psVar5 = (pPVar9->tests_)._Mypair._Myval2._Mylast;
  local_30 = pcVar11;
  if (psVar5 == (pPVar9->tests_)._Mypair._Myval2._Myend) {
    std::
    vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_>
    ::
    _Emplace_reallocate<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>_>
              (&pPVar9->tests_,psVar5,
               (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::BlendShapesTest>::TestInfo>
                *)&local_30);
    plVar12 = local_28;
  }
  else {
    *(char **)psVar5 = pcVar11;
    *(longlong **)&psVar5->field_0x8 = local_28;
    ppsVar1 = &(pPVar9->tests_)._Mypair._Myval2._Mylast;
    *ppsVar1 = *ppsVar1 + 1;
    plVar12 = (longlong *)0x0;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  ::operator_delete(pcVar8,0x90);
  return 0;
}

// _Xlength @ 14c4697a0

void __cdecl
std::
vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::InstantiationInfo>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14c4697c0

void __cdecl
std::
vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::BlendShapesTest>::TestInfo>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// gtest_BlendShapesTestBlendShapesTest_EvalGenerateName_ @ 14c4697e0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
gtest_BlendShapesTestBlendShapesTest_EvalGenerateName_
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          TestParamInfo<unsigned_short> *param_1)

{
  undefined8 *puVar1;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_res8;
  
  testing::internal::AlwaysTrue();
  testing::Message::Message((Message *)&local_res8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             ((longlong)local_res8._Mypair._Myval2 + 0x10),param_1->index);
  testing::Message::GetString((Message *)&local_res8,__return_storage_ptr__);
  if (local_res8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar1 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_res8._Mypair._Myval2 + 4) +
             (longlong)local_res8._Mypair._Myval2);
    (**(code **)*puVar1)(puVar1,1);
  }
  return __return_storage_ptr__;
}

// gtest_BlendShapesTestBlendShapesTest_EvalGenerator_ @ 14c469860

ParamGenerator<unsigned_short> * __cdecl
gtest_BlendShapesTestBlendShapesTest_EvalGenerator_
          (ParamGenerator<unsigned_short> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x0;
  puVar1 = std::_Allocate<16,std::_Default_allocate_traits>(8);
  *puVar1 = 0x3000200010000;
  puVar2 = operator_new(0x20);
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__ValuesInIteratorRangeGenerator_G_internal_testing__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    pvVar3 = std::_Allocate<16,std::_Default_allocate_traits>(8);
    puVar2[1] = pvVar3;
    puVar2[2] = pvVar3;
    puVar2[3] = (longlong)pvVar3 + 8;
    puVar5 = (undefined8 *)puVar2[1];
    *puVar5 = *puVar1;
    puVar2[2] = puVar5 + 1;
    puVar5 = puVar2;
  }
  *(undefined8 *)&__return_storage_ptr__->impl_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->impl_).field_0x8 = 0;
  puVar2 = operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &___7___Ref_count_V__ParamGeneratorInterface_G_internal_testing___std__6B_;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar4 = puVar2;
  }
  *(undefined8 **)&__return_storage_ptr__->impl_ = puVar5;
  *(undefined8 **)&(__return_storage_ptr__->impl_).field_0x8 = puVar4;
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return __return_storage_ptr__;
}

