// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 35

// `dynamic_initializer_for_'gtest_MLBSStorageBuilderTest_LayoutOptimization_registered_'' @ 141371b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_MLBSStorageBuilderTest_LayoutOptimization_registered___(void)

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
  local_20 = 0x80;
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
  pcVar2[0x80] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000080;
  uStack_40 = _UNK_152880858;
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
  *(local_58._Ptr + 0x80) = pcVar2[0x80];
  local_38 = 0x81;
  gtest_MLBSStorageBuilderTest_LayoutOptimization_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::MLBSStorageBuilderTest,testing::internal::TemplateSel<MLBSStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
       ::Register("",(CodeLocation *)&local_58,"MLBSStorageBuilderTest","LayoutOptimization",0,
                  &local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_141371d70;
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
LAB_141371d70:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5964b0

void * __thiscall
`anonymous_namespace'::
MLBSStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::ml::block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70))
  ;
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c596520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::TestBody(MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
           *this)

{
  MachineLearnedBehaviorReader *pMVar1;
  undefined1 auStack_98 [32];
  Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *local_78 [2];
  undefined1 local_68 [64];
  Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pMVar1 = (MachineLearnedBehaviorReader *)&this->field_0x38;
  if (this == (MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
               *)0xffffffffffffffe8) {
    pMVar1 = (MachineLearnedBehaviorReader *)0x0;
  }
  rl4::ml::cpu::Factory<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::create
            ((unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
              *)local_68,pMVar1,(MemoryResource *)&this->field_0x10);
  rl4::ml::cpu::Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::Accessor
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

// `scalar_deleting_destructor' @ 14c5965d0

void * __thiscall
MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
::_scalar_deleting_destructor_
          (MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
           *this,uint param_1)

{
  rltests::ml::block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c596640

Test * __thiscall
testing::internal::
TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::CreateTest(TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &MLBSStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::ml::block4::CanonicalReader::CanonicalReader
              ((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__MLBSStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5966b0

void * __thiscall
testing::internal::
TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c5966f0

void * __thiscall
`anonymous_namespace'::
MLBSStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::ml::block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70))
  ;
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c596760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::TestBody(MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           *this)

{
  MachineLearnedBehaviorReader *pMVar1;
  undefined1 auStack_98 [32];
  Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  *local_78 [2];
  undefined1 local_68 [64];
  Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pMVar1 = (MachineLearnedBehaviorReader *)&this->field_0x38;
  if (this == (MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
               *)0xffffffffffffffe8) {
    pMVar1 = (MachineLearnedBehaviorReader *)0x0;
  }
  rl4::ml::cpu::
  Factory<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>::
  create((unique_ptr<rl4::MachineLearnedBehaviorEvaluator,std::function<void___cdecl(rl4::MachineLearnedBehaviorEvaluator_*)>_>
          *)local_68,pMVar1,(MemoryResource *)&this->field_0x10);
  rl4::ml::cpu::
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

// `scalar_deleting_destructor' @ 14c596810

void * __thiscall
MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
::_scalar_deleting_destructor_
          (MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
           *this,uint param_1)

{
  rltests::ml::block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c596880

Test * __thiscall
testing::internal::
TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::CreateTest(TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &MLBSStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::ml::block4::CanonicalReader::CanonicalReader
              ((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__MLBSStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5968f0

void * __thiscall
testing::internal::
TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_> @ 14c596930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_3,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_4)

{
  float *pfVar1;
  float *pfVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pfVar6 = (param_3->_Mypair)._Myval2._Myfirst;
  pfVar1 = (param_3->_Mypair)._Myval2._Mylast;
  pfVar2 = (param_4->_Mypair)._Myval2._Myfirst;
  if ((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pfVar2 ^
       (longlong)pfVar1 - (longlong)pfVar6) & 0xfffffffffffffffcU) == 0) {
    if (pfVar6 != pfVar1) {
      lVar8 = (longlong)pfVar2 - (longlong)pfVar6;
      do {
        if (*(float *)(lVar8 + (longlong)pfVar6) != *pfVar6) goto LAB_14c5969b1;
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != pfVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c5969b1:
    PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar3 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar7 = uStack_60 + 1;
      pvVar4 = pvVar3;
      if (0xfff < uVar7) {
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        uVar7 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) goto LAB_14c596a6d;
      }
      ::operator_delete(pvVar4,uVar7);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar7 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar7) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar7 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c596a6d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c596ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_3,vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                   *param_4)

{
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar1;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar2;
  uint *_Buf1;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar8;
  uint **ppuVar9;
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
              (longlong)((_Vector_val<std::_Simple_types<unsigned_int>_> *)(ppuVar9 + -1))->_Myfirst
             ^ _Size) & 0xfffffffffffffffc) != 0) goto LAB_14c596b63;
        iVar4 = memcmp(_Buf1,((_Vector_val<std::_Simple_types<unsigned_int>_> *)(ppuVar9 + -1))->
                             _Myfirst,_Size);
        if (iVar4 != 0) goto LAB_14c596b63;
        pvVar8 = pvVar8 + 1;
        ppuVar9 = ppuVar9 + 4;
      } while (pvVar8 != pvVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c596b63:
    PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_4)
    ;
    PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
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
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5))) goto LAB_14c596c1f;
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
LAB_14c596c1f:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_> @ 14c596c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_3,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_4)

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
  PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c596d58;
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
LAB_14c596d58:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c596da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_3,vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
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
  PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c596e88;
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
LAB_14c596e88:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// Compare<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,0> @ 14c596ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_3,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_4)

{
  float *pfVar1;
  float *pfVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pfVar6 = (param_3->_Mypair)._Myval2._Myfirst;
  pfVar1 = (param_3->_Mypair)._Myval2._Mylast;
  pfVar2 = (param_4->_Mypair)._Myval2._Myfirst;
  if ((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pfVar2 ^
       (longlong)pfVar1 - (longlong)pfVar6) & 0xfffffffffffffffcU) == 0) {
    if (pfVar6 != pfVar1) {
      lVar8 = (longlong)pfVar2 - (longlong)pfVar6;
      do {
        if (*(float *)(lVar8 + (longlong)pfVar6) != *pfVar6) goto LAB_14c596f51;
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != pfVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c596f51:
    PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar3 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar7 = uStack_60 + 1;
      pvVar4 = pvVar3;
      if (0xfff < uVar7) {
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        uVar7 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) goto LAB_14c59700d;
      }
      ::operator_delete(pvVar4,uVar7);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar7 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar7) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar7 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c59700d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// Compare<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,0> @ 14c597050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_3,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_4)

{
  float *pfVar1;
  float *pfVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  float *pfVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pfVar6 = (param_3->_Mypair)._Myval2._Myfirst;
  pfVar1 = (param_3->_Mypair)._Myval2._Mylast;
  pfVar2 = (param_4->_Mypair)._Myval2._Myfirst;
  if ((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pfVar2 ^
       (longlong)pfVar1 - (longlong)pfVar6) & 0xfffffffffffffffcU) == 0) {
    if (pfVar6 != pfVar1) {
      lVar8 = (longlong)pfVar2 - (longlong)pfVar6;
      do {
        if (*(float *)(lVar8 + (longlong)pfVar6) != *pfVar6) goto LAB_14c5970d1;
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != pfVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c5970d1:
    PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
    EqFailure(__return_storage_ptr__,param_1,param_2,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
    if (0xf < uStack_60) {
      pvVar3 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
      uVar7 = uStack_60 + 1;
      pvVar4 = pvVar3;
      if (0xfff < uVar7) {
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        uVar7 = uStack_60 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) goto LAB_14c59718d;
      }
      ::operator_delete(pvVar4,uVar7);
    }
    local_78._Buf[0] = '\0';
    local_68 = ___xmm_000000000000000f0000000000000000;
    uStack_60 = _UNK_15076add8;
    if (0xf < local_40) {
      uVar7 = local_40 + 1;
      uVar5 = local_58._Ptr;
      if (0xfff < uVar7) {
        uVar5 = *(undefined8 *)(local_58._Ptr + -8);
        uVar7 = local_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar5)) {
LAB_14c59718d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// Compare<enum_dna::ActivationFunction,enum_dna::ActivationFunction,0> @ 14c5971d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<enum_dna::ActivationFunction,enum_dna::ActivationFunction,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          ActivationFunction *param_3,ActivationFunction *param_4)

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
    pbVar2 = FormatForComparisonFailureMessage<enum_dna::ActivationFunction,enum_dna::ActivationFunction>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<enum_dna::ActivationFunction,enum_dna::ActivationFunction>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5972e2;
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
LAB_14c5972e2:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>_> @ 14c597330

void __cdecl
testing::internal::
DefaultPrintTo<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>_>
          (WrapPrinterType<0> param_1,
          vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>
          *param_2,basic_ostream<char,std::char_traits<char>_> *param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  puVar1 = (param_2->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (puVar1 != (param_2->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_3,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_3," ...");
          goto LAB_14c59739c;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c59739c:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// DefaultPrintTo<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c5973e0

void __cdecl
testing::internal::
DefaultPrintTo<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (WrapPrinterType<0> param_1,
          vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_2,basic_ostream<char,std::char_traits<char>_> *param_3)

{
  uint *puVar1;
  longlong lVar2;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar3;
  longlong lVar4;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  pvVar3 = (param_2->_Mypair)._Myval2._Myfirst;
  lVar4 = 0;
  if (pvVar3 != (param_2->_Mypair)._Myval2._Mylast) {
    do {
      if ((lVar4 != 0) && (std::operator<<<std::char_traits<char>_>(param_3,','), lVar4 == 0x20)) {
        std::operator<<<std::char_traits<char>_>(param_3," ...");
        goto LAB_14c5974c6;
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      std::operator<<<std::char_traits<char>_>(param_3,'{');
      puVar1 = (pvVar3->_Mypair)._Myval2._Myfirst;
      lVar2 = 0;
      if (puVar1 != (pvVar3->_Mypair)._Myval2._Mylast) {
        do {
          if ((lVar2 != 0) && (std::operator<<<std::char_traits<char>_>(param_3,','), lVar2 == 0x20)
             ) {
            std::operator<<<std::char_traits<char>_>(param_3," ...");
            goto LAB_14c59749c;
          }
          std::operator<<<std::char_traits<char>_>(param_3,' ');
          std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*puVar1);
          puVar1 = puVar1 + 1;
          lVar2 = lVar2 + 1;
        } while (puVar1 != (pvVar3->_Mypair)._Myval2._Mylast);
        if (lVar2 != 0) {
LAB_14c59749c:
          std::operator<<<std::char_traits<char>_>(param_3,' ');
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,'}');
      pvVar3 = pvVar3 + 1;
      lVar4 = lVar4 + 1;
    } while (pvVar3 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar4 != 0) {
LAB_14c5974c6:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// FormatForComparisonFailureMessage<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_> @ 14c597520

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_1,
          vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *param_2)

{
  PrintToString<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c597540

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_1,vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
                   *param_2)

{
  PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>_> @ 14c597560

void __cdecl
testing::internal::
PrintTo<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>_>
          (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  puVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (puVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c5975cc;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c5975cc:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintTo<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c597610

void __cdecl
testing::internal::
PrintTo<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  uint *puVar1;
  longlong lVar2;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar3;
  longlong lVar4;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pvVar3 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar4 = 0;
  if (pvVar3 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if ((lVar4 != 0) && (std::operator<<<std::char_traits<char>_>(param_2,','), lVar4 == 0x20)) {
        std::operator<<<std::char_traits<char>_>(param_2," ...");
        goto LAB_14c5976f6;
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::operator<<<std::char_traits<char>_>(param_2,'{');
      puVar1 = (pvVar3->_Mypair)._Myval2._Myfirst;
      lVar2 = 0;
      if (puVar1 != (pvVar3->_Mypair)._Myval2._Mylast) {
        do {
          if ((lVar2 != 0) && (std::operator<<<std::char_traits<char>_>(param_2,','), lVar2 == 0x20)
             ) {
            std::operator<<<std::char_traits<char>_>(param_2," ...");
            goto LAB_14c5976cc;
          }
          std::operator<<<std::char_traits<char>_>(param_2,' ');
          std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
          puVar1 = puVar1 + 1;
          lVar2 = lVar2 + 1;
        } while (puVar1 != (pvVar3->_Mypair)._Myval2._Mylast);
        if (lVar2 != 0) {
LAB_14c5976cc:
          std::operator<<<std::char_traits<char>_>(param_2,' ');
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,'}');
      pvVar3 = pvVar3 + 1;
      lVar4 = lVar4 + 1;
    } while (pvVar3 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar4 != 0) {
LAB_14c5976f6:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c597750

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::
PrintToString<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
          *param_1)

{
  char *pcVar1;
  uint *puVar2;
  longlong lVar3;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar4;
  char *pcVar5;
  longlong lVar6;
  int iStack_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  undefined1 local_130 [24];
  char **local_118;
  char **local_110;
  char **local_f8;
  char **local_f0;
  int *local_e0;
  char *local_c8;
  uint local_c0;
  basic_ios<char,std::char_traits<char>_> local_b0;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_148._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_138 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_b0);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_148,
             (basic_streambuf<char,std::char_traits<char>_> *)local_130);
  *(undefined ***)(local_148 + *(int *)(local_148._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148._0_8_ + 4)) =
       *(int *)(local_148._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
  local_c8 = (char *)0x0;
  local_130._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_c0 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_138,'{');
  pvVar4 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar6 = 0;
  if (pvVar4 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if ((lVar6 != 0) &&
         (std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_138,','), lVar6 == 0x20))
      {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_138," ...");
        goto LAB_14c5978d7;
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_138,' ');
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_138,'{');
      puVar2 = (pvVar4->_Mypair)._Myval2._Myfirst;
      lVar3 = 0;
      if (puVar2 != (pvVar4->_Mypair)._Myval2._Mylast) {
        do {
          if ((lVar3 != 0) &&
             (std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_138,','),
             lVar3 == 0x20)) {
            std::operator<<<std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)local_138," ...");
            goto LAB_14c5978a9;
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_138,' ');
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)local_138,*puVar2);
          puVar2 = puVar2 + 1;
          lVar3 = lVar3 + 1;
        } while (puVar2 != (pvVar4->_Mypair)._Myval2._Mylast);
        if (lVar3 != 0) {
LAB_14c5978a9:
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_138,' ');
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_138,'}');
      pvVar4 = pvVar4 + 1;
      lVar6 = lVar6 + 1;
    } while (pvVar4 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar6 != 0) {
LAB_14c5978d7:
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_138,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_138,'}');
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_48 = 0;
  uStack_40 = 0;
  if ((((byte)local_c0 & 0x22) == 2) || (pcVar5 = *local_f0, pcVar5 == (char *)0x0)) {
    if (((local_c0 & 4) == 0) && (*local_f8 != (char *)0x0)) {
      pcVar1 = *local_118;
      pcVar5 = *local_f8 + ((longlong)*local_e0 - (longlong)pcVar1);
    }
    else {
      pcVar5 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar5 < local_c8) {
      pcVar5 = local_c8;
    }
    pcVar1 = *local_110;
    pcVar5 = pcVar5 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar5);
  }
  *(undefined ***)(local_148 + *(int *)(local_148._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148._0_8_ + 4)) =
       *(int *)(local_148._0_8_ + 4) + -0x98;
  local_130._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_130);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_130);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_130 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_b0);
  return __return_storage_ptr__;
}

// UniversalPrint<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>_> @ 14c597a50

void __cdecl
testing::internal::
UniversalPrint<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>_>
          (vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  puVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (puVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c597abc;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c597abc:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// UniversalPrint<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_> @ 14c597b00

void __cdecl
testing::internal::
UniversalPrint<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
          (vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  uint *puVar1;
  longlong lVar2;
  vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_> *pvVar3;
  longlong lVar4;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pvVar3 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar4 = 0;
  if (pvVar3 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if ((lVar4 != 0) && (std::operator<<<std::char_traits<char>_>(param_2,','), lVar4 == 0x20)) {
        std::operator<<<std::char_traits<char>_>(param_2," ...");
        goto LAB_14c597be6;
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::operator<<<std::char_traits<char>_>(param_2,'{');
      puVar1 = (pvVar3->_Mypair)._Myval2._Myfirst;
      lVar2 = 0;
      if (puVar1 != (pvVar3->_Mypair)._Myval2._Mylast) {
        do {
          if ((lVar2 != 0) && (std::operator<<<std::char_traits<char>_>(param_2,','), lVar2 == 0x20)
             ) {
            std::operator<<<std::char_traits<char>_>(param_2," ...");
            goto LAB_14c597bbc;
          }
          std::operator<<<std::char_traits<char>_>(param_2,' ');
          std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
          puVar1 = puVar1 + 1;
          lVar2 = lVar2 + 1;
        } while (puVar1 != (pvVar3->_Mypair)._Myval2._Mylast);
        if (lVar2 != 0) {
LAB_14c597bbc:
          std::operator<<<std::char_traits<char>_>(param_2,' ');
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,'}');
      pvVar3 = pvVar3 + 1;
      lVar4 = lVar4 + 1;
    } while (pvVar3 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar4 != 0) {
LAB_14c597be6:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// GetSetUpCaseOrSuite @ 14c597c40

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c597ce0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
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

// GetTearDownCaseOrSuite @ 14c597d80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c597e20

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
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

// Register @ 14c597ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::MLBSStorageBuilderTest,testing::internal::TemplateSel<MLBSStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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
              ___7__TestFactoryImpl_V__MLBSStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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
             &TypeIdHelper<MLBSStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c598352;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c598352;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c598352;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c598352;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c598352;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c598352;
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
LAB_14c598352:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c5983a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::MLBSStorageBuilderTest,testing::internal::TemplateSel<MLBSStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
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
              ___7__TestFactoryImpl_V__MLBSStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<MLBSStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
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
             &TypeIdHelper<MLBSStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c59883f;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c59883f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c59883f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c59883f;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c59883f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c59883f;
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
LAB_14c59883f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::MLBSStorageBuilderTest,testing::internal::TemplateSel<MLBSStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// assertRawDataEqual @ 14c5988b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::ml::cpu::
Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>::
Accessor::assertRawDataEqual
          (Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
           *param_1)

{
  NeuralNetInference<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  *pNVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  ushort uVar16;
  ulonglong uVar17;
  NeuralNetLayer<float> *pNVar18;
  ushort uVar19;
  ulonglong uVar20;
  undefined1 auStackY_168 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_138;
  AssertHelper local_130;
  ushort local_128;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_120;
  AssertionResult local_118;
  AssertionResult local_108;
  AssertionResult local_f8;
  AssertionResult local_e8;
  AssertionResult local_d8;
  AssertionResult local_c8;
  AssertionResult local_b8;
  _Bxty local_a8;
  undefined8 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_130.data_ = (AssertHelperData *)param_1;
  testing::internal::
  CmpHelperEQ<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            ((AssertionResult *)&local_a8,"result.lods.indicesPerLOD",
             "rltests::ml::block4::optimized::lods.indicesPerLOD",&(param_1->lods).indicesPerLOD,
             &rltests::ml::block4::optimized::lods.indicesPerLOD);
  uVar15 = local_a8._8_8_;
  if (local_a8._Buf[0] == '\0') {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = local_a8._8_8_;
      if (0xf < *(ulong64 *)(local_a8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
        pcVar12 = *local_a8._8_8_;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_130,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                        ,0x1c,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_130);
    if (local_138._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_138._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)local_a8._8_8_,0x20);
    }
  }
  else {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)uVar15,0x20);
    }
    testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
              ((AssertionResult *)&local_a8,"result.lods.count",
               "rltests::ml::block4::optimized::lods.count",&(param_1->lods).count,
               &rltests::ml::block4::optimized::lods.count);
    uVar15 = local_a8._8_8_;
    if (local_a8._Buf[0] == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = local_a8._8_8_;
        if (0xf < *(ulong64 *)(local_a8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
          pcVar12 = *local_a8._8_8_;
        }
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_130,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                          ,0x1d,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_130);
      if (local_138._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)local_138._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
        (**(code **)*puVar13)(puVar13,1);
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)local_a8._8_8_,0x20);
      return;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)uVar15,0x20);
    }
    uVar4 = _UNK_15076add8;
    uVar15 = ___xmm_000000000000000f0000000000000000;
    local_120 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)(param_1->neuralNets)._Mypair._Myval2._Mylast -
                 (longlong)(param_1->neuralNets)._Mypair._Myval2._Myfirst >> 7);
    if (local_120 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        (ulonglong)rltests::ml::block4::optimized::lods.count) {
      testing::AssertionSuccess(&local_118);
    }
    else {
      testing::PrintToString<unsigned_int>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                 &rltests::ml::block4::optimized::lods.count);
      testing::PrintToString<unsigned___int64>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                 (ulong64 *)&local_120);
      testing::internal::EqFailure
                (&local_118,"result.neuralNets.size()","rltests::ml::block4::optimized::lods.count",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,false)
      ;
      if (0xf < uStack_90) {
        pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
        uVar14 = uStack_90 + 1;
        pvVar9 = pvVar3;
        if (0xfff < uVar14) {
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          uVar14 = uStack_90 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) goto LAB_14c598a6e;
        }
        ::operator_delete(pvVar9,uVar14);
      }
      local_a8._Buf[0] = '\0';
      local_98 = uVar15;
      uStack_90 = uVar4;
      if (0xf < uStack_70) {
        pvVar3 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
        uVar14 = uStack_70 + 1;
        pvVar9 = pvVar3;
        if (0xfff < uVar14) {
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          uVar14 = uStack_70 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) {
LAB_14c598a6e:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar9,uVar14);
      }
    }
    uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
    if (local_118.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
      if (local_118.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)local_118.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
          pcVar12 = *(char **)local_118.message_._Mypair._Myval2;
        }
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_130,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                          ,0x1e,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_130);
      if (local_138._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)local_138._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_118.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118.message_._Mypair._Myval2);
        ::operator_delete((void *)local_118.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_118.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
      }
      local_128 = 0;
      if (rltests::ml::block4::unoptimized::neuralNetworkCount != 0) {
        do {
          uVar16 = local_128;
          uVar17 = 0;
          uVar20 = (ulonglong)local_128;
          pNVar1 = (param_1->neuralNets)._Mypair._Myval2._Myfirst;
          local_120 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                      ((longlong)
                       rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                       _Myfirst[uVar20]._Mypair._Myval2._Mylast -
                       (longlong)
                       rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                       _Myfirst[uVar20]._Mypair._Myval2._Myfirst >> 2);
          local_138._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(((longlong)pNVar1[uVar20].layerEvaluators._Mypair._Myval2._Mylast -
                  (longlong)pNVar1[uVar20].layerEvaluators._Mypair._Myval2._Myfirst) / 0x48);
          if (local_138._Mypair._Myval2 ==
              (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
               )local_120) {
            testing::AssertionSuccess(&local_118);
          }
          else {
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                       (ulong64 *)&local_120);
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                       (ulong64 *)&local_138);
            testing::internal::EqFailure
                      (&local_118,"inference.layerEvaluators.size()",
                       "rltests::ml::block4::unoptimized::mlbNetActivationFunctions[netIndex].size()"
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                       ,false);
            if (0xf < uStack_70) {
              pvVar3 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
              uVar14 = uStack_70 + 1;
              pvVar9 = pvVar3;
              if (0xfff < uVar14) {
                pvVar9 = *(void **)((longlong)pvVar3 + -8);
                uVar14 = uStack_70 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))
                goto LAB_14c59907d;
              }
              ::operator_delete(pvVar9,uVar14);
            }
            local_88._Buf[0] = '\0';
            local_78 = uVar15;
            uStack_70 = uVar4;
            if (0xf < local_50) {
              uVar14 = local_50 + 1;
              uVar10 = local_68._Ptr;
              if (0xfff < uVar14) {
                uVar10 = *(undefined8 *)(local_68._Ptr + -8);
                uVar14 = local_50 + 0x28;
                if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
LAB_14c59907d:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar10,uVar14);
            }
          }
          uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
          if (local_118.success_ == false) {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if (local_118.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_118.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_118.message_._Mypair._Myval2;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x22,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_118.message_._Mypair._Myval2;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)local_138._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_118.message_._Mypair._Myval2;
            }
LAB_14c5994da:
            if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              return;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15);
            ::operator_delete((void *)uVar15,0x20);
            return;
          }
          if (local_118.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_118.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          local_138._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )((longlong)
                  rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                  _Myfirst[uVar20]._Mypair._Myval2._Mylast -
                  (longlong)
                  rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                  _Myfirst[uVar20]._Mypair._Myval2._Myfirst >> 2);
          local_120 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                      (((longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Mylast -
                       (longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Myfirst) / 0x90);
          if ((_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
               )local_120 == local_138._Mypair._Myval2) {
            testing::AssertionSuccess(&local_108);
          }
          else {
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                       (ulong64 *)&local_138);
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                       (ulong64 *)&local_120);
            testing::internal::EqFailure
                      (&local_108,"inference.neuralNet.layers.size()",
                       "rltests::ml::block4::unoptimized::mlbNetActivationFunctions[netIndex].size()"
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                       ,false);
            if (0xf < uStack_70) {
              pvVar3 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
              uVar14 = uStack_70 + 1;
              pvVar9 = pvVar3;
              if (0xfff < uVar14) {
                pvVar9 = *(void **)((longlong)pvVar3 + -8);
                uVar14 = uStack_70 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))
                goto LAB_14c599093;
              }
              ::operator_delete(pvVar9,uVar14);
            }
            local_88._Buf[0] = '\0';
            local_78 = uVar15;
            uStack_70 = uVar4;
            if (0xf < local_50) {
              uVar14 = local_50 + 1;
              uVar10 = local_68._Ptr;
              if (0xfff < uVar14) {
                uVar10 = *(undefined8 *)(local_68._Ptr + -8);
                uVar14 = local_50 + 0x28;
                if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
LAB_14c599093:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar10,uVar14);
            }
          }
          uVar5._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
          if (local_108.success_ == false) {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if (local_108.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_108.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_108.message_._Mypair._Myval2;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x24,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_108.message_._Mypair._Myval2;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)local_138._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_108.message_._Mypair._Myval2;
            }
            goto LAB_14c5994da;
          }
          if (local_108.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_108.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          pNVar18 = pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Myfirst;
          uVar19 = 0;
          lVar11 = (longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Mylast -
                   (longlong)pNVar18;
          lVar2 = lVar11 >> 0x3f;
          if (lVar11 / 0x90 + lVar2 != lVar2) {
            do {
              pvVar6 = rltests::ml::block4::optimized::Values<float>::weights();
              testing::internal::EqHelper::
              Compare<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,0>
                        (&local_c8,"layer.weights.values",
                         "OptimizedValues::weights()[netIndex][layerIndex]",
                         &pNVar18[uVar17].weights.values,
                         (pvVar6->_Mypair)._Myval2._Myfirst[uVar20]._Mypair._Myval2._Myfirst +
                         uVar17);
              uVar5._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              if (local_c8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_c8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_c8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_c8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x28,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_c8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)local_138._Mypair._Myval2 +
                            (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_c8.message_._Mypair._Myval2;
                }
                goto LAB_14c5994da;
              }
              if (local_c8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_c8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              pvVar6 = rltests::ml::block4::optimized::Values<float>::biases();
              testing::internal::EqHelper::
              Compare<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,0>
                        (&local_d8,"layer.biases","OptimizedValues::biases()[netIndex][layerIndex]",
                         &pNVar18[uVar17].biases,
                         (pvVar6->_Mypair)._Myval2._Myfirst[uVar20]._Mypair._Myval2._Myfirst +
                         uVar17);
              uVar5._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              if (local_d8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_d8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_d8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_d8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x29,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_d8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                            (longlong)local_138._Mypair._Myval2);
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_d8.message_._Mypair._Myval2;
                }
                goto LAB_14c5994da;
              }
              if (local_d8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_d8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              testing::internal::EqHelper::
              Compare<enum_dna::ActivationFunction,enum_dna::ActivationFunction,0>
                        (&local_e8,"layer.activationFunction",
                         "rltests::ml::block4::unoptimized::mlbNetActivationFunctions[netIndex][layerIndex]"
                         ,&pNVar18[uVar17].activationFunction,
                         rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2
                         ._Myfirst[uVar20]._Mypair._Myval2._Myfirst + uVar17);
              uVar5._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
              if (local_e8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_e8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x2b,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_e8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                            (longlong)local_138._Mypair._Myval2);
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_e8.message_._Mypair._Myval2;
                }
                goto LAB_14c5994da;
              }
              if (local_e8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_e8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              testing::internal::EqHelper::
              Compare<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,0>
                        (&local_f8,"layer.activationFunctionParameters",
                         "rltests::ml::block4::unoptimized::mlbNetActivationFunctionParameters[netIndex][ layerIndex]"
                         ,&pNVar18[uVar17].activationFunctionParameters,
                         rltests::ml::block4::unoptimized::mlbNetActivationFunctionParameters.
                         _Mypair._Myval2._Myfirst[uVar20]._Mypair._Myval2._Myfirst + uVar17);
              uVar5._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
              if (local_f8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_f8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_f8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_f8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x2e,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_f8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                            (longlong)local_138._Mypair._Myval2);
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_f8.message_._Mypair._Myval2;
                }
                goto LAB_14c5994da;
              }
              if (local_f8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_f8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              pNVar18 = pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Myfirst;
              uVar19 = uVar19 + 1;
              uVar17 = (ulonglong)uVar19;
              param_1 = (Evaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
                         *)local_130.data_;
              uVar16 = local_128;
            } while (uVar17 < (ulonglong)
                              (((longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Mylast -
                               (longlong)pNVar18) / 0x90));
          }
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    ((AssertionResult *)&local_a8,"inference.neuralNet.inputIndices",
                     "rltests::ml::block4::unoptimized::mlbNetInputIndices[netIndex]",
                     &pNVar1[uVar20].neuralNet.inputIndices,
                     rltests::ml::block4::unoptimized::mlbNetInputIndices._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar10 = local_a8._8_8_;
          if (local_a8._Buf[0] == '\0') {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = local_a8._8_8_;
              if (0xf < *(ulong64 *)(local_a8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
                pcVar12 = *local_a8._8_8_;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x31,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_a8._8_8_;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                        (longlong)local_138._Mypair._Myval2);
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_a8._8_8_;
            }
            goto LAB_14c5994da;
          }
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_a8._8_8_);
            ::operator_delete((void *)uVar10,0x20);
          }
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    (&local_b8,"inference.neuralNet.outputIndices",
                     "rltests::ml::block4::unoptimized::mlbNetOutputIndices[netIndex]",
                     &pNVar1[uVar20].neuralNet.outputIndices,
                     rltests::ml::block4::unoptimized::mlbNetOutputIndices._Mypair._Myval2._Myfirst
                     + uVar20);
          uVar5._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
          if (local_b8.success_ == false) {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if (local_b8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_b8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_b8.message_._Mypair._Myval2;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x33,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_b8.message_._Mypair._Myval2;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                        (longlong)local_138._Mypair._Myval2);
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_b8.message_._Mypair._Myval2;
            }
            goto LAB_14c5994da;
          }
          if (local_b8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_b8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          local_128 = uVar16 + 1;
        } while (local_128 < rltests::ml::block4::unoptimized::neuralNetworkCount);
      }
    }
  }
  return;
}

// assertRawDataEqual @ 14c599700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::ml::cpu::Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::Accessor::
assertRawDataEqual(Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
                   *param_1)

{
  NeuralNetInference<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *pNVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar5;
  vector<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,pma::PolyAllocator<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>
  *pvVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  void *pvVar9;
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  ushort uVar16;
  ulonglong uVar17;
  NeuralNetLayer<float> *pNVar18;
  ushort uVar19;
  ulonglong uVar20;
  undefined1 auStackY_168 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_138;
  AssertHelper local_130;
  ushort local_128;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_120;
  AssertionResult local_118;
  AssertionResult local_108;
  AssertionResult local_f8;
  AssertionResult local_e8;
  AssertionResult local_d8;
  AssertionResult local_c8;
  AssertionResult local_b8;
  _Bxty local_a8;
  undefined8 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  undefined8 local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_130.data_ = (AssertHelperData *)param_1;
  testing::internal::
  CmpHelperEQ<std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>,std::vector<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,pma::PolyAllocator<std::vector<unsigned_int,pma::PolyAllocator<unsigned_int,8,pma::DefaultMemoryResource>_>,8,pma::DefaultMemoryResource>_>_>
            ((AssertionResult *)&local_a8,"result.lods.indicesPerLOD",
             "rltests::ml::block4::optimized::lods.indicesPerLOD",&(param_1->lods).indicesPerLOD,
             &rltests::ml::block4::optimized::lods.indicesPerLOD);
  uVar15 = local_a8._8_8_;
  if (local_a8._Buf[0] == '\0') {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = local_a8._8_8_;
      if (0xf < *(ulong64 *)(local_a8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
        pcVar12 = *local_a8._8_8_;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_130,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                        ,0x1c,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_130);
    if (local_138._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_138._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)local_a8._8_8_,0x20);
    }
  }
  else {
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)uVar15,0x20);
    }
    testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
              ((AssertionResult *)&local_a8,"result.lods.count",
               "rltests::ml::block4::optimized::lods.count",&(param_1->lods).count,
               &rltests::ml::block4::optimized::lods.count);
    uVar15 = local_a8._8_8_;
    if (local_a8._Buf[0] == '\0') {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = local_a8._8_8_;
        if (0xf < *(ulong64 *)(local_a8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
          pcVar12 = *local_a8._8_8_;
        }
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_130,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                          ,0x1d,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_130);
      if (local_138._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)local_138._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
        (**(code **)*puVar13)(puVar13,1);
      }
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)local_a8._8_8_,0x20);
      return;
    }
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_);
      ::operator_delete((void *)uVar15,0x20);
    }
    uVar4 = _UNK_15076add8;
    uVar15 = ___xmm_000000000000000f0000000000000000;
    local_120 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)(param_1->neuralNets)._Mypair._Myval2._Mylast -
                 (longlong)(param_1->neuralNets)._Mypair._Myval2._Myfirst >> 7);
    if (local_120 ==
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
        (ulonglong)rltests::ml::block4::optimized::lods.count) {
      testing::AssertionSuccess(&local_118);
    }
    else {
      testing::PrintToString<unsigned_int>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                 &rltests::ml::block4::optimized::lods.count);
      testing::PrintToString<unsigned___int64>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                 (ulong64 *)&local_120);
      testing::internal::EqFailure
                (&local_118,"result.neuralNets.size()","rltests::ml::block4::optimized::lods.count",
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,false)
      ;
      if (0xf < uStack_90) {
        pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
        uVar14 = uStack_90 + 1;
        pvVar9 = pvVar3;
        if (0xfff < uVar14) {
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          uVar14 = uStack_90 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) goto LAB_14c5998be;
        }
        ::operator_delete(pvVar9,uVar14);
      }
      local_a8._Buf[0] = '\0';
      local_98 = uVar15;
      uStack_90 = uVar4;
      if (0xf < uStack_70) {
        pvVar3 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
        uVar14 = uStack_70 + 1;
        pvVar9 = pvVar3;
        if (0xfff < uVar14) {
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          uVar14 = uStack_70 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) {
LAB_14c5998be:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar9,uVar14);
      }
    }
    uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
    if (local_118.success_ == false) {
      pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
      if (local_118.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)local_118.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
          pcVar12 = *(char **)local_118.message_._Mypair._Myval2;
        }
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_130,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                          ,0x1e,pcVar12);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_130);
      if (local_138._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar13 = (undefined8 *)
                  ((longlong)local_138._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
        (**(code **)*puVar13)(puVar13,1);
      }
      if (local_118.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118.message_._Mypair._Myval2);
        ::operator_delete((void *)local_118.message_._Mypair._Myval2,0x20);
      }
    }
    else {
      if (local_118.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_118.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
      }
      local_128 = 0;
      if (rltests::ml::block4::unoptimized::neuralNetworkCount != 0) {
        do {
          uVar16 = local_128;
          uVar17 = 0;
          uVar20 = (ulonglong)local_128;
          pNVar1 = (param_1->neuralNets)._Mypair._Myval2._Myfirst;
          local_120 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                      ((longlong)
                       rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                       _Myfirst[uVar20]._Mypair._Myval2._Mylast -
                       (longlong)
                       rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                       _Myfirst[uVar20]._Mypair._Myval2._Myfirst >> 2);
          local_138._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )(((longlong)pNVar1[uVar20].layerEvaluators._Mypair._Myval2._Mylast -
                  (longlong)pNVar1[uVar20].layerEvaluators._Mypair._Myval2._Myfirst) / 0x48);
          if (local_138._Mypair._Myval2 ==
              (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
               )local_120) {
            testing::AssertionSuccess(&local_118);
          }
          else {
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                       (ulong64 *)&local_120);
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                       (ulong64 *)&local_138);
            testing::internal::EqFailure
                      (&local_118,"inference.layerEvaluators.size()",
                       "rltests::ml::block4::unoptimized::mlbNetActivationFunctions[netIndex].size()"
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                       ,false);
            if (0xf < uStack_70) {
              pvVar3 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
              uVar14 = uStack_70 + 1;
              pvVar9 = pvVar3;
              if (0xfff < uVar14) {
                pvVar9 = *(void **)((longlong)pvVar3 + -8);
                uVar14 = uStack_70 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))
                goto LAB_14c599ecd;
              }
              ::operator_delete(pvVar9,uVar14);
            }
            local_88._Buf[0] = '\0';
            local_78 = uVar15;
            uStack_70 = uVar4;
            if (0xf < local_50) {
              uVar14 = local_50 + 1;
              uVar10 = local_68._Ptr;
              if (0xfff < uVar14) {
                uVar10 = *(undefined8 *)(local_68._Ptr + -8);
                uVar14 = local_50 + 0x28;
                if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
LAB_14c599ecd:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar10,uVar14);
            }
          }
          uVar5._Mypair._Myval2 = local_118.message_._Mypair._Myval2;
          if (local_118.success_ == false) {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if (local_118.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_118.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_118.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_118.message_._Mypair._Myval2;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x22,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_118.message_._Mypair._Myval2;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)local_138._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_118.message_._Mypair._Myval2;
            }
LAB_14c59a32a:
            if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              return;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15);
            ::operator_delete((void *)uVar15,0x20);
            return;
          }
          if (local_118.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_118.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          local_138._Mypair._Myval2 =
               (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
                )((longlong)
                  rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                  _Myfirst[uVar20]._Mypair._Myval2._Mylast -
                  (longlong)
                  rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2.
                  _Myfirst[uVar20]._Mypair._Myval2._Myfirst >> 2);
          local_120 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                      (((longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Mylast -
                       (longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Myfirst) / 0x90);
          if ((_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
               )local_120 == local_138._Mypair._Myval2) {
            testing::AssertionSuccess(&local_108);
          }
          else {
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                       (ulong64 *)&local_138);
            testing::PrintToString<unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                       (ulong64 *)&local_120);
            testing::internal::EqFailure
                      (&local_108,"inference.neuralNet.layers.size()",
                       "rltests::ml::block4::unoptimized::mlbNetActivationFunctions[netIndex].size()"
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88
                       ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                       ,false);
            if (0xf < uStack_70) {
              pvVar3 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
              uVar14 = uStack_70 + 1;
              pvVar9 = pvVar3;
              if (0xfff < uVar14) {
                pvVar9 = *(void **)((longlong)pvVar3 + -8);
                uVar14 = uStack_70 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))
                goto LAB_14c599ee3;
              }
              ::operator_delete(pvVar9,uVar14);
            }
            local_88._Buf[0] = '\0';
            local_78 = uVar15;
            uStack_70 = uVar4;
            if (0xf < local_50) {
              uVar14 = local_50 + 1;
              uVar10 = local_68._Ptr;
              if (0xfff < uVar14) {
                uVar10 = *(undefined8 *)(local_68._Ptr + -8);
                uVar14 = local_50 + 0x28;
                if ((char *)0x1f < local_68._Ptr + (-8 - uVar10)) {
LAB_14c599ee3:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar10,uVar14);
            }
          }
          uVar5._Mypair._Myval2 = local_108.message_._Mypair._Myval2;
          if (local_108.success_ == false) {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if (local_108.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_108.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_108.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_108.message_._Mypair._Myval2;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x24,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_108.message_._Mypair._Myval2;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)local_138._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_108.message_._Mypair._Myval2;
            }
            goto LAB_14c59a32a;
          }
          if (local_108.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_108.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          pNVar18 = pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Myfirst;
          uVar19 = 0;
          lVar11 = (longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Mylast -
                   (longlong)pNVar18;
          lVar2 = lVar11 >> 0x3f;
          if (lVar11 / 0x90 + lVar2 != lVar2) {
            do {
              pvVar6 = rltests::ml::block4::optimized::Values<float>::weights();
              testing::internal::EqHelper::
              Compare<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,0>
                        (&local_c8,"layer.weights.values",
                         "OptimizedValues::weights()[netIndex][layerIndex]",
                         &pNVar18[uVar17].weights.values,
                         (pvVar6->_Mypair)._Myval2._Myfirst[uVar20]._Mypair._Myval2._Myfirst +
                         uVar17);
              uVar5._Mypair._Myval2 = local_c8.message_._Mypair._Myval2;
              if (local_c8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_c8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_c8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_c8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_c8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x28,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_c8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)local_138._Mypair._Myval2 +
                            (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_c8.message_._Mypair._Myval2;
                }
                goto LAB_14c59a32a;
              }
              if (local_c8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_c8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              pvVar6 = rltests::ml::block4::optimized::Values<float>::biases();
              testing::internal::EqHelper::
              Compare<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,0>
                        (&local_d8,"layer.biases","OptimizedValues::biases()[netIndex][layerIndex]",
                         &pNVar18[uVar17].biases,
                         (pvVar6->_Mypair)._Myval2._Myfirst[uVar20]._Mypair._Myval2._Myfirst +
                         uVar17);
              uVar5._Mypair._Myval2 = local_d8.message_._Mypair._Myval2;
              if (local_d8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_d8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_d8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_d8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_d8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x29,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_d8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                            (longlong)local_138._Mypair._Myval2);
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_d8.message_._Mypair._Myval2;
                }
                goto LAB_14c59a32a;
              }
              if (local_d8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_d8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              testing::internal::EqHelper::
              Compare<enum_dna::ActivationFunction,enum_dna::ActivationFunction,0>
                        (&local_e8,"layer.activationFunction",
                         "rltests::ml::block4::unoptimized::mlbNetActivationFunctions[netIndex][layerIndex]"
                         ,&pNVar18[uVar17].activationFunction,
                         rltests::ml::block4::unoptimized::mlbNetActivationFunctions._Mypair._Myval2
                         ._Myfirst[uVar20]._Mypair._Myval2._Myfirst + uVar17);
              uVar5._Mypair._Myval2 = local_e8.message_._Mypair._Myval2;
              if (local_e8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_e8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_e8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_e8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_e8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x2b,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_e8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                            (longlong)local_138._Mypair._Myval2);
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_e8.message_._Mypair._Myval2;
                }
                goto LAB_14c59a32a;
              }
              if (local_e8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_e8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              testing::internal::EqHelper::
              Compare<std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>,0>
                        (&local_f8,"layer.activationFunctionParameters",
                         "rltests::ml::block4::unoptimized::mlbNetActivationFunctionParameters[netIndex][ layerIndex]"
                         ,&pNVar18[uVar17].activationFunctionParameters,
                         rltests::ml::block4::unoptimized::mlbNetActivationFunctionParameters.
                         _Mypair._Myval2._Myfirst[uVar20]._Mypair._Myval2._Myfirst + uVar17);
              uVar5._Mypair._Myval2 = local_f8.message_._Mypair._Myval2;
              if (local_f8.success_ == false) {
                pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
                if (local_f8.message_._Mypair._Myval2 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  pcVar12 = "";
                }
                else {
                  pcVar12 = (char *)local_f8.message_._Mypair._Myval2;
                  if (0xf < *(ulong64 *)((longlong)local_f8.message_._Mypair._Myval2 + 0x18)) {
                    pcVar12 = *(char **)local_f8.message_._Mypair._Myval2;
                  }
                }
                pAVar8 = (AssertHelper *)
                         testing::internal::AssertHelper::AssertHelper
                                   (&local_130,kFatalFailure,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                    ,0x2e,pcVar12);
                testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
                testing::internal::AssertHelper::~AssertHelper(&local_130);
                uVar15 = local_f8.message_._Mypair._Myval2;
                if (local_138._Mypair._Myval2 !=
                    (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  puVar13 = (undefined8 *)
                            ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                            (longlong)local_138._Mypair._Myval2);
                  (**(code **)*puVar13)(puVar13,1);
                  uVar15 = local_f8.message_._Mypair._Myval2;
                }
                goto LAB_14c59a32a;
              }
              if (local_f8.message_._Mypair._Myval2 !=
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 local_f8.message_._Mypair._Myval2);
                ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
              }
              pNVar18 = pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Myfirst;
              uVar19 = uVar19 + 1;
              uVar17 = (ulonglong)uVar19;
              param_1 = (Evaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *
                        )local_130.data_;
              uVar16 = local_128;
            } while (uVar17 < (ulonglong)
                              (((longlong)pNVar1[uVar20].neuralNet.layers._Mypair._Myval2._Mylast -
                               (longlong)pNVar18) / 0x90));
          }
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    ((AssertionResult *)&local_a8,"inference.neuralNet.inputIndices",
                     "rltests::ml::block4::unoptimized::mlbNetInputIndices[netIndex]",
                     &pNVar1[uVar20].neuralNet.inputIndices,
                     rltests::ml::block4::unoptimized::mlbNetInputIndices._Mypair._Myval2._Myfirst +
                     uVar20);
          uVar10 = local_a8._8_8_;
          if (local_a8._Buf[0] == '\0') {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = local_a8._8_8_;
              if (0xf < *(ulong64 *)(local_a8._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
                pcVar12 = *local_a8._8_8_;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x31,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_a8._8_8_;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                        (longlong)local_138._Mypair._Myval2);
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_a8._8_8_;
            }
            goto LAB_14c59a32a;
          }
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8._8_8_ !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_a8._8_8_);
            ::operator_delete((void *)uVar10,0x20);
          }
          testing::internal::EqHelper::
          Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
                    (&local_b8,"inference.neuralNet.outputIndices",
                     "rltests::ml::block4::unoptimized::mlbNetOutputIndices[netIndex]",
                     &pNVar1[uVar20].neuralNet.outputIndices,
                     rltests::ml::block4::unoptimized::mlbNetOutputIndices._Mypair._Myval2._Myfirst
                     + uVar20);
          uVar5._Mypair._Myval2 = local_b8.message_._Mypair._Myval2;
          if (local_b8.success_ == false) {
            pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
            if (local_b8.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)local_b8.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_b8.message_._Mypair._Myval2 + 0x18)) {
                pcVar12 = *(char **)local_b8.message_._Mypair._Myval2;
              }
            }
            pAVar8 = (AssertHelper *)
                     testing::internal::AssertHelper::AssertHelper
                               (&local_130,kFatalFailure,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\ml\\cpu\\TestStorageBuilder.cpp"
                                ,0x33,pcVar12);
            testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
            testing::internal::AssertHelper::~AssertHelper(&local_130);
            uVar15 = local_b8.message_._Mypair._Myval2;
            if (local_138._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar13 = (undefined8 *)
                        ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                        (longlong)local_138._Mypair._Myval2);
              (**(code **)*puVar13)(puVar13,1);
              uVar15 = local_b8.message_._Mypair._Myval2;
            }
            goto LAB_14c59a32a;
          }
          if (local_b8.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_b8.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar5._Mypair._Myval2,0x20);
          }
          local_128 = uVar16 + 1;
        } while (local_128 < rltests::ml::block4::unoptimized::neuralNetworkCount);
      }
    }
  }
  return;
}

