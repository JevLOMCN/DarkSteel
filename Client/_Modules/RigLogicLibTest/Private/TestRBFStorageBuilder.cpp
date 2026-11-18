// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 27

// `dynamic_initializer_for_'gtest_RBFStorageBuilderTest_LayoutOptimization_registered_'' @ 141376f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_RBFStorageBuilderTest_LayoutOptimization_registered___(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
  local_78;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_70;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  testing::internal::
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x84;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar2 + 0x78) = uVar3;
  *(undefined4 *)(pcVar2 + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_4_;
  pcVar2[0x84] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000084;
  uStack_40 = _UNK_152881918;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_58._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar2 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar3;
  *(undefined4 *)(local_58._Ptr + 0x80) = *(undefined4 *)(pcVar2 + 0x80);
  *(local_58._Ptr + 0x84) = pcVar2[0x84];
  local_38 = 0x80;
  gtest_RBFStorageBuilderTest_LayoutOptimization_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::RBFStorageBuilderTest,testing::internal::TemplateSel<RBFStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_58,"RBFStorageBuilderTest","LayoutOptimization",0,
                  &local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_1413771bc;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0x90);
  pbVar1 = local_70._Mypair._Myval2._Mylast;
  pbVar5 = local_70._Mypair._Myval2._Myfirst;
  if (local_70._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_70._Mypair._Myval2._Myend - (longlong)local_70._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_70._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_70._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_1413771bc:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c59ef30

void * __thiscall
`anonymous_namespace'::
RBFStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::rbf::RBFReader::~RBFReader((RBFReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c59efa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::TestBody(RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           *this)

{
  undefined1 auStack_98 [32];
  Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  *local_78 [2];
  undefined1 local_68 [64];
  Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  rl4::rbf::cpu::
  Factory<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>::
  create((unique_ptr<rl4::RBFBehaviorEvaluator,std::function<void___cdecl(rl4::RBFBehaviorEvaluator_*)>_>
          *)local_68,(Reader *)&this->field_0x18,(MemoryResource *)&this->field_0x10);
  rl4::rbf::cpu::
  Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>::
  Accessor::assertRawDataEqual(local_28);
  if (local_28 !=
      (Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
       *)0x0) {
    local_78[0] = local_28;
    if ((longlong *)local_68._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_68._56_8_ + 0x10))(local_68._56_8_,local_78);
  }
  if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
              (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c59f040

void * __thiscall
RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::_scalar_deleting_destructor_
          (RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  rltests::rbf::RBFReader::~RBFReader((RBFReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c59f0b0

Test * __thiscall
testing::internal::
TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &RBFStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::rbf::RBFReader::RBFReader((RBFReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__RBFStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c59f120

void * __thiscall
testing::internal::
TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c59f160

void * __thiscall
`anonymous_namespace'::
RBFStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::rbf::RBFReader::~RBFReader((RBFReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c59f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::TestBody(RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
           *this)

{
  undefined1 auStack_98 [32];
  Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *local_78 [2];
  undefined1 local_68 [64];
  Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  rl4::rbf::cpu::Factory<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::create
            ((unique_ptr<rl4::RBFBehaviorEvaluator,std::function<void___cdecl(rl4::RBFBehaviorEvaluator_*)>_>
              *)local_68,(Reader *)&this->field_0x18,(MemoryResource *)&this->field_0x10);
  rl4::rbf::cpu::Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::Accessor
  ::assertRawDataEqual(local_28);
  if (local_28 != (Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *)0x0)
  {
    local_78[0] = local_28;
    if ((longlong *)local_68._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_68._56_8_ + 0x10))(local_68._56_8_,local_78);
  }
  if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
              (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c59f270

void * __thiscall
RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::_scalar_deleting_destructor_
          (RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
           *this,uint param_1)

{
  rltests::rbf::RBFReader::~RBFReader((RBFReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c59f2e0

Test * __thiscall
testing::internal::
TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::CreateTest(TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &RBFStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::rbf::RBFReader::RBFReader((RBFReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__RBFStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c59f350

void * __thiscall
testing::internal::
TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59f390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_3,vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                   *param_4)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar2;
  ushort *_Buf1;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar8;
  ushort **ppuVar9;
  ulonglong _Size;
  undefined1 auStackY_c8 [32];
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pvVar1 = (param_3->_Mypair)._Myval2._Mylast;
  pvVar8 = (param_3->_Mypair)._Myval2._Myfirst;
  pvVar2 = (param_4->_Mypair)._Myval2._Myfirst;
  if ((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pvVar2 ^
       (longlong)pvVar1 - (longlong)pvVar8) & 0xffffffffffffffe0U) == 0) {
    if (pvVar8 != pvVar1) {
      ppuVar9 = &(pvVar2->_Mypair)._Myval2._Mylast;
      do {
        _Buf1 = (pvVar8->_Mypair)._Myval2._Myfirst;
        _Size = (longlong)(pvVar8->_Mypair)._Myval2._Mylast - (longlong)_Buf1;
        if ((((longlong)*ppuVar9 -
              (longlong)
              ((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar9 + -1))->_Myfirst ^ _Size
             ) & 0xfffffffffffffffe) != 0) goto LAB_14c59f443;
        iVar4 = memcmp(_Buf1,((_Vector_val<std::_Simple_types<unsigned_short>_> *)(ppuVar9 + -1))->
                             _Myfirst,_Size);
        if (iVar4 != 0) goto LAB_14c59f443;
        pvVar8 = pvVar8 + 1;
        ppuVar9 = ppuVar9 + 4;
      } while (pvVar8 != pvVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c59f443:
    PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_4)
    ;
    PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,false);
    if (0xf < uStack_80) {
      pvVar3 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
      uVar7 = uStack_80 + 1;
      pvVar5 = pvVar3;
      if (0xfff < uVar7) {
        pvVar5 = *(void **)((longlong)pvVar3 + -8);
        uVar7 = uStack_80 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5))) goto LAB_14c59f4ff;
      }
      ::operator_delete(pvVar5,uVar7);
    }
    local_98._Buf[0] = '\0';
    local_88 = ___xmm_000000000000000f0000000000000000;
    uStack_80 = _UNK_15076add8;
    if (0xf < local_60) {
      uVar7 = local_60 + 1;
      uVar6 = local_78._Ptr;
      if (0xfff < uVar7) {
        uVar6 = *(undefined8 *)(local_78._Ptr + -8);
        uVar7 = local_60 + 0x28;
        if ((char *)0x1f < local_78._Ptr + (-8 - uVar6)) {
LAB_14c59f4ff:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_3,vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                   *param_4)

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
  PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c59f638;
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
LAB_14c59f638:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// Compare<enum_dna::RBFSolverType,enum_dna::RBFSolverType,0> @ 14c59f680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<enum_dna::RBFSolverType,enum_dna::RBFSolverType,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          RBFSolverType *param_3,RBFSolverType *param_4)

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
    pbVar2 = FormatForComparisonFailureMessage<enum_dna::RBFSolverType,enum_dna::RBFSolverType>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<enum_dna::RBFSolverType,enum_dna::RBFSolverType>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c59f792;
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
LAB_14c59f792:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59f7e0

void __cdecl
testing::internal::
DefaultPrintTo<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (WrapPrinterType<0> param_1,
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_2,basic_ostream<char,std::char_traits<char>_> *param_3)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  pvVar1 = (param_2->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pvVar1 != (param_2->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_3,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_3," ...");
          goto LAB_14c59f84c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
                (pvVar1,param_3);
      pvVar1 = pvVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pvVar1 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c59f84c:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// FormatForComparisonFailureMessage<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59f890

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_1,vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                   *param_2)

{
  PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59f8b0

void __cdecl
testing::internal::
PrintTo<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pvVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pvVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c59f91c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
                (pvVar1,param_2);
      pvVar1 = pvVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pvVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c59f91c:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59f960

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::
PrintToString<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_1)

{
  char *pcVar1;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar2;
  longlong lVar3;
  char *pcVar4;
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
  lVar3 = 0;
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
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,'{');
  pvVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pvVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar3 != 0) {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_118,',');
        if (lVar3 == 0x20) {
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_118," ...");
          goto LAB_14c59fa68;
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
      internal::
      UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
                (pvVar2,(basic_ostream<char,std::char_traits<char>_> *)local_118);
      pvVar2 = pvVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (pvVar2 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar3 != 0) {
LAB_14c59fa68:
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_118,'}');
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar4 = *local_d0, pcVar4 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar4 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar4 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar4 < local_a8) {
      pcVar4 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar4 = pcVar4 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar4);
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

// UniversalPrint<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c59fba0

void __cdecl
testing::internal::
UniversalPrint<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pvVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pvVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c59fc0c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
                (pvVar1,param_2);
      pvVar1 = pvVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pvVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c59fc0c:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// GetSetUpCaseOrSuite @ 14c59fc50

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c59fcf0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c59fd90

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c59fe30

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// Register @ 14c59fed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::RBFStorageBuilderTest,testing::internal::TemplateSel<RBFStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__RBFStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<RBFStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c5a0362;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c5a0362;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c5a0362;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c5a0362;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c5a0362;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c5a0362;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c5a0362:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c5a03b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::RBFStorageBuilderTest,testing::internal::TemplateSel<RBFStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__RBFStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<RBFStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<RBFStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c5a084f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c5a084f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5a084f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5a084f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c5a084f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5a084f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c5a084f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::RBFStorageBuilderTest,testing::internal::TemplateSel<RBFStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// assertRawDataEqual @ 14c5a08c0

void __cdecl
rl4::rbf::cpu::
Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>::
Accessor::assertRawDataEqual
          (Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
           *param_1)

{
  float fVar1;
  unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *puVar2;
  longlong *plVar3;
  double dVar4;
  RBFSolverType *pRVar5;
  RBFDistanceMethod *pRVar6;
  RBFFunctionType *pRVar7;
  RBFNormalizeMethod *pRVar8;
  TwistAxis *pTVar9;
  float *pfVar10;
  ushort uVar11;
  ArrayView<float_const_> *pAVar12;
  Message *pMVar13;
  AssertHelper *pAVar14;
  char *pcVar15;
  undefined8 *puVar16;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  AssertHelper local_res8;
  Message local_res10;
  float local_res18 [2];
  RBFDistanceMethod local_res20 [2];
  AssertionResult local_128;
  AssertionResult local_118;
  AssertionResult local_108;
  AssertionResult local_f8;
  RBFFunctionType local_e8;
  RBFNormalizeMethod local_e4;
  TwistAxis local_e0 [2];
  AssertionResult local_d8;
  AssertionResult local_c8;
  AssertionResult local_b8;
  AssertionResult local_a8;
  AssertionResult local_98;
  ArrayView<float_const_> local_88;
  ArrayView<float_const_> local_78 [3];
  
  testing::internal::
  CmpHelperEQ<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            (&local_128,"result.lods.indicesPerLOD","rltests::rbf::optimized::lods.indicesPerLOD",
             &(param_1->lods).indicesPerLOD,&rltests::rbf::optimized::lods.indicesPerLOD);
  uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  if (local_128.success_ == false) {
    pMVar13 = (Message *)testing::Message::Message(&local_res10);
    if (local_128.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_128.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
      }
    }
    pAVar14 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                         ,0x1a,pcVar15);
    testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
    testing::internal::AssertHelper::~AssertHelper(&local_res8);
    plVar3 = (longlong *)
             CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_);
    if (plVar3 != (longlong *)0x0) {
      puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
      (**(code **)*puVar16)(puVar16,1);
    }
    if (local_128.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_128.message_._Mypair._Myval2);
    ::operator_delete((void *)local_128.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_128.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_128.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
  }
  testing::internal::EqHelper::Compare<unsigned_short,unsigned_short,0>
            (&local_128,"result.lods.count","rltests::rbf::optimized::lods.count",
             &(param_1->lods).count,&rltests::rbf::optimized::lods.count);
  uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  if (local_128.success_ == false) {
    pMVar13 = (Message *)testing::Message::Message(&local_res10);
    if (local_128.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_128.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
      }
    }
    iVar18 = 0x1b;
  }
  else {
    if (local_128.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_128.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
    }
    local_res8.data_ =
         (AssertHelperData *)
         (((longlong)(param_1->solvers)._Mypair._Myval2._Mylast -
          (longlong)(param_1->solvers)._Mypair._Myval2._Myfirst) / 0x48);
    if (local_res8.data_ == (AssertHelperData *)(ulonglong)rltests::rbf::optimized::lods.count) {
      testing::AssertionSuccess(&local_118);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_short>
                (&local_118,"result.solvers.size()","rltests::rbf::optimized::lods.count",
                 (ulong64 *)&local_res8,&rltests::rbf::optimized::lods.count);
    }
    uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
    if (local_118.success_ == false) {
      pMVar13 = (Message *)testing::Message::Message(&local_res10);
      if (local_118.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_118.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
          pcVar15 = *(char **)local_118.message_._Mypair._Myval2;
        }
      }
      pAVar14 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_res8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                           ,0x1c,pcVar15);
      testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
      testing::internal::AssertHelper::~AssertHelper(&local_res8);
      plVar3 = (longlong *)
               CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_)
      ;
      uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
      if (plVar3 != (longlong *)0x0) {
        puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
        (**(code **)*puVar16)(puVar16,1);
        uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
      }
      goto LAB_14c5a176b;
    }
    if (local_118.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_118.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::Compare<unsigned_short,unsigned_short,0>
              (&local_128,"result.maximumInputCount","rltests::rbf::optimized::maximumInputCount",
               &param_1->maximumInputCount,&rltests::rbf::optimized::maximumInputCount);
    uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
    if (local_128.success_ == false) {
      pMVar13 = (Message *)testing::Message::Message(&local_res10);
      if (local_128.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_128.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
          pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
          iVar18 = 0x1d;
          goto LAB_14c5a171b;
        }
      }
      iVar18 = 0x1d;
    }
    else {
      if (local_128.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_128.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
      }
      testing::internal::EqHelper::Compare<unsigned_short,unsigned_short,0>
                (&local_128,"result.maxTargetCount","rltests::rbf::optimized::maxTargetCount",
                 &param_1->maxTargetCount,&rltests::rbf::optimized::maxTargetCount);
      uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
      if (local_128.success_ != false) {
        if (local_128.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_128.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
        }
        dVar4 = __real_3f50624de0000000;
        uVar20 = 0;
        local_res8.data_ = local_res8.data_ & 0xffffffffffff0000;
        uVar19 = uVar20;
        if ((longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Mylast -
            (longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Myfirst >> 2 != 0) {
          do {
            pRVar5 = rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Myfirst;
            puVar2 = (param_1->solvers)._Mypair._Myval2._Myfirst;
            local_res10.ss_._Mypair._Myval2._0_4_ =
                 (**(code **)((puVar2[uVar19]._Mypair._Myval2)->_padding_ + 8))();
            testing::internal::EqHelper::Compare<enum_dna::RBFSolverType,enum_dna::RBFSolverType,0>
                      (&local_128,"solver->getSolverType()",
                       "rltests::rbf::unoptimized::solverTypes[si]",(RBFSolverType *)&local_res10,
                       pRVar5 + uVar19);
            uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
            if (local_128.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_128.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_128.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
                  iVar18 = 0x22;
                  goto LAB_14c5a1479;
                }
              }
              iVar18 = 0x22;
              goto LAB_14c5a1479;
            }
            if (local_128.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_128.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            local_88.ptr = rltests::rbf::optimized::solverPoseScales._Mypair._Myval2._Myfirst
                           [uVar19]._Mypair._Myval2._Myfirst;
            local_88.sz = (longlong)
                          rltests::rbf::optimized::solverPoseScales._Mypair._Myval2._Myfirst[uVar19]
                          ._Mypair._Myval2._Mylast - (longlong)local_88.ptr >> 2;
            pAVar12 = RBFSolver::getTargetScales(puVar2[uVar19]._Mypair._Myval2,local_78);
            testing::internal::CmpHelperEQ<av::ArrayView<float_const_>,av::ArrayView<float_const_>_>
                      (&local_f8,"solver->getTargetScales()",
                       "ConstArrayView<float>(rltests::rbf::optimized::solverPoseScales[si])",
                       pAVar12,&local_88);
            uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
            if (local_f8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_f8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_f8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_f8.message_._Mypair._Myval2;
                  iVar18 = 0x23;
                  goto LAB_14c5a14fd;
                }
              }
              iVar18 = 0x23;
              goto LAB_14c5a14fd;
            }
            if (local_f8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_f8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            fVar1 = rltests::rbf::optimized::solverRadius._Mypair._Myval2._Myfirst[uVar19];
            fVar21 = RBFSolver::getRadius(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::DoubleNearPredFormat
                      (&local_108,"solver->getRadius()","rltests::rbf::optimized::solverRadius[si]",
                       "0.001f",(double)fVar21,(double)fVar1,dVar4);
            uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
            if (local_108.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_108.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_108.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_108.message_._Mypair._Myval2;
                  iVar18 = 0x24;
                  goto LAB_14c5a157e;
                }
              }
              iVar18 = 0x24;
              goto LAB_14c5a157e;
            }
            if (local_108.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_108.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pfVar10 = rltests::rbf::unoptimized::solverWeightThreshold._Mypair._Myval2._Myfirst;
            local_res18[0] = RBFSolver::getWeightThreshold(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::Compare<float,float,0>
                      (&local_98,"solver->getWeightThreshold()",
                       "rltests::rbf::unoptimized::solverWeightThreshold[si]",local_res18,
                       pfVar10 + uVar19);
            uVar17._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
            if (local_98.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_98.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_98.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_98.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x25,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
              }
              goto LAB_14c5a15ce;
            }
            if (local_98.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_98.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pRVar6 = rltests::rbf::unoptimized::solverDistanceMethods._Mypair._Myval2._Myfirst;
            local_res20[0] = RBFSolver::getDistanceMethod(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::
            Compare<enum_dna::RBFDistanceMethod,enum_dna::RBFDistanceMethod,0>
                      (&local_a8,"solver->getDistanceMethod()",
                       "rltests::rbf::unoptimized::solverDistanceMethods[si]",local_res20,
                       pRVar6 + uVar19);
            uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
            if (local_a8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_a8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_a8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_a8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_a8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x26,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a15ce;
            }
            if (local_a8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_a8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pRVar7 = rltests::rbf::unoptimized::solverFunctionType._Mypair._Myval2._Myfirst;
            local_e8 = RBFSolver::getWeightFunction(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::
            Compare<enum_dna::RBFFunctionType,enum_dna::RBFFunctionType,0>
                      (&local_b8,"solver->getWeightFunction()",
                       "rltests::rbf::unoptimized::solverFunctionType[si]",&local_e8,pRVar7 + uVar19
                      );
            uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
            if (local_b8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_b8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_b8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_b8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x27,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a15ce;
            }
            if (local_b8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_b8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pRVar8 = rltests::rbf::unoptimized::solverNormalizeMethods._Mypair._Myval2._Myfirst;
            local_e4 = RBFSolver::getNormalizeMethod(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::
            Compare<enum_dna::RBFNormalizeMethod,enum_dna::RBFNormalizeMethod,0>
                      (&local_c8,"solver->getNormalizeMethod()",
                       "rltests::rbf::unoptimized::solverNormalizeMethods[si]",&local_e4,
                       pRVar8 + uVar19);
            uVar17._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
            if (local_c8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_c8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_c8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_c8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x28,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a15ce;
            }
            if (local_c8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_c8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pTVar9 = rltests::rbf::unoptimized::solverTwistAxis._Mypair._Myval2._Myfirst;
            local_e0[0] = RBFSolver::getTwistAxis(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::Compare<enum_dna::TwistAxis,enum_dna::TwistAxis,0>
                      (&local_d8,"solver->getTwistAxis()",
                       "rltests::rbf::unoptimized::solverTwistAxis[si]",local_e0,pTVar9 + uVar19);
            uVar17._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
            if (local_d8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_d8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_d8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_d8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x29,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a15ce;
            }
            if (local_d8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_d8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            testing::internal::EqHelper::
            Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                      (&local_118,"result.solverPoseIndices[si]",
                       "rltests::rbf::unoptimized::solverPoseIndices[si]",
                       (param_1->solverPoseIndices)._Mypair._Myval2._Myfirst + uVar19,
                       rltests::rbf::unoptimized::solverPoseIndices._Mypair._Myval2._Myfirst +
                       uVar19);
            uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
            if (local_118.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_118.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_118.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_118.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x2b,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
              }
              goto LAB_14c5a15ce;
            }
            if (local_118.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_118.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            uVar11 = (ushort)local_res8.data_ + 1;
            local_res8.data_._0_2_ = uVar11;
            uVar19 = (ulonglong)uVar11;
          } while ((ulonglong)uVar11 <
                   (ulonglong)
                   ((longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Mylast -
                    (longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Myfirst >> 2))
          ;
        }
        if ((longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Mylast -
            (longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Myfirst >> 2 == 0) {
          return;
        }
        do {
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    (&local_108,"result.poseInputControlIndices[pi]",
                     "rltests::rbf::unoptimized::poseInputControlIndices[pi]",
                     (param_1->poseInputControlIndices)._Mypair._Myval2._Myfirst + uVar20,
                     rltests::rbf::unoptimized::poseInputControlIndices._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
          if (local_108.success_ == false) {
            pMVar13 = (Message *)testing::Message::Message(&local_res10);
            if (local_108.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar15 = "";
            }
            else {
              pcVar15 = (char *)local_108.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                pcVar15 = *(char **)local_108.message_._Mypair._Myval2;
              }
            }
            iVar18 = 0x2e;
LAB_14c5a157e:
            pAVar14 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_res8,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                 ,iVar18,pcVar15);
            testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
            testing::internal::AssertHelper::~AssertHelper(&local_res8);
            plVar3 = (longlong *)
                     CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                              local_res10.ss_._Mypair._Myval2._0_4_);
            uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
            if (plVar3 != (longlong *)0x0) {
              puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
              (**(code **)*puVar16)(puVar16,1);
              uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
            }
LAB_14c5a15ce:
            if (uVar17._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              return;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       uVar17._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            return;
          }
          if (local_108.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_108.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
          }
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    (&local_f8,"result.poseOutputControlIndices[pi]",
                     "rltests::rbf::unoptimized::poseOutputControlIndices[pi]",
                     (param_1->poseOutputControlIndices)._Mypair._Myval2._Myfirst + uVar20,
                     rltests::rbf::unoptimized::poseOutputControlIndices._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
          if (local_f8.success_ == false) {
            pMVar13 = (Message *)testing::Message::Message(&local_res10);
            if (local_f8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar15 = "";
            }
            else {
              pcVar15 = (char *)local_f8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                pcVar15 = *(char **)local_f8.message_._Mypair._Myval2;
              }
            }
            iVar18 = 0x2f;
LAB_14c5a14fd:
            pAVar14 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_res8,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                 ,iVar18,pcVar15);
            testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
            testing::internal::AssertHelper::~AssertHelper(&local_res8);
            plVar3 = (longlong *)
                     CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                              local_res10.ss_._Mypair._Myval2._0_4_);
            uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
            if (plVar3 != (longlong *)0x0) {
              puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
              (**(code **)*puVar16)(puVar16,1);
              uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
            }
            goto LAB_14c5a15ce;
          }
          if (local_f8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_f8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
          }
          testing::internal::EqHelper::
          Compare<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,0>
                    (&local_128,"result.poseOutputControlWeights[pi]",
                     "rltests::rbf::unoptimized::poseOutputControlWeights[pi]",
                     (param_1->poseOutputControlWeights)._Mypair._Myval2._Myfirst + uVar20,
                     rltests::rbf::unoptimized::poseOutputControlWeights._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
          if (local_128.success_ == false) {
            pMVar13 = (Message *)testing::Message::Message(&local_res10);
            if (local_128.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar15 = "";
            }
            else {
              pcVar15 = (char *)local_128.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
                pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
              }
            }
            iVar18 = 0x30;
LAB_14c5a1479:
            pAVar14 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_res8,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                 ,iVar18,pcVar15);
            testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
            testing::internal::AssertHelper::~AssertHelper(&local_res8);
            plVar3 = (longlong *)
                     CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                              local_res10.ss_._Mypair._Myval2._0_4_);
            uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
            if (plVar3 != (longlong *)0x0) {
              puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
              (**(code **)*puVar16)(puVar16,1);
              uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
            }
            goto LAB_14c5a15ce;
          }
          if (local_128.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_128.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
          }
          uVar20 = (ulonglong)(ushort)((short)uVar20 + 1);
          if ((ulonglong)
              ((longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Mylast -
               (longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Myfirst >> 2) <=
              uVar20) {
            return;
          }
        } while( true );
      }
      pMVar13 = (Message *)testing::Message::Message(&local_res10);
      if (local_128.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_128.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
          pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
          iVar18 = 0x1e;
          goto LAB_14c5a171b;
        }
      }
      iVar18 = 0x1e;
    }
  }
LAB_14c5a171b:
  pAVar14 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res8,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                       ,iVar18,pcVar15);
  testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
  testing::internal::AssertHelper::~AssertHelper(&local_res8);
  plVar3 = (longlong *)
           CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_);
  uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  if (plVar3 != (longlong *)0x0) {
    puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
    (**(code **)*puVar16)(puVar16,1);
    uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  }
LAB_14c5a176b:
  if (uVar17._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uVar17._Mypair._Myval2);
    ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
  }
  return;
}

// assertRawDataEqual @ 14c5a1840

void __cdecl
rl4::rbf::cpu::Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::Accessor::
assertRawDataEqual(Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
                   *param_1)

{
  float fVar1;
  unique_ptr<rl4::RBFSolver,std::function<void___cdecl(rl4::RBFSolver_*)>_> *puVar2;
  longlong *plVar3;
  double dVar4;
  RBFSolverType *pRVar5;
  RBFDistanceMethod *pRVar6;
  RBFFunctionType *pRVar7;
  RBFNormalizeMethod *pRVar8;
  TwistAxis *pTVar9;
  float *pfVar10;
  ushort uVar11;
  ArrayView<float_const_> *pAVar12;
  Message *pMVar13;
  AssertHelper *pAVar14;
  char *pcVar15;
  undefined8 *puVar16;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  AssertHelper local_res8;
  Message local_res10;
  float local_res18 [2];
  RBFDistanceMethod local_res20 [2];
  AssertionResult local_128;
  AssertionResult local_118;
  AssertionResult local_108;
  AssertionResult local_f8;
  RBFFunctionType local_e8;
  RBFNormalizeMethod local_e4;
  TwistAxis local_e0 [2];
  AssertionResult local_d8;
  AssertionResult local_c8;
  AssertionResult local_b8;
  AssertionResult local_a8;
  AssertionResult local_98;
  ArrayView<float_const_> local_88;
  ArrayView<float_const_> local_78 [3];
  
  testing::internal::
  CmpHelperEQ<std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            (&local_128,"result.lods.indicesPerLOD","rltests::rbf::optimized::lods.indicesPerLOD",
             &(param_1->lods).indicesPerLOD,&rltests::rbf::optimized::lods.indicesPerLOD);
  uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  if (local_128.success_ == false) {
    pMVar13 = (Message *)testing::Message::Message(&local_res10);
    if (local_128.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_128.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
      }
    }
    pAVar14 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_res8,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                         ,0x1a,pcVar15);
    testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
    testing::internal::AssertHelper::~AssertHelper(&local_res8);
    plVar3 = (longlong *)
             CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_);
    if (plVar3 != (longlong *)0x0) {
      puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
      (**(code **)*puVar16)(puVar16,1);
    }
    if (local_128.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      return;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_128.message_._Mypair._Myval2);
    ::operator_delete((void *)local_128.message_._Mypair._Myval2,0x20);
    return;
  }
  if (local_128.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_128.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
  }
  testing::internal::EqHelper::Compare<unsigned_short,unsigned_short,0>
            (&local_128,"result.lods.count","rltests::rbf::optimized::lods.count",
             &(param_1->lods).count,&rltests::rbf::optimized::lods.count);
  uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  if (local_128.success_ == false) {
    pMVar13 = (Message *)testing::Message::Message(&local_res10);
    if (local_128.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_128.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
        pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
      }
    }
    iVar18 = 0x1b;
  }
  else {
    if (local_128.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_128.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
    }
    local_res8.data_ =
         (AssertHelperData *)
         (((longlong)(param_1->solvers)._Mypair._Myval2._Mylast -
          (longlong)(param_1->solvers)._Mypair._Myval2._Myfirst) / 0x48);
    if (local_res8.data_ == (AssertHelperData *)(ulonglong)rltests::rbf::optimized::lods.count) {
      testing::AssertionSuccess(&local_118);
    }
    else {
      testing::internal::CmpHelperEQFailure<unsigned___int64,unsigned_short>
                (&local_118,"result.solvers.size()","rltests::rbf::optimized::lods.count",
                 (ulong64 *)&local_res8,&rltests::rbf::optimized::lods.count);
    }
    uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
    if (local_118.success_ == false) {
      pMVar13 = (Message *)testing::Message::Message(&local_res10);
      if (local_118.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_118.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
          pcVar15 = *(char **)local_118.message_._Mypair._Myval2;
        }
      }
      pAVar14 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          (&local_res8,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                           ,0x1c,pcVar15);
      testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
      testing::internal::AssertHelper::~AssertHelper(&local_res8);
      plVar3 = (longlong *)
               CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_)
      ;
      uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
      if (plVar3 != (longlong *)0x0) {
        puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
        (**(code **)*puVar16)(puVar16,1);
        uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
      }
      goto LAB_14c5a26eb;
    }
    if (local_118.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_118.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::Compare<unsigned_short,unsigned_short,0>
              (&local_128,"result.maximumInputCount","rltests::rbf::optimized::maximumInputCount",
               &param_1->maximumInputCount,&rltests::rbf::optimized::maximumInputCount);
    uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
    if (local_128.success_ == false) {
      pMVar13 = (Message *)testing::Message::Message(&local_res10);
      if (local_128.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_128.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
          pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
          iVar18 = 0x1d;
          goto LAB_14c5a269b;
        }
      }
      iVar18 = 0x1d;
    }
    else {
      if (local_128.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_128.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
      }
      testing::internal::EqHelper::Compare<unsigned_short,unsigned_short,0>
                (&local_128,"result.maxTargetCount","rltests::rbf::optimized::maxTargetCount",
                 &param_1->maxTargetCount,&rltests::rbf::optimized::maxTargetCount);
      uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
      if (local_128.success_ != false) {
        if (local_128.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_128.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
        }
        dVar4 = __real_3f50624de0000000;
        uVar20 = 0;
        local_res8.data_ = local_res8.data_ & 0xffffffffffff0000;
        uVar19 = uVar20;
        if ((longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Mylast -
            (longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Myfirst >> 2 != 0) {
          do {
            pRVar5 = rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Myfirst;
            puVar2 = (param_1->solvers)._Mypair._Myval2._Myfirst;
            local_res10.ss_._Mypair._Myval2._0_4_ =
                 (**(code **)((puVar2[uVar19]._Mypair._Myval2)->_padding_ + 8))();
            testing::internal::EqHelper::Compare<enum_dna::RBFSolverType,enum_dna::RBFSolverType,0>
                      (&local_128,"solver->getSolverType()",
                       "rltests::rbf::unoptimized::solverTypes[si]",(RBFSolverType *)&local_res10,
                       pRVar5 + uVar19);
            uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
            if (local_128.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_128.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_128.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
                  iVar18 = 0x22;
                  goto LAB_14c5a23f9;
                }
              }
              iVar18 = 0x22;
              goto LAB_14c5a23f9;
            }
            if (local_128.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_128.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            local_88.ptr = rltests::rbf::optimized::solverPoseScales._Mypair._Myval2._Myfirst
                           [uVar19]._Mypair._Myval2._Myfirst;
            local_88.sz = (longlong)
                          rltests::rbf::optimized::solverPoseScales._Mypair._Myval2._Myfirst[uVar19]
                          ._Mypair._Myval2._Mylast - (longlong)local_88.ptr >> 2;
            pAVar12 = RBFSolver::getTargetScales(puVar2[uVar19]._Mypair._Myval2,local_78);
            testing::internal::CmpHelperEQ<av::ArrayView<float_const_>,av::ArrayView<float_const_>_>
                      (&local_f8,"solver->getTargetScales()",
                       "ConstArrayView<float>(rltests::rbf::optimized::solverPoseScales[si])",
                       pAVar12,&local_88);
            uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
            if (local_f8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_f8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_f8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_f8.message_._Mypair._Myval2;
                  iVar18 = 0x23;
                  goto LAB_14c5a247d;
                }
              }
              iVar18 = 0x23;
              goto LAB_14c5a247d;
            }
            if (local_f8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_f8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            fVar1 = rltests::rbf::optimized::solverRadius._Mypair._Myval2._Myfirst[uVar19];
            fVar21 = RBFSolver::getRadius(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::DoubleNearPredFormat
                      (&local_108,"solver->getRadius()","rltests::rbf::optimized::solverRadius[si]",
                       "0.001f",(double)fVar21,(double)fVar1,dVar4);
            uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
            if (local_108.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_108.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_108.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_108.message_._Mypair._Myval2;
                  iVar18 = 0x24;
                  goto LAB_14c5a24fe;
                }
              }
              iVar18 = 0x24;
              goto LAB_14c5a24fe;
            }
            if (local_108.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_108.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pfVar10 = rltests::rbf::unoptimized::solverWeightThreshold._Mypair._Myval2._Myfirst;
            local_res18[0] = RBFSolver::getWeightThreshold(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::Compare<float,float,0>
                      (&local_98,"solver->getWeightThreshold()",
                       "rltests::rbf::unoptimized::solverWeightThreshold[si]",local_res18,
                       pfVar10 + uVar19);
            uVar17._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
            if (local_98.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_98.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_98.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_98.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_98.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x25,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_98.message_._Mypair._Myval2;
              }
              goto LAB_14c5a254e;
            }
            if (local_98.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_98.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pRVar6 = rltests::rbf::unoptimized::solverDistanceMethods._Mypair._Myval2._Myfirst;
            local_res20[0] = RBFSolver::getDistanceMethod(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::
            Compare<enum_dna::RBFDistanceMethod,enum_dna::RBFDistanceMethod,0>
                      (&local_a8,"solver->getDistanceMethod()",
                       "rltests::rbf::unoptimized::solverDistanceMethods[si]",local_res20,
                       pRVar6 + uVar19);
            uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
            if (local_a8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_a8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_a8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_a8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_a8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x26,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_a8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a254e;
            }
            if (local_a8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_a8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pRVar7 = rltests::rbf::unoptimized::solverFunctionType._Mypair._Myval2._Myfirst;
            local_e8 = RBFSolver::getWeightFunction(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::
            Compare<enum_dna::RBFFunctionType,enum_dna::RBFFunctionType,0>
                      (&local_b8,"solver->getWeightFunction()",
                       "rltests::rbf::unoptimized::solverFunctionType[si]",&local_e8,pRVar7 + uVar19
                      );
            uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
            if (local_b8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_b8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_b8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_b8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x27,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a254e;
            }
            if (local_b8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_b8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pRVar8 = rltests::rbf::unoptimized::solverNormalizeMethods._Mypair._Myval2._Myfirst;
            local_e4 = RBFSolver::getNormalizeMethod(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::
            Compare<enum_dna::RBFNormalizeMethod,enum_dna::RBFNormalizeMethod,0>
                      (&local_c8,"solver->getNormalizeMethod()",
                       "rltests::rbf::unoptimized::solverNormalizeMethods[si]",&local_e4,
                       pRVar8 + uVar19);
            uVar17._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
            if (local_c8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_c8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_c8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_c8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x28,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a254e;
            }
            if (local_c8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_c8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            pTVar9 = rltests::rbf::unoptimized::solverTwistAxis._Mypair._Myval2._Myfirst;
            local_e0[0] = RBFSolver::getTwistAxis(puVar2[uVar19]._Mypair._Myval2);
            testing::internal::EqHelper::Compare<enum_dna::TwistAxis,enum_dna::TwistAxis,0>
                      (&local_d8,"solver->getTwistAxis()",
                       "rltests::rbf::unoptimized::solverTwistAxis[si]",local_e0,pTVar9 + uVar19);
            uVar17._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
            if (local_d8.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_d8.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_d8.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_d8.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x29,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              }
              goto LAB_14c5a254e;
            }
            if (local_d8.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_d8.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            testing::internal::EqHelper::
            Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                      (&local_118,"result.solverPoseIndices[si]",
                       "rltests::rbf::unoptimized::solverPoseIndices[si]",
                       (param_1->solverPoseIndices)._Mypair._Myval2._Myfirst + uVar19,
                       rltests::rbf::unoptimized::solverPoseIndices._Mypair._Myval2._Myfirst +
                       uVar19);
            uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
            if (local_118.success_ == false) {
              pMVar13 = (Message *)testing::Message::Message(&local_res10);
              if (local_118.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar15 = "";
              }
              else {
                pcVar15 = (char *)local_118.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
                  pcVar15 = *(char **)local_118.message_._Mypair._Myval2;
                }
              }
              pAVar14 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_res8,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                   ,0x2b,pcVar15);
              testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
              testing::internal::AssertHelper::~AssertHelper(&local_res8);
              plVar3 = (longlong *)
                       CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                                local_res10.ss_._Mypair._Myval2._0_4_);
              uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
              if (plVar3 != (longlong *)0x0) {
                puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
                (**(code **)*puVar16)(puVar16,1);
                uVar17._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
              }
              goto LAB_14c5a254e;
            }
            if (local_118.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_118.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            }
            uVar11 = (ushort)local_res8.data_ + 1;
            local_res8.data_._0_2_ = uVar11;
            uVar19 = (ulonglong)uVar11;
          } while ((ulonglong)uVar11 <
                   (ulonglong)
                   ((longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Mylast -
                    (longlong)rltests::rbf::unoptimized::solverTypes._Mypair._Myval2._Myfirst >> 2))
          ;
        }
        if ((longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Mylast -
            (longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Myfirst >> 2 == 0) {
          return;
        }
        do {
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    (&local_108,"result.poseInputControlIndices[pi]",
                     "rltests::rbf::unoptimized::poseInputControlIndices[pi]",
                     (param_1->poseInputControlIndices)._Mypair._Myval2._Myfirst + uVar20,
                     rltests::rbf::unoptimized::poseInputControlIndices._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
          if (local_108.success_ == false) {
            pMVar13 = (Message *)testing::Message::Message(&local_res10);
            if (local_108.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar15 = "";
            }
            else {
              pcVar15 = (char *)local_108.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                pcVar15 = *(char **)local_108.message_._Mypair._Myval2;
              }
            }
            iVar18 = 0x2e;
LAB_14c5a24fe:
            pAVar14 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_res8,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                 ,iVar18,pcVar15);
            testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
            testing::internal::AssertHelper::~AssertHelper(&local_res8);
            plVar3 = (longlong *)
                     CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                              local_res10.ss_._Mypair._Myval2._0_4_);
            uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
            if (plVar3 != (longlong *)0x0) {
              puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
              (**(code **)*puVar16)(puVar16,1);
              uVar17._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
            }
LAB_14c5a254e:
            if (uVar17._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              return;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       uVar17._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
            return;
          }
          if (local_108.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_108.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
          }
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    (&local_f8,"result.poseOutputControlIndices[pi]",
                     "rltests::rbf::unoptimized::poseOutputControlIndices[pi]",
                     (param_1->poseOutputControlIndices)._Mypair._Myval2._Myfirst + uVar20,
                     rltests::rbf::unoptimized::poseOutputControlIndices._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
          if (local_f8.success_ == false) {
            pMVar13 = (Message *)testing::Message::Message(&local_res10);
            if (local_f8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar15 = "";
            }
            else {
              pcVar15 = (char *)local_f8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                pcVar15 = *(char **)local_f8.message_._Mypair._Myval2;
              }
            }
            iVar18 = 0x2f;
LAB_14c5a247d:
            pAVar14 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_res8,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                 ,iVar18,pcVar15);
            testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
            testing::internal::AssertHelper::~AssertHelper(&local_res8);
            plVar3 = (longlong *)
                     CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                              local_res10.ss_._Mypair._Myval2._0_4_);
            uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
            if (plVar3 != (longlong *)0x0) {
              puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
              (**(code **)*puVar16)(puVar16,1);
              uVar17._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
            }
            goto LAB_14c5a254e;
          }
          if (local_f8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_f8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
          }
          testing::internal::EqHelper::
          Compare<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,0>
                    (&local_128,"result.poseOutputControlWeights[pi]",
                     "rltests::rbf::unoptimized::poseOutputControlWeights[pi]",
                     (param_1->poseOutputControlWeights)._Mypair._Myval2._Myfirst + uVar20,
                     rltests::rbf::unoptimized::poseOutputControlWeights._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
          if (local_128.success_ == false) {
            pMVar13 = (Message *)testing::Message::Message(&local_res10);
            if (local_128.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar15 = "";
            }
            else {
              pcVar15 = (char *)local_128.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
                pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
              }
            }
            iVar18 = 0x30;
LAB_14c5a23f9:
            pAVar14 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_res8,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                                 ,iVar18,pcVar15);
            testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
            testing::internal::AssertHelper::~AssertHelper(&local_res8);
            plVar3 = (longlong *)
                     CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,
                              local_res10.ss_._Mypair._Myval2._0_4_);
            uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
            if (plVar3 != (longlong *)0x0) {
              puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
              (**(code **)*puVar16)(puVar16,1);
              uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
            }
            goto LAB_14c5a254e;
          }
          if (local_128.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_128.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
          }
          uVar20 = (ulonglong)(ushort)((short)uVar20 + 1);
          if ((ulonglong)
              ((longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Mylast -
               (longlong)rltests::rbf::unoptimized::poseScales._Mypair._Myval2._Myfirst >> 2) <=
              uVar20) {
            return;
          }
        } while( true );
      }
      pMVar13 = (Message *)testing::Message::Message(&local_res10);
      if (local_128.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_128.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_128.message_._Mypair._Myval2 + 0x18)) {
          pcVar15 = *(char **)local_128.message_._Mypair._Myval2;
          iVar18 = 0x1e;
          goto LAB_14c5a269b;
        }
      }
      iVar18 = 0x1e;
    }
  }
LAB_14c5a269b:
  pAVar14 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      (&local_res8,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\rbf\\cpu\\TestRBFStorageBuilder.cpp"
                       ,iVar18,pcVar15);
  testing::internal::AssertHelper::operator=(pAVar14,pMVar13);
  testing::internal::AssertHelper::~AssertHelper(&local_res8);
  plVar3 = (longlong *)
           CONCAT44(local_res10.ss_._Mypair._Myval2._4_4_,local_res10.ss_._Mypair._Myval2._0_4_);
  uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  if (plVar3 != (longlong *)0x0) {
    puVar16 = (undefined8 *)((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
    (**(code **)*puVar16)(puVar16,1);
    uVar17._Mypair._Myval2 = local_128.message_._Mypair._Myval2;
  }
LAB_14c5a26eb:
  if (uVar17._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               uVar17._Mypair._Myval2);
    ::operator_delete((void *)uVar17._Mypair._Myval2,0x20);
  }
  return;
}

